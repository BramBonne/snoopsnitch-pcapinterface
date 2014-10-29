/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UL-TS-ChannelisationCodeList-r7.h"

static asn_per_constraints_t asn_PER_type_UL_TS_ChannelisationCodeList_r7_constr_1 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_TS_ChannelisationCodeList_r7__Member, ul_TS_Channelisation_Code),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TS_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TS-Channelisation-Code"
		},
	{ ATF_POINTER, 1, offsetof(struct UL_TS_ChannelisationCodeList_r7__Member, plcch_info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLCCH_Info,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plcch-info"
		},
};
static int asn_MAP_Member_oms_2[] = { 1 };
static ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TS-Channelisation-Code at 12721 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plcch-info at 12722 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct UL_TS_ChannelisationCodeList_r7__Member),
	offsetof(struct UL_TS_ChannelisationCodeList_r7__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_TS_ChannelisationCodeList_r7_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_UL_TS_ChannelisationCodeList_r7_specs_1 = {
	sizeof(struct UL_TS_ChannelisationCodeList_r7),
	offsetof(struct UL_TS_ChannelisationCodeList_r7, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_UL_TS_ChannelisationCodeList_r7 = {
	"UL-TS-ChannelisationCodeList-r7",
	"UL-TS-ChannelisationCodeList-r7",
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
	asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1,
	sizeof(asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1)
		/sizeof(asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1[0]), /* 1 */
	asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1)
		/sizeof(asn_DEF_UL_TS_ChannelisationCodeList_r7_tags_1[0]), /* 1 */
	&asn_PER_type_UL_TS_ChannelisationCodeList_r7_constr_1,
	asn_MBR_UL_TS_ChannelisationCodeList_r7_1,
	1,	/* Single element */
	&asn_SPC_UL_TS_ChannelisationCodeList_r7_specs_1	/* Additional specs */
};
