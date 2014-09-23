/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "FirstSegment.h"

static asn_TYPE_member_t asn_MBR_FirstSegment_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FirstSegment, sib_Type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_Type,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib-Type"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FirstSegment, seg_Count),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SegCount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"seg-Count"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FirstSegment, sib_Data_fixed),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_Data_fixed,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib-Data-fixed"
		},
};
static ber_tlv_tag_t asn_DEF_FirstSegment_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_FirstSegment_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sib-Type at 9378 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* seg-Count at 9379 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sib-Data-fixed at 9381 */
};
static asn_SEQUENCE_specifics_t asn_SPC_FirstSegment_specs_1 = {
	sizeof(struct FirstSegment),
	offsetof(struct FirstSegment, _asn_ctx),
	asn_MAP_FirstSegment_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FirstSegment = {
	"FirstSegment",
	"FirstSegment",
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
	asn_DEF_FirstSegment_tags_1,
	sizeof(asn_DEF_FirstSegment_tags_1)
		/sizeof(asn_DEF_FirstSegment_tags_1[0]), /* 1 */
	asn_DEF_FirstSegment_tags_1,	/* Same as above */
	sizeof(asn_DEF_FirstSegment_tags_1)
		/sizeof(asn_DEF_FirstSegment_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FirstSegment_1,
	3,	/* Elements count */
	&asn_SPC_FirstSegment_specs_1	/* Additional specs */
};

