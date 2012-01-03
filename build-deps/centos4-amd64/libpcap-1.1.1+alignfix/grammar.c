/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */
#define yyparse pcap_parse
#define yylex   pcap_lex
#define yyerror pcap_error
#define yylval  pcap_lval
#define yychar  pcap_char
#define yydebug pcap_debug
#define yynerrs pcap_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     DST = 258,
     SRC = 259,
     HOST = 260,
     GATEWAY = 261,
     NET = 262,
     NETMASK = 263,
     PORT = 264,
     PORTRANGE = 265,
     LESS = 266,
     GREATER = 267,
     PROTO = 268,
     PROTOCHAIN = 269,
     CBYTE = 270,
     ARP = 271,
     RARP = 272,
     IP = 273,
     SCTP = 274,
     TCP = 275,
     UDP = 276,
     ICMP = 277,
     IGMP = 278,
     IGRP = 279,
     PIM = 280,
     VRRP = 281,
     ATALK = 282,
     AARP = 283,
     DECNET = 284,
     LAT = 285,
     SCA = 286,
     MOPRC = 287,
     MOPDL = 288,
     TK_BROADCAST = 289,
     TK_MULTICAST = 290,
     NUM = 291,
     INBOUND = 292,
     OUTBOUND = 293,
     PF_IFNAME = 294,
     PF_RSET = 295,
     PF_RNR = 296,
     PF_SRNR = 297,
     PF_REASON = 298,
     PF_ACTION = 299,
     TYPE = 300,
     SUBTYPE = 301,
     DIR = 302,
     ADDR1 = 303,
     ADDR2 = 304,
     ADDR3 = 305,
     ADDR4 = 306,
     LINK = 307,
     GEQ = 308,
     LEQ = 309,
     NEQ = 310,
     ID = 311,
     EID = 312,
     HID = 313,
     HID6 = 314,
     AID = 315,
     LSH = 316,
     RSH = 317,
     LEN = 318,
     IPV6 = 319,
     ICMPV6 = 320,
     AH = 321,
     ESP = 322,
     VLAN = 323,
     MPLS = 324,
     PPPOED = 325,
     PPPOES = 326,
     ISO = 327,
     ESIS = 328,
     CLNP = 329,
     ISIS = 330,
     L1 = 331,
     L2 = 332,
     IIH = 333,
     LSP = 334,
     SNP = 335,
     CSNP = 336,
     PSNP = 337,
     STP = 338,
     IPX = 339,
     NETBEUI = 340,
     LANE = 341,
     LLC = 342,
     METAC = 343,
     BCC = 344,
     SC = 345,
     ILMIC = 346,
     OAMF4EC = 347,
     OAMF4SC = 348,
     OAM = 349,
     OAMF4 = 350,
     CONNECTMSG = 351,
     METACONNECT = 352,
     VPI = 353,
     VCI = 354,
     RADIO = 355,
     FISU = 356,
     LSSU = 357,
     MSU = 358,
     SIO = 359,
     OPC = 360,
     DPC = 361,
     SLS = 362,
     AND = 363,
     OR = 364,
     UMINUS = 365
   };
#endif
#define DST 258
#define SRC 259
#define HOST 260
#define GATEWAY 261
#define NET 262
#define NETMASK 263
#define PORT 264
#define PORTRANGE 265
#define LESS 266
#define GREATER 267
#define PROTO 268
#define PROTOCHAIN 269
#define CBYTE 270
#define ARP 271
#define RARP 272
#define IP 273
#define SCTP 274
#define TCP 275
#define UDP 276
#define ICMP 277
#define IGMP 278
#define IGRP 279
#define PIM 280
#define VRRP 281
#define ATALK 282
#define AARP 283
#define DECNET 284
#define LAT 285
#define SCA 286
#define MOPRC 287
#define MOPDL 288
#define TK_BROADCAST 289
#define TK_MULTICAST 290
#define NUM 291
#define INBOUND 292
#define OUTBOUND 293
#define PF_IFNAME 294
#define PF_RSET 295
#define PF_RNR 296
#define PF_SRNR 297
#define PF_REASON 298
#define PF_ACTION 299
#define TYPE 300
#define SUBTYPE 301
#define DIR 302
#define ADDR1 303
#define ADDR2 304
#define ADDR3 305
#define ADDR4 306
#define LINK 307
#define GEQ 308
#define LEQ 309
#define NEQ 310
#define ID 311
#define EID 312
#define HID 313
#define HID6 314
#define AID 315
#define LSH 316
#define RSH 317
#define LEN 318
#define IPV6 319
#define ICMPV6 320
#define AH 321
#define ESP 322
#define VLAN 323
#define MPLS 324
#define PPPOED 325
#define PPPOES 326
#define ISO 327
#define ESIS 328
#define CLNP 329
#define ISIS 330
#define L1 331
#define L2 332
#define IIH 333
#define LSP 334
#define SNP 335
#define CSNP 336
#define PSNP 337
#define STP 338
#define IPX 339
#define NETBEUI 340
#define LANE 341
#define LLC 342
#define METAC 343
#define BCC 344
#define SC 345
#define ILMIC 346
#define OAMF4EC 347
#define OAMF4SC 348
#define OAM 349
#define OAMF4 350
#define CONNECTMSG 351
#define METACONNECT 352
#define VPI 353
#define VCI 354
#define RADIO 355
#define FISU 356
#define LSSU 357
#define MSU 358
#define SIO 359
#define OPC 360
#define DPC 361
#define SLS 362
#define AND 363
#define OR 364
#define UMINUS 365




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

/*
 * Copyright (c) 1988, 1989, 1990, 1991, 1992, 1993, 1994, 1995, 1996
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that: (1) source code distributions
 * retain the above copyright notice and this paragraph in its entirety, (2)
 * distributions including binary code include the above copyright notice and
 * this paragraph in its entirety in the documentation or other materials
 * provided with the distribution, and (3) all advertising materials mentioning
 * features or use of this software display the following acknowledgement:
 * ``This product includes software developed by the University of California,
 * Lawrence Berkeley Laboratory and its contributors.'' Neither the name of
 * the University nor the names of its contributors may be used to endorse
 * or promote products derived from this software without specific prior
 * written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */
#ifndef lint
static const char rcsid[] _U_ =
    "@(#) $Header: /tcpdump/master/libpcap/grammar.y,v 1.101 2007-11-18 02:03:52 guy Exp $ (LBL)";
#endif

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef WIN32
#include <pcap-stdinc.h>
#else /* WIN32 */
#include <sys/types.h>
#include <sys/socket.h>
#endif /* WIN32 */

#include <stdlib.h>

#ifndef WIN32
#if __STDC__
struct mbuf;
struct rtentry;
#endif

#include <netinet/in.h>
#include <arpa/inet.h>
#endif /* WIN32 */

#include <stdio.h>

#include "pcap-int.h"

#include "gencode.h"
#ifdef HAVE_NET_PFVAR_H
#include <net/if.h>
#include <net/pfvar.h>
#include <net/if_pflog.h>
#endif
#include "ieee80211.h"
#include <pcap/namedb.h>

#ifdef HAVE_OS_PROTO_H
#include "os-proto.h"
#endif

#define QSET(q, p, d, a) (q).proto = (p),\
			 (q).dir = (d),\
			 (q).addr = (a)

struct tok {
	int v;			/* value */
	const char *s;		/* string */
};

