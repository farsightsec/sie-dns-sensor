#!/bin/sh -e

VERSION="$1"
RELEASE="$2"

if [ -z "$VERSION" ]; then
    echo "Usage: $0 <VERSION> [<RELEASE>]"
    exit 1
fi

if [ -z "$RELEASE" ]; then
    RELEASE="1"
fi

if [ ! -f "tarballs/nmsg-$VERSION.tar.gz" ]; then
    echo "$0: file tarballs/nmsg-$VERSION.tar.gz not found"
    exit 1
fi

MYARCH="$(uname -m)"
BUILDDIR="$(pwd)/builds/$VERSION-$RELEASE"
mkdir -p $BUILDDIR

while read line; do
    buildarch="$(echo $line | awk '{print$1}')"
    variant="$(echo $line | awk '{print$2}')"

    if [ "$MYARCH" != "$buildarch" ]; then
        echo
        echo " >>>>>>> skipping variant $variant (not our build arch) <<<<<<<"
        echo
        continue
    fi

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
    mkdir -p $BUILDDIR/out/$variant/usr/$lib/sie-dns-sensor/nmsg

    tar -C $BUILDDIR/src/$variant -zxf tarballs/nmsg-$VERSION.tar.gz

    builddep_path="$(pwd)/build-deps/$variant/dest/usr"
    builddep_cflags="-I$builddep_path/include"
    builddep_ldflags="-L$builddep_path/lib"
    schroot -c $variant -- sh -c "LD_LIBRARY_PATH=$builddep_path/lib cd $BUILDDIR/src/$variant/nmsg-$VERSION && ./configure CFLAGS=$builddep_cflags LDFLAGS=$builddep_ldflags libwdns_CFLAGS=$builddep_cflags libwdns_LIBS=\"$builddep_ldflags -lwdns\" libprotobuf_c_CFLAGS=$builddep_cflags libprotobuf_c_LIBS=\"$builddep_ldflags -lprotobuf-c\" PROTOC_C=$builddep_path/bin/protoc-c --with-pic --prefix=/usr --sysconfdir=/etc --libdir=/usr/$lib/sie-dns-sensor --with-plugindir=/usr/$lib/sie-dns-sensor/nmsg --with-libxs=no --with-yajl=no && make clean && make && make install DESTDIR=$BUILDDIR/dest/$variant"

    PRIVATEDIR="$BUILDDIR/out/$variant/usr/$lib/sie-dns-sensor"
    cp -av $BUILDDIR/dest/$variant/usr/bin/nmsgtool $PRIVATEDIR/
    cp -av $BUILDDIR/dest/$variant/usr/$lib/sie-dns-sensor/*.so.* $PRIVATEDIR/
    cp -av $BUILDDIR/dest/$variant/usr/$lib/sie-dns-sensor/nmsg/*.so $PRIVATEDIR/nmsg/

done < variants
