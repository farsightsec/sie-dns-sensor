#!/bin/sh -e

VERSION="$1"

if [ -z "$VERSION" ]; then
    echo "Usage: $0 <VERSION>"
    exit 1
fi

if [ ! -f "tarballs/nmsg-$VERSION.tar.gz" ]; then
    echo "$0: file tarballs/nmsg-$VERSION.tar.gz not found"
    exit 1
fi

BUILDDIR="$(pwd)/builds/$VERSION"
mkdir -p $BUILDDIR

while read line; do
    variant="$(echo $line | awk '{print$1}')"

    echo
    echo " >>>>>>> building for variant $variant <<<<<<<"
    echo

    case "$variant" in
        *-amd64)
            case "$variant" in
                debian-*)
                    lib="lib"
                    ;;
                *)
                    lib="lib64"
                    ;;
            esac
            ;;
        *)
            lib="lib"
            ;;
    esac

    rm -rf $BUILDDIR/src/$variant
    rm -rf $BUILDDIR/dest/$variant
    rm -rf $BUILDDIR/out/$variant

    mkdir -p $BUILDDIR/src/$variant
    mkdir -p $BUILDDIR/dest/$variant
    mkdir -p $BUILDDIR/out/$variant
    mkdir -p $BUILDDIR/out/$variant/usr/bin
    mkdir -p $BUILDDIR/out/$variant/usr/$lib/nmsg

    tar -C $BUILDDIR/src/$variant -zxf tarballs/nmsg-$VERSION.tar.gz

    builddep_path="$(pwd)/build-deps/$variant/dest/usr"
    schroot -c $variant -- sh -c "cd $BUILDDIR/src/$variant/nmsg-$VERSION && ./configure CFLAGS=-I$builddep_path/include --prefix=/usr --sysconfdir=/etc --libdir=/usr/$lib --with-plugindir=/usr/$lib/nmsg --with-libpcap=$builddep_path --with-libustr=no --with-libwdns=no --with-libprotobuf_c=no && make clean && make -j4 && make install DESTDIR=$BUILDDIR/dest/$variant"

    cp -av $BUILDDIR/dest/$variant/usr/bin/nmsgtool $BUILDDIR/out/$variant/usr/bin/nmsgtool
    cp -av $BUILDDIR/dest/$variant/usr/$lib/*.so* $BUILDDIR/out/$variant/usr/$lib
    cp -av $BUILDDIR/dest/$variant/usr/$lib/nmsg/*.so $BUILDDIR/out/$variant/usr/$lib/nmsg

done < variants
