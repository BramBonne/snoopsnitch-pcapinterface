/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SRNC_RelocationInfo_v5c0ext_IEs_H_
#define	_SRNC_RelocationInfo_v5c0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability_v5c0ext;

/* SRNC-RelocationInfo-v5c0ext-IEs */
typedef struct SRNC_RelocationInfo_v5c0ext_IEs {
	struct UE_RadioAccessCapability_v5c0ext	*ue_RadioAccessCapability_v5c0ext	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRNC_RelocationInfo_v5c0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRNC_RelocationInfo_v5c0ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-RadioAccessCapability-v5c0ext.h"

#endif	/* _SRNC_RelocationInfo_v5c0ext_IEs_H_ */
#include <asn_internal.h>
