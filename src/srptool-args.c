/*   -*- buffer-read-only: t -*- vi: set ro:
 *
 *  DO NOT EDIT THIS FILE   (srptool-args.c)
 *
 *  It has been AutoGen-ed
 *  From the definitions    srptool-args.def
 *  and the template file   options
 *
 * Generated from AutoOpts 41:1:16 templates.
 *
 *  AutoOpts is a copyrighted work.  This source file is not encumbered
 *  by AutoOpts licensing, but is provided under the licensing terms chosen
 *  by the srptool author or copyright holder.  AutoOpts is
 *  licensed under the terms of the LGPL.  The redistributable library
 *  (``libopts'') is licensed under the terms of either the LGPL or, at the
 *  users discretion, the BSD license.  See the AutoOpts and/or libopts sources
 *  for details.
 *
 * The srptool program is copyrighted and licensed
 * under the following terms:
 *
 *  Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.
 *  This is free software. It is licensed for use, modification and
 *  redistribution under the terms of the GNU General Public License,
 *  version 3 or later <http://gnu.org/licenses/gpl.html>
 *
 *  srptool is free software: you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  srptool is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __doxygen__
#define OPTION_CODE_COMPILE 1
#include "srptool-args.h"
#include <sys/types.h>

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef  __cplusplus
extern "C" {
#endif
extern FILE * option_usage_fp;
#define zCopyright      (srptool_opt_strs+0)
#define zLicenseDescrip (srptool_opt_strs+282)


#ifndef NULL
#  define NULL 0
#endif

/**
 *  static const strings for srptool options
 */
static char const srptool_opt_strs[2023] =
/*     0 */ "srptool 3.5.8\n"
            "Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.\n"
            "This is free software. It is licensed for use, modification and\n"
            "redistribution under the terms of the GNU General Public License,\n"
            "version 3 or later <http://gnu.org/licenses/gpl.html>\n\0"
/*   282 */ "srptool is free software: you can redistribute it and/or modify it under\n"
            "the terms of the GNU General Public License as published by the Free\n"
            "Software Foundation, either version 3 of the License, or (at your option)\n"
            "any later version.\n\n"
            "srptool is distributed in the hope that it will be useful, but WITHOUT ANY\n"
            "WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n"
            "FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n"
            "details.\n\n"
            "You should have received a copy of the GNU General Public License along\n"
            "with this program.  If not, see <http://www.gnu.org/licenses/>.\n\0"
/*   885 */ "Enable debugging\0"
/*   902 */ "DEBUG\0"
/*   908 */ "debug\0"
/*   914 */ "specify the index of the group parameters in tpasswd.conf to use\0"
/*   979 */ "INDEX\0"
/*   985 */ "index\0"
/*   991 */ "specify a username\0"
/*  1010 */ "USERNAME\0"
/*  1019 */ "username\0"
/*  1028 */ "specify a password file\0"
/*  1052 */ "PASSWD\0"
/*  1059 */ "passwd\0"
/*  1066 */ "specify salt size\0"
/*  1084 */ "SALT\0"
/*  1089 */ "salt\0"
/*  1094 */ "just verify the password.\0"
/*  1120 */ "VERIFY\0"
/*  1127 */ "verify\0"
/*  1134 */ "specify a password conf file.\0"
/*  1164 */ "PASSWD_CONF\0"
/*  1176 */ "passwd-conf\0"
/*  1188 */ "Generate a password configuration file.\0"
/*  1228 */ "CREATE_CONF\0"
/*  1240 */ "create-conf\0"
/*  1252 */ "display extended usage information and exit\0"
/*  1296 */ "help\0"
/*  1301 */ "extended usage information passed thru pager\0"
/*  1346 */ "more-help\0"
/*  1356 */ "output version information and exit\0"
/*  1392 */ "version\0"
/*  1400 */ "SRPTOOL\0"
/*  1408 */ "srptool - GnuTLS SRP tool\n"
            "Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]...\n\0"
/*  1492 */ "bugs@gnutls.org\0"
/*  1508 */ "\n\0"
/*  1510 */ "Simple program that emulates the programs in the Stanford SRP (Secure\n"
            "Remote Password) libraries using GnuTLS.  It is intended for use in places\n"
            "where you don't expect SRP authentication to be the used for system users.\n\n"
            "In brief, to use SRP you need to create two files.  These are the password\n"
            "file that holds the users and the verifiers associated with them and the\n"
            "configuration file to hold the group parameters (called tpasswd.conf).\n\0"
/*  1951 */ "srptool 3.5.8\0"
/*  1965 */ "srptool [options]\n"
            "srptool --help for usage instructions.\n";

/**
 *  debug option description:
 */
