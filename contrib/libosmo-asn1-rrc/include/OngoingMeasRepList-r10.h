/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_OngoingMeasRepList_r10_H_
#define	_OngoingMeasRepList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct OngoingMeasRep_r10;

/* OngoingMeasRepList-r10 */
typedef struct OngoingMeasRepList_r10 {
	A_SEQUENCE_OF(struct OngoingMeasRep_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OngoingMeasRepList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OngoingMeasRepList_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "OngoingMeasRep-r10.h"

#endif	/* _OngoingMeasRepList_r10_H_ */
#include <asn_internal.h>
