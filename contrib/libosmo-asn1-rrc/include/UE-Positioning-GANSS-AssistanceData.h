/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_GANSS_AssistanceData_H_
#define	_UE_Positioning_GANSS_AssistanceData_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GANSS_ReferenceTime;
struct ReferenceLocationGANSS;
struct UE_Positioning_GANSS_IonosphericModel;
struct GANSSGenericDataList;

/* UE-Positioning-GANSS-AssistanceData */
typedef struct UE_Positioning_GANSS_AssistanceData {
	struct UE_Positioning_GANSS_ReferenceTime	*ue_positioning_GANSS_ReferenceTime	/* OPTIONAL */;
	struct ReferenceLocationGANSS	*uePositioningGanssReferencePosition	/* OPTIONAL */;
	struct UE_Positioning_GANSS_IonosphericModel	*uePositioningGanssIonosphericModel	/* OPTIONAL */;
	struct GANSSGenericDataList	*ganssGenericDataList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_GANSS_AssistanceData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GANSS_AssistanceData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GANSS-ReferenceTime.h"
#include "ReferenceLocationGANSS.h"
#include "UE-Positioning-GANSS-IonosphericModel.h"
#include "GANSSGenericDataList.h"

#endif	/* _UE_Positioning_GANSS_AssistanceData_H_ */
#include <asn_internal.h>
