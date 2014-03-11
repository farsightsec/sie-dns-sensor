
const char *
wdns_rrtype_to_str(uint16_t rrtype)
{
    switch (rrtype) {
	case WDNS_TYPE_A: return ("A");
	case WDNS_TYPE_NS: return ("NS");
	case WDNS_TYPE_MD: return ("MD");
	case WDNS_TYPE_MF: return ("MF");
	case WDNS_TYPE_CNAME: return ("CNAME");
	case WDNS_TYPE_SOA: return ("SOA");
	case WDNS_TYPE_MB: return ("MB");
	case WDNS_TYPE_MG: return ("MG");
	case WDNS_TYPE_MR: return ("MR");
	case WDNS_TYPE_NULL: return ("NULL");
	case WDNS_TYPE_WKS: return ("WKS");
	case WDNS_TYPE_PTR: return ("PTR");
	case WDNS_TYPE_HINFO: return ("HINFO");
	case WDNS_TYPE_MINFO: return ("MINFO");
	case WDNS_TYPE_MX: return ("MX");
	case WDNS_TYPE_TXT: return ("TXT");
	case WDNS_TYPE_RP: return ("RP");
	case WDNS_TYPE_AFSDB: return ("AFSDB");
	case WDNS_TYPE_X25: return ("X25");
	case WDNS_TYPE_ISDN: return ("ISDN");
	case WDNS_TYPE_RT: return ("RT");
	case WDNS_TYPE_NSAP: return ("NSAP");
	case WDNS_TYPE_NSAP_PTR: return ("PTR");
	case WDNS_TYPE_SIG: return ("SIG");
	case WDNS_TYPE_KEY: return ("KEY");
	case WDNS_TYPE_PX: return ("PX");
	case WDNS_TYPE_GPOS: return ("GPOS");
	case WDNS_TYPE_AAAA: return ("AAAA");
	case WDNS_TYPE_LOC: return ("LOC");
	case WDNS_TYPE_NXT: return ("NXT");
	case WDNS_TYPE_EID: return ("EID");
	case WDNS_TYPE_NIMLOC: return ("NIMLOC");
	case WDNS_TYPE_SRV: return ("SRV");
	case WDNS_TYPE_ATMA: return ("ATMA");
	case WDNS_TYPE_NAPTR: return ("NAPTR");
	case WDNS_TYPE_KX: return ("KX");
	case WDNS_TYPE_CERT: return ("CERT");
	case WDNS_TYPE_A6: return ("A6");
	case WDNS_TYPE_DNAME: return ("DNAME");
	case WDNS_TYPE_SINK: return ("SINK");
	case WDNS_TYPE_OPT: return ("OPT");
	case WDNS_TYPE_APL: return ("APL");
	case WDNS_TYPE_DS: return ("DS");
	case WDNS_TYPE_SSHFP: return ("SSHFP");
	case WDNS_TYPE_IPSECKEY: return ("IPSECKEY");
	case WDNS_TYPE_RRSIG: return ("RRSIG");
	case WDNS_TYPE_NSEC: return ("NSEC");
	case WDNS_TYPE_DNSKEY: return ("DNSKEY");
	case WDNS_TYPE_DHCID: return ("DHCID");
	case WDNS_TYPE_NSEC3: return ("NSEC3");
	case WDNS_TYPE_NSEC3PARAM: return ("NSEC3PARAM");
	case WDNS_TYPE_HIP: return ("HIP");
	case WDNS_TYPE_NINFO: return ("NINFO");
	case WDNS_TYPE_RKEY: return ("RKEY");
	case WDNS_TYPE_TALINK: return ("TALINK");
	case WDNS_TYPE_CDS: return ("CDS");
	case WDNS_TYPE_SPF: return ("SPF");
	case WDNS_TYPE_TKEY: return ("TKEY");
	case WDNS_TYPE_TSIG: return ("TSIG");
	case WDNS_TYPE_IXFR: return ("IXFR");
	case WDNS_TYPE_AXFR: return ("AXFR");
	case WDNS_TYPE_MAILB: return ("MAILB");
	case WDNS_TYPE_MAILA: return ("MAILA");
	case WDNS_TYPE_ANY: return ("ANY");
	case WDNS_TYPE_URI: return ("URI");
	case WDNS_TYPE_CAA: return ("CAA");
	case WDNS_TYPE_TA: return ("TA");
	case WDNS_TYPE_DLV: return ("DLV");
    }

    return (NULL);
}

