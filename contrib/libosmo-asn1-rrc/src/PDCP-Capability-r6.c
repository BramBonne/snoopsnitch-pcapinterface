/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "PDCP-Capability-r6.h"

static int
losslessDLRLC_PDUSizeChange_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
losslessDLRLC_PDUSizeChange_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
losslessDLRLC_PDUSizeChange_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
losslessDLRLC_PDUSizeChange_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
losslessDLRLC_PDUSizeChange_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
losslessDLRLC_PDUSizeChange_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
losslessDLRLC_PDUSizeChange_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
losslessDLRLC_PDUSizeChange_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
losslessDLRLC_PDUSizeChange_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	losslessDLRLC_PDUSizeChange_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_reverseCompressionDepth_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_losslessDLRLC_PDUSizeChange_constr_3 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportForRfc2507_constr_5 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_reverseCompressionDepth_constr_12 = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_supportForRfc3095_constr_8 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_losslessDLRLC_PDUSizeChange_value2enum_3[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_losslessDLRLC_PDUSizeChange_enum2value_3[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_losslessDLRLC_PDUSizeChange_specs_3 = {
	asn_MAP_losslessDLRLC_PDUSizeChange_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_losslessDLRLC_PDUSizeChange_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_losslessDLRLC_PDUSizeChange_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_losslessDLRLC_PDUSizeChange_3 = {
	"losslessDLRLC-PDUSizeChange",
	"losslessDLRLC-PDUSizeChange",
	losslessDLRLC_PDUSizeChange_3_free,
	losslessDLRLC_PDUSizeChange_3_print,
	losslessDLRLC_PDUSizeChange_3_constraint,
	losslessDLRLC_PDUSizeChange_3_decode_ber,
	losslessDLRLC_PDUSizeChange_3_encode_der,
	losslessDLRLC_PDUSizeChange_3_decode_xer,
	losslessDLRLC_PDUSizeChange_3_encode_xer,
	losslessDLRLC_PDUSizeChange_3_decode_uper,
	losslessDLRLC_PDUSizeChange_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_losslessDLRLC_PDUSizeChange_tags_3,
	sizeof(asn_DEF_losslessDLRLC_PDUSizeChange_tags_3)
		/sizeof(asn_DEF_losslessDLRLC_PDUSizeChange_tags_3[0]) - 1, /* 1 */
	asn_DEF_losslessDLRLC_PDUSizeChange_tags_3,	/* Same as above */
	sizeof(asn_DEF_losslessDLRLC_PDUSizeChange_tags_3)
		/sizeof(asn_DEF_losslessDLRLC_PDUSizeChange_tags_3[0]), /* 2 */
	&asn_PER_type_losslessDLRLC_PDUSizeChange_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_losslessDLRLC_PDUSizeChange_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_supportForRfc2507_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6__supportForRfc2507, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6__supportForRfc2507, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxHcContextSpace_r5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_supportForRfc2507_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported at 1873 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported at 1875 */
};
static asn_CHOICE_specifics_t asn_SPC_supportForRfc2507_specs_5 = {
	sizeof(struct PDCP_Capability_r6__supportForRfc2507),
	offsetof(struct PDCP_Capability_r6__supportForRfc2507, _asn_ctx),
	offsetof(struct PDCP_Capability_r6__supportForRfc2507, present),
	sizeof(((struct PDCP_Capability_r6__supportForRfc2507 *)0)->present),
	asn_MAP_supportForRfc2507_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForRfc2507_5 = {
	"supportForRfc2507",
	"supportForRfc2507",
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
	&asn_PER_type_supportForRfc2507_constr_5,
	asn_MBR_supportForRfc2507_5,
	2,	/* Elements count */
	&asn_SPC_supportForRfc2507_specs_5	/* Additional specs */
};

static int asn_DFL_11_set_4(int set_value, void **sptr) {
	MaxROHC_ContextSessions_r4_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 4 */
		*st = 4;
		return 0;
	} else {
		/* Test default value 4 */
		return (*st == 4);
	}
}
static int asn_DFL_12_set_0(int set_value, void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 0 */
		*st = 0;
		return 0;
	} else {
		/* Test default value 0 */
		return (*st == 0);
	}
}
static asn_TYPE_member_t asn_MBR_supported_10[] = {
	{ ATF_POINTER, 2, offsetof(struct PDCP_Capability_r6__supportForRfc3095__supported, maxROHC_ContextSessions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxROHC_ContextSessions_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_11_set_4,	/* DEFAULT 4 */
		"maxROHC-ContextSessions"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct PDCP_Capability_r6__supportForRfc3095__supported, reverseCompressionDepth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_reverseCompressionDepth_constraint_10,
		&asn_PER_memb_reverseCompressionDepth_constr_12,
		asn_DFL_12_set_0,	/* DEFAULT 0 */
		"reverseCompressionDepth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6__supportForRfc3095__supported, supportForRfc3095ContextRelocation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095ContextRelocation"
		},
};
static int asn_MAP_supported_oms_10[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_supported_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_supported_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* maxROHC-ContextSessions at 1879 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reverseCompressionDepth at 1880 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* supportForRfc3095ContextRelocation at 1881 */
};
static asn_SEQUENCE_specifics_t asn_SPC_supported_specs_10 = {
	sizeof(struct PDCP_Capability_r6__supportForRfc3095__supported),
	offsetof(struct PDCP_Capability_r6__supportForRfc3095__supported, _asn_ctx),
	asn_MAP_supported_tag2el_10,
	3,	/* Count of tags in the map */
	asn_MAP_supported_oms_10,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supported_10 = {
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
	asn_DEF_supported_tags_10,
	sizeof(asn_DEF_supported_tags_10)
		/sizeof(asn_DEF_supported_tags_10[0]) - 1, /* 1 */
	asn_DEF_supported_tags_10,	/* Same as above */
	sizeof(asn_DEF_supported_tags_10)
		/sizeof(asn_DEF_supported_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_supported_10,
	3,	/* Elements count */
	&asn_SPC_supported_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_supportForRfc3095_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6__supportForRfc3095, choice.notSupported),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"notSupported"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6__supportForRfc3095, choice.supported),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_supported_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supported"
		},
};
static asn_TYPE_tag2member_t asn_MAP_supportForRfc3095_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* notSupported at 1877 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supported at 1879 */
};
static asn_CHOICE_specifics_t asn_SPC_supportForRfc3095_specs_8 = {
	sizeof(struct PDCP_Capability_r6__supportForRfc3095),
	offsetof(struct PDCP_Capability_r6__supportForRfc3095, _asn_ctx),
	offsetof(struct PDCP_Capability_r6__supportForRfc3095, present),
	sizeof(((struct PDCP_Capability_r6__supportForRfc3095 *)0)->present),
	asn_MAP_supportForRfc3095_tag2el_8,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_supportForRfc3095_8 = {
	"supportForRfc3095",
	"supportForRfc3095",
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
	&asn_PER_type_supportForRfc3095_constr_8,
	asn_MBR_supportForRfc3095_8,
	2,	/* Elements count */
	&asn_SPC_supportForRfc3095_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDCP_Capability_r6_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6, losslessSRNS_RelocationSupport),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"losslessSRNS-RelocationSupport"
		},
	{ ATF_POINTER, 1, offsetof(struct PDCP_Capability_r6, losslessDLRLC_PDUSizeChange),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_losslessDLRLC_PDUSizeChange_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"losslessDLRLC-PDUSizeChange"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6, supportForRfc2507),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_supportForRfc2507_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc2507"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PDCP_Capability_r6, supportForRfc3095),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_supportForRfc3095_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"supportForRfc3095"
		},
};
static int asn_MAP_PDCP_Capability_r6_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_PDCP_Capability_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PDCP_Capability_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* losslessSRNS-RelocationSupport at 1870 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* losslessDLRLC-PDUSizeChange at 1871 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportForRfc2507 at 1873 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* supportForRfc3095 at 1877 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PDCP_Capability_r6_specs_1 = {
	sizeof(struct PDCP_Capability_r6),
	offsetof(struct PDCP_Capability_r6, _asn_ctx),
	asn_MAP_PDCP_Capability_r6_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PDCP_Capability_r6_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PDCP_Capability_r6 = {
	"PDCP-Capability-r6",
	"PDCP-Capability-r6",
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
	asn_DEF_PDCP_Capability_r6_tags_1,
	sizeof(asn_DEF_PDCP_Capability_r6_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r6_tags_1[0]), /* 1 */
	asn_DEF_PDCP_Capability_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDCP_Capability_r6_tags_1)
		/sizeof(asn_DEF_PDCP_Capability_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PDCP_Capability_r6_1,
	4,	/* Elements count */
	&asn_SPC_PDCP_Capability_r6_specs_1	/* Additional specs */
};

