/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MultipleEUTRAFrequencyBandIndicatorExtensionList_H_
#define	_MultipleEUTRAFrequencyBandIndicatorExtensionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioFrequencyBandEUTRAExt.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MultipleEUTRAFrequencyBandIndicatorExtensionList */
typedef struct MultipleEUTRAFrequencyBandIndicatorExtensionList {
	A_SEQUENCE_OF(RadioFrequencyBandEUTRAExt_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MultipleEUTRAFrequencyBandIndicatorExtensionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MultipleEUTRAFrequencyBandIndicatorExtensionList;

#ifdef __cplusplus
}
#endif

#endif	/* _MultipleEUTRAFrequencyBandIndicatorExtensionList_H_ */
#include <asn_internal.h>
