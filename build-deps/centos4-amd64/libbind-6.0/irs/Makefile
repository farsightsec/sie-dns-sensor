# Copyright (C) 2004, 2007, 2008  Internet Systems Consortium, Inc. ("ISC")
# Copyright (C) 2001  Internet Software Consortium.
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

# $Id: Makefile.in,v 1.14 2008/03/20 23:47:00 tbox Exp $

srcdir=		.


WANT_IRS_THREADS_OBJS=	gethostent_r.o getnetent_r.o getnetgrent_r.o \
	getprotoent_r.o getservent_r.o

WANT_IRS_NISGR_OBJS= nis_gr.o 
WANT_IRS_GR_OBJS= dns_gr.o irp_gr.o lcl_gr.o gen_gr.o getgrent.o \
	 

WANT_IRS_THREADSPW_OBJS=getpwent_r.o
WANT_IRS_NISPW_OBJS= nis_pw.o
WANT_IRS_DBPW_OBJS=irp_pw.o lcl_pw.o
WANT_IRS_PW_OBJS= dns_pw.o gen_pw.o getpwent.o \
	${WANT_IRS_DBPW_OBJS}  

WANT_IRS_NIS_OBJS= \
	nis_ho.o nis_ng.o nis_nw.o nis_pr.o nis_sv.o

OBJS=	   \
	 \
	dns.o dns_ho.o dns_nw.o dns_pr.o \
	dns_sv.o gai_strerror.o gen.o gen_ho.o \
	gen_ng.o gen_nw.o gen_pr.o gen_sv.o \
	getaddrinfo.o gethostent.o \
	getnameinfo.o getnetent.o \
	getnetgrent.o getprotoent.o getservent.o \
	hesiod.o irp.o irp_ho.o irp_ng.o irp_nw.o \
	irp_pr.o irp_sv.o irpmarshall.o irs_data.o \
	lcl.o lcl_ho.o lcl_ng.o lcl_nw.o lcl_pr.o \
	lcl_sv.o nis.o nul_ng.o util.o

SRCS=	dns.c dns_gr.c dns_ho.c dns_nw.c dns_pr.c dns_pw.c \
	dns_sv.c gai_strerror.c gen.c gen_gr.c gen_ho.c \
	gen_ng.c gen_nw.c gen_pr.c gen_pw.c gen_sv.c \
	getaddrinfo.c getgrent.c gethostent.c \
	getnameinfo.c getnetent.c getnetent_r.c \
	getnetgrent.c getprotoent.c getpwent.c getservent.c \
	hesiod.c irp.c irp_gr.c irp_ho.c irp_ng.c irp_nw.c \
	irp_pr.c irp_pw.c irp_sv.c irpmarshall.c irs_data.c \
	lcl.c lcl_gr.c lcl_ho.c lcl_ng.c lcl_nw.c lcl_pr.c \
	lcl_pw.c lcl_sv.c nis.c nis_gr.c nis_ho.c nis_ng.c \
	nis_nw.c nis_pr.c nis_pw.c nis_sv.c nul_ng.c \
	util.c getgrent_r.c gethostent_r.c getnetgrent_r.c getprotoent_r.c \
	getpwent_r.c getservent_r.c

WANT_IRS_THREADSGR_OBJS=getgrent_r.o

TARGETS= ${OBJS}

CINCLUDES= -I.. -I../include -I${srcdir}/../include

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



top_builddir =	/home/edmonds/src/sie-dns-sensor/centos4-amd64/libbind-6.0
abs_top_srcdir = /home/edmonds/src/sie-dns-sensor/centos4-amd64/libbind-6.0

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
