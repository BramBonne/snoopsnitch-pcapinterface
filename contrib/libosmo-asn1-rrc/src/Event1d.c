/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "Event1d.h"

static asn_TYPE_member_t asn_MBR_Event1d_1[] = {
	{ ATF_POINTER, 2, offsetof(struct Event1d, triggeringCondition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TriggeringCondition2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"triggeringCondition"
		},
	{ ATF_POINTER, 1, offsetof(struct Event1d, useCIO),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"useCIO"
		},
};
static int asn_MAP_Event1d_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_Event1d_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Event1d_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* triggeringCondition at 14112 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* useCIO at 14113 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Event1d_specs_1 = {
	sizeof(struct Event1d),
	offsetof(struct Event1d, _asn_ctx),
	asn_MAP_Event1d_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Event1d_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Event1d = {
	"Event1d",
	"Event1d",
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
	asn_DEF_Event1d_tags_1,
	sizeof(asn_DEF_Event1d_tags_1)
		/sizeof(asn_DEF_Event1d_tags_1[0]), /* 1 */
	asn_DEF_Event1d_tags_1,	/* Same as above */
	sizeof(asn_DEF_Event1d_tags_1)
		/sizeof(asn_DEF_Event1d_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Event1d_1,
	2,	/* Elements count */
	&asn_SPC_Event1d_specs_1	/* Additional specs */
};