/** Descriptive text for the debug option */
#define DEBUG_DESC      (srptool_opt_strs+885)
/** Upper-cased name for the debug option */
#define DEBUG_NAME      (srptool_opt_strs+902)
/** Name string for the debug option */
#define DEBUG_name      (srptool_opt_strs+908)
/** Compiled in flag settings for the debug option */
#define DEBUG_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  index option description:
 */
/** Descriptive text for the index option */
#define INDEX_DESC      (srptool_opt_strs+914)
/** Upper-cased name for the index option */
#define INDEX_NAME      (srptool_opt_strs+979)
/** Name string for the index option */
#define INDEX_name      (srptool_opt_strs+985)
/** The compiled in default value for the index option argument */
#define INDEX_DFT_ARG   ((char const*)1)
/** Compiled in flag settings for the index option */
#define INDEX_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  username option description:
 */
/** Descriptive text for the username option */
#define USERNAME_DESC      (srptool_opt_strs+991)
/** Upper-cased name for the username option */
#define USERNAME_NAME      (srptool_opt_strs+1010)
/** Name string for the username option */
#define USERNAME_name      (srptool_opt_strs+1019)
/** Compiled in flag settings for the username option */
#define USERNAME_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/**
 *  passwd option description:
 */
/** Descriptive text for the passwd option */
#define PASSWD_DESC      (srptool_opt_strs+1028)
/** Upper-cased name for the passwd option */
#define PASSWD_NAME      (srptool_opt_strs+1052)
/** Name string for the passwd option */
#define PASSWD_name      (srptool_opt_strs+1059)
/** Compiled in flag settings for the passwd option */
#define PASSWD_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/**
 *  salt option description:
 */
/** Descriptive text for the salt option */
#define SALT_DESC      (srptool_opt_strs+1066)
/** Upper-cased name for the salt option */
#define SALT_NAME      (srptool_opt_strs+1084)
/** Name string for the salt option */
#define SALT_name      (srptool_opt_strs+1089)
/** Compiled in flag settings for the salt option */
#define SALT_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_NUMERIC))

/**
 *  verify option description:
 */
/** Descriptive text for the verify option */
#define VERIFY_DESC      (srptool_opt_strs+1094)
/** Upper-cased name for the verify option */
#define VERIFY_NAME      (srptool_opt_strs+1120)
/** Name string for the verify option */
#define VERIFY_name      (srptool_opt_strs+1127)
/** Compiled in flag settings for the verify option */
#define VERIFY_FLAGS     (OPTST_DISABLED)

/**
 *  passwd-conf option description:
 */
/** Descriptive text for the passwd-conf option */
#define PASSWD_CONF_DESC      (srptool_opt_strs+1134)
/** Upper-cased name for the passwd-conf option */
#define PASSWD_CONF_NAME      (srptool_opt_strs+1164)
/** Name string for the passwd-conf option */
#define PASSWD_CONF_name      (srptool_opt_strs+1176)
/** Compiled in flag settings for the passwd-conf option */
#define PASSWD_CONF_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/**
 *  create-conf option description:
 */
/** Descriptive text for the create-conf option */
#define CREATE_CONF_DESC      (srptool_opt_strs+1188)
/** Upper-cased name for the create-conf option */
#define CREATE_CONF_NAME      (srptool_opt_strs+1228)
/** Name string for the create-conf option */
#define CREATE_CONF_name      (srptool_opt_strs+1240)
/** Compiled in flag settings for the create-conf option */
#define CREATE_CONF_FLAGS     (OPTST_DISABLED \
        | OPTST_SET_ARGTYPE(OPARG_TYPE_STRING))

/*
 *  Help/More_Help/Version option descriptions:
 */
#define HELP_DESC       (srptool_opt_strs+1252)
#define HELP_name       (srptool_opt_strs+1296)
#ifdef HAVE_WORKING_FORK
#define MORE_HELP_DESC  (srptool_opt_strs+1301)
#define MORE_HELP_name  (srptool_opt_strs+1346)
#define MORE_HELP_FLAGS (OPTST_IMM | OPTST_NO_INIT)
#else
#define MORE_HELP_DESC  HELP_DESC
#define MORE_HELP_name  HELP_name
#define MORE_HELP_FLAGS (OPTST_OMITTED | OPTST_NO_INIT)
#endif
#ifdef NO_OPTIONAL_OPT_ARGS
#  define VER_FLAGS     (OPTST_IMM | OPTST_NO_INIT)
#else
#  define VER_FLAGS     (OPTST_SET_ARGTYPE(OPARG_TYPE_STRING) | \
                         OPTST_ARG_OPTIONAL | OPTST_IMM | OPTST_NO_INIT)
