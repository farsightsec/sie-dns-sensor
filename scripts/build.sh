#!/bin/sh -e

VERSION="$1"

if [ -z "$VERSION" ]; then
    echo "Usage: $0 <VERSION>"
    exit 1
fi

./scripts/nmsg_build.sh "$VERSION"
./scripts/pkg_build.sh "$VERSION"
