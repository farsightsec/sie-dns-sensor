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

MYARCH="$(uname -m)"
BINARIES="$(pwd)/binaries/$VERSION"
BUILDS="$(pwd)/builds/$VERSION"
BUILDDEPS="$(pwd)/build-deps"
PACKAGING="$(pwd)/packaging"

DATE="$(date -R)"

mkdir -p $BINARIES

while read line; do
    buildarch="$(echo $line | awk '{print$1}')"
    variant="$(echo $line | awk '{print$2}')"
    elversion="$(echo $line | awk '{print$3}')"

    if [ "$MYARCH" != "$buildarch" ]; then
        echo
        echo " >>>>>>> skipping variant $variant (not our build arch) <<<<<<<"
        echo
        continue
    fi

    echo
    echo " >>>>>>> packaging for variant $variant <<<<<<<"
    echo

    PKGDIR="$PACKAGING/out/$variant"

    rm -rf $PKGDIR
    mkdir -p $PKGDIR

    cp -a $PACKAGING/general/* $PKGDIR/

    mkdir -p $PKGDIR/sie-dns-sensor
    cp -a $BUILDS/out/$variant/* $PKGDIR/sie-dns-sensor/

    install -m 0755 $BUILDDEPS/$variant/dest/usr/bin/sie-* $PKGDIR/sie-dns-sensor/usr/bin/

    case "$variant" in
        debian*)
            cp -a $PACKAGING/specific-debian/* $PKGDIR/
            sed -i \
                -e "s/@VERSION@/$VERSION/g" \
                -e "s/@RELEASE@/$RELEASE/g" \
                -e "s/@DATE@/$DATE/g" \
                $PKGDIR/sie-dns-sensor/debian/changelog

            cd $PKGDIR/sie-dns-sensor && \
                schroot -c $variant -- dpkg-buildpackage -b -us -uc
            mv $PKGDIR/*.deb $BINARIES/
            ;;

        centos*|sl*)
            cp -a $PACKAGING/specific-redhat/* $PKGDIR/
            case "$variant" in
                *amd64)
                    target="x86_64"
                ;;
                *i386)
                    target="i386"
                ;;
            esac
            sed -i \
                -e "s/@VERSION@/$VERSION/g" \
                -e "s/@RELEASE@/$RELEASE.$elversion/g" \
                $PKGDIR/redhat.spec

            cd $PKGDIR && \
                schroot -c $variant -- rpmbuild --buildroot=$PKGDIR/sie-dns-sensor -bb --target $target $PKGDIR/redhat.spec
            mv $PKGDIR/*.rpm $BINARIES/
            ;;
    esac
done < variants
