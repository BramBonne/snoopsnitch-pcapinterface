/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UL_DPCH_Info_r4_H_
#define	_UL_DPCH_Info_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ScramblingCodeType.h"
#include "UL-ScramblingCode.h"
#include "NumberOfDPDCH.h"
#include "SpreadingFactor.h"
#include <BOOLEAN.h>
#include "NumberOfFBI-Bits.h"
#include "PuncturingLimit.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_DPCH_Info_r4__modeSpecificInfo_PR {
	UL_DPCH_Info_r4__modeSpecificInfo_PR_NOTHING,	/* No components present */
	UL_DPCH_Info_r4__modeSpecificInfo_PR_fdd,
	UL_DPCH_Info_r4__modeSpecificInfo_PR_tdd
} UL_DPCH_Info_r4__modeSpecificInfo_PR;

/* Forward declarations */
struct UL_DPCH_PowerControlInfo_r4;
struct UL_TimingAdvanceControl_r4;
struct UL_CCTrCHList_r4;
struct UL_CCTrCHListToRemove;

/* UL-DPCH-Info-r4 */
typedef struct UL_DPCH_Info_r4 {
	struct UL_DPCH_PowerControlInfo_r4	*ul_DPCH_PowerControlInfo	/* OPTIONAL */;
	struct UL_DPCH_Info_r4__modeSpecificInfo {
		UL_DPCH_Info_r4__modeSpecificInfo_PR present;
		union UL_DPCH_Info_r4__modeSpecificInfo_u {
			struct UL_DPCH_Info_r4__modeSpecificInfo__fdd {
				ScramblingCodeType_t	 scramblingCodeType;
				UL_ScramblingCode_t	 scramblingCode;
				NumberOfDPDCH_t	*numberOfDPDCH	/* DEFAULT 1 */;
				SpreadingFactor_t	 spreadingFactor;
				BOOLEAN_t	 tfci_Existence;
				NumberOfFBI_Bits_t	*numberOfFBI_Bits	/* OPTIONAL */;
				PuncturingLimit_t	 puncturingLimit;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct UL_DPCH_Info_r4__modeSpecificInfo__tdd {
				struct UL_TimingAdvanceControl_r4	*ul_TimingAdvance	/* OPTIONAL */;
				struct UL_CCTrCHList_r4	*ul_CCTrCHList	/* OPTIONAL */;
				struct UL_CCTrCHListToRemove	*ul_CCTrCHListToRemove	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DPCH_Info_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DPCH_Info_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-DPCH-PowerControlInfo-r4.h"
#include "UL-TimingAdvanceControl-r4.h"
#include "UL-CCTrCHList-r4.h"
#include "UL-CCTrCHListToRemove.h"

#endif	/* _UL_DPCH_Info_r4_H_ */
#include <asn_internal.h>
