/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_1_v920ext_IEs_H_
#define	_SysInfoType15_1_v920ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-Positioning-GPS-DGPS-Corrections-v920ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SysInfoType15-1-v920ext-IEs */
typedef struct SysInfoType15_1_v920ext_IEs {
	UE_Positioning_GPS_DGPS_Corrections_v920ext_t	 ue_positioning_GPS_DGPS_Corrections;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_1_v920ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_1_v920ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType15_1_v920ext_IEs_H_ */
#include <asn_internal.h>
