/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "HS-SCCH-SystemInfo.h"

static int
memb_hS_SCCHChannelisationCodeInfo_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_hS_SCCHChannelisationCodeInfo_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_hS_SCCHChannelisationCodeInfo_constr_3 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_hS_SCCHChannelisationCodeInfo_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_HS_SCCH_Codes,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_hS_SCCHChannelisationCodeInfo_specs_3 = {
	sizeof(struct HS_SCCH_SystemInfo__hS_SCCHChannelisationCodeInfo),
	offsetof(struct HS_SCCH_SystemInfo__hS_SCCHChannelisationCodeInfo, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_hS_SCCHChannelisationCodeInfo_3 = {
	"hS-SCCHChannelisationCodeInfo",
	"hS-SCCHChannelisationCodeInfo",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3,
	sizeof(asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3)
		/sizeof(asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3[0]) - 1, /* 1 */
	asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3,	/* Same as above */
	sizeof(asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3)
		/sizeof(asn_DEF_hS_SCCHChannelisationCodeInfo_tags_3[0]), /* 2 */
	&asn_PER_type_hS_SCCHChannelisationCodeInfo_constr_3,
	asn_MBR_hS_SCCHChannelisationCodeInfo_3,
	1,	/* Single element */
	&asn_SPC_hS_SCCHChannelisationCodeInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HS_SCCH_SystemInfo_1[] = {
	{ ATF_POINTER, 1, offsetof(struct HS_SCCH_SystemInfo, dl_ScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-ScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HS_SCCH_SystemInfo, hS_SCCHChannelisationCodeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_hS_SCCHChannelisationCodeInfo_3,
		memb_hS_SCCHChannelisationCodeInfo_constraint_1,
		&asn_PER_memb_hS_SCCHChannelisationCodeInfo_constr_3,
		0,
		"hS-SCCHChannelisationCodeInfo"
		},
};
static int asn_MAP_HS_SCCH_SystemInfo_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_HS_SCCH_SystemInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HS_SCCH_SystemInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-ScramblingCode at 9087 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* hS-SCCHChannelisationCodeInfo at 9090 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HS_SCCH_SystemInfo_specs_1 = {
	sizeof(struct HS_SCCH_SystemInfo),
	offsetof(struct HS_SCCH_SystemInfo, _asn_ctx),
	asn_MAP_HS_SCCH_SystemInfo_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HS_SCCH_SystemInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HS_SCCH_SystemInfo = {
	"HS-SCCH-SystemInfo",
	"HS-SCCH-SystemInfo",
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
	asn_DEF_HS_SCCH_SystemInfo_tags_1,
	sizeof(asn_DEF_HS_SCCH_SystemInfo_tags_1)
		/sizeof(asn_DEF_HS_SCCH_SystemInfo_tags_1[0]), /* 1 */
	asn_DEF_HS_SCCH_SystemInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_HS_SCCH_SystemInfo_tags_1)
		/sizeof(asn_DEF_HS_SCCH_SystemInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HS_SCCH_SystemInfo_1,
	2,	/* Elements count */
	&asn_SPC_HS_SCCH_SystemInfo_specs_1	/* Additional specs */
};

