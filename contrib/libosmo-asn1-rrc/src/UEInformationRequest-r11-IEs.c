/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "UEInformationRequest-r11-IEs.h"

static int
loggedMeasReportRequest_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
loggedMeasReportRequest_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
loggedMeasReportRequest_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
loggedMeasReportRequest_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
loggedMeasReportRequest_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
loggedMeasReportRequest_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
loggedMeasReportRequest_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
loggedMeasReportRequest_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
loggedMeasReportRequest_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
loggedMeasReportRequest_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	loggedMeasReportRequest_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
loggedANRReportRequest_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
loggedANRReportRequest_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
loggedANRReportRequest_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
loggedANRReportRequest_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
loggedANRReportRequest_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
loggedANRReportRequest_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
loggedANRReportRequest_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
loggedANRReportRequest_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
loggedANRReportRequest_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
loggedANRReportRequest_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	loggedANRReportRequest_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
connectionEstablishmentFailureRequest_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
connectionEstablishmentFailureRequest_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
connectionEstablishmentFailureRequest_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
connectionEstablishmentFailureRequest_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
connectionEstablishmentFailureRequest_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
connectionEstablishmentFailureRequest_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
connectionEstablishmentFailureRequest_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
connectionEstablishmentFailureRequest_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
connectionEstablishmentFailureRequest_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	connectionEstablishmentFailureRequest_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_loggedMeasReportRequest_constr_2 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_loggedANRReportRequest_constr_4 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_connectionEstablishmentFailureRequest_constr_6 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_loggedMeasReportRequest_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_loggedMeasReportRequest_enum2value_2[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_loggedMeasReportRequest_specs_2 = {
	asn_MAP_loggedMeasReportRequest_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_loggedMeasReportRequest_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_loggedMeasReportRequest_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_loggedMeasReportRequest_2 = {
	"loggedMeasReportRequest",
	"loggedMeasReportRequest",
	loggedMeasReportRequest_2_free,
	loggedMeasReportRequest_2_print,
	loggedMeasReportRequest_2_constraint,
	loggedMeasReportRequest_2_decode_ber,
	loggedMeasReportRequest_2_encode_der,
	loggedMeasReportRequest_2_decode_xer,
	loggedMeasReportRequest_2_encode_xer,
	loggedMeasReportRequest_2_decode_uper,
	loggedMeasReportRequest_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_loggedMeasReportRequest_tags_2,
	sizeof(asn_DEF_loggedMeasReportRequest_tags_2)
		/sizeof(asn_DEF_loggedMeasReportRequest_tags_2[0]) - 1, /* 1 */
	asn_DEF_loggedMeasReportRequest_tags_2,	/* Same as above */
	sizeof(asn_DEF_loggedMeasReportRequest_tags_2)
		/sizeof(asn_DEF_loggedMeasReportRequest_tags_2[0]), /* 2 */
	&asn_PER_type_loggedMeasReportRequest_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_loggedMeasReportRequest_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_loggedANRReportRequest_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_loggedANRReportRequest_enum2value_4[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_loggedANRReportRequest_specs_4 = {
	asn_MAP_loggedANRReportRequest_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_loggedANRReportRequest_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_loggedANRReportRequest_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_loggedANRReportRequest_4 = {
	"loggedANRReportRequest",
	"loggedANRReportRequest",
	loggedANRReportRequest_4_free,
	loggedANRReportRequest_4_print,
	loggedANRReportRequest_4_constraint,
	loggedANRReportRequest_4_decode_ber,
	loggedANRReportRequest_4_encode_der,
	loggedANRReportRequest_4_decode_xer,
	loggedANRReportRequest_4_encode_xer,
	loggedANRReportRequest_4_decode_uper,
	loggedANRReportRequest_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_loggedANRReportRequest_tags_4,
	sizeof(asn_DEF_loggedANRReportRequest_tags_4)
		/sizeof(asn_DEF_loggedANRReportRequest_tags_4[0]) - 1, /* 1 */
	asn_DEF_loggedANRReportRequest_tags_4,	/* Same as above */
	sizeof(asn_DEF_loggedANRReportRequest_tags_4)
		/sizeof(asn_DEF_loggedANRReportRequest_tags_4[0]), /* 2 */
	&asn_PER_type_loggedANRReportRequest_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_loggedANRReportRequest_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_connectionEstablishmentFailureRequest_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_connectionEstablishmentFailureRequest_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_connectionEstablishmentFailureRequest_specs_6 = {
	asn_MAP_connectionEstablishmentFailureRequest_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_connectionEstablishmentFailureRequest_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_connectionEstablishmentFailureRequest_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_connectionEstablishmentFailureRequest_6 = {
	"connectionEstablishmentFailureRequest",
	"connectionEstablishmentFailureRequest",
	connectionEstablishmentFailureRequest_6_free,
	connectionEstablishmentFailureRequest_6_print,
	connectionEstablishmentFailureRequest_6_constraint,
	connectionEstablishmentFailureRequest_6_decode_ber,
	connectionEstablishmentFailureRequest_6_encode_der,
	connectionEstablishmentFailureRequest_6_decode_xer,
	connectionEstablishmentFailureRequest_6_encode_xer,
	connectionEstablishmentFailureRequest_6_decode_uper,
	connectionEstablishmentFailureRequest_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_connectionEstablishmentFailureRequest_tags_6,
	sizeof(asn_DEF_connectionEstablishmentFailureRequest_tags_6)
		/sizeof(asn_DEF_connectionEstablishmentFailureRequest_tags_6[0]) - 1, /* 1 */
	asn_DEF_connectionEstablishmentFailureRequest_tags_6,	/* Same as above */
	sizeof(asn_DEF_connectionEstablishmentFailureRequest_tags_6)
		/sizeof(asn_DEF_connectionEstablishmentFailureRequest_tags_6[0]), /* 2 */
	&asn_PER_type_connectionEstablishmentFailureRequest_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_connectionEstablishmentFailureRequest_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UEInformationRequest_r11_IEs_1[] = {
	{ ATF_POINTER, 3, offsetof(struct UEInformationRequest_r11_IEs, loggedMeasReportRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_loggedMeasReportRequest_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedMeasReportRequest"
		},
	{ ATF_POINTER, 2, offsetof(struct UEInformationRequest_r11_IEs, loggedANRReportRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_loggedANRReportRequest_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedANRReportRequest"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationRequest_r11_IEs, connectionEstablishmentFailureRequest),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_connectionEstablishmentFailureRequest_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"connectionEstablishmentFailureRequest"
		},
};
static int asn_MAP_UEInformationRequest_r11_IEs_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_UEInformationRequest_r11_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_UEInformationRequest_r11_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggedMeasReportRequest at 11546 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggedANRReportRequest at 11547 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* connectionEstablishmentFailureRequest at 11548 */
};
static asn_SEQUENCE_specifics_t asn_SPC_UEInformationRequest_r11_IEs_specs_1 = {
	sizeof(struct UEInformationRequest_r11_IEs),
	offsetof(struct UEInformationRequest_r11_IEs, _asn_ctx),
	asn_MAP_UEInformationRequest_r11_IEs_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UEInformationRequest_r11_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_r11_IEs = {
	"UEInformationRequest-r11-IEs",
	"UEInformationRequest-r11-IEs",
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
	asn_DEF_UEInformationRequest_r11_IEs_tags_1,
	sizeof(asn_DEF_UEInformationRequest_r11_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_r11_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationRequest_r11_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationRequest_r11_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_r11_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UEInformationRequest_r11_IEs_1,
	3,	/* Elements count */
	&asn_SPC_UEInformationRequest_r11_IEs_specs_1	/* Additional specs */
};

