extproc sh

./configure --disable-shared \
            --enable-static \
            --disable-doc \
            --disable-nls \
            --enable-openssl-compatibility \
            --with-included-libtasn1 \
            --without-p11-kit \
            --with-included-unistring \
            ac_cv_lib_intl_gettext=no \
            "$@"
