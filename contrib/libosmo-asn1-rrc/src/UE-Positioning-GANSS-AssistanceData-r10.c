/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UE-Positioning-GANSS-AssistanceData-r10.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_GANSS_AssistanceData_r10_1[] = {
	{ ATF_POINTER, 6, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, ue_positioning_GANSS_ReferenceTime),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_ReferenceTime_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-GANSS-ReferenceTime"
		},
	{ ATF_POINTER, 5, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, uePositioningGanssReferencePosition),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReferenceLocationGANSS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssReferencePosition"
		},
	{ ATF_POINTER, 4, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, uePositioningGanssIonosphericModel),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_IonosphericModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssIonosphericModel"
		},
	{ ATF_POINTER, 3, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, uePositioningGanssAddIonoModel),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_AddIonoModel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssAddIonoModel"
		},
	{ ATF_POINTER, 2, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, uePositioningGanssEarthOrientationPara),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GANSS_EarthOrientPara,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uePositioningGanssEarthOrientationPara"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, ganssGenericDataList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GANSSGenericDataList_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ganssGenericDataList"
		},
};
static int asn_MAP_UE_Positioning_GANSS_AssistanceData_r10_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GANSS_AssistanceData_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-positioning-GANSS-ReferenceTime at 18865 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uePositioningGanssReferencePosition at 18866 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uePositioningGanssIonosphericModel at 18867 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uePositioningGanssAddIonoModel at 18868 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uePositioningGanssEarthOrientationPara at 18870 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ganssGenericDataList at 18871 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GANSS_AssistanceData_r10_specs_1 = {
	sizeof(struct UE_Positioning_GANSS_AssistanceData_r10),
	offsetof(struct UE_Positioning_GANSS_AssistanceData_r10, _asn_ctx),
	asn_MAP_UE_Positioning_GANSS_AssistanceData_r10_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GANSS_AssistanceData_r10_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AssistanceData_r10 = {
	"UE-Positioning-GANSS-AssistanceData-r10",
	"UE-Positioning-GANSS-AssistanceData-r10",
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
	asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1,
	sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GANSS_AssistanceData_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GANSS_AssistanceData_r10_1,
	6,	/* Elements count */
	&asn_SPC_UE_Positioning_GANSS_AssistanceData_r10_specs_1	/* Additional specs */
};

