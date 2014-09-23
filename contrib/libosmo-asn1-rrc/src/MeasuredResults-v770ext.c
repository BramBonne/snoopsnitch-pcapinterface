/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MeasuredResults-v770ext.h"

static asn_per_constraints_t asn_PER_type_MeasuredResults_v770ext_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MeasuredResults_v770ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasuredResults_v770ext, choice.ueInternalMeasuredResults),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_InternalMeasuredResults_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueInternalMeasuredResults"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasuredResults_v770ext, choice.ue_positioning_MeasuredResults),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_MeasuredResults_v770ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-positioning-MeasuredResults"
		},
};
static asn_TYPE_tag2member_t asn_MAP_MeasuredResults_v770ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueInternalMeasuredResults at 16647 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-positioning-MeasuredResults at 16649 */
};
static asn_CHOICE_specifics_t asn_SPC_MeasuredResults_v770ext_specs_1 = {
	sizeof(struct MeasuredResults_v770ext),
	offsetof(struct MeasuredResults_v770ext, _asn_ctx),
	offsetof(struct MeasuredResults_v770ext, present),
	sizeof(((struct MeasuredResults_v770ext *)0)->present),
	asn_MAP_MeasuredResults_v770ext_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasuredResults_v770ext = {
	"MeasuredResults-v770ext",
	"MeasuredResults-v770ext",
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
	&asn_PER_type_MeasuredResults_v770ext_constr_1,
	asn_MBR_MeasuredResults_v770ext_1,
	2,	/* Elements count */
	&asn_SPC_MeasuredResults_v770ext_specs_1	/* Additional specs */
};

