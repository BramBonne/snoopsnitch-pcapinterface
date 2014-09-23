/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GANSS_AuxiliaryInfo_H_
#define	_UE_Positioning_GANSS_AuxiliaryInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AuxInfoGANSS-ID1.h"
#include "AuxInfoGANSS-ID3.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_GANSS_AuxiliaryInfo_PR {
	UE_Positioning_GANSS_AuxiliaryInfo_PR_NOTHING,	/* No components present */
	UE_Positioning_GANSS_AuxiliaryInfo_PR_ganssID1,
	UE_Positioning_GANSS_AuxiliaryInfo_PR_ganssID3
} UE_Positioning_GANSS_AuxiliaryInfo_PR;

/* UE-Positioning-GANSS-AuxiliaryInfo */
typedef struct UE_Positioning_GANSS_AuxiliaryInfo {
	UE_Positioning_GANSS_AuxiliaryInfo_PR present;
	union UE_Positioning_GANSS_AuxiliaryInfo_u {
		AuxInfoGANSS_ID1_t	 ganssID1;
		AuxInfoGANSS_ID3_t	 ganssID3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AuxiliaryInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AuxiliaryInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_GANSS_AuxiliaryInfo_H_ */
#include <asn_internal.h>
