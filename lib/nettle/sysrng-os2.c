/*
 * Copyright (C) 2010-2016 Free Software Foundation, Inc.
 * Copyright (C) 2015-2016 Red Hat, Inc.
 * Copyright (C) 2000, 2001, 2008 Niels Möller
 * Copyright (C) 2017 KO Myung-Hun
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of GNUTLS.
 *
 * The GNUTLS library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */

/* Here are the common parts of the random generator layer.
 * Some of this code was based on the LSH
 * random generator (the trivia and device source functions for POSIX)
 * and modified to fit gnutls' needs. Relicenced with permission.
 * Original author Niels Möller.
 */

#include "gnutls_int.h"
#include "errors.h"
#include <locks.h>
#include <num.h>
#include <nettle/yarrow.h>
#include <errno.h>
#include <rnd-common.h>
#include <hash-pjw-bare.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/* The OS/2 randomness gatherer.
 */

#define INCL_DOS
#include <os2.h>

#include <stdlib.h>
#include <time.h>

static
int _rnd_get_system_entropy_os2(void* rnd, size_t size)
{
	QWORD qwTime;
	uint8_t *p = (uint8_t *)rnd;

	while (size-- > 0) {
		DosTmrQueryTime(&qwTime);

		*p++ = (uint8_t)(qwTime.ulLo * rand());
	}

	return 0;
}

int _rnd_system_entropy_check(void)
{
	return 0;
}

int _rnd_system_entropy_init(void)
{
	srand(time(NULL));

	_rnd_get_system_entropy = _rnd_get_system_entropy_os2;
	return 0;
}

void _rnd_system_entropy_deinit(void)
{
}
