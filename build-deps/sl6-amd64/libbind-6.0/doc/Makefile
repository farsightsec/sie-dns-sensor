# Copyright (C) 2009  Internet Systems Consortium, Inc. ("ISC")
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
# AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
# INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
# LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
# OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
# PERFORMANCE OF THIS SOFTWARE.

# $Id: Makefile.in,v 1.5 2009/03/04 00:09:51 marka Exp $

srcdir =	.
top_srcdir =	..

# Copyright (C) 2004, 2007, 2009  Internet Systems Consortium, Inc. ("ISC")
# Copyright (C) 2001, 2002  Internet Software Consortium.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
# REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
# AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
# INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
# LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
# OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
# PERFORMANCE OF THIS SOFTWARE.

# $Id: rules.in,v 1.15 2009/01/22 23:49:23 tbox Exp $

###
### Common Makefile rules for BIND 9.
###

###
### Paths
###
### Note: paths that vary by Makefile MUST NOT be listed
### here, or they won't get expanded correctly.

prefix =	/usr
exec_prefix =	${prefix}
bindir =	${exec_prefix}/bin
sbindir =	${exec_prefix}/sbin
includedir =	${prefix}/include/bind
libdir =	${exec_prefix}/lib
sysconfdir =	${prefix}/etc
localstatedir =	${prefix}/var
mandir =	${datarootdir}/man
datarootdir =	${prefix}/share

DESTDIR =
MAKEDEFS= 'DESTDIR=${DESTDIR}'



top_builddir =	/hog/proj/sie-dns-sensor/build-deps/sl6-amd64/libbind-6.0
abs_top_srcdir = /hog/proj/sie-dns-sensor/build-deps/sl6-amd64/libbind-6.0

###
### All
###
### Makefile may define:
###	TARGETS

all: subdirs ${TARGETS}

###
### Subdirectories
###
### Makefile may define:
###	SUBDIRS

ALL_SUBDIRS = ${SUBDIRS} nulldir

#
# We use a single-colon rule so that additional dependencies of
# subdirectories can be specified after the inclusion of this file.
# The "depend" target is treated the same way.
#
subdirs:
	@for i in ${ALL_SUBDIRS}; do \
		if [ "$$i" != "nulldir" -a -d $$i ]; then \
			echo "making all in `pwd`/$$i"; \
			(cd $$i; ${MAKE} ${MAKEDEFS} all) || exit 1; \
		fi; \
	done

install clean distclean docclean manclean::
	@for i in ${ALL_SUBDIRS}; do \
		if [ "$$i" != "nulldir" -a -d $$i ]; then \
			echo "making $@ in `pwd`/$$i"; \
			(cd $$i; ${MAKE} ${MAKEDEFS} $@) || exit 1; \
		fi \
	done

###
### C Programs
###
### Makefile must define
###	CC
### Makefile may define
###	CFLAGS
###	CINCLUDES
###	CDEFINES
###	CWARNINGS
### User may define externally
###     EXT_CFLAGS

CC = 		gcc
CFLAGS =	-g -O2
STD_CINCLUDES =	
STD_CDEFINES =	 -D_GNU_SOURCE
STD_CWARNINGS =	 -W -Wall -Wmissing-prototypes -Wcast-qual -Wwrite-strings -Wformat -Wpointer-arith -fno-strict-aliasing

.SUFFIXES:
.SUFFIXES: .c .o

ALWAYS_INCLUDES = -I${top_builddir} -I${abs_top_srcdir}/port/linux/include
ALWAYS_DEFINES = 
ALWAYS_WARNINGS =

ALL_CPPFLAGS = \
	${ALWAYS_INCLUDES} ${CINCLUDES} ${STD_CINCLUDES} \
	${ALWAYS_DEFINES} ${CDEFINES} ${STD_CDEFINES}

ALL_CFLAGS = ${EXT_CFLAGS} ${CFLAGS} \
	${ALL_CPPFLAGS} \
	${ALWAYS_WARNINGS} ${STD_CWARNINGS} ${CWARNINGS}

.c.o:
	${LIBTOOL_MODE_COMPILE} ${CC} ${ALL_CFLAGS} -c $<

SHELL = /bin/sh
LIBTOOL = 
LIBTOOL_MODE_COMPILE = ${LIBTOOL} 
LIBTOOL_MODE_INSTALL = ${LIBTOOL} 
LIBTOOL_MODE_LINK = ${LIBTOOL} 
PURIFY = 

