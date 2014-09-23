/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "CellUpdate.h"

static int
memb_cellUpdate_r3_add_ext_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_cellUpdate_r3_add_ext_constr_11 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_26 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_26 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_26,
	sizeof(asn_DEF_nonCriticalExtensions_tags_26)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_26[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_26,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_26)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_26[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_26	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_vb50NonCriticalExtensions_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions, cellUpdate_vb50ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_vb50ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-vb50ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_26,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_vb50NonCriticalExtensions_oms_24[] = { 1 };
static ber_tlv_tag_t asn_DEF_vb50NonCriticalExtensions_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_vb50NonCriticalExtensions_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-vb50ext at 1202 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 1203 */
};
static asn_SEQUENCE_specifics_t asn_SPC_vb50NonCriticalExtensions_specs_24 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions__vb50NonCriticalExtensions, _asn_ctx),
	asn_MAP_vb50NonCriticalExtensions_tag2el_24,
	2,	/* Count of tags in the map */
	asn_MAP_vb50NonCriticalExtensions_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_vb50NonCriticalExtensions_24 = {
	"vb50NonCriticalExtensions",
	"vb50NonCriticalExtensions",
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
	asn_DEF_vb50NonCriticalExtensions_tags_24,
	sizeof(asn_DEF_vb50NonCriticalExtensions_tags_24)
		/sizeof(asn_DEF_vb50NonCriticalExtensions_tags_24[0]) - 1, /* 1 */
	asn_DEF_vb50NonCriticalExtensions_tags_24,	/* Same as above */
	sizeof(asn_DEF_vb50NonCriticalExtensions_tags_24)
		/sizeof(asn_DEF_vb50NonCriticalExtensions_tags_24[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_vb50NonCriticalExtensions_24,
	2,	/* Elements count */
	&asn_SPC_vb50NonCriticalExtensions_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_va40NonCriticalExtensions_22[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, cellUpdate_va40ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_va40ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-va40ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, vb50NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_vb50NonCriticalExtensions_24,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"vb50NonCriticalExtensions"
		},
};
static int asn_MAP_va40NonCriticalExtensions_oms_22[] = { 1 };
static ber_tlv_tag_t asn_DEF_va40NonCriticalExtensions_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_va40NonCriticalExtensions_tag2el_22[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-va40ext at 1200 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* vb50NonCriticalExtensions at 1202 */
};
static asn_SEQUENCE_specifics_t asn_SPC_va40NonCriticalExtensions_specs_22 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions__va40NonCriticalExtensions, _asn_ctx),
	asn_MAP_va40NonCriticalExtensions_tag2el_22,
	2,	/* Count of tags in the map */
	asn_MAP_va40NonCriticalExtensions_oms_22,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va40NonCriticalExtensions_22 = {
	"va40NonCriticalExtensions",
	"va40NonCriticalExtensions",
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
	asn_DEF_va40NonCriticalExtensions_tags_22,
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_22)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_22[0]) - 1, /* 1 */
	asn_DEF_va40NonCriticalExtensions_tags_22,	/* Same as above */
	sizeof(asn_DEF_va40NonCriticalExtensions_tags_22)
		/sizeof(asn_DEF_va40NonCriticalExtensions_tags_22[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_va40NonCriticalExtensions_22,
	2,	/* Elements count */
	&asn_SPC_va40NonCriticalExtensions_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v860NonCriticalExtensions_20[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, cellUpdate_v860ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_v860ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-v860ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, va40NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va40NonCriticalExtensions_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"va40NonCriticalExtensions"
		},
};
static int asn_MAP_v860NonCriticalExtensions_oms_20[] = { 1 };
static ber_tlv_tag_t asn_DEF_v860NonCriticalExtensions_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v860NonCriticalExtensions_tag2el_20[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-v860ext at 1195 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va40NonCriticalExtensions at 1200 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v860NonCriticalExtensions_specs_20 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions__v860NonCriticalExtensions, _asn_ctx),
	asn_MAP_v860NonCriticalExtensions_tag2el_20,
	2,	/* Count of tags in the map */
	asn_MAP_v860NonCriticalExtensions_oms_20,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v860NonCriticalExtensions_20 = {
	"v860NonCriticalExtensions",
	"v860NonCriticalExtensions",
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
	asn_DEF_v860NonCriticalExtensions_tags_20,
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_20)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_20[0]) - 1, /* 1 */
	asn_DEF_v860NonCriticalExtensions_tags_20,	/* Same as above */
	sizeof(asn_DEF_v860NonCriticalExtensions_tags_20)
		/sizeof(asn_DEF_v860NonCriticalExtensions_tags_20[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v860NonCriticalExtensions_20,
	2,	/* Elements count */
	&asn_SPC_v860NonCriticalExtensions_specs_20	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v770NonCriticalExtensions_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions, cellUpdate_v770ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_v770ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-v770ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions, v860NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v860NonCriticalExtensions_20,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v860NonCriticalExtensions"
		},
};
static int asn_MAP_v770NonCriticalExtensions_oms_18[] = { 1 };
static ber_tlv_tag_t asn_DEF_v770NonCriticalExtensions_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v770NonCriticalExtensions_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-v770ext at 1193 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v860NonCriticalExtensions at 1195 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v770NonCriticalExtensions_specs_18 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v770NonCriticalExtensions, _asn_ctx),
	asn_MAP_v770NonCriticalExtensions_tag2el_18,
	2,	/* Count of tags in the map */
	asn_MAP_v770NonCriticalExtensions_oms_18,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v770NonCriticalExtensions_18 = {
	"v770NonCriticalExtensions",
	"v770NonCriticalExtensions",
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
	asn_DEF_v770NonCriticalExtensions_tags_18,
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_18)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_18[0]) - 1, /* 1 */
	asn_DEF_v770NonCriticalExtensions_tags_18,	/* Same as above */
	sizeof(asn_DEF_v770NonCriticalExtensions_tags_18)
		/sizeof(asn_DEF_v770NonCriticalExtensions_tags_18[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v770NonCriticalExtensions_18,
	2,	/* Elements count */
	&asn_SPC_v770NonCriticalExtensions_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6b0NonCriticalExtensions_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions, cellUpdate_v6b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_v6b0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-v6b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions, v770NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v770NonCriticalExtensions_18,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v770NonCriticalExtensions"
		},
};
static int asn_MAP_v6b0NonCriticalExtensions_oms_16[] = { 1 };
static ber_tlv_tag_t asn_DEF_v6b0NonCriticalExtensions_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v6b0NonCriticalExtensions_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-v6b0ext at 1191 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v770NonCriticalExtensions at 1193 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6b0NonCriticalExtensions_specs_16 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions__v6b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6b0NonCriticalExtensions_tag2el_16,
	2,	/* Count of tags in the map */
	asn_MAP_v6b0NonCriticalExtensions_oms_16,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6b0NonCriticalExtensions_16 = {
	"v6b0NonCriticalExtensions",
	"v6b0NonCriticalExtensions",
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
	asn_DEF_v6b0NonCriticalExtensions_tags_16,
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_16)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_16[0]) - 1, /* 1 */
	asn_DEF_v6b0NonCriticalExtensions_tags_16,	/* Same as above */
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_16)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v6b0NonCriticalExtensions_16,
	2,	/* Elements count */
	&asn_SPC_v6b0NonCriticalExtensions_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v690NonCriticalExtensions_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions, cellUpdate_v690ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_v690ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-v690ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions, v6b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v6b0NonCriticalExtensions_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v6b0NonCriticalExtensions"
		},
};
static int asn_MAP_v690NonCriticalExtensions_oms_14[] = { 1 };
static ber_tlv_tag_t asn_DEF_v690NonCriticalExtensions_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v690NonCriticalExtensions_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-v690ext at 1189 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v6b0NonCriticalExtensions at 1191 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v690NonCriticalExtensions_specs_14 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions__v690NonCriticalExtensions, _asn_ctx),
	asn_MAP_v690NonCriticalExtensions_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_v690NonCriticalExtensions_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v690NonCriticalExtensions_14 = {
	"v690NonCriticalExtensions",
	"v690NonCriticalExtensions",
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
	asn_DEF_v690NonCriticalExtensions_tags_14,
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_14[0]) - 1, /* 1 */
	asn_DEF_v690NonCriticalExtensions_tags_14,	/* Same as above */
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v690NonCriticalExtensions_14,
	2,	/* Elements count */
	&asn_SPC_v690NonCriticalExtensions_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v590NonCriticalExtensions_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions, cellUpdate_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdate_v590ext,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdate-v590ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions, v690NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v690NonCriticalExtensions_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v690NonCriticalExtensions"
		},
};
static int asn_MAP_v590NonCriticalExtensions_oms_12[] = { 1 };
static ber_tlv_tag_t asn_DEF_v590NonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v590NonCriticalExtensions_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-v590ext at 1187 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v690NonCriticalExtensions at 1189 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v590NonCriticalExtensions_specs_12 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions__v590NonCriticalExtensions, _asn_ctx),
	asn_MAP_v590NonCriticalExtensions_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_v590NonCriticalExtensions_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v590NonCriticalExtensions_12 = {
	"v590NonCriticalExtensions",
	"v590NonCriticalExtensions",
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
	asn_DEF_v590NonCriticalExtensions_tags_12,
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_v590NonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_v590NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v590NonCriticalExtensions_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v590NonCriticalExtensions_12,
	2,	/* Elements count */
	&asn_SPC_v590NonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_10[] = {
	{ ATF_POINTER, 2, offsetof(struct CellUpdate__laterNonCriticalExtensions, cellUpdate_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_cellUpdate_r3_add_ext_constraint_10,
		&asn_PER_memb_cellUpdate_r3_add_ext_constr_11,
		0,
		"cellUpdate-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate__laterNonCriticalExtensions, v590NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v590NonCriticalExtensions_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v590NonCriticalExtensions"
		},
};
static int asn_MAP_laterNonCriticalExtensions_oms_10[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellUpdate-r3-add-ext at 1185 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v590NonCriticalExtensions at 1187 */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_10 = {
	sizeof(struct CellUpdate__laterNonCriticalExtensions),
	offsetof(struct CellUpdate__laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_10 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
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
	asn_DEF_laterNonCriticalExtensions_tags_10,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellUpdate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, u_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"u-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, startList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_STARTList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"startList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, am_RLC_ErrorIndicationRb2_3or4),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"am-RLC-ErrorIndicationRb2-3or4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, am_RLC_ErrorIndicationRb5orAbove),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"am-RLC-ErrorIndicationRb5orAbove"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, cellUpdateCause),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellUpdateCause,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellUpdateCause"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate, failureCause),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FailureCauseWithProtErrTrId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"failureCause"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellUpdate, rb_timer_indicator),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Rb_timer_indicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rb-timer-indicator"
		},
	{ ATF_POINTER, 2, offsetof(struct CellUpdate, measuredResultsOnRACH),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasuredResultsOnRACH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measuredResultsOnRACH"
		},
	{ ATF_POINTER, 1, offsetof(struct CellUpdate, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static int asn_MAP_CellUpdate_oms_1[] = { 5, 7, 8 };
static ber_tlv_tag_t asn_DEF_CellUpdate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellUpdate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* u-RNTI at 1169 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startList at 1170 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* am-RLC-ErrorIndicationRb2-3or4 at 1171 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* am-RLC-ErrorIndicationRb5orAbove at 1172 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cellUpdateCause at 1173 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* failureCause at 1175 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rb-timer-indicator at 1176 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measuredResultsOnRACH at 1178 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* laterNonCriticalExtensions at 1185 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellUpdate_specs_1 = {
	sizeof(struct CellUpdate),
	offsetof(struct CellUpdate, _asn_ctx),
	asn_MAP_CellUpdate_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_CellUpdate_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellUpdate = {
	"CellUpdate",
	"CellUpdate",
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
	asn_DEF_CellUpdate_tags_1,
	sizeof(asn_DEF_CellUpdate_tags_1)
		/sizeof(asn_DEF_CellUpdate_tags_1[0]), /* 1 */
	asn_DEF_CellUpdate_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellUpdate_tags_1)
		/sizeof(asn_DEF_CellUpdate_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellUpdate_1,
	9,	/* Elements count */
	&asn_SPC_CellUpdate_specs_1	/* Additional specs */
};

