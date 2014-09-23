/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "HandoverToUTRANCommand-r6-IEs.h"

static asn_per_constraints_t asn_PER_type_preConfigMode_constr_19 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd_constr_31 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_25 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_specificationMode_constr_4 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_complete_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, rab_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_InformationSetupList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-InformationSetupList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_Info_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_POINTER, 2, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, ul_EDCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_EDCH_Information_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-EDCH-Information"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, dl_HSPDSCH_Information),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_HSPDSCH_Information_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-HSPDSCH-Information"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
};
static int asn_MAP_complete_oms_5[] = { 1, 7, 8 };
static ber_tlv_tag_t asn_DEF_complete_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_complete_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-InformationSetupList at 2649 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rab-InformationSetupList at 2650 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ul-CommonTransChInfo at 2651 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-AddReconfTransChInfoList at 2652 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dl-CommonTransChInfo at 2653 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dl-AddReconfTransChInfoList at 2654 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* ul-DPCH-Info at 2655 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ul-EDCH-Information at 2656 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* dl-HSPDSCH-Information at 2657 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* dl-CommonInformation at 2658 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* dl-InformationPerRL-List at 2659 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* frequencyInfo at 2661 */
};
static asn_SEQUENCE_specifics_t asn_SPC_complete_specs_5 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__complete, _asn_ctx),
	asn_MAP_complete_tag2el_5,
	12,	/* Count of tags in the map */
	asn_MAP_complete_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_complete_5 = {
	"complete",
	"complete",
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
	asn_DEF_complete_tags_5,
	sizeof(asn_DEF_complete_tags_5)
		/sizeof(asn_DEF_complete_tags_5[0]) - 1, /* 1 */
	asn_DEF_complete_tags_5,	/* Same as above */
	sizeof(asn_DEF_complete_tags_5)
		/sizeof(asn_DEF_complete_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_complete_5,
	12,	/* Elements count */
	&asn_SPC_complete_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_defaultConfig_21[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, defaultConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, defaultConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DefaultConfigIdentity_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfigIdentity"
		},
};
static ber_tlv_tag_t asn_DEF_defaultConfig_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_defaultConfig_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultConfigMode at 2669 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfigIdentity at 2671 */
};
static asn_SEQUENCE_specifics_t asn_SPC_defaultConfig_specs_21 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode__defaultConfig, _asn_ctx),
	asn_MAP_defaultConfig_tag2el_21,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_defaultConfig_21 = {
	"defaultConfig",
	"defaultConfig",
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
	asn_DEF_defaultConfig_tags_21,
	sizeof(asn_DEF_defaultConfig_tags_21)
		/sizeof(asn_DEF_defaultConfig_tags_21[0]) - 1, /* 1 */
	asn_DEF_defaultConfig_tags_21,	/* Same as above */
	sizeof(asn_DEF_defaultConfig_tags_21)
		/sizeof(asn_DEF_defaultConfig_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_defaultConfig_21,
	2,	/* Elements count */
	&asn_SPC_defaultConfig_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preConfigMode_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode, choice.predefinedConfigIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PredefinedConfigIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"predefinedConfigIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode, choice.defaultConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_defaultConfig_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultConfig"
		},
};
static asn_TYPE_tag2member_t asn_MAP_preConfigMode_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* predefinedConfigIdentity at 2667 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultConfig at 2669 */
};
static asn_CHOICE_specifics_t asn_SPC_preConfigMode_specs_19 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode, present),
	sizeof(((struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__preConfigMode *)0)->present),
	asn_MAP_preConfigMode_tag2el_19,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preConfigMode_19 = {
	"preConfigMode",
	"preConfigMode",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_preConfigMode_constr_19,
	asn_MBR_preConfigMode_19,
	2,	/* Elements count */
	&asn_SPC_preConfigMode_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, dl_CommonInformationPost),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformationPost,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformationPost"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_ListPostFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoFDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
};
static ber_tlv_tag_t asn_DEF_fdd_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2676 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CommonInformationPost at 2677 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dl-InformationPerRL-List at 2678 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* frequencyInfo at 2680 */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_26 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_26,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_26 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_26,
	sizeof(asn_DEF_fdd_tags_26)
		/sizeof(asn_DEF_fdd_tags_26[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_26,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_26)
		/sizeof(asn_DEF_fdd_tags_26[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_26,
	4,	/* Elements count */
	&asn_SPC_fdd_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_32[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, dl_InformationPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_PostTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static ber_tlv_tag_t asn_DEF_tdd384_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2683 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-InformationPerRL at 2684 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo at 2685 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* primaryCCPCH-TX-Power at 2687 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_32 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_32,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_32 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_32,
	sizeof(asn_DEF_tdd384_tags_32)
		/sizeof(asn_DEF_tdd384_tags_32[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_32,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_32)
		/sizeof(asn_DEF_tdd384_tags_32[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_32,
	4,	/* Elements count */
	&asn_SPC_tdd384_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_37[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, ul_DPCH_Info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_DPCH_InfoPostTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, dl_InformationPerRL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_PostTDD_LCR_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfoTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static ber_tlv_tag_t asn_DEF_tdd128_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-Info at 2689 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-InformationPerRL at 2690 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyInfo at 2691 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* primaryCCPCH-TX-Power at 2693 */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_37 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd__tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_37,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_37 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_37,
	sizeof(asn_DEF_tdd128_tags_37)
		/sizeof(asn_DEF_tdd128_tags_37[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_37,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_37)
		/sizeof(asn_DEF_tdd128_tags_37[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_37,
	4,	/* Elements count */
	&asn_SPC_tdd128_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_31[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_32,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_37,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_31[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 at 2683 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 at 2689 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd_specs_31 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd, present),
	sizeof(((struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo__tdd *)0)->present),
	asn_MAP_tdd_tag2el_31,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_31 = {
	"tdd",
	"tdd",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_tdd_constr_31,
	asn_MBR_tdd_31,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_31	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_25[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_26,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd_31,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_25[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd at 2676 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd at 2687 */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_25 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo, present),
	sizeof(((struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration__modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_25,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_25 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_modeSpecificInfo_constr_25,
	asn_MBR_modeSpecificInfo_25,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_25	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_preconfiguration_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration, preConfigMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_preConfigMode_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preConfigMode"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration, rab_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_Info_Post,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rab-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_25,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static int asn_MAP_preconfiguration_oms_18[] = { 1 };
static ber_tlv_tag_t asn_DEF_preconfiguration_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_preconfiguration_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* preConfigMode at 2667 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rab-Info at 2673 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* modeSpecificInfo at 2680 */
};
static asn_SEQUENCE_specifics_t asn_SPC_preconfiguration_specs_18 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode__preconfiguration, _asn_ctx),
	asn_MAP_preconfiguration_tag2el_18,
	3,	/* Count of tags in the map */
	asn_MAP_preconfiguration_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_preconfiguration_18 = {
	"preconfiguration",
	"preconfiguration",
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
	asn_DEF_preconfiguration_tags_18,
	sizeof(asn_DEF_preconfiguration_tags_18)
		/sizeof(asn_DEF_preconfiguration_tags_18[0]) - 1, /* 1 */
	asn_DEF_preconfiguration_tags_18,	/* Same as above */
	sizeof(asn_DEF_preconfiguration_tags_18)
		/sizeof(asn_DEF_preconfiguration_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_preconfiguration_18,
	3,	/* Elements count */
	&asn_SPC_preconfiguration_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_specificationMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode, choice.complete),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_complete_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"complete"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode, choice.preconfiguration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_preconfiguration_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"preconfiguration"
		},
};
static asn_TYPE_tag2member_t asn_MAP_specificationMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* complete at 2649 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* preconfiguration at 2672 */
};
static asn_CHOICE_specifics_t asn_SPC_specificationMode_specs_4 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs__specificationMode),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode, _asn_ctx),
	offsetof(struct HandoverToUTRANCommand_r6_IEs__specificationMode, present),
	sizeof(((struct HandoverToUTRANCommand_r6_IEs__specificationMode *)0)->present),
	asn_MAP_specificationMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_specificationMode_4 = {
	"specificationMode",
	"specificationMode",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_specificationMode_constr_4,
	asn_MBR_specificationMode_4,
	2,	/* Elements count */
	&asn_SPC_specificationMode_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_HandoverToUTRANCommand_r6_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI_Short,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverToUTRANCommand_r6_IEs, cipheringAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CipheringAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cipheringAlgorithm"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs, specificationMode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_specificationMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"specificationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverToUTRANCommand_r6_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
};
static int asn_MAP_HandoverToUTRANCommand_r6_IEs_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_HandoverToUTRANCommand_r6_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* new-U-RNTI at 2643 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cipheringAlgorithm at 2644 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* specificationMode at 2661 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxAllowedUL-TX-Power at 2700 */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverToUTRANCommand_r6_IEs_specs_1 = {
	sizeof(struct HandoverToUTRANCommand_r6_IEs),
	offsetof(struct HandoverToUTRANCommand_r6_IEs, _asn_ctx),
	asn_MAP_HandoverToUTRANCommand_r6_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_HandoverToUTRANCommand_r6_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_HandoverToUTRANCommand_r6_IEs = {
	"HandoverToUTRANCommand-r6-IEs",
	"HandoverToUTRANCommand-r6-IEs",
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
	asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1,
	sizeof(asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1)
		/sizeof(asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1[0]), /* 1 */
	asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1)
		/sizeof(asn_DEF_HandoverToUTRANCommand_r6_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_HandoverToUTRANCommand_r6_IEs_1,
	4,	/* Elements count */
	&asn_SPC_HandoverToUTRANCommand_r6_IEs_specs_1	/* Additional specs */
};

