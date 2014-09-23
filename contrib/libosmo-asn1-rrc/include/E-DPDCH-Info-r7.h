/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_E_DPDCH_Info_r7_H_
#define	_E_DPDCH_Info_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-TFCI-TableIndex.h"
#include "E-DCH-MinimumSet-E-TFCI.h"
#include "E-DPDCH-Reference-E-TFCIList-r7.h"
#include "E-DPDCH-MaxChannelisationCodes.h"
#include "E-DPDCH-PL-NonMax.h"
#include "E-DPDCH-SchedulingInfoConfiguration.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E-DPDCH-Info-r7 */
typedef struct E_DPDCH_Info_r7 {
	E_TFCI_TableIndex_t	 e_TFCI_TableIndex;
	E_DCH_MinimumSet_E_TFCI_t	*e_DCH_MinimumSet_E_TFCI	/* OPTIONAL */;
	E_DPDCH_Reference_E_TFCIList_r7_t	 reference_E_TFCIs;
	E_DPDCH_MaxChannelisationCodes_t	 maxChannelisationCodes;
	E_DPDCH_PL_NonMax_t	 pl_NonMax;
	E_DPDCH_SchedulingInfoConfiguration_t	 schedulingInfoConfiguration;
	long	*threeIndexStepThreshold	/* OPTIONAL */;
	long	*twoIndexStepThreshold	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DPDCH_Info_r7_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DPDCH_Info_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DPDCH_Info_r7_H_ */
#include <asn_internal.h>