MKDEP = ${SHELL} ${top_builddir}/make/mkdep

cleandir: distclean

clean distclean::
	rm -f *.o *.lo *.la core *.core .depend
	rm -rf .libs

distclean::
	rm -f Makefile

depend:
	@for i in ${ALL_SUBDIRS}; do \
		if [ "$$i" != "nulldir" -a -d $$i ]; then \
			echo "making depend in `pwd`/$$i"; \
			(cd $$i; ${MAKE} ${MAKEDEFS} $@) || exit 1; \
		fi \
	done
	@if [ X"${SRCS}" != X -a X"${PSRCS}" != X ] ; then \
		echo ${MKDEP} ${ALL_CPPFLAGS} ${SRCS}; \
		${MKDEP} ${ALL_CPPFLAGS} ${SRCS}; \
		echo ${MKDEP} -ap ${ALL_CPPFLAGS} ${PSRCS}; \
		${MKDEP} -ap ${ALL_CPPFLAGS} ${PSRCS}; \
		${DEPENDEXTRA} \
	elif [ X"${SRCS}" != X ] ; then \
		echo ${MKDEP} ${ALL_CPPFLAGS} ${SRCS}; \
		${MKDEP} ${ALL_CPPFLAGS} ${SRCS}; \
		${DEPENDEXTRA} \
	elif [ X"${PSRCS}" != X ] ; then \
		echo ${MKDEP} ${ALL_CPPFLAGS} ${PSRCS}; \
		${MKDEP} -p ${ALL_CPPFLAGS} ${PSRCS}; \
		${DEPENDEXTRA} \
	fi

FORCE:

###
### Libraries
###

AR =		/usr/bin/ar
ARFLAGS =	cruv
RANLIB =	ranlib

###
### Installation
###

INSTALL =		/usr/bin/install -c
INSTALL_PROGRAM =	${INSTALL}
INSTALL_DATA =		${INSTALL} -m 644

MANDIR =	${DESTDIR}/${mandir}

TR = /usr/bin/tr
SED = /bin/sed
TBL = 
NROFF = 
MANROFF = cat

#
# Extensions for the generated manual entries
#
MAN_EXT = man
CAT_EXT = cat
LIB_NETWORK_EXT = 3
LIB_NETWORK_MAN_EXT = ${MAN_EXT}${LIB_NETWORK_EXT}
LIB_NETWORK_CAT_EXT = ${CAT_EXT}${LIB_NETWORK_EXT}
FORMAT_EXT = 5
FORMAT_MAN_EXT = ${MAN_EXT}${FORMAT_EXT}
FORMAT_CAT_EXT = ${CAT_EXT}${FORMAT_EXT}
DESC_EXT = 7
DESC_MAN_EXT = ${MAN_EXT}${DESC_EXT}
DESC_CAT_EXT = ${CAT_EXT}${DESC_EXT}

#
# Network library routines manual entries
#
LIB_NETWORK_BASE =	gethostbyname inet_cidr resolver hesiod getnetent \
			tsig getaddrinfo getnameinfo getipnodebyname
LIB_NETWORK_SRC = 	gethostbyname.${LIB_NETWORK_EXT} \
			inet_cidr.${LIB_NETWORK_EXT} \
			resolver.${LIB_NETWORK_EXT} \
			hesiod.${LIB_NETWORK_EXT} \
			getnetent.${LIB_NETWORK_EXT} \
			tsig.${LIB_NETWORK_EXT} \
			getaddrinfo.${LIB_NETWORK_EXT} \
			getnameinfo.${LIB_NETWORK_EXT} \
			getipnodebyname.${LIB_NETWORK_EXT}
LIB_NETWORK_MAN =	gethostbyname.${LIB_NETWORK_MAN_EXT} \
			inet_cidr.${LIB_NETWORK_MAN_EXT} \
			resolver.${LIB_NETWORK_MAN_EXT} \
			hesiod.${LIB_NETWORK_MAN_EXT} \
			getnetent.${LIB_NETWORK_MAN_EXT} \
			tsig.${LIB_NETWORK_MAN_EXT} \
			getaddrinfo.${LIB_NETWORK_MAN_EXT} \
			getnameinfo.${LIB_NETWORK_MAN_EXT} \
			getipnodebyname.${LIB_NETWORK_MAN_EXT}
