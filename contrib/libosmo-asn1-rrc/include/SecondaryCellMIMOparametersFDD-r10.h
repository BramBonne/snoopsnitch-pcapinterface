/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SecondaryCellMIMOparametersFDD_r10_H_
#define	_SecondaryCellMIMOparametersFDD_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "MIMO-N-M-Ratio.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecondaryCellMIMOparametersFDD_r10_PR {
	SecondaryCellMIMOparametersFDD_r10_PR_NOTHING,	/* No components present */
	SecondaryCellMIMOparametersFDD_r10_PR_continue,
	SecondaryCellMIMOparametersFDD_r10_PR_newConfiguration
} SecondaryCellMIMOparametersFDD_r10_PR;
typedef enum SecondaryCellMIMOparametersFDD_r10__newConfiguration__precodingWeightSetRestriction {
	SecondaryCellMIMOparametersFDD_r10__newConfiguration__precodingWeightSetRestriction_true	= 0
} e_SecondaryCellMIMOparametersFDD_r10__newConfiguration__precodingWeightSetRestriction;

/* Forward declarations */
struct MIMO_PilotConfiguration_r9;

/* SecondaryCellMIMOparametersFDD-r10 */
typedef struct SecondaryCellMIMOparametersFDD_r10 {
	SecondaryCellMIMOparametersFDD_r10_PR present;
	union SecondaryCellMIMOparametersFDD_r10_u {
		NULL_t	 Continue;
		struct SecondaryCellMIMOparametersFDD_r10__newConfiguration {
			MIMO_N_M_Ratio_t	*mimoN_M_Ratio	/* OPTIONAL */;
			struct MIMO_PilotConfiguration_r9	*mimoPilotConfiguration	/* OPTIONAL */;
			long	*precodingWeightSetRestriction	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} newConfiguration;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryCellMIMOparametersFDD_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_precodingWeightSetRestriction_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryCellMIMOparametersFDD_r10;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MIMO-PilotConfiguration-r9.h"

#endif	/* _SecondaryCellMIMOparametersFDD_r10_H_ */
#include <asn_internal.h>
