/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_DGANSSCorrections_v920ext_H_
#define	_UE_Positioning_DGANSSCorrections_v920ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DGANSSInfoList-v920ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-Positioning-DGANSSCorrections-v920ext */
typedef struct UE_Positioning_DGANSSCorrections_v920ext {
	DGANSSInfoList_v920ext_t	 dganssInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_DGANSSCorrections_v920ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_DGANSSCorrections_v920ext;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_DGANSSCorrections_v920ext_H_ */
#include <asn_internal.h>
