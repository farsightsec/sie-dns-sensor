#!/bin/sh -e

VERSION="$1"

if [ -z "$VERSION" ]; then
    echo "Usage: $0 <VERSION>"
    exit 1
fi

BINARIES="$(pwd)/binaries/$VERSION"
BUILDS="$(pwd)/builds/$VERSION"
BUILDDEPS="$(pwd)/build-deps"
PACKAGING="$(pwd)/packaging"

DATE="$(date -R)"

mkdir -p $BINARIES

while read line; do
    variant="$(echo $line | awk '{print$1}')"
    elversion="$(echo $line | awk '{print$2}')"

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
                -e "s/@DATE@/$DATE/g" \
                $PKGDIR/sie-dns-sensor/debian/changelog

            cd $PKGDIR/sie-dns-sensor && \
                schroot -c $variant -- dpkg-buildpackage -b -us -uc
            mv $PKGDIR/*.deb $BINARIES/
            ;;

        centos*|sl*)
            cp -a $PACKAGING/specific-redhat/sie-dns-sensor $PKGDIR/
            case "$variant" in
                *amd64)
                    target="x86_64"
                    cp $PACKAGING/specific-redhat/redhat-amd64.spec $PKGDIR/redhat.spec
                ;;
                *i386)
                    target="i386"
                    cp $PACKAGING/specific-redhat/redhat-i386.spec $PKGDIR/redhat.spec
                ;;
            esac
            sed -i \
                -e "s/@VERSION@/$VERSION/g" \
                -e "s/@RELEASE@/1.$elversion/g" \
                $PKGDIR/redhat.spec

            cd $PKGDIR && \
                schroot -c $variant -- rpmbuild --buildroot=$PKGDIR/sie-dns-sensor -bb --target $target $PKGDIR/redhat.spec
            mv $PKGDIR/*.rpm $BINARIES/
            ;;
    esac
done < variants
