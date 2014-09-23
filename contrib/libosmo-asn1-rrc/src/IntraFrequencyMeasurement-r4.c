/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "IntraFrequencyMeasurement-r4.h"

static asn_TYPE_member_t asn_MBR_IntraFrequencyMeasurement_r4_1[] = {
	{ ATF_POINTER, 5, offsetof(struct IntraFrequencyMeasurement_r4, intraFreqCellInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqCellInfoList_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqCellInfoList"
		},
	{ ATF_POINTER, 4, offsetof(struct IntraFrequencyMeasurement_r4, intraFreqMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct IntraFrequencyMeasurement_r4, intraFreqReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqReportingQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqReportingQuantity"
		},
	{ ATF_POINTER, 2, offsetof(struct IntraFrequencyMeasurement_r4, measurementValidity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementValidity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementValidity"
		},
	{ ATF_POINTER, 1, offsetof(struct IntraFrequencyMeasurement_r4, reportCriteria),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_IntraFreqReportCriteria_r4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportCriteria"
		},
};
static int asn_MAP_IntraFrequencyMeasurement_r4_oms_1[] = { 0, 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_IntraFrequencyMeasurement_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_IntraFrequencyMeasurement_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqCellInfoList at 16153 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqMeasQuantity at 16154 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* intraFreqReportingQuantity at 16155 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* measurementValidity at 16156 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* reportCriteria at 16157 */
};
static asn_SEQUENCE_specifics_t asn_SPC_IntraFrequencyMeasurement_r4_specs_1 = {
	sizeof(struct IntraFrequencyMeasurement_r4),
	offsetof(struct IntraFrequencyMeasurement_r4, _asn_ctx),
	asn_MAP_IntraFrequencyMeasurement_r4_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_IntraFrequencyMeasurement_r4_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_IntraFrequencyMeasurement_r4 = {
	"IntraFrequencyMeasurement-r4",
	"IntraFrequencyMeasurement-r4",
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
	asn_DEF_IntraFrequencyMeasurement_r4_tags_1,
	sizeof(asn_DEF_IntraFrequencyMeasurement_r4_tags_1)
		/sizeof(asn_DEF_IntraFrequencyMeasurement_r4_tags_1[0]), /* 1 */
	asn_DEF_IntraFrequencyMeasurement_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_IntraFrequencyMeasurement_r4_tags_1)
		/sizeof(asn_DEF_IntraFrequencyMeasurement_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_IntraFrequencyMeasurement_r4_1,
	5,	/* Elements count */
	&asn_SPC_IntraFrequencyMeasurement_r4_specs_1	/* Additional specs */
};

