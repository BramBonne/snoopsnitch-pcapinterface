/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DTX_E_DCH_TTI_2ms_H_
#define	_DTX_E_DCH_TTI_2ms_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-DTX-Cycle1-2ms.h"
#include "UE-DTX-Cycle2-2ms.h"
#include "MAC-DTX-Cycle-2ms.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DTX-E-DCH-TTI-2ms */
typedef struct DTX_E_DCH_TTI_2ms {
	UE_DTX_Cycle1_2ms_t	 ue_dtx_Cycle1_2ms;
	UE_DTX_Cycle2_2ms_t	 ue_dtx_Cycle2_2ms;
	MAC_DTX_Cycle_2ms_t	 mac_dtx_Cycle_2ms;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DTX_E_DCH_TTI_2ms_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DTX_E_DCH_TTI_2ms;

#ifdef __cplusplus
}
#endif

#endif	/* _DTX_E_DCH_TTI_2ms_H_ */
#include <asn_internal.h>
