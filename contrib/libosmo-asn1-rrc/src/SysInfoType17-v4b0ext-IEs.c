/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SysInfoType17-v4b0ext-IEs.h"

static asn_TYPE_member_t asn_MBR_tdd128SpecificInfo_2[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType17_v4b0ext_IEs__tdd128SpecificInfo, pusch_SysInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_SysInfoList_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pusch-SysInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17_v4b0ext_IEs__tdd128SpecificInfo, pdsch_SysInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfoList_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-SysInfoList"
		},
};
static int asn_MAP_tdd128SpecificInfo_oms_2[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_tdd128SpecificInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128SpecificInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-SysInfoList at 21733 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pdsch-SysInfoList at 21734 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128SpecificInfo_specs_2 = {
	sizeof(struct SysInfoType17_v4b0ext_IEs__tdd128SpecificInfo),
	offsetof(struct SysInfoType17_v4b0ext_IEs__tdd128SpecificInfo, _asn_ctx),
	asn_MAP_tdd128SpecificInfo_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_tdd128SpecificInfo_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128SpecificInfo_2 = {
	"tdd128SpecificInfo",
	"tdd128SpecificInfo",
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
	asn_DEF_tdd128SpecificInfo_tags_2,
	sizeof(asn_DEF_tdd128SpecificInfo_tags_2)
		/sizeof(asn_DEF_tdd128SpecificInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_tdd128SpecificInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_tdd128SpecificInfo_tags_2)
		/sizeof(asn_DEF_tdd128SpecificInfo_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128SpecificInfo_2,
	2,	/* Elements count */
	&asn_SPC_tdd128SpecificInfo_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType17_v4b0ext_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SysInfoType17_v4b0ext_IEs, tdd128SpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd128SpecificInfo_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128SpecificInfo"
		},
};
static int asn_MAP_SysInfoType17_v4b0ext_IEs_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType17_v4b0ext_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tdd128SpecificInfo at 21733 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType17_v4b0ext_IEs_specs_1 = {
	sizeof(struct SysInfoType17_v4b0ext_IEs),
	offsetof(struct SysInfoType17_v4b0ext_IEs, _asn_ctx),
	asn_MAP_SysInfoType17_v4b0ext_IEs_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_SysInfoType17_v4b0ext_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType17_v4b0ext_IEs = {
	"SysInfoType17-v4b0ext-IEs",
	"SysInfoType17-v4b0ext-IEs",
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
	asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1,
	sizeof(asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1)
		/sizeof(asn_DEF_SysInfoType17_v4b0ext_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType17_v4b0ext_IEs_1,
	1,	/* Elements count */
	&asn_SPC_SysInfoType17_v4b0ext_IEs_specs_1	/* Additional specs */
};

