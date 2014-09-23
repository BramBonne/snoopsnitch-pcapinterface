/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_4_H_
#define	_SysInfoType15_4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-OTDOA-AssistanceData.h"
#include "SysInfoType15-4-v3a0ext.h"
#include "SysInfoType15-4-v4b0ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_CipherParameters;

/* SysInfoType15-4 */
typedef struct SysInfoType15_4 {
	struct UE_Positioning_CipherParameters	*ue_positioning_OTDOA_CipherParameters	/* OPTIONAL */;
	UE_Positioning_OTDOA_AssistanceData_t	 ue_positioning_OTDOA_AssistanceData;
	struct SysInfoType15_4__v3a0NonCriticalExtensions {
		SysInfoType15_4_v3a0ext_t	 sysInfoType15_4_v3a0ext;
		struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions {
			SysInfoType15_4_v4b0ext_t	 sysInfoType15_4_v4b0ext;
			struct SysInfoType15_4__v3a0NonCriticalExtensions__v4b0NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v4b0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v3a0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-CipherParameters.h"

#endif	/* _SysInfoType15_4_H_ */
#include <asn_internal.h>
