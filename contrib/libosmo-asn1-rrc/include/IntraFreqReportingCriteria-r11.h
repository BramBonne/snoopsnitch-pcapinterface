/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_IntraFreqReportingCriteria_r11_H_
#define	_IntraFreqReportingCriteria_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteriaList_r7;
struct IntraFreqEventCriteriaListOnSecULFreq;
struct CellInfoListToBeExcluded;

/* IntraFreqReportingCriteria-r11 */
typedef struct IntraFreqReportingCriteria_r11 {
	struct IntraFreqEventCriteriaList_r7	*eventCriteriaList	/* OPTIONAL */;
	struct IntraFreqEventCriteriaListOnSecULFreq	*eventCriteriaListOnSecULFreq	/* OPTIONAL */;
	struct CellInfoListToBeExcluded	*excludedCellInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_r11;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteriaList-r7.h"
#include "IntraFreqEventCriteriaListOnSecULFreq.h"
#include "CellInfoListToBeExcluded.h"

#endif	/* _IntraFreqReportingCriteria_r11_H_ */
#include <asn_internal.h>
