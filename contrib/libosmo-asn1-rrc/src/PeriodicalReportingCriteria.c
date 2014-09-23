/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "PeriodicalReportingCriteria.h"

static int asn_DFL_2_set_7(int set_value, void **sptr) {
	ReportingAmount_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 7 */
		*st = 7;
		return 0;
	} else {
		/* Test default value 7 */
		return (*st == 7);
	}
}
static asn_TYPE_member_t asn_MBR_PeriodicalReportingCriteria_1[] = {
	{ ATF_POINTER, 1, offsetof(struct PeriodicalReportingCriteria, reportingAmount),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingAmount,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_7,	/* DEFAULT 7 */
		"reportingAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PeriodicalReportingCriteria, reportingInterval),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportingIntervalLong,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportingInterval"
		},
};
static int asn_MAP_PeriodicalReportingCriteria_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_PeriodicalReportingCriteria_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PeriodicalReportingCriteria_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportingAmount at 17743 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reportingInterval at 17745 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PeriodicalReportingCriteria_specs_1 = {
	sizeof(struct PeriodicalReportingCriteria),
	offsetof(struct PeriodicalReportingCriteria, _asn_ctx),
	asn_MAP_PeriodicalReportingCriteria_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PeriodicalReportingCriteria_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PeriodicalReportingCriteria = {
	"PeriodicalReportingCriteria",
	"PeriodicalReportingCriteria",
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
	asn_DEF_PeriodicalReportingCriteria_tags_1,
	sizeof(asn_DEF_PeriodicalReportingCriteria_tags_1)
		/sizeof(asn_DEF_PeriodicalReportingCriteria_tags_1[0]), /* 1 */
	asn_DEF_PeriodicalReportingCriteria_tags_1,	/* Same as above */
	sizeof(asn_DEF_PeriodicalReportingCriteria_tags_1)
		/sizeof(asn_DEF_PeriodicalReportingCriteria_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PeriodicalReportingCriteria_1,
	2,	/* Elements count */
	&asn_SPC_PeriodicalReportingCriteria_specs_1	/* Additional specs */
};

