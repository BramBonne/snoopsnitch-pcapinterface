/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "DL-ChannelCodes-MBSFN-IMB384.h"

static int
memb_firstChannelisationCode_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lastChannelisationCode_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_firstChannelisationCode_constr_2 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_lastChannelisationCode_constr_3 = {
	{ APC_CONSTRAINED,	 4,  4,  1,  15 }	/* (1..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DL_ChannelCodes_MBSFN_IMB384_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_ChannelCodes_MBSFN_IMB384, firstChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_firstChannelisationCode_constraint_1,
		&asn_PER_memb_firstChannelisationCode_constr_2,
		0,
		"firstChannelisationCode"
		},
	{ ATF_POINTER, 1, offsetof(struct DL_ChannelCodes_MBSFN_IMB384, lastChannelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_lastChannelisationCode_constraint_1,
		&asn_PER_memb_lastChannelisationCode_constr_3,
		0,
		"lastChannelisationCode"
		},
};
static int asn_MAP_DL_ChannelCodes_MBSFN_IMB384_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DL_ChannelCodes_MBSFN_IMB384_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* firstChannelisationCode at 7773 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lastChannelisationCode at 7774 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DL_ChannelCodes_MBSFN_IMB384_specs_1 = {
	sizeof(struct DL_ChannelCodes_MBSFN_IMB384),
	offsetof(struct DL_ChannelCodes_MBSFN_IMB384, _asn_ctx),
	asn_MAP_DL_ChannelCodes_MBSFN_IMB384_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_DL_ChannelCodes_MBSFN_IMB384_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DL_ChannelCodes_MBSFN_IMB384 = {
	"DL-ChannelCodes-MBSFN-IMB384",
	"DL-ChannelCodes-MBSFN-IMB384",
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
	asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1,
	sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1)
		/sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[0]), /* 1 */
	asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1,	/* Same as above */
	sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1)
		/sizeof(asn_DEF_DL_ChannelCodes_MBSFN_IMB384_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DL_ChannelCodes_MBSFN_IMB384_1,
	2,	/* Elements count */
	&asn_SPC_DL_ChannelCodes_MBSFN_IMB384_specs_1	/* Additional specs */
};