static const struct tok ieee80211_types[] = {
	{ IEEE80211_FC0_TYPE_DATA, "data" },
	{ IEEE80211_FC0_TYPE_MGT, "mgt" },
	{ IEEE80211_FC0_TYPE_MGT, "management" },
	{ IEEE80211_FC0_TYPE_CTL, "ctl" },
	{ IEEE80211_FC0_TYPE_CTL, "control" },
	{ 0, NULL }
};
static const struct tok ieee80211_mgt_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_ASSOC_REQ, "assocreq" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_REQ, "assoc-req" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_RESP, "assocresp" },
	{ IEEE80211_FC0_SUBTYPE_ASSOC_RESP, "assoc-resp" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_REQ, "reassocreq" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_REQ, "reassoc-req" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_RESP, "reassocresp" },
	{ IEEE80211_FC0_SUBTYPE_REASSOC_RESP, "reassoc-resp" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_REQ, "probereq" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_REQ, "probe-req" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_RESP, "proberesp" },
	{ IEEE80211_FC0_SUBTYPE_PROBE_RESP, "probe-resp" },
	{ IEEE80211_FC0_SUBTYPE_BEACON, "beacon" },
	{ IEEE80211_FC0_SUBTYPE_ATIM, "atim" },
	{ IEEE80211_FC0_SUBTYPE_DISASSOC, "disassoc" },
	{ IEEE80211_FC0_SUBTYPE_DISASSOC, "disassociation" },
	{ IEEE80211_FC0_SUBTYPE_AUTH, "auth" },
	{ IEEE80211_FC0_SUBTYPE_AUTH, "authentication" },
	{ IEEE80211_FC0_SUBTYPE_DEAUTH, "deauth" },
	{ IEEE80211_FC0_SUBTYPE_DEAUTH, "deauthentication" },
	{ 0, NULL }
};
static const struct tok ieee80211_ctl_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_PS_POLL, "ps-poll" },
	{ IEEE80211_FC0_SUBTYPE_RTS, "rts" },
	{ IEEE80211_FC0_SUBTYPE_CTS, "cts" },
	{ IEEE80211_FC0_SUBTYPE_ACK, "ack" },
	{ IEEE80211_FC0_SUBTYPE_CF_END, "cf-end" },
	{ IEEE80211_FC0_SUBTYPE_CF_END_ACK, "cf-end-ack" },
	{ 0, NULL }
};
static const struct tok ieee80211_data_subtypes[] = {
	{ IEEE80211_FC0_SUBTYPE_DATA, "data" },
	{ IEEE80211_FC0_SUBTYPE_CF_ACK, "data-cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_CF_POLL, "data-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_CF_ACPL, "data-cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_NODATA, "null" },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_ACK, "cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_POLL, "cf-poll"  },
	{ IEEE80211_FC0_SUBTYPE_NODATA_CF_ACPL, "cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_DATA, "qos-data" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_ACK, "qos-data-cf-ack" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_POLL, "qos-data-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_CF_ACPL, "qos-data-cf-ack-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA, "qos" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA_CF_POLL, "qos-cf-poll" },
	{ IEEE80211_FC0_SUBTYPE_QOS|IEEE80211_FC0_SUBTYPE_NODATA_CF_ACPL, "qos-cf-ack-poll" },
	{ 0, NULL }
};
struct type2tok {
	int type;
	const struct tok *tok;
};
static const struct type2tok ieee80211_type_subtypes[] = {
	{ IEEE80211_FC0_TYPE_MGT, ieee80211_mgt_subtypes },
	{ IEEE80211_FC0_TYPE_CTL, ieee80211_ctl_subtypes },
	{ IEEE80211_FC0_TYPE_DATA, ieee80211_data_subtypes },
	{ 0, NULL }
};

static int
str2tok(const char *str, const struct tok *toks)
{
	int i;

	for (i = 0; toks[i].s != NULL; i++) {
		if (pcap_strcasecmp(toks[i].s, str) == 0)
			return (toks[i].v);
	}
	return (-1);
}

int n_errors = 0;

static struct qual qerr = { Q_UNDEF, Q_UNDEF, Q_UNDEF, Q_UNDEF };

static void
yyerror(const char *msg)
{
	++n_errors;
	bpf_error("%s", msg);
	/* NOTREACHED */
}

#ifndef YYBISON
int yyparse(void);

int
pcap_parse()
{
	return (yyparse());
}
#endif

#ifdef HAVE_NET_PFVAR_H
static int
pfreason_to_num(const char *reason)
{
	const char *reasons[] = PFRES_NAMES;
	int i;

	for (i = 0; reasons[i]; i++) {
		if (pcap_strcasecmp(reason, reasons[i]) == 0)
			return (i);
	}
	bpf_error("unknown PF reason");
	/*NOTREACHED*/
}

static int
pfaction_to_num(const char *action)
{
	if (pcap_strcasecmp(action, "pass") == 0 ||
	    pcap_strcasecmp(action, "accept") == 0)
		return (PF_PASS);
	else if (pcap_strcasecmp(action, "drop") == 0 ||
		pcap_strcasecmp(action, "block") == 0)
		return (PF_DROP);
#if HAVE_PF_NAT_THROUGH_PF_NORDR
	else if (pcap_strcasecmp(action, "rdr") == 0)
		return (PF_RDR);
	else if (pcap_strcasecmp(action, "nat") == 0)
		return (PF_NAT);
	else if (pcap_strcasecmp(action, "binat") == 0)
		return (PF_BINAT);
	else if (pcap_strcasecmp(action, "nordr") == 0)
		return (PF_NORDR);
#endif
	else {
		bpf_error("unknown PF action");
		/*NOTREACHED*/
	}
}
#else /* !HAVE_NET_PFVAR_H */
static int
pfreason_to_num(const char *reason)
{
	bpf_error("libpcap was compiled on a machine without pf support");
	/*NOTREACHED*/

	/* this is to make the VC compiler happy */
	return -1;
}

static int
pfaction_to_num(const char *action)
{
	bpf_error("libpcap was compiled on a machine without pf support");
	/*NOTREACHED*/

	/* this is to make the VC compiler happy */
	return -1;
}
#endif /* HAVE_NET_PFVAR_H */


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 242 "grammar.y"
typedef union YYSTYPE {
	int i;
	bpf_u_int32 h;
	u_char *e;
	char *s;
	struct stmt *stmt;
	struct arth *a;
	struct {
		struct qual q;
		int atmfieldtype;
		int mtp3fieldtype;
		struct block *b;
	} blk;
	struct block *rblk;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 562 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 574 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   669

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  126
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  46
/* YYNRULES -- Number of rules. */
#define YYNRULES  202
/* YYNRULES -- Number of states. */
#define YYNSTATES  274

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   110,     2,     2,     2,     2,   112,     2,
     119,   118,   115,   113,     2,   114,     2,   116,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,     2,
     122,   121,   120,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   123,     2,   124,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   111,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   117
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    11,    15,    19,    23,
      27,    29,    31,    33,    35,    39,    41,    45,    49,    51,
      55,    57,    59,    61,    64,    66,    68,    70,    74,    78,
      80,    82,    84,    87,    91,    94,    97,   100,   103,   106,
     109,   113,   115,   119,   123,   125,   127,   129,   132,   134,
     137,   139,   140,   142,   144,   148,   152,   156,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   180,   182,
     184,   186,   188,   190,   192,   194,   196,   198,   200,   202,
     204,   206,   208,   210,   212,   214,   216,   218,   220,   222,
     224,   226,   228,   230,   232,   234,   236,   238,   240,   242,
     244,   246,   248,   250,   252,   254,   257,   260,   263,   266,
     271,   273,   275,   278,   280,   283,   285,   287,   289,   291,
     294,   297,   300,   303,   306,   309,   312,   317,   320,   323,
     326,   328,   330,   332,   334,   336,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   367,
     374,   378,   382,   386,   390,   394,   398,   402,   406,   409,
     413,   415,   417,   419,   421,   423,   425,   427,   431,   433,
     435,   437,   439,   441,   443,   445,   447,   449,   451,   453,
     455,   457,   459,   461,   464,   467,   471,   473,   475,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   498,   501,
     505,   507,   509
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     127,     0,    -1,   128,   129,    -1,   128,    -1,    -1,   138,
      -1,   129,   130,   138,    -1,   129,   130,   132,    -1,   129,
     131,   138,    -1,   129,   131,   132,    -1,   108,    -1,   109,
      -1,   133,    -1,   160,    -1,   135,   136,   118,    -1,    56,
      -1,    58,   116,    36,    -1,    58,     8,    58,    -1,    58,
      -1,    59,   116,    36,    -1,    59,    -1,    57,    -1,    60,
      -1,   134,   132,    -1,   110,    -1,   119,    -1,   133,    -1,
     137,   130,   132,    -1,   137,   131,   132,    -1,   160,    -1,
     136,    -1,   140,    -1,   134,   138,    -1,   141,   142,   143,
      -1,   141,   142,    -1,   141,   143,    -1,   141,    13,    -1,
     141,    14,    -1,   141,   144,    -1,   139,   132,    -1,   135,
     129,   118,    -1,   145,    -1,   157,   155,   157,    -1,   157,
     156,   157,    -1,   146,    -1,   161,    -1,   162,    -1,   163,
     164,    -1,   167,    -1,   168,   169,    -1,   145,    -1,    -1,
       4,    -1,     3,    -1,     4,   109,     3,    -1,     3,   109,
       4,    -1,     4,   108,     3,    -1,     3,   108,     4,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,     5,    -1,
       7,    -1,     9,    -1,    10,    -1,     6,    -1,    52,    -1,
      18,    -1,    16,    -1,    17,    -1,    19,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1,    33,    -1,    32,    -1,    64,    -1,    65,    -1,
      66,    -1,    67,    -1,    72,    -1,    73,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      82,    -1,    81,    -1,    74,    -1,    83,    -1,    84,    -1,
      85,    -1,   100,    -1,   141,    34,    -1,   141,    35,    -1,
      11,    36,    -1,    12,    36,    -1,    15,    36,   159,    36,
      -1,    37,    -1,    38,    -1,    68,   160,    -1,    68,    -1,
      69,   160,    -1,    69,    -1,    70,    -1,    71,    -1,   147,
      -1,   141,   148,    -1,    39,    56,    -1,    40,    56,    -1,
      41,    36,    -1,    42,    36,    -1,    43,   153,    -1,    44,
     154,    -1,    45,   149,    46,   150,    -1,    45,   149,    -1,
      46,   151,    -1,    47,   152,    -1,    36,    -1,    56,    -1,
      36,    -1,    56,    -1,    56,    -1,    36,    -1,    56,    -1,
      36,    -1,    56,    -1,    56,    -1,   120,    -1,    53,    -1,
     121,    -1,    54,    -1,   122,    -1,    55,    -1,   160,    -1,
     158,    -1,   145,   123,   157,   124,    -1,   145,   123,   157,
     125,    36,   124,    -1,   157,   113,   157,    -1,   157,   114,
     157,    -1,   157,   115,   157,    -1,   157,   116,   157,    -1,
     157,   112,   157,    -1,   157,   111,   157,    -1,   157,    61,
     157,    -1,   157,    62,   157,    -1,   114,   157,    -1,   135,
     158,   118,    -1,    63,    -1,   112,    -1,   111,    -1,   122,
      -1,   120,    -1,   121,    -1,    36,    -1,   135,   160,   118,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    92,
      -1,    93,    -1,    90,    -1,    91,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   165,
      -1,   155,    36,    -1,   156,    36,    -1,   135,   166,   118,
      -1,    36,    -1,   165,    -1,   166,   131,   165,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   170,    -1,   155,    36,    -1,   156,    36,
      -1,   135,   171,   118,    -1,    36,    -1,   170,    -1,   171,
     131,   170,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   315,   315,   319,   321,   323,   324,   325,   326,   327,
     329,   331,   333,   334,   336,   338,   339,   341,   343,   356,
     365,   374,   383,   392,   394,   396,   398,   399,   400,   402,
     404,   406,   407,   409,   410,   411,   412,   413,   414,   416,
     417,   418,   419,   421,   423,   424,   425,   426,   427,   428,
     431,   432,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   447,   448,   449,   450,   453,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     511,   512,   513,   514,   515,   516,   519,   524,   527,   531,
     534,   535,   541,   542,   562,   578,   579,   592,   593,   596,
     599,   600,   601,   603,   604,   605,   607,   608,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   624,   625,   626,   627,   628,   630,   631,   633,   634,
     635,   636,   637,   638,   639,   640,   642,   643,   644,   645,
     648,   649,   651,   652,   653,   654,   656,   663,   664,   667,
     668,   669,   672,   673,   674,   675,   677,   678,   679,   680,
     682,   691,   692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DST", "SRC", "HOST", "GATEWAY", "NET",
  "NETMASK", "PORT", "PORTRANGE", "LESS", "GREATER", "PROTO", "PROTOCHAIN",
  "CBYTE", "ARP", "RARP", "IP", "SCTP", "TCP", "UDP", "ICMP", "IGMP",
  "IGRP", "PIM", "VRRP", "ATALK", "AARP", "DECNET", "LAT", "SCA", "MOPRC",
  "MOPDL", "TK_BROADCAST", "TK_MULTICAST", "NUM", "INBOUND", "OUTBOUND",
  "PF_IFNAME", "PF_RSET", "PF_RNR", "PF_SRNR", "PF_REASON", "PF_ACTION",
  "TYPE", "SUBTYPE", "DIR", "ADDR1", "ADDR2", "ADDR3", "ADDR4", "LINK",
  "GEQ", "LEQ", "NEQ", "ID", "EID", "HID", "HID6", "AID", "LSH", "RSH",
  "LEN", "IPV6", "ICMPV6", "AH", "ESP", "VLAN", "MPLS", "PPPOED", "PPPOES",
  "ISO", "ESIS", "CLNP", "ISIS", "L1", "L2", "IIH", "LSP", "SNP", "CSNP",
  "PSNP", "STP", "IPX", "NETBEUI", "LANE", "LLC", "METAC", "BCC", "SC",
  "ILMIC", "OAMF4EC", "OAMF4SC", "OAM", "OAMF4", "CONNECTMSG",
  "METACONNECT", "VPI", "VCI", "RADIO", "FISU", "LSSU", "MSU", "SIO",
  "OPC", "DPC", "SLS", "AND", "OR", "'!'", "'|'", "'&'", "'+'", "'-'",
  "'*'", "'/'", "UMINUS", "')'", "'('", "'>'", "'='", "'<'", "'['", "']'",
  "':'", "$accept", "prog", "null", "expr", "and", "or", "id", "nid",
  "not", "paren", "pid", "qid", "term", "head", "rterm", "pqual", "dqual",
  "aqual", "ndaqual", "pname", "other", "pfvar", "p80211", "type",
  "subtype", "type_subtype", "dir", "reason", "action", "relop", "irelop",
  "arth", "narth", "byteop", "pnum", "atmtype", "atmmultitype", "atmfield",
  "atmvalue", "atmfieldvalue", "atmlistvalue", "mtp2type", "mtp3field",
  "mtp3value", "mtp3fieldvalue", "mtp3listvalue", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      33,   124,    38,    43,    45,    42,    47,   365,    41,    40,
      62,    61,    60,    91,    93,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   126,   127,   127,   128,   129,   129,   129,   129,   129,
     130,   131,   132,   132,   132,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     141,   141,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   143,   144,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   147,   147,   147,   147,   148,   148,   148,   148,
     149,   149,   150,   150,   151,   152,   152,   153,   153,   154,
     155,   155,   155,   156,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     163,   163,   164,   164,   164,   164,   165,   166,   166,   167,
     167,   167,   168,   168,   168,   168,   169,   169,   169,   169,
     170,   171,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     0,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     1,
       1,     1,     2,     3,     2,     2,     2,     2,     2,     2,
       3,     1,     3,     3,     1,     1,     1,     2,     1,     2,
       1,     0,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     4,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     4,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       4,     0,    51,     1,     0,     0,     0,    69,    70,    68,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    85,    84,   166,   110,   111,     0,     0,
       0,     0,     0,     0,    67,   160,    86,    87,    88,    89,
     113,   115,   116,   117,    90,    91,   100,    92,    93,    94,
      95,    96,    97,    99,    98,   101,   102,   103,   168,   169,
     170,   171,   174,   175,   172,   173,   176,   177,   178,   179,
     180,   181,   104,   189,   190,   191,   192,   193,   194,   195,
      24,     0,    25,     2,    51,    51,     5,     0,    31,     0,
      50,    44,   118,     0,   147,   146,    45,    46,     0,    48,
       0,   107,   108,     0,   120,   121,   122,   123,   137,   138,
     124,   139,   125,     0,   112,   114,     0,     0,   158,    10,
      11,    51,    51,    32,     0,   147,   146,    15,    21,    18,
      20,    22,    39,    12,     0,     0,    13,    53,    52,    62,
      66,    63,    64,    65,    36,    37,   105,   106,     0,     0,
       0,    58,    59,    60,    61,    34,    35,    38,   119,     0,
     141,   143,   145,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   142,   144,     0,     0,   186,     0,     0,     0,
      47,   182,   200,     0,     0,     0,    49,   196,   162,   161,
     164,   165,   163,     0,     0,     0,     7,    51,    51,     6,
     146,     9,     8,    40,   159,   167,     0,     0,     0,    23,
      26,    30,     0,    29,     0,     0,     0,     0,   130,   131,
     127,   134,   128,   135,   136,   129,    33,     0,   156,   157,
     155,   154,   150,   151,   152,   153,    42,    43,   187,     0,
     183,   184,   201,     0,   197,   198,   109,   146,    17,    16,
      19,    14,     0,     0,    57,    55,    56,    54,     0,   148,
       0,   185,     0,   199,     0,    27,    28,   132,   133,   126,
       0,   188,   202,   149
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,   124,   121,   122,   209,   133,   134,   116,
     211,   212,    86,    87,    88,    89,   155,   156,   157,   117,
      91,    92,   158,   220,   269,   222,   225,   110,   112,   174,
     175,    93,    94,   193,    95,    96,    97,    98,   180,   181,
     239,    99,   100,   186,   187,   243
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -198
static const short yypact[] =
{
    -198,    19,   216,  -198,     1,    40,    61,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   -27,    54,
      81,    82,   -13,    58,  -198,  -198,  -198,  -198,  -198,  -198,
     -24,   -24,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,   530,  -198,   -54,   426,   426,  -198,   151,  -198,   618,
      13,  -198,  -198,   525,  -198,  -198,  -198,  -198,    52,  -198,
     102,  -198,  -198,   -90,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   -24,  -198,  -198,   530,   -89,  -198,  -198,
    -198,   321,   321,  -198,   -60,    12,    17,  -198,  -198,    -4,
      33,  -198,  -198,  -198,   151,   151,  -198,   -29,    -6,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   -12,    67,
     -11,  -198,  -198,  -198,  -198,   170,  -198,  -198,  -198,   530,
    -198,  -198,  -198,   530,   530,   530,   530,   530,   530,   530,
     530,  -198,  -198,  -198,   530,   530,  -198,   114,   115,   118,
    -198,  -198,  -198,   122,   123,   128,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   129,    17,   -44,  -198,   321,   321,  -198,
      16,  -198,  -198,  -198,  -198,  -198,   110,   133,   134,  -198,
    -198,    60,   -54,    17,   172,   181,   183,   185,  -198,  -198,
     143,  -198,  -198,  -198,  -198,  -198,  -198,   -51,    68,    68,
      78,    99,    -7,    -7,  -198,  -198,   -44,   -44,  -198,   -34,
    -198,  -198,  -198,    -5,  -198,  -198,  -198,   -52,  -198,  -198,
    -198,  -198,   151,   151,  -198,  -198,  -198,  -198,    -9,  -198,
     161,  -198,   114,  -198,   122,  -198,  -198,  -198,  -198,  -198,
      74,  -198,  -198,  -198
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -198,  -198,  -198,   197,     8,  -197,   -86,  -121,     5,    -2,
    -198,  -198,   -81,  -198,  -198,  -198,  -198,    45,  -198,     7,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   -72,
     -47,   -22,   -83,  -198,   -35,  -198,  -198,  -198,  -198,  -169,
    -198,  -198,  -198,  -198,  -163,  -198
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -42
static const short yytable[] =
{
      85,   132,   125,   123,   206,   114,   115,    84,   238,    90,
     163,   164,    25,   -41,   210,   253,   -13,   163,   164,     3,
     242,   188,   189,   108,   218,   223,   178,   267,   184,   104,
     190,   191,   192,   125,   159,   196,   201,   101,   113,   113,
     199,   202,   262,   109,   219,   224,   264,   268,   119,   120,
     126,   179,   136,   185,   119,   120,   -29,   -29,   203,   118,
     165,   166,   167,   168,   169,   170,   205,   165,   166,   167,
     168,   169,   170,   259,   260,   120,   102,   210,   194,   214,
     215,   126,    85,    85,   261,   135,   200,   200,   176,    84,
      84,    90,    90,   271,   195,    82,   177,   103,   183,   136,
     213,   272,   216,   217,   120,   160,   161,   162,   169,   170,
     105,   113,   207,   263,   111,   125,   123,   106,   107,   198,
     198,   -41,   -41,   221,   -13,   -13,   197,   197,    90,    90,
     204,   -41,   135,   113,   -13,   205,   159,   227,   182,   163,
     164,   228,   229,   230,   231,   232,   233,   234,   235,   208,
     176,   240,   236,   237,   241,   160,   161,   162,   182,   244,
     163,   164,   200,   247,   245,   246,   265,   266,   248,   249,
     250,    82,   171,   172,   173,   139,   254,   141,   251,   142,
     143,   167,   168,   169,   170,   255,   256,    25,   257,   258,
     166,   167,   168,   169,   170,   198,    85,   270,   273,    83,
     226,     0,   197,   197,    90,    90,     0,   127,   128,   129,
     130,   131,   167,   168,   169,   170,    -3,   136,   136,     0,
     252,    82,   171,   172,   173,     0,     0,     4,     5,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     135,   135,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    80,     0,     0,     0,     0,     0,     0,    34,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,     0,     0,     0,
      81,     0,     4,     5,     0,    82,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,   127,   128,   129,
     130,   131,     0,     0,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
       0,    80,     0,     0,     0,    81,     0,     4,     5,     0,
      82,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,     0,     0,     0,
      81,     0,     0,     0,     0,    82,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   160,   161,
     162,     0,    34,     0,     0,     0,   163,   164,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,     0,     0,
       0,     0,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,   137,   138,   139,   140,   141,     0,   142,   143,     0,
      72,   144,   145,     0,     0,     0,   165,   166,   167,   168,
     169,   170,     0,     0,    81,   171,   172,   173,     0,    82,
       0,     0,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   150,   151,   152,   153,   154
};

static const short yycheck[] =
{
       2,    87,    85,    84,     8,    40,    41,     2,   177,     2,
      61,    62,    36,     0,   135,   212,     0,    61,    62,     0,
     183,   111,   112,    36,    36,    36,    98,    36,   100,    56,
     120,   121,   122,   116,   123,   121,   122,    36,    40,    41,
     121,   122,   239,    56,    56,    56,   243,    56,   108,   109,
      85,    98,    87,   100,   108,   109,   108,   109,   118,    81,
     111,   112,   113,   114,   115,   116,   118,   111,   112,   113,
     114,   115,   116,   124,   125,   109,    36,   198,   113,   108,
     109,   116,    84,    85,   118,    87,   121,   122,    36,    84,
      85,    84,    85,   262,   116,   119,    98,    36,   100,   134,
     135,   264,   108,   109,   109,    53,    54,    55,   115,   116,
      56,   113,   116,   118,    56,   198,   197,    36,    36,   121,
     122,   108,   109,    56,   108,   109,   121,   122,   121,   122,
     118,   118,   134,   135,   118,   118,   123,   159,    36,    61,
      62,   163,   164,   165,   166,   167,   168,   169,   170,   116,
      36,    36,   174,   175,    36,    53,    54,    55,    36,    36,
      61,    62,   197,   198,    36,    36,   252,   253,    58,    36,
      36,   119,   120,   121,   122,     5,     4,     7,   118,     9,
      10,   113,   114,   115,   116,     4,     3,    36,     3,    46,
     112,   113,   114,   115,   116,   197,   198,    36,   124,     2,
     155,    -1,   197,   198,   197,   198,    -1,    56,    57,    58,
      59,    60,   113,   114,   115,   116,     0,   252,   253,    -1,
     212,   119,   120,   121,   122,    -1,    -1,    11,    12,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     252,   253,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   110,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,   110,    -1,    -1,    -1,
     114,    -1,    11,    12,    -1,   119,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,   110,    -1,    -1,    -1,   114,    -1,    11,    12,    -1,
     119,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,   110,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,   119,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    52,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    -1,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
     100,    13,    14,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,    -1,    -1,   114,   120,   121,   122,    -1,   119,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,   127,   128,     0,    11,    12,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    52,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     110,   114,   119,   129,   134,   135,   138,   139,   140,   141,
     145,   146,   147,   157,   158,   160,   161,   162,   163,   167,
     168,    36,    36,    36,    56,    56,    36,    36,    36,    56,
     153,    56,   154,   135,   160,   160,   135,   145,   157,   108,
     109,   130,   131,   138,   129,   158,   160,    56,    57,    58,
      59,    60,   132,   133,   134,   135,   160,     3,     4,     5,
       6,     7,     9,    10,    13,    14,    34,    35,    45,    46,
      47,    48,    49,    50,    51,   142,   143,   144,   148,   123,
      53,    54,    55,    61,    62,   111,   112,   113,   114,   115,
     116,   120,   121,   122,   155,   156,    36,   135,   155,   156,
     164,   165,    36,   135,   155,   156,   169,   170,   111,   112,
     120,   121,   122,   159,   160,   157,   132,   134,   135,   138,
     160,   132,   138,   118,   118,   118,     8,   116,   116,   132,
     133,   136,   137,   160,   108,   109,   108,   109,    36,    56,
     149,    56,   151,    36,    56,   152,   143,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   165,   166,
      36,    36,   170,   171,    36,    36,    36,   160,    58,    36,
      36,   118,   130,   131,     4,     4,     3,     3,    46,   124,
     125,   118,   131,   118,   131,   132,   132,    36,    56,   150,
      36,   165,   170,   124
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 316 "grammar.y"
    {
	finish_parse(yyvsp[0].blk.b);
}
    break;

  case 4:
#line 321 "grammar.y"
    { yyval.blk.q = qerr; }
    break;

  case 6:
#line 324 "grammar.y"
    { gen_and(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 7:
#line 325 "grammar.y"
    { gen_and(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 8:
#line 326 "grammar.y"
    { gen_or(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 9:
#line 327 "grammar.y"
    { gen_or(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 10:
#line 329 "grammar.y"
    { yyval.blk = yyvsp[-1].blk; }
    break;

  case 11:
#line 331 "grammar.y"
    { yyval.blk = yyvsp[-1].blk; }
    break;

  case 13:
#line 334 "grammar.y"
    { yyval.blk.b = gen_ncode(NULL, (bpf_u_int32)yyvsp[0].i,
						   yyval.blk.q = yyvsp[-1].blk.q); }
    break;

  case 14:
#line 336 "grammar.y"
    { yyval.blk = yyvsp[-1].blk; }
    break;

  case 15:
#line 338 "grammar.y"
    { yyval.blk.b = gen_scode(yyvsp[0].s, yyval.blk.q = yyvsp[-1].blk.q); }
    break;

  case 16:
#line 339 "grammar.y"
    { yyval.blk.b = gen_mcode(yyvsp[-2].s, NULL, yyvsp[0].i,
				    yyval.blk.q = yyvsp[-3].blk.q); }
    break;

  case 17:
#line 341 "grammar.y"
    { yyval.blk.b = gen_mcode(yyvsp[-2].s, yyvsp[0].s, 0,
				    yyval.blk.q = yyvsp[-3].blk.q); }
    break;

  case 18:
#line 343 "grammar.y"
    {
				  /* Decide how to parse HID based on proto */
				  yyval.blk.q = yyvsp[-1].blk.q;
				  if (yyval.blk.q.addr == Q_PORT)
				  	bpf_error("'port' modifier applied to ip host");
				  else if (yyval.blk.q.addr == Q_PORTRANGE)
				  	bpf_error("'portrange' modifier applied to ip host");
				  else if (yyval.blk.q.addr == Q_PROTO)
				  	bpf_error("'proto' modifier applied to ip host");
				  else if (yyval.blk.q.addr == Q_PROTOCHAIN)
				  	bpf_error("'protochain' modifier applied to ip host");
				  yyval.blk.b = gen_ncode(yyvsp[0].s, 0, yyval.blk.q);
				}
    break;

  case 19:
#line 356 "grammar.y"
    {
#ifdef INET6
				  yyval.blk.b = gen_mcode6(yyvsp[-2].s, NULL, yyvsp[0].i,
				    yyval.blk.q = yyvsp[-3].blk.q);
#else
				  bpf_error("'ip6addr/prefixlen' not supported "
					"in this configuration");
#endif /*INET6*/
				}
    break;

  case 20:
#line 365 "grammar.y"
    {
#ifdef INET6
				  yyval.blk.b = gen_mcode6(yyvsp[0].s, 0, 128,
				    yyval.blk.q = yyvsp[-1].blk.q);
#else
				  bpf_error("'ip6addr' not supported "
					"in this configuration");
#endif /*INET6*/
				}
    break;

  case 21:
#line 374 "grammar.y"
    { 
				  yyval.blk.b = gen_ecode(yyvsp[0].e, yyval.blk.q = yyvsp[-1].blk.q);
				  /*
				   * $1 was allocated by "pcap_ether_aton()",
				   * so we must free it now that we're done
				   * with it.
				   */
				  free(yyvsp[0].e);
				}
    break;

  case 22:
#line 383 "grammar.y"
    {
				  yyval.blk.b = gen_acode(yyvsp[0].e, yyval.blk.q = yyvsp[-1].blk.q);
				  /*
				   * $1 was allocated by "pcap_ether_aton()",
				   * so we must free it now that we're done
				   * with it.
				   */
				  free(yyvsp[0].e);
				}
    break;

  case 23:
#line 392 "grammar.y"
    { gen_not(yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 24:
#line 394 "grammar.y"
    { yyval.blk = yyvsp[-1].blk; }
    break;

  case 25:
#line 396 "grammar.y"
    { yyval.blk = yyvsp[-1].blk; }
    break;

  case 27:
#line 399 "grammar.y"
    { gen_and(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 28:
#line 400 "grammar.y"
    { gen_or(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 29:
#line 402 "grammar.y"
    { yyval.blk.b = gen_ncode(NULL, (bpf_u_int32)yyvsp[0].i,
						   yyval.blk.q = yyvsp[-1].blk.q); }
    break;

  case 32:
#line 407 "grammar.y"
    { gen_not(yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 33:
#line 409 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-2].i, yyvsp[-1].i, yyvsp[0].i); }
    break;

  case 34:
#line 410 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-1].i, yyvsp[0].i, Q_DEFAULT); }
    break;

  case 35:
#line 411 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-1].i, Q_DEFAULT, yyvsp[0].i); }
    break;

  case 36:
#line 412 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-1].i, Q_DEFAULT, Q_PROTO); }
    break;

  case 37:
#line 413 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-1].i, Q_DEFAULT, Q_PROTOCHAIN); }
    break;

  case 38:
#line 414 "grammar.y"
    { QSET(yyval.blk.q, yyvsp[-1].i, Q_DEFAULT, yyvsp[0].i); }
    break;

  case 39:
#line 416 "grammar.y"
    { yyval.blk = yyvsp[0].blk; }
    break;

  case 40:
#line 417 "grammar.y"
    { yyval.blk.b = yyvsp[-1].blk.b; yyval.blk.q = yyvsp[-2].blk.q; }
    break;

  case 41:
#line 418 "grammar.y"
    { yyval.blk.b = gen_proto_abbrev(yyvsp[0].i); yyval.blk.q = qerr; }
    break;

  case 42:
#line 419 "grammar.y"
    { yyval.blk.b = gen_relation(yyvsp[-1].i, yyvsp[-2].a, yyvsp[0].a, 0);
				  yyval.blk.q = qerr; }
    break;

  case 43:
#line 421 "grammar.y"
    { yyval.blk.b = gen_relation(yyvsp[-1].i, yyvsp[-2].a, yyvsp[0].a, 1);
				  yyval.blk.q = qerr; }
    break;

  case 44:
#line 423 "grammar.y"
    { yyval.blk.b = yyvsp[0].rblk; yyval.blk.q = qerr; }
    break;

  case 45:
#line 424 "grammar.y"
    { yyval.blk.b = gen_atmtype_abbrev(yyvsp[0].i); yyval.blk.q = qerr; }
    break;

  case 46:
#line 425 "grammar.y"
    { yyval.blk.b = gen_atmmulti_abbrev(yyvsp[0].i); yyval.blk.q = qerr; }
    break;

  case 47:
#line 426 "grammar.y"
    { yyval.blk.b = yyvsp[0].blk.b; yyval.blk.q = qerr; }
    break;

  case 48:
#line 427 "grammar.y"
    { yyval.blk.b = gen_mtp2type_abbrev(yyvsp[0].i); yyval.blk.q = qerr; }
    break;

  case 49:
#line 428 "grammar.y"
    { yyval.blk.b = yyvsp[0].blk.b; yyval.blk.q = qerr; }
    break;

  case 51:
#line 432 "grammar.y"
    { yyval.i = Q_DEFAULT; }
    break;

  case 52:
#line 435 "grammar.y"
    { yyval.i = Q_SRC; }
    break;

  case 53:
#line 436 "grammar.y"
    { yyval.i = Q_DST; }
    break;

  case 54:
#line 437 "grammar.y"
    { yyval.i = Q_OR; }
    break;

  case 55:
#line 438 "grammar.y"
    { yyval.i = Q_OR; }
    break;

  case 56:
#line 439 "grammar.y"
    { yyval.i = Q_AND; }
    break;

  case 57:
#line 440 "grammar.y"
    { yyval.i = Q_AND; }
    break;

  case 58:
#line 441 "grammar.y"
    { yyval.i = Q_ADDR1; }
    break;

  case 59:
#line 442 "grammar.y"
    { yyval.i = Q_ADDR2; }
    break;

  case 60:
#line 443 "grammar.y"
    { yyval.i = Q_ADDR3; }
    break;

  case 61:
#line 444 "grammar.y"
    { yyval.i = Q_ADDR4; }
    break;

  case 62:
#line 447 "grammar.y"
    { yyval.i = Q_HOST; }
    break;

  case 63:
#line 448 "grammar.y"
    { yyval.i = Q_NET; }
    break;

  case 64:
#line 449 "grammar.y"
    { yyval.i = Q_PORT; }
    break;

  case 65:
#line 450 "grammar.y"
    { yyval.i = Q_PORTRANGE; }
    break;

  case 66:
#line 453 "grammar.y"
    { yyval.i = Q_GATEWAY; }
    break;

  case 67:
#line 455 "grammar.y"
    { yyval.i = Q_LINK; }
    break;

  case 68:
#line 456 "grammar.y"
    { yyval.i = Q_IP; }
    break;

  case 69:
#line 457 "grammar.y"
    { yyval.i = Q_ARP; }
    break;

  case 70:
#line 458 "grammar.y"
    { yyval.i = Q_RARP; }
    break;

  case 71:
#line 459 "grammar.y"
    { yyval.i = Q_SCTP; }
    break;

  case 72:
#line 460 "grammar.y"
    { yyval.i = Q_TCP; }
    break;

  case 73:
#line 461 "grammar.y"
    { yyval.i = Q_UDP; }
    break;

  case 74:
#line 462 "grammar.y"
    { yyval.i = Q_ICMP; }
    break;

  case 75:
#line 463 "grammar.y"
    { yyval.i = Q_IGMP; }
    break;

  case 76:
#line 464 "grammar.y"
    { yyval.i = Q_IGRP; }
    break;

  case 77:
#line 465 "grammar.y"
    { yyval.i = Q_PIM; }
    break;

  case 78:
#line 466 "grammar.y"
    { yyval.i = Q_VRRP; }
    break;

  case 79:
#line 467 "grammar.y"
    { yyval.i = Q_ATALK; }
    break;

  case 80:
#line 468 "grammar.y"
    { yyval.i = Q_AARP; }
    break;

  case 81:
#line 469 "grammar.y"
    { yyval.i = Q_DECNET; }
    break;

  case 82:
#line 470 "grammar.y"
    { yyval.i = Q_LAT; }
    break;

  case 83:
#line 471 "grammar.y"
    { yyval.i = Q_SCA; }
    break;

  case 84:
#line 472 "grammar.y"
    { yyval.i = Q_MOPDL; }
    break;

  case 85:
#line 473 "grammar.y"
    { yyval.i = Q_MOPRC; }
    break;

  case 86:
#line 474 "grammar.y"
    { yyval.i = Q_IPV6; }
    break;

  case 87:
#line 475 "grammar.y"
    { yyval.i = Q_ICMPV6; }
    break;

  case 88:
#line 476 "grammar.y"
    { yyval.i = Q_AH; }
    break;

  case 89:
#line 477 "grammar.y"
    { yyval.i = Q_ESP; }
    break;

  case 90:
#line 478 "grammar.y"
    { yyval.i = Q_ISO; }
    break;

  case 91:
#line 479 "grammar.y"
    { yyval.i = Q_ESIS; }
    break;

  case 92:
#line 480 "grammar.y"
    { yyval.i = Q_ISIS; }
    break;

  case 93:
#line 481 "grammar.y"
    { yyval.i = Q_ISIS_L1; }
    break;

  case 94:
#line 482 "grammar.y"
    { yyval.i = Q_ISIS_L2; }
    break;

  case 95:
#line 483 "grammar.y"
    { yyval.i = Q_ISIS_IIH; }
    break;

  case 96:
#line 484 "grammar.y"
    { yyval.i = Q_ISIS_LSP; }
    break;

  case 97:
#line 485 "grammar.y"
    { yyval.i = Q_ISIS_SNP; }
    break;

  case 98:
#line 486 "grammar.y"
    { yyval.i = Q_ISIS_PSNP; }
    break;

  case 99:
#line 487 "grammar.y"
    { yyval.i = Q_ISIS_CSNP; }
    break;

  case 100:
#line 488 "grammar.y"
    { yyval.i = Q_CLNP; }
    break;

  case 101:
#line 489 "grammar.y"
    { yyval.i = Q_STP; }
    break;

  case 102:
#line 490 "grammar.y"
    { yyval.i = Q_IPX; }
    break;

  case 103:
#line 491 "grammar.y"
    { yyval.i = Q_NETBEUI; }
    break;

  case 104:
#line 492 "grammar.y"
    { yyval.i = Q_RADIO; }
    break;

  case 105:
#line 494 "grammar.y"
    { yyval.rblk = gen_broadcast(yyvsp[-1].i); }
    break;

  case 106:
#line 495 "grammar.y"
    { yyval.rblk = gen_multicast(yyvsp[-1].i); }
    break;

  case 107:
#line 496 "grammar.y"
    { yyval.rblk = gen_less(yyvsp[0].i); }
    break;

  case 108:
#line 497 "grammar.y"
    { yyval.rblk = gen_greater(yyvsp[0].i); }
    break;

  case 109:
#line 498 "grammar.y"
    { yyval.rblk = gen_byteop(yyvsp[-1].i, yyvsp[-2].i, yyvsp[0].i); }
    break;

  case 110:
#line 499 "grammar.y"
    { yyval.rblk = gen_inbound(0); }
    break;

  case 111:
#line 500 "grammar.y"
    { yyval.rblk = gen_inbound(1); }
    break;

  case 112:
#line 501 "grammar.y"
    { yyval.rblk = gen_vlan(yyvsp[0].i); }
    break;

  case 113:
#line 502 "grammar.y"
    { yyval.rblk = gen_vlan(-1); }
    break;

  case 114:
#line 503 "grammar.y"
    { yyval.rblk = gen_mpls(yyvsp[0].i); }
    break;

  case 115:
#line 504 "grammar.y"
    { yyval.rblk = gen_mpls(-1); }
    break;

  case 116:
#line 505 "grammar.y"
    { yyval.rblk = gen_pppoed(); }
    break;

  case 117:
#line 506 "grammar.y"
    { yyval.rblk = gen_pppoes(); }
    break;

  case 118:
#line 507 "grammar.y"
    { yyval.rblk = yyvsp[0].rblk; }
    break;

  case 119:
#line 508 "grammar.y"
    { yyval.rblk = yyvsp[0].rblk; }
    break;

  case 120:
#line 511 "grammar.y"
    { yyval.rblk = gen_pf_ifname(yyvsp[0].s); }
    break;

  case 121:
#line 512 "grammar.y"
    { yyval.rblk = gen_pf_ruleset(yyvsp[0].s); }
    break;

  case 122:
#line 513 "grammar.y"
    { yyval.rblk = gen_pf_rnr(yyvsp[0].i); }
    break;

  case 123:
#line 514 "grammar.y"
    { yyval.rblk = gen_pf_srnr(yyvsp[0].i); }
    break;

  case 124:
#line 515 "grammar.y"
    { yyval.rblk = gen_pf_reason(yyvsp[0].i); }
    break;

  case 125:
#line 516 "grammar.y"
    { yyval.rblk = gen_pf_action(yyvsp[0].i); }
    break;

  case 126:
#line 520 "grammar.y"
    { yyval.rblk = gen_p80211_type(yyvsp[-2].i | yyvsp[0].i,
					IEEE80211_FC0_TYPE_MASK |
					IEEE80211_FC0_SUBTYPE_MASK);
				}
    break;

  case 127:
#line 524 "grammar.y"
    { yyval.rblk = gen_p80211_type(yyvsp[0].i,
					IEEE80211_FC0_TYPE_MASK);
				}
    break;

  case 128:
#line 527 "grammar.y"
    { yyval.rblk = gen_p80211_type(yyvsp[0].i,
					IEEE80211_FC0_TYPE_MASK |
					IEEE80211_FC0_SUBTYPE_MASK);
				}
    break;

  case 129:
#line 531 "grammar.y"
    { yyval.rblk = gen_p80211_fcdir(yyvsp[0].i); }
    break;

  case 131:
#line 535 "grammar.y"
    { yyval.i = str2tok(yyvsp[0].s, ieee80211_types);
				  if (yyval.i == -1)
				  	bpf_error("unknown 802.11 type name");
				}
    break;

  case 133:
#line 542 "grammar.y"
    { const struct tok *types = NULL;
				  int i;
				  for (i = 0;; i++) {
				  	if (ieee80211_type_subtypes[i].tok == NULL) {
				  		/* Ran out of types */
						bpf_error("unknown 802.11 type");
						break;
					}
					if (yyvsp[-2].i == ieee80211_type_subtypes[i].type) {
						types = ieee80211_type_subtypes[i].tok;
						break;
					}
				  }

				  yyval.i = str2tok(yyvsp[0].s, types);
				  if (yyval.i == -1)
					bpf_error("unknown 802.11 subtype name");
				}
    break;

  case 134:
#line 562 "grammar.y"
    { int i;
				  for (i = 0;; i++) {
				  	if (ieee80211_type_subtypes[i].tok == NULL) {
				  		/* Ran out of types */
						bpf_error("unknown 802.11 type name");
						break;
					}
					yyval.i = str2tok(yyvsp[0].s, ieee80211_type_subtypes[i].tok);
					if (yyval.i != -1) {
						yyval.i |= ieee80211_type_subtypes[i].type;
						break;
					}
				  }
				}
    break;

  case 136:
#line 579 "grammar.y"
    { if (pcap_strcasecmp(yyvsp[0].s, "nods") == 0)
					yyval.i = IEEE80211_FC1_DIR_NODS;
				  else if (pcap_strcasecmp(yyvsp[0].s, "tods") == 0)
					yyval.i = IEEE80211_FC1_DIR_TODS;
				  else if (pcap_strcasecmp(yyvsp[0].s, "fromds") == 0)
					yyval.i = IEEE80211_FC1_DIR_FROMDS;
				  else if (pcap_strcasecmp(yyvsp[0].s, "dstods") == 0)
					yyval.i = IEEE80211_FC1_DIR_DSTODS;
				  else
					bpf_error("unknown 802.11 direction");
				}
    break;

  case 137:
#line 592 "grammar.y"
    { yyval.i = yyvsp[0].i; }
    break;

  case 138:
#line 593 "grammar.y"
    { yyval.i = pfreason_to_num(yyvsp[0].s); }
    break;

  case 139:
#line 596 "grammar.y"
    { yyval.i = pfaction_to_num(yyvsp[0].s); }
    break;

  case 140:
#line 599 "grammar.y"
    { yyval.i = BPF_JGT; }
    break;

  case 141:
#line 600 "grammar.y"
    { yyval.i = BPF_JGE; }
    break;

  case 142:
#line 601 "grammar.y"
    { yyval.i = BPF_JEQ; }
    break;

  case 143:
#line 603 "grammar.y"
    { yyval.i = BPF_JGT; }
    break;

  case 144:
#line 604 "grammar.y"
    { yyval.i = BPF_JGE; }
    break;

  case 145:
#line 605 "grammar.y"
    { yyval.i = BPF_JEQ; }
    break;

  case 146:
#line 607 "grammar.y"
    { yyval.a = gen_loadi(yyvsp[0].i); }
    break;

  case 148:
#line 610 "grammar.y"
    { yyval.a = gen_load(yyvsp[-3].i, yyvsp[-1].a, 1); }
    break;

  case 149:
#line 611 "grammar.y"
    { yyval.a = gen_load(yyvsp[-5].i, yyvsp[-3].a, yyvsp[-1].i); }
    break;

  case 150:
#line 612 "grammar.y"
    { yyval.a = gen_arth(BPF_ADD, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 151:
#line 613 "grammar.y"
    { yyval.a = gen_arth(BPF_SUB, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 152:
#line 614 "grammar.y"
    { yyval.a = gen_arth(BPF_MUL, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 153:
#line 615 "grammar.y"
    { yyval.a = gen_arth(BPF_DIV, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 154:
#line 616 "grammar.y"
    { yyval.a = gen_arth(BPF_AND, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 155:
#line 617 "grammar.y"
    { yyval.a = gen_arth(BPF_OR, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 156:
#line 618 "grammar.y"
    { yyval.a = gen_arth(BPF_LSH, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 157:
#line 619 "grammar.y"
    { yyval.a = gen_arth(BPF_RSH, yyvsp[-2].a, yyvsp[0].a); }
    break;

  case 158:
#line 620 "grammar.y"
    { yyval.a = gen_neg(yyvsp[0].a); }
    break;

  case 159:
#line 621 "grammar.y"
    { yyval.a = yyvsp[-1].a; }
    break;

  case 160:
#line 622 "grammar.y"
    { yyval.a = gen_loadlen(); }
    break;

  case 161:
#line 624 "grammar.y"
    { yyval.i = '&'; }
    break;

  case 162:
#line 625 "grammar.y"
    { yyval.i = '|'; }
    break;

  case 163:
#line 626 "grammar.y"
    { yyval.i = '<'; }
    break;

  case 164:
#line 627 "grammar.y"
    { yyval.i = '>'; }
    break;

  case 165:
#line 628 "grammar.y"
    { yyval.i = '='; }
    break;

  case 167:
#line 631 "grammar.y"
    { yyval.i = yyvsp[-1].i; }
    break;

  case 168:
#line 633 "grammar.y"
    { yyval.i = A_LANE; }
    break;

  case 169:
#line 634 "grammar.y"
    { yyval.i = A_LLC; }
    break;

  case 170:
#line 635 "grammar.y"
    { yyval.i = A_METAC;	}
    break;

  case 171:
#line 636 "grammar.y"
    { yyval.i = A_BCC; }
    break;

  case 172:
#line 637 "grammar.y"
    { yyval.i = A_OAMF4EC; }
    break;

  case 173:
#line 638 "grammar.y"
    { yyval.i = A_OAMF4SC; }
    break;

  case 174:
#line 639 "grammar.y"
    { yyval.i = A_SC; }
    break;

  case 175:
#line 640 "grammar.y"
    { yyval.i = A_ILMIC; }
    break;

  case 176:
#line 642 "grammar.y"
    { yyval.i = A_OAM; }
    break;

  case 177:
#line 643 "grammar.y"
    { yyval.i = A_OAMF4; }
    break;

  case 178:
#line 644 "grammar.y"
    { yyval.i = A_CONNECTMSG; }
    break;

  case 179:
#line 645 "grammar.y"
    { yyval.i = A_METACONNECT; }
    break;

  case 180:
#line 648 "grammar.y"
    { yyval.blk.atmfieldtype = A_VPI; }
    break;

  case 181:
#line 649 "grammar.y"
    { yyval.blk.atmfieldtype = A_VCI; }
    break;

  case 183:
#line 652 "grammar.y"
    { yyval.blk.b = gen_atmfield_code(yyvsp[-2].blk.atmfieldtype, (bpf_int32)yyvsp[0].i, (bpf_u_int32)yyvsp[-1].i, 0); }
    break;

  case 184:
#line 653 "grammar.y"
    { yyval.blk.b = gen_atmfield_code(yyvsp[-2].blk.atmfieldtype, (bpf_int32)yyvsp[0].i, (bpf_u_int32)yyvsp[-1].i, 1); }
    break;

  case 185:
#line 654 "grammar.y"
    { yyval.blk.b = yyvsp[-1].blk.b; yyval.blk.q = qerr; }
    break;

  case 186:
#line 656 "grammar.y"
    {
	yyval.blk.atmfieldtype = yyvsp[-1].blk.atmfieldtype;
	if (yyval.blk.atmfieldtype == A_VPI ||
	    yyval.blk.atmfieldtype == A_VCI)
		yyval.blk.b = gen_atmfield_code(yyval.blk.atmfieldtype, (bpf_int32) yyvsp[0].i, BPF_JEQ, 0);
	}
    break;

  case 188:
#line 664 "grammar.y"
    { gen_or(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;

  case 189:
#line 667 "grammar.y"
    { yyval.i = M_FISU; }
    break;

  case 190:
#line 668 "grammar.y"
    { yyval.i = M_LSSU; }
    break;

  case 191:
#line 669 "grammar.y"
    { yyval.i = M_MSU; }
    break;

  case 192:
#line 672 "grammar.y"
    { yyval.blk.mtp3fieldtype = M_SIO; }
    break;

  case 193:
#line 673 "grammar.y"
    { yyval.blk.mtp3fieldtype = M_OPC; }
    break;

  case 194:
#line 674 "grammar.y"
    { yyval.blk.mtp3fieldtype = M_DPC; }
    break;

  case 195:
#line 675 "grammar.y"
    { yyval.blk.mtp3fieldtype = M_SLS; }
    break;

  case 197:
#line 678 "grammar.y"
    { yyval.blk.b = gen_mtp3field_code(yyvsp[-2].blk.mtp3fieldtype, (u_int)yyvsp[0].i, (u_int)yyvsp[-1].i, 0); }
    break;

  case 198:
#line 679 "grammar.y"
    { yyval.blk.b = gen_mtp3field_code(yyvsp[-2].blk.mtp3fieldtype, (u_int)yyvsp[0].i, (u_int)yyvsp[-1].i, 1); }
    break;

  case 199:
#line 680 "grammar.y"
    { yyval.blk.b = yyvsp[-1].blk.b; yyval.blk.q = qerr; }
    break;

  case 200:
#line 682 "grammar.y"
    {
	yyval.blk.mtp3fieldtype = yyvsp[-1].blk.mtp3fieldtype;
	if (yyval.blk.mtp3fieldtype == M_SIO ||
	    yyval.blk.mtp3fieldtype == M_OPC ||
	    yyval.blk.mtp3fieldtype == M_DPC ||
	    yyval.blk.mtp3fieldtype == M_SLS )
		yyval.blk.b = gen_mtp3field_code(yyval.blk.mtp3fieldtype, (u_int) yyvsp[0].i, BPF_JEQ, 0);
	}
    break;

  case 202:
#line 692 "grammar.y"
    { gen_or(yyvsp[-2].blk.b, yyvsp[0].blk.b); yyval.blk = yyvsp[0].blk; }
    break;


    }

/* Line 1000 of yacc.c.  */
#line 2877 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
	  yychar = YYEMPTY;

	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 694 "grammar.y"


