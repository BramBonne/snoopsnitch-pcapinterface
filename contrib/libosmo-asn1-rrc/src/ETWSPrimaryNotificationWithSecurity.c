/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "ETWSPrimaryNotificationWithSecurity.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_4 = {
	sizeof(struct ETWSPrimaryNotificationWithSecurity__nonCriticalExtensions),
	offsetof(struct ETWSPrimaryNotificationWithSecurity__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_4 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtensions_tags_4,
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ETWSPrimaryNotificationWithSecurity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ETWSPrimaryNotificationWithSecurity, etws_Information),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ETWS_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"etws-Information"
		},
	{ ATF_POINTER, 2, offsetof(struct ETWSPrimaryNotificationWithSecurity, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ETWS_WarningSecurityInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct ETWSPrimaryNotificationWithSecurity, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_ETWSPrimaryNotificationWithSecurity_oms_1[] = { 1, 2 };
static ber_tlv_tag_t asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ETWSPrimaryNotificationWithSecurity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* etws-Information at 2354 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy at 2357 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nonCriticalExtensions at 2359 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ETWSPrimaryNotificationWithSecurity_specs_1 = {
	sizeof(struct ETWSPrimaryNotificationWithSecurity),
	offsetof(struct ETWSPrimaryNotificationWithSecurity, _asn_ctx),
	asn_MAP_ETWSPrimaryNotificationWithSecurity_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ETWSPrimaryNotificationWithSecurity_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ETWSPrimaryNotificationWithSecurity = {
	"ETWSPrimaryNotificationWithSecurity",
	"ETWSPrimaryNotificationWithSecurity",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1,
	sizeof(asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1)
		/sizeof(asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1[0]), /* 1 */
	asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1,	/* Same as above */
	sizeof(asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1)
		/sizeof(asn_DEF_ETWSPrimaryNotificationWithSecurity_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ETWSPrimaryNotificationWithSecurity_1,
	3,	/* Elements count */
	&asn_SPC_ETWSPrimaryNotificationWithSecurity_specs_1	/* Additional specs */
};

