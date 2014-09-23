/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "EUTRA-FrequencyAndPriorityInfoExtension-vb50ext.h"

static int
memb_priority_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_qRxLevMinEUTRA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -70 && value <= -22)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_threshXhigh_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_threshXlow_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_qqualMinEUTRA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -34 && value <= -3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_threshXhigh2_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_threshXlow2_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_priority_constr_4 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_qRxLevMinEUTRA_constr_5 = {
	{ APC_CONSTRAINED,	 6,  6, -70, -22 }	/* (-70..-22) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threshXhigh_constr_6 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threshXlow_constr_7 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_qqualMinEUTRA_constr_8 = {
	{ APC_CONSTRAINED,	 5,  5, -34, -3 }	/* (-34..-3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threshXhigh2_constr_9 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_threshXlow2_constr_10 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, earfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EARFCNExtension,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"earfcn"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, measurementBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_MeasurementBandwidth,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementBandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, priority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_priority_constraint_1,
		&asn_PER_memb_priority_constr_4,
		0,
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, qRxLevMinEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_qRxLevMinEUTRA_constraint_1,
		&asn_PER_memb_qRxLevMinEUTRA_constr_5,
		0,
		"qRxLevMinEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, threshXhigh),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threshXhigh_constraint_1,
		&asn_PER_memb_threshXhigh_constr_6,
		0,
		"threshXhigh"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, threshXlow),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threshXlow_constraint_1,
		&asn_PER_memb_threshXlow_constr_7,
		0,
		"threshXlow"
		},
	{ ATF_POINTER, 4, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, qqualMinEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_qqualMinEUTRA_constraint_1,
		&asn_PER_memb_qqualMinEUTRA_constr_8,
		0,
		"qqualMinEUTRA"
		},
	{ ATF_POINTER, 3, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, threshXhigh2),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threshXhigh2_constraint_1,
		&asn_PER_memb_threshXhigh2_constr_9,
		0,
		"threshXhigh2"
		},
	{ ATF_POINTER, 2, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, threshXlow2),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_threshXlow2_constraint_1,
		&asn_PER_memb_threshXlow2_constr_10,
		0,
		"threshXlow2"
		},
	{ ATF_POINTER, 1, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, eutra_blackListedCellList),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRA_BlacklistedCellPerFreqList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutra-blackListedCellList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, eutraDetection),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutraDetection"
		},
};
static int asn_MAP_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_oms_1[] = { 1, 6, 7, 8, 9 };
static ber_tlv_tag_t asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* earfcn at 13855 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurementBandwidth at 13856 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* priority at 13857 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qRxLevMinEUTRA at 13859 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* threshXhigh at 13861 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* threshXlow at 13863 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* qqualMinEUTRA at 13864 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* threshXhigh2 at 13865 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* threshXlow2 at 13866 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* eutra-blackListedCellList at 13867 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* eutraDetection at 13868 */
};
static asn_SEQUENCE_specifics_t asn_SPC_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_specs_1 = {
	sizeof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext),
	offsetof(struct EUTRA_FrequencyAndPriorityInfoExtension_vb50ext, _asn_ctx),
	asn_MAP_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext = {
	"EUTRA-FrequencyAndPriorityInfoExtension-vb50ext",
	"EUTRA-FrequencyAndPriorityInfoExtension-vb50ext",
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
	asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1,
	sizeof(asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1)
		/sizeof(asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1[0]), /* 1 */
	asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1,	/* Same as above */
	sizeof(asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1)
		/sizeof(asn_DEF_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_1,
	11,	/* Elements count */
	&asn_SPC_EUTRA_FrequencyAndPriorityInfoExtension_vb50ext_specs_1	/* Additional specs */
};