LIB_NETWORK_CAT =	gethostbyname.${LIB_NETWORK_CAT_EXT} \
			inet_cidr.${LIB_NETWORK_CAT_EXT} \
			resolver.${LIB_NETWORK_CAT_EXT} \
			hesiod.${LIB_NETWORK_CAT_EXT} \
			getnetent.${LIB_NETWORK_CAT_EXT} \
			tsig.${LIB_NETWORK_CAT_EXT} \
			getaddrinfo.${LIB_NETWORK_CAT_EXT} \
			getnameinfo.${LIB_NETWORK_CAT_EXT} \
			getipnodebyname.${LIB_NETWORK_CAT_EXT}
LIB_NETWORK_OUT =	${LIB_NETWORK_MAN} ${LIB_NETWORK_CAT}

#
# File format manual entries
#
FORMAT_BASE =	resolver irs.conf
FORMAT_SRC = 	resolver.${FORMAT_EXT} \
		irs.conf.${FORMAT_EXT}
FORMAT_MAN = 	resolver.${FORMAT_MAN_EXT} \
		irs.conf.${FORMAT_MAN_EXT}
FORMAT_CAT = 	resolver.${FORMAT_CAT_EXT} \
		irs.conf.${FORMAT_CAT_EXT}
FORMAT_OUT =	${FORMAT_MAN} ${FORMAT_CAT}

#
# Feature Description manual entries
#
DESC_BASE =	hostname
DESC_EXT = 	7
DESC_SRC = 	hostname.${DESC_EXT}
DESC_MAN = 	hostname.${DESC_MAN_EXT}
DESC_CAT = 	hostname.${DESC_CAT_EXT}
DESC_OUT =	${DESC_MAN} ${DESC_CAT}

#
# This sed command is used to update the manual entries so they refer to 
# the appropriate section of the manual for a given platform.
#
EXT_SED_CMD =	LIB_NETWORK_EXT_U=`echo "${LIB_NETWORK_EXT}"|tr "[a-z]" "[A-Z]"`; \
		export LIB_NETWORK_EXT_U; \
		FORMAT_EXT_U=`echo "${FORMAT_EXT}"|tr "[a-z]" "[A-Z]"`; \
		export FORMAT_EXT_U; \
		DESC_EXT_U=`echo "${DESC_EXT}"|tr "[a-z]" "[A-Z]"`; \
		export DESC_EXT_U; \
		SYSCALL_EXT_U=`echo "${SYSCALL_EXT}"|tr "[a-z]" "[A-Z]"`; \
		export SYSCALL_EXT_U; \
		BSD_SYSCALL_EXT_U=`echo "${BSD_SYSCALL_EXT}"|tr "[a-z]" "[A-Z]"`; \
		export BSD_SYSCALL_EXT_U; \
		${SED} -e "s/@LIB_NETWORK_EXT@/${LIB_NETWORK_EXT}/g" \
		-e "s/@LIB_NETWORK_EXT_U@/$${LIB_NETWORK_EXT_U}/g" \
		-e "s/@FORMAT_EXT@/${FORMAT_EXT}/g" \
		-e "s/@FORMAT_EXT_U@/$${FORMAT_EXT_U}/g" \
		-e "s/@DESC_EXT@/${DESC_EXT}/g" \
		-e "s/@DESC_EXT_U@/$${DESC_EXT_U}/g" \
		-e "s/@SYSCALL_EXT@/${SYSCALL_EXT}/g" \
		-e "s/@SYSCALL_EXT_U@/$${SYSCALL_EXT_U}/g" \
		-e "s/@BSD_SYSCALL_EXT@/${BSD_SYSCALL_EXT}/g" \
		-e "s/@BSD_SYSCALL_EXT_U@/$${BSD_SYSCALL_EXT_U}/g"

.SUFFIXES:	.${LIB_NETWORK_EXT} .${LIB_NETWORK_MAN_EXT} \
		.${FORMAT_EXT} .${FORMAT_MAN_EXT} \
		.${DESC_EXT} .${DESC_MAN_EXT} 
.SUFFIXES:	.${LIB_NETWORK_MAN_EXT} .${LIB_NETWORK_CAT_EXT} \
		.${FORMAT_MAN_EXT} .${FORMAT_CAT_EXT} \
		.${DESC_MAN_EXT} .${DESC_CAT_EXT} 

