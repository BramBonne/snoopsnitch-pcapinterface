/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBSFN_InterFrequencyNeighbourList_v860ext_H_
#define	_MBSFN_InterFrequencyNeighbourList_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBSFNInterFrequencyNeighbour_v860ext;

/* MBSFN-InterFrequencyNeighbourList-v860ext */
typedef struct MBSFN_InterFrequencyNeighbourList_v860ext {
	A_SEQUENCE_OF(struct MBSFNInterFrequencyNeighbour_v860ext) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_InterFrequencyNeighbourList_v860ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_InterFrequencyNeighbourList_v860ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MBSFNInterFrequencyNeighbour-v860ext.h"

#endif	/* _MBSFN_InterFrequencyNeighbourList_v860ext_H_ */
#include <asn_internal.h>
