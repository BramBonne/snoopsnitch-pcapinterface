/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "PhysicalChannelCapability-hspdsch-r5.h"

static asn_per_constraints_t asn_PER_type_fdd_hspdsch_constr_2 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd384_hspdsch_constr_8 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tdd128_hspdsch_constr_11 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_supported_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch__supported, hsdsch_physical_layer_category),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hsdsch-physical-layer-category"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch__supported, dummy),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch__supported, dummy2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy2"
		},
};
static ber_tlv_tag_t asn_DEF_supported_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_supported_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hsdsch-physical-layer-category at 1868 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dummy at 1871 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dummy2 at 1872 */
};
static asn_SEQUENCE_specifics_t asn_SPC_supported_specs_3 = {
	sizeof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch__supported),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch__supported, _asn_ctx),
	asn_MAP_supported_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supported_3 = {
	"supported",
	"supported",
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
	asn_DEF_supported_tags_3,
	sizeof(asn_DEF_supported_tags_3)
		/sizeof(asn_DEF_supported_tags_3[0]) - 1, /* 1 */
	asn_DEF_supported_tags_3,	/* Same as above */
	sizeof(asn_DEF_supported_tags_3)
		/sizeof(asn_DEF_supported_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_supported_3,
	3,	/* Elements count */
	&asn_SPC_supported_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_fdd_hspdsch_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_supported_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch, choice.unsupported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unsupported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_fdd_hspdsch_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supported at 1868 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unsupported at 1874 */
};
static asn_CHOICE_specifics_t asn_SPC_fdd_hspdsch_specs_2 = {
	sizeof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch, _asn_ctx),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch, present),
	sizeof(((struct PhysicalChannelCapability_hspdsch_r5__fdd_hspdsch *)0)->present),
	asn_MAP_fdd_hspdsch_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_hspdsch_2 = {
	"fdd-hspdsch",
	"fdd-hspdsch",
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
	&asn_PER_type_fdd_hspdsch_constr_2,
	asn_MBR_fdd_hspdsch_2,
	2,	/* Elements count */
	&asn_SPC_fdd_hspdsch_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_hspdsch_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch, choice.unsupported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unsupported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd384_hspdsch_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supported at 1877 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unsupported at 1878 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd384_hspdsch_specs_8 = {
	sizeof(struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch, _asn_ctx),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch, present),
	sizeof(((struct PhysicalChannelCapability_hspdsch_r5__tdd384_hspdsch *)0)->present),
	asn_MAP_tdd384_hspdsch_tag2el_8,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_hspdsch_8 = {
	"tdd384-hspdsch",
	"tdd384-hspdsch",
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
	&asn_PER_type_tdd384_hspdsch_constr_8,
	asn_MBR_tdd384_hspdsch_8,
	2,	/* Elements count */
	&asn_SPC_tdd384_hspdsch_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_hspdsch_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HSDSCH_physical_layer_category,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch, choice.unsupported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"unsupported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tdd128_hspdsch_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supported at 1881 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* unsupported at 1882 */
};
static asn_CHOICE_specifics_t asn_SPC_tdd128_hspdsch_specs_11 = {
	sizeof(struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch, _asn_ctx),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch, present),
	sizeof(((struct PhysicalChannelCapability_hspdsch_r5__tdd128_hspdsch *)0)->present),
	asn_MAP_tdd128_hspdsch_tag2el_11,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_hspdsch_11 = {
	"tdd128-hspdsch",
	"tdd128-hspdsch",
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
	&asn_PER_type_tdd128_hspdsch_constr_11,
	asn_MBR_tdd128_hspdsch_11,
	2,	/* Elements count */
	&asn_SPC_tdd128_hspdsch_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysicalChannelCapability_hspdsch_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5, fdd_hspdsch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_fdd_hspdsch_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd-hspdsch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5, tdd384_hspdsch),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd384_hspdsch_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384-hspdsch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PhysicalChannelCapability_hspdsch_r5, tdd128_hspdsch),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tdd128_hspdsch_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128-hspdsch"
		},
};
static ber_tlv_tag_t asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysicalChannelCapability_hspdsch_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd-hspdsch at 1873 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tdd384-hspdsch at 1877 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* tdd128-hspdsch at 1881 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysicalChannelCapability_hspdsch_r5_specs_1 = {
	sizeof(struct PhysicalChannelCapability_hspdsch_r5),
	offsetof(struct PhysicalChannelCapability_hspdsch_r5, _asn_ctx),
	asn_MAP_PhysicalChannelCapability_hspdsch_r5_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability_hspdsch_r5 = {
	"PhysicalChannelCapability-hspdsch-r5",
	"PhysicalChannelCapability-hspdsch-r5",
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
	asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1,
	sizeof(asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1[0]), /* 1 */
	asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1)
		/sizeof(asn_DEF_PhysicalChannelCapability_hspdsch_r5_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysicalChannelCapability_hspdsch_r5_1,
	3,	/* Elements count */
	&asn_SPC_PhysicalChannelCapability_hspdsch_r5_specs_1	/* Additional specs */
};

