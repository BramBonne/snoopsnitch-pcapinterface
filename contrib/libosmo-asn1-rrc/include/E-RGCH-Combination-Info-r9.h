/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_E_RGCH_Combination_Info_r9_H_
#define	_E_RGCH_Combination_Info_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-RGCH-Combination-Info-r9 */
typedef struct E_RGCH_Combination_Info_r9 {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	long	 rg_CombinationIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RGCH_Combination_Info_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RGCH_Combination_Info_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RGCH_Combination_Info_r9_H_ */
#include <asn_internal.h>
