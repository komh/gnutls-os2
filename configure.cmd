extproc sh

./configure --disable-shared \
            --enable-static \
            --disable-doc \
            --enable-openssl-compatibility \
            --with-included-libtasn1 \
            --without-p11-kit \
            "$@"
