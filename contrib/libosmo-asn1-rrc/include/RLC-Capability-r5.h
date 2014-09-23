/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RLC_Capability_r5_H_
#define	_RLC_Capability_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TotalRLC-AM-BufferSize-r5.h"
#include "MaximumRLC-WindowSize.h"
#include "MaximumAM-EntityNumberRLC-Cap.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLC-Capability-r5 */
typedef struct RLC_Capability_r5 {
	TotalRLC_AM_BufferSize_r5_t	 totalRLC_AM_BufferSize;
	MaximumRLC_WindowSize_t	 maximumRLC_WindowSize;
	MaximumAM_EntityNumberRLC_Cap_t	 maximumAM_EntityNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Capability_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Capability_r5;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Capability_r5_H_ */
#include <asn_internal.h>