.${LIB_NETWORK_EXT}.${LIB_NETWORK_MAN_EXT}:
	@echo "$*.${LIB_NETWORK_EXT} -> $*.${LIB_NETWORK_MAN_EXT}"
	@${EXT_SED_CMD} <$*.${LIB_NETWORK_EXT} >$*.${LIB_NETWORK_MAN_EXT}

.${FORMAT_EXT}.${FORMAT_MAN_EXT}:
	@echo "$*.${FORMAT_EXT} -> $*.${FORMAT_MAN_EXT}"
	@${EXT_SED_CMD} <$*.${FORMAT_EXT} >$*.${FORMAT_MAN_EXT}

.${DESC_EXT}.${DESC_MAN_EXT}:
	@echo "$*.${DESC_EXT} -> $*.${DESC_MAN_EXT}"
	@${EXT_SED_CMD} <$*.${DESC_EXT} >$*.${DESC_MAN_EXT}

.${LIB_NETWORK_MAN_EXT}.${LIB_NETWORK_CAT_EXT}:
	@echo "$*.${LIB_NETWORK_MAN_EXT} -> $*.${LIB_NETWORK_CAT_EXT}"
	@${MANROFF} <$*.${LIB_NETWORK_MAN_EXT} >$*.${LIB_NETWORK_CAT_EXT}

.${FORMAT_MAN_EXT}.${FORMAT_CAT_EXT}:
	@echo "$*.${FORMAT_MAN_EXT} -> $*.${FORMAT_CAT_EXT}"
	@${MANROFF} <$*.${FORMAT_MAN_EXT} >$*.${FORMAT_CAT_EXT}

.${DESC_MAN_EXT}.${DESC_CAT_EXT}:
	@echo "$*.${DESC_MAN_EXT} -> $*.${DESC_CAT_EXT}"
	@${MANROFF} <$*.${DESC_MAN_EXT} >$*.${DESC_CAT_EXT}

OUTFILES =	${LIB_NETWORK_OUT} ${FORMAT_OUT} ${DESC_OUT}

doc man:: ${OUTFILES}

docclean manclean maintainer-clean::
	rm -f ${OUTFILES}

installdirs:
	$(SHELL) ${top_srcdir}/mkinstalldirs \
		${MANDIR}/man${LIB_NETWORK_EXT} \
		${MANDIR}/cat${LIB_NETWORK_EXT} \
		${MANDIR}/man${FORMAT_EXT} \
		${MANDIR}/cat${FORMAT_EXT} \
		${MANDIR}/man${DESC_EXT} \
		${MANDIR}/cat${DESC_EXT}

install:: doc installdirs
	@set -x; N=${LIB_NETWORK_EXT}; for f in ${LIB_NETWORK_BASE}; do \
		${INSTALL_DATA} $${f}.${LIB_NETWORK_MAN_EXT} \
		${MANDIR}/man${LIB_NETWORK_EXT}/$${f}.${LIB_NETWORK_EXT}; \
	done
	@set -x; N=${LIB_NETWORK_EXT}; for f in ${LIB_NETWORK_BASE}; do \
		${INSTALL_DATA} $${f}.${LIB_NETWORK_CAT_EXT} \
		${MANDIR}/cat${LIB_NETWORK_EXT}/$${f}.${LIB_NETWORK_EXT}; \
	done
	@set -x; N=${FORMAT_EXT}; for f in ${FORMAT_BASE}; do \
		${INSTALL_DATA} $${f}.${FORMAT_MAN_EXT} \
		${MANDIR}/man${FORMAT_EXT}/$${f}.${FORMAT_EXT}; \
	done
	@set -x; N=${FORMAT_EXT}; for f in ${FORMAT_BASE}; do \
		${INSTALL_DATA} $${f}.${FORMAT_CAT_EXT} \
		${MANDIR}/cat${FORMAT_EXT}/$${f}.${FORMAT_EXT}; \
	done
	@set -x; N=${DESC_EXT}; for f in ${DESC_BASE}; do \
		${INSTALL_DATA} $${f}.${DESC_MAN_EXT} \
		${MANDIR}/man${DESC_EXT}/$${f}.${DESC_EXT}; \
	done
	@set -x; N=${DESC_EXT}; for f in ${DESC_BASE}; do \
		${INSTALL_DATA} $${f}.${DESC_CAT_EXT} \
		${MANDIR}/cat${DESC_EXT}/$${f}.${DESC_EXT}; \
	done