static struct u16str {
    uint16_t u16;
    const char *str;
} rrtypes[] = {
	{ WDNS_TYPE_A, "A" },
	{ WDNS_TYPE_A6, "A6" },
	{ WDNS_TYPE_AAAA, "AAAA" },
	{ WDNS_TYPE_AFSDB, "AFSDB" },
	{ WDNS_TYPE_ANY, "ANY" },
	{ WDNS_TYPE_APL, "APL" },
	{ WDNS_TYPE_ATMA, "ATMA" },
	{ WDNS_TYPE_AXFR, "AXFR" },
	{ WDNS_TYPE_CAA, "CAA" },
	{ WDNS_TYPE_CDS, "CDS" },
	{ WDNS_TYPE_CERT, "CERT" },
	{ WDNS_TYPE_CNAME, "CNAME" },
	{ WDNS_TYPE_DHCID, "DHCID" },
	{ WDNS_TYPE_DLV, "DLV" },
	{ WDNS_TYPE_DNAME, "DNAME" },
	{ WDNS_TYPE_DNSKEY, "DNSKEY" },
	{ WDNS_TYPE_DS, "DS" },
	{ WDNS_TYPE_EID, "EID" },
	{ WDNS_TYPE_GPOS, "GPOS" },
	{ WDNS_TYPE_HINFO, "HINFO" },
	{ WDNS_TYPE_HIP, "HIP" },
	{ WDNS_TYPE_IPSECKEY, "IPSECKEY" },
	{ WDNS_TYPE_ISDN, "ISDN" },
	{ WDNS_TYPE_IXFR, "IXFR" },
	{ WDNS_TYPE_KEY, "KEY" },
	{ WDNS_TYPE_KX, "KX" },
	{ WDNS_TYPE_LOC, "LOC" },
	{ WDNS_TYPE_MAILA, "MAILA" },
	{ WDNS_TYPE_MAILB, "MAILB" },
	{ WDNS_TYPE_MB, "MB" },
	{ WDNS_TYPE_MD, "MD" },
	{ WDNS_TYPE_MF, "MF" },
	{ WDNS_TYPE_MG, "MG" },
	{ WDNS_TYPE_MINFO, "MINFO" },
	{ WDNS_TYPE_MR, "MR" },
	{ WDNS_TYPE_MX, "MX" },
	{ WDNS_TYPE_NAPTR, "NAPTR" },
	{ WDNS_TYPE_NIMLOC, "NIMLOC" },
	{ WDNS_TYPE_NINFO, "NINFO" },
	{ WDNS_TYPE_NS, "NS" },
	{ WDNS_TYPE_NSAP, "NSAP" },
	{ WDNS_TYPE_NSAP_PTR, "PTR" },
	{ WDNS_TYPE_NSEC, "NSEC" },
	{ WDNS_TYPE_NSEC3, "NSEC3" },
	{ WDNS_TYPE_NSEC3PARAM, "NSEC3PARAM" },
	{ WDNS_TYPE_NULL, "NULL" },
	{ WDNS_TYPE_NXT, "NXT" },
	{ WDNS_TYPE_OPT, "OPT" },
	{ WDNS_TYPE_PTR, "PTR" },
	{ WDNS_TYPE_PX, "PX" },
	{ WDNS_TYPE_RKEY, "RKEY" },
	{ WDNS_TYPE_RP, "RP" },
	{ WDNS_TYPE_RRSIG, "RRSIG" },
	{ WDNS_TYPE_RT, "RT" },
	{ WDNS_TYPE_SIG, "SIG" },
	{ WDNS_TYPE_SINK, "SINK" },
	{ WDNS_TYPE_SOA, "SOA" },
	{ WDNS_TYPE_SPF, "SPF" },
	{ WDNS_TYPE_SRV, "SRV" },
	{ WDNS_TYPE_SSHFP, "SSHFP" },
	{ WDNS_TYPE_TA, "TA" },
	{ WDNS_TYPE_TALINK, "TALINK" },
	{ WDNS_TYPE_TKEY, "TKEY" },
	{ WDNS_TYPE_TSIG, "TSIG" },
	{ WDNS_TYPE_TXT, "TXT" },
	{ WDNS_TYPE_URI, "URI" },
	{ WDNS_TYPE_WKS, "WKS" },
	{ WDNS_TYPE_X25, "X25" },
};

#define num_rrtypes (sizeof(rrtypes) / sizeof(struct u16str))

static int
cmp_u16str(const void *a, const void *b) {
    struct u16str *u1 = (struct u16str *) a;
    struct u16str *u2 = (struct u16str *) b;
    return (strcasecmp(u1->str, u2->str));
}

static bool
convert_generic_rrtype(const char *s, long int *val) {
    char *endptr = NULL;

    if (strlen(s) <= 4)
        return (false);
    if (strncasecmp(s, "TYPE", 4) != 0)
        return (false);

    s += 4; /* skip leading "TYPE" */

    *val = strtol(s, &endptr, 10);
    if (endptr != NULL && *endptr != '\0')
        return (false);
    if (*val < 0 || *val > 65535)
        return (false);

    return (true);
}

uint16_t
wdns_str_to_rrtype(const char *str) {
    struct u16str key, *res;
    key.str = str;
    res = bsearch(&key, rrtypes, num_rrtypes, sizeof(struct u16str), cmp_u16str);
    if (res != NULL) {
        return (res->u16);
    } else {
        long int val = 0;
        if (convert_generic_rrtype(str, &val))
            return (val);
    }
    return (0);
}
