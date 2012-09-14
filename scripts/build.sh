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

./scripts/nmsg_build.sh "$VERSION" "$RELEASE"
./scripts/pkg_build.sh "$VERSION" "$RELEASE"