#endif
#define VER_DESC        (srptool_opt_strs+1356)
#define VER_name        (srptool_opt_strs+1392)
/**
 *  Declare option callback procedures
 */
extern tOptProc
    optionBooleanVal,   optionNestedVal,    optionNumericVal,
    optionPagedUsage,   optionPrintVersion, optionResetOpt,
    optionStackArg,     optionTimeDate,     optionTimeVal,
    optionUnstackArg,   optionVendorOption;
static tOptProc
    doOptDebug, doUsageOpt;
#define VER_PROC        optionPrintVersion

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 *  Define the srptool Option Descriptions.
 * This is an array of OPTION_CT entries, one for each
 * option that the srptool program responds to.
 */
static tOptDesc optDesc[OPTION_CT] = {
  {  /* entry idx, value */ 0, VALUE_OPT_DEBUG,
     /* equiv idx, value */ 0, VALUE_OPT_DEBUG,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ DEBUG_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --debug */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doOptDebug,
     /* desc, NAME, name */ DEBUG_DESC, DEBUG_NAME, DEBUG_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 1, VALUE_OPT_INDEX,
     /* equiv idx, value */ 1, VALUE_OPT_INDEX,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ INDEX_FLAGS, 0,
     /* last opt argumnt */ { INDEX_DFT_ARG },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ optionNumericVal,
     /* desc, NAME, name */ INDEX_DESC, INDEX_NAME, INDEX_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 2, VALUE_OPT_USERNAME,
     /* equiv idx, value */ 2, VALUE_OPT_USERNAME,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ USERNAME_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --username */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ USERNAME_DESC, USERNAME_NAME, USERNAME_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 3, VALUE_OPT_PASSWD,
     /* equiv idx, value */ 3, VALUE_OPT_PASSWD,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PASSWD_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --passwd */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ PASSWD_DESC, PASSWD_NAME, PASSWD_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 4, VALUE_OPT_SALT,
     /* equiv idx, value */ 4, VALUE_OPT_SALT,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ SALT_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --salt */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ optionNumericVal,
     /* desc, NAME, name */ SALT_DESC, SALT_NAME, SALT_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 5, VALUE_OPT_VERIFY,
     /* equiv idx, value */ 5, VALUE_OPT_VERIFY,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VERIFY_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --verify */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ VERIFY_DESC, VERIFY_NAME, VERIFY_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 6, VALUE_OPT_PASSWD_CONF,
     /* equiv idx, value */ 6, VALUE_OPT_PASSWD_CONF,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ PASSWD_CONF_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --passwd-conf */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ PASSWD_CONF_DESC, PASSWD_CONF_NAME, PASSWD_CONF_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ 7, VALUE_OPT_CREATE_CONF,
     /* equiv idx, value */ 7, VALUE_OPT_CREATE_CONF,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ CREATE_CONF_FLAGS, 0,
     /* last opt argumnt */ { NULL }, /* --create-conf */
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ NULL,
     /* desc, NAME, name */ CREATE_CONF_DESC, CREATE_CONF_NAME, CREATE_CONF_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_VERSION, VALUE_OPT_VERSION,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_VERSION,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ VER_FLAGS, AOUSE_VERSION,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ VER_PROC,
     /* desc, NAME, name */ VER_DESC, NULL, VER_name,
     /* disablement strs */ NULL, NULL },



  {  /* entry idx, value */ INDEX_OPT_HELP, VALUE_OPT_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ OPTST_IMM | OPTST_NO_INIT, AOUSE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL, NULL,
     /* option proc      */ doUsageOpt,
     /* desc, NAME, name */ HELP_DESC, NULL, HELP_name,
     /* disablement strs */ NULL, NULL },

  {  /* entry idx, value */ INDEX_OPT_MORE_HELP, VALUE_OPT_MORE_HELP,
     /* equiv idx value  */ NO_EQUIVALENT, VALUE_OPT_MORE_HELP,
     /* equivalenced to  */ NO_EQUIVALENT,
     /* min, max, act ct */ 0, 1, 0,
     /* opt state flags  */ MORE_HELP_FLAGS, AOUSE_MORE_HELP,
     /* last opt argumnt */ { NULL },
     /* arg list/cookie  */ NULL,
     /* must/cannot opts */ NULL,  NULL,
     /* option proc      */ optionPagedUsage,
     /* desc, NAME, name */ MORE_HELP_DESC, NULL, MORE_HELP_name,
     /* disablement strs */ NULL, NULL }
};


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/** Reference to the upper cased version of srptool. */
#define zPROGNAME       (srptool_opt_strs+1400)
/** Reference to the title line for srptool usage. */
#define zUsageTitle     (srptool_opt_strs+1408)
/** There is no srptool configuration file. */
#define zRcName         NULL
/** There are no directories to search for srptool config files. */
#define apzHomeList     NULL
/** The srptool program bug email address. */
#define zBugsAddr       (srptool_opt_strs+1492)
/** Clarification/explanation of what srptool does. */
#define zExplain        (srptool_opt_strs+1508)
/** Extra detail explaining what srptool does. */
#define zDetail         (srptool_opt_strs+1510)
/** The full version string for srptool. */
#define zFullVersion    (srptool_opt_strs+1951)
/* extracted from optcode.tlib near line 364 */

#if defined(ENABLE_NLS)
# define OPTPROC_BASE OPTPROC_TRANSLATE | OPTPROC_NXLAT_OPT
  static tOptionXlateProc translate_option_strings;
#else
# define OPTPROC_BASE OPTPROC_NONE
# define translate_option_strings NULL
#endif /* ENABLE_NLS */

#define srptool_full_usage (NULL)
#define srptool_short_usage (srptool_opt_strs+1965)

#endif /* not defined __doxygen__ */

/*
 *  Create the static procedure(s) declared above.
 */
/**
 * The callout function that invokes the optionUsage function.
 *
 * @param[in] opts the AutoOpts option description structure
 * @param[in] od   the descriptor for the "help" (usage) option.
 * @noreturn
 */
static void
doUsageOpt(tOptions * opts, tOptDesc * od)
{
    int ex_code;
    ex_code = SRPTOOL_EXIT_SUCCESS;
    optionUsage(&srptoolOptions, ex_code);
    /* NOTREACHED */
    exit(SRPTOOL_EXIT_FAILURE);
    (void)opts;
    (void)od;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**
 * Code to handle the debug option.
 * Specifies the debug level.
 * @param[in] pOptions the srptool options data structure
 * @param[in,out] pOptDesc the option descriptor for this option.
 */
static void
doOptDebug(tOptions* pOptions, tOptDesc* pOptDesc)
{
    static struct {long rmin, rmax;} const rng[1] = {
        { 0 ,  9999 } };
    int  ix;

    if (pOptions <= OPTPROC_EMIT_LIMIT)
        goto emit_ranges;
    optionNumericVal(pOptions, pOptDesc);

    for (ix = 0; ix < 1; ix++) {
        if (pOptDesc->optArg.argInt < rng[ix].rmin)
            continue;  /* ranges need not be ordered. */
        if (pOptDesc->optArg.argInt == rng[ix].rmin)
            return;
        if (rng[ix].rmax == LONG_MIN)
            continue;
        if (pOptDesc->optArg.argInt <= rng[ix].rmax)
            return;
    }

    option_usage_fp = stderr;

 emit_ranges:
optionShowRange(pOptions, pOptDesc, VOIDP(rng), 1);
}
/* extracted from optmain.tlib near line 1250 */

/**
 * The directory containing the data associated with srptool.
 */
#ifndef  PKGDATADIR
# define PKGDATADIR ""
#endif

/**
 * Information about the person or institution that packaged srptool
 * for the current distribution.
 */
#ifndef  WITH_PACKAGER
# define srptool_packager_info NULL
#else
/** Packager information for srptool. */
static char const srptool_packager_info[] =
    "Packaged by " WITH_PACKAGER

# ifdef WITH_PACKAGER_VERSION
        " ("WITH_PACKAGER_VERSION")"
# endif

# ifdef WITH_PACKAGER_BUG_REPORTS
    "\nReport srptool bugs to " WITH_PACKAGER_BUG_REPORTS
# endif
    "\n";
#endif
#ifndef __doxygen__

#endif /* __doxygen__ */
/**
 * The option definitions for srptool.  The one structure that
 * binds them all.
 */
tOptions srptoolOptions = {
    OPTIONS_STRUCT_VERSION,
    0, NULL,                    /* original argc + argv    */
    ( OPTPROC_BASE
    + OPTPROC_ERRSTOP
    + OPTPROC_SHORTOPT
    + OPTPROC_LONGOPT
    + OPTPROC_NO_REQ_OPT
    + OPTPROC_NO_ARGS
    + OPTPROC_GNUUSAGE
    + OPTPROC_MISUSE ),
    0, NULL,                    /* current option index, current option */
    NULL,         NULL,         zPROGNAME,
    zRcName,      zCopyright,   zLicenseDescrip,
    zFullVersion, apzHomeList,  zUsageTitle,
    zExplain,     zDetail,      optDesc,
    zBugsAddr,                  /* address to send bugs to */
    NULL, NULL,                 /* extensions/saved state  */
    optionUsage, /* usage procedure */
    translate_option_strings,   /* translation procedure */
    /*
     *  Indexes to special options
     */
    { INDEX_OPT_MORE_HELP, /* more-help option index */
      NO_EQUIVALENT, /* save option index */
      NO_EQUIVALENT, /* '-#' option index */
      NO_EQUIVALENT /* index of default opt */
    },
    11 /* full option count */, 8 /* user option count */,
    srptool_full_usage, srptool_short_usage,
    NULL, NULL,
    PKGDATADIR, srptool_packager_info
};

#if ENABLE_NLS
/**
 * This code is designed to translate translatable option text for the
 * srptool program.  These translations happen upon entry
 * to optionProcess().
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifdef HAVE_DCGETTEXT
# include <gettext.h>
#endif
#include <autoopts/usage-txt.h>

static char * AO_gettext(char const * pz);
static void   coerce_it(void ** s);

/**
 * AutoGen specific wrapper function for gettext.  It relies on the macro _()
 * to convert from English to the target language, then strdup-duplicates the
 * result string.  It tries the "libopts" domain first, then whatever has been
 * set via the \a textdomain(3) call.
 *
 * @param[in] pz the input text used as a lookup key.
 * @returns the translated text (if there is one),
 *   or the original text (if not).
 */
static char *
AO_gettext(char const * pz)
{
    char * res;
    if (pz == NULL)
        return NULL;
#ifdef HAVE_DCGETTEXT
    /*
     * While processing the option_xlateable_txt data, try to use the
     * "libopts" domain.  Once we switch to the option descriptor data,
     * do *not* use that domain.
     */
    if (option_xlateable_txt.field_ct != 0) {
        res = dgettext("libopts", pz);
        if (res == pz)
            res = (char *)VOIDP(_(pz));
    } else
        res = (char *)VOIDP(_(pz));
#else
    res = (char *)VOIDP(_(pz));
#endif
    if (res == pz)
        return res;
    res = strdup(res);
    if (res == NULL) {
        fputs(_("No memory for duping translated strings\n"), stderr);
        exit(SRPTOOL_EXIT_FAILURE);
    }
    return res;
}

/**
 * All the pointers we use are marked "* const", but they are stored in
 * writable memory.  Coerce the mutability and set the pointer.
 */
static void coerce_it(void ** s) { *s = AO_gettext(*s);
}

/**
 * Translate all the translatable strings in the srptoolOptions
 * structure defined above.  This is done only once.
 */
static void
translate_option_strings(void)
{
    tOptions * const opts = &srptoolOptions;

    /*
     *  Guard against re-translation.  It won't work.  The strings will have
     *  been changed by the first pass through this code.  One shot only.
     */
    if (option_xlateable_txt.field_ct != 0) {
        /*
         *  Do the translations.  The first pointer follows the field count
         *  field.  The field count field is the size of a pointer.
         */
        char ** ppz = (char**)VOIDP(&(option_xlateable_txt));
        int     ix  = option_xlateable_txt.field_ct;

        do {
            ppz++; /* skip over field_ct */
            *ppz = AO_gettext(*ppz);
        } while (--ix > 0);
        /* prevent re-translation and disable "libopts" domain lookup */
        option_xlateable_txt.field_ct = 0;

        coerce_it(VOIDP(&(opts->pzCopyright)));
        coerce_it(VOIDP(&(opts->pzCopyNotice)));
        coerce_it(VOIDP(&(opts->pzFullVersion)));
        coerce_it(VOIDP(&(opts->pzUsageTitle)));
        coerce_it(VOIDP(&(opts->pzExplain)));
        coerce_it(VOIDP(&(opts->pzDetail)));
        {
            tOptDesc * od = opts->pOptDesc;
            for (ix = opts->optCt; ix > 0; ix--, od++)
                coerce_it(VOIDP(&(od->pzText)));
        }
    }
}
#endif /* ENABLE_NLS */

#ifdef DO_NOT_COMPILE_THIS_CODE_IT_IS_FOR_GETTEXT
/** I18N function strictly for xgettext.  Do not compile. */
static void bogus_function(void) {
  /* TRANSLATORS:

     The following dummy function was crated solely so that xgettext can
     extract the correct strings.  These strings are actually referenced
     by a field name in the srptoolOptions structure noted in the
     comments below.  The literal text is defined in srptool_opt_strs.
   
     NOTE: the strings below are segmented with respect to the source string
     srptool_opt_strs.  The strings above are handed off for translation
     at run time a paragraph at a time.  Consequently, they are presented here
     for translation a paragraph at a time.
   
     ALSO: often the description for an option will reference another option
     by name.  These are set off with apostrophe quotes (I hope).  Do not
     translate option names.
   */
  /* referenced via srptoolOptions.pzCopyright */
  puts(_("srptool 3.5.8\n\
Copyright (C) 2000-2017 Free Software Foundation, and others, all rights reserved.\n\
This is free software. It is licensed for use, modification and\n\
redistribution under the terms of the GNU General Public License,\n\
version 3 or later <http://gnu.org/licenses/gpl.html>\n"));

  /* referenced via srptoolOptions.pzCopyNotice */
  puts(_("srptool is free software: you can redistribute it and/or modify it under\n\
the terms of the GNU General Public License as published by the Free\n\
Software Foundation, either version 3 of the License, or (at your option)\n\
any later version.\n\n"));
  puts(_("srptool is distributed in the hope that it will be useful, but WITHOUT ANY\n\
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS\n\
FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more\n\
details.\n\n"));
  puts(_("You should have received a copy of the GNU General Public License along\n\
with this program.  If not, see <http://www.gnu.org/licenses/>.\n"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("Enable debugging"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("specify the index of the group parameters in tpasswd.conf to use"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("specify a username"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("specify a password file"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("specify salt size"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("just verify the password."));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("specify a password conf file."));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("Generate a password configuration file."));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("display extended usage information and exit"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("extended usage information passed thru pager"));

  /* referenced via srptoolOptions.pOptDesc->pzText */
  puts(_("output version information and exit"));

  /* referenced via srptoolOptions.pzUsageTitle */
  puts(_("srptool - GnuTLS SRP tool\n\
Usage:  %s [ -<flag> [<val>] | --<name>[{=| }<val>] ]...\n"));

  /* referenced via srptoolOptions.pzExplain */
  puts(_("\n"));

  /* referenced via srptoolOptions.pzDetail */
  puts(_("Simple program that emulates the programs in the Stanford SRP (Secure\n\
Remote Password) libraries using GnuTLS.  It is intended for use in places\n\
where you don't expect SRP authentication to be the used for system users.\n\n"));
  puts(_("In brief, to use SRP you need to create two files.  These are the password\n\
file that holds the users and the verifiers associated with them and the\n\
configuration file to hold the group parameters (called tpasswd.conf).\n"));

  /* referenced via srptoolOptions.pzFullVersion */
  puts(_("srptool 3.5.8"));

  /* referenced via srptoolOptions.pzFullUsage */
  puts(_("<<<NOT-FOUND>>>"));

  /* referenced via srptoolOptions.pzShortUsage */
  puts(_("srptool [options]\n\
srptool --help for usage instructions.\n"));
  /* LIBOPTS-MESSAGES: */
#line 67 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 93 "../autoopts.c"
  puts(_("allocation of %d bytes failed\n"));
#line 53 "../init.c"
  puts(_("AutoOpts function called without option descriptor\n"));
#line 86 "../init.c"
  puts(_("\tThis exceeds the compiled library version:  "));
#line 84 "../init.c"
  puts(_("Automated Options Processing Error!\n"
       "\t%s called AutoOpts function with structure version %d:%d:%d.\n"));
#line 80 "../autoopts.c"
  puts(_("realloc of %d bytes at 0x%p failed\n"));
#line 88 "../init.c"
  puts(_("\tThis is less than the minimum library version:  "));
#line 121 "../version.c"
  puts(_("Automated Options version %s\n"
       "\tCopyright (C) 1999-2014 by Bruce Korb - all rights reserved\n"));
#line 87 "../makeshell.c"
  puts(_("(AutoOpts bug):  %s.\n"));
#line 90 "../reset.c"
  puts(_("optionResetOpt() called, but reset-option not configured"));
#line 295 "../usage.c"
  puts(_("could not locate the 'help' option"));
#line 336 "../autoopts.c"
  puts(_("optionProcess() was called with invalid data"));
#line 751 "../usage.c"
  puts(_("invalid argument type specified"));
#line 598 "../find.c"
  puts(_("defaulted to option with optional arg"));
#line 76 "../alias.c"
  puts(_("aliasing option is out of range."));
#line 235 "../enum.c"
  puts(_("%s error:  the keyword '%s' is ambiguous for %s\n"));
#line 108 "../find.c"
  puts(_("  The following options match:\n"));
#line 293 "../find.c"
  puts(_("%s: ambiguous option name: %s (matches %d options)\n"));
#line 161 "../check.c"
  puts(_("%s: Command line arguments required\n"));
#line 43 "../alias.c"
  puts(_("%d %s%s options allowed\n"));
#line 94 "../makeshell.c"
  puts(_("%s error %d (%s) calling %s for '%s'\n"));
#line 306 "../makeshell.c"
  puts(_("interprocess pipe"));
#line 168 "../version.c"
  puts(_("error: version option argument '%c' invalid.  Use:\n"
       "\t'v' - version only\n"
       "\t'c' - version and copyright\n"
       "\t'n' - version and full copyright notice\n"));
#line 58 "../check.c"
  puts(_("%s error:  the '%s' and '%s' options conflict\n"));
#line 217 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 430 "../find.c"
  puts(_("%s: The '%s' option has been disabled."));
#line 38 "../alias.c"
  puts(_("-equivalence"));
#line 469 "../find.c"
  puts(_("%s: illegal option -- %c\n"));
#line 110 "../reset.c"
  puts(_("%s: illegal option -- %c\n"));
#line 271 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 755 "../find.c"
  puts(_("%s: illegal option -- %s\n"));
#line 118 "../reset.c"
  puts(_("%s: illegal option -- %s\n"));
#line 335 "../find.c"
  puts(_("%s: unknown vendor extension option -- %s\n"));
#line 160 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 170 "../enum.c"
  puts(_("  or an integer from %d through %d\n"));
#line 750 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 1084 "../usage.c"
  puts(_("%s error:  invalid option descriptor for %s\n"));
#line 385 "../find.c"
  puts(_("%s: invalid option name: %s\n"));
#line 527 "../find.c"
  puts(_("%s: The '%s' option requires an argument.\n"));
#line 156 "../autoopts.c"
  puts(_("(AutoOpts bug):  Equivalenced option '%s' was equivalenced to both\n"
       "\t'%s' and '%s'."));
#line 94 "../check.c"
  puts(_("%s error:  The %s option is required\n"));
#line 632 "../find.c"
  puts(_("%s: The '%s' option cannot have an argument.\n"));
#line 151 "../check.c"
  puts(_("%s: Command line arguments are not allowed.\n"));
#line 536 "../save.c"
  puts(_("error %d (%s) creating %s\n"));
#line 235 "../enum.c"
  puts(_("%s error:  '%s' does not match any %s keywords.\n"));
#line 93 "../reset.c"
  puts(_("%s error: The '%s' option requires an argument.\n"));
#line 186 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 239 "../save.c"
  puts(_("error %d (%s) stat-ing %s\n"));
#line 143 "../restore.c"
  puts(_("%s error: no saved option state\n"));
#line 231 "../autoopts.c"
  puts(_("'%s' is not a command line option.\n"));
#line 113 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable date/time.\n"));
#line 131 "../save.c"
  puts(_("'%s' not defined\n"));
#line 50 "../time.c"
  puts(_("%s error:  '%s' is not a recognizable time duration.\n"));
#line 92 "../check.c"
  puts(_("%s error:  The %s option must appear %d times.\n"));
#line 165 "../numeric.c"
  puts(_("%s error:  '%s' is not a recognizable number.\n"));
#line 201 "../enum.c"
  puts(_("%s error:  %s exceeds %s keyword count\n"));
#line 333 "../usage.c"
  puts(_("Try '%s %s' for more information.\n"));
#line 45 "../alias.c"
  puts(_("one %s%s option allowed\n"));
#line 208 "../makeshell.c"
  puts(_("standard output"));
#line 943 "../makeshell.c"
  puts(_("standard output"));
#line 277 "../usage.c"
  puts(_("standard output"));
#line 418 "../usage.c"
  puts(_("standard output"));
#line 628 "../usage.c"
  puts(_("standard output"));
#line 175 "../version.c"
  puts(_("standard output"));
#line 277 "../usage.c"
  puts(_("standard error"));
#line 418 "../usage.c"
  puts(_("standard error"));
#line 628 "../usage.c"
  puts(_("standard error"));
#line 175 "../version.c"
  puts(_("standard error"));
#line 208 "../makeshell.c"
  puts(_("write"));
#line 943 "../makeshell.c"
  puts(_("write"));
#line 276 "../usage.c"
  puts(_("write"));
#line 417 "../usage.c"
  puts(_("write"));
#line 627 "../usage.c"
  puts(_("write"));
#line 174 "../version.c"
  puts(_("write"));
#line 60 "../numeric.c"
  puts(_("%s error:  %s option value %ld is out of range.\n"));
#line 44 "../check.c"
  puts(_("%s error:  %s option requires the %s option\n"));
#line 130 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 185 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 238 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 257 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
#line 535 "../save.c"
  puts(_("%s warning:  cannot save options - %s not regular file\n"));
  /* END-LIBOPTS-MESSAGES */

  /* USAGE-TEXT: */
#line 876 "../usage.c"
  puts(_("\t\t\t\t- an alternate for '%s'\n"));
#line 1151 "../usage.c"
  puts(_("Version, usage and configuration options:"));
#line 927 "../usage.c"
  puts(_("\t\t\t\t- default option for unnamed options\n"));
#line 840 "../usage.c"
  puts(_("\t\t\t\t- disabled as '--%s'\n"));
#line 1120 "../usage.c"
  puts(_(" --- %-14s %s\n"));
#line 1118 "../usage.c"
  puts(_("This option has been disabled"));
#line 867 "../usage.c"
  puts(_("\t\t\t\t- enabled by default\n"));
#line 40 "../alias.c"
  puts(_("%s error:  only "));
#line 1197 "../usage.c"
  puts(_(" - examining environment variables named %s_*\n"));
#line 168 "../file.c"
  puts(_("\t\t\t\t- file must not pre-exist\n"));
#line 172 "../file.c"
  puts(_("\t\t\t\t- file must pre-exist\n"));
#line 383 "../usage.c"
  puts(_("Options are specified by doubled hyphens and their name or by a single\n"
       "hyphen and the flag character.\n"));
#line 921 "../makeshell.c"
  puts(_("\n"
       "= = = = = = = =\n\n"
       "This incarnation of genshell will produce\n"
       "a shell script to parse the options for %s:\n\n"));
#line 167 "../enum.c"
  puts(_("  or an integer mask with any of the lower %d bits set\n"));
#line 900 "../usage.c"
  puts(_("\t\t\t\t- is a set membership option\n"));
#line 921 "../usage.c"
  puts(_("\t\t\t\t- must appear between %d and %d times\n"));
#line 385 "../usage.c"
  puts(_("Options are specified by single or double hyphens and their name.\n"));
#line 907 "../usage.c"
  puts(_("\t\t\t\t- may appear multiple times\n"));
#line 894 "../usage.c"
  puts(_("\t\t\t\t- may not be preset\n"));
#line 1312 "../usage.c"
  puts(_("   Arg Option-Name    Description\n"));
#line 1248 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1306 "../usage.c"
  puts(_("  Flg Arg Option-Name    Description\n"));
#line 1307 "../usage.c"
  puts(_(" %3s %s"));
#line 1313 "../usage.c"
  puts(_(" %3s %s"));
#line 390 "../usage.c"
  puts(_("The '-#<number>' option may omit the hash char\n"));
#line 386 "../usage.c"
  puts(_("All arguments are named options.\n"));
#line 974 "../usage.c"
  puts(_(" - reading file %s"));
#line 412 "../usage.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 100 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 129 "../version.c"
  puts(_("\n"
       "Please send bug reports to:  <%s>\n"));
#line 906 "../usage.c"
  puts(_("\t\t\t\t- may NOT appear - preset only\n"));
#line 947 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 1195 "../usage.c"
  puts(_("\n"
       "The following option preset mechanisms are supported:\n"));
#line 685 "../usage.c"
  puts(_("prohibits these options:\n"));
#line 680 "../usage.c"
  puts(_("prohibits the option '%s'\n"));
#line 81 "../numeric.c"
  puts(_("%s%ld to %ld"));
#line 79 "../numeric.c"
  puts(_("%sgreater than or equal to %ld"));
#line 75 "../numeric.c"
  puts(_("%s%ld exactly"));
#line 68 "../numeric.c"
  puts(_("%sit must lie in one of the ranges:\n"));
#line 68 "../numeric.c"
  puts(_("%sit must be in the range:\n"));
#line 88 "../numeric.c"
  puts(_(", or\n"));
#line 66 "../numeric.c"
  puts(_("%sis scalable with a suffix: k/K/m/M/g/G/t/T\n"));
#line 77 "../numeric.c"
  puts(_("%sless than or equal to %ld"));
#line 393 "../usage.c"
  puts(_("Operands and options may be intermixed.  They will be reordered.\n"));
#line 655 "../usage.c"
  puts(_("requires the option '%s'\n"));
#line 658 "../usage.c"
  puts(_("requires these options:\n"));
#line 1324 "../usage.c"
  puts(_("   Arg Option-Name   Req?  Description\n"));
#line 1318 "../usage.c"
  puts(_("  Flg Arg Option-Name   Req?  Description\n"));
#line 168 "../enum.c"
  puts(_("or you may use a numeric representation.  Preceding these with a '!'\n"
       "will clear the bits, specifying 'none' will clear all bits, and 'all'\n"
       "will set them all.  Multiple entries may be passed as an option\n"
       "argument list.\n"));
#line 913 "../usage.c"
  puts(_("\t\t\t\t- may appear up to %d times\n"));
#line 77 "../enum.c"
  puts(_("The valid \"%s\" option keywords are:\n"));
#line 1155 "../usage.c"
  puts(_("The next option supports vendor supported extra options:"));
#line 776 "../usage.c"
  puts(_("These additional options are:"));
  /* END-USAGE-TEXT */
}
#endif /* uncompilable code */
#ifdef  __cplusplus
}
#endif
/* srptool-args.c ends here */
