/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterRATCellInfoList_H_
#define	_InterRATCellInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RemovedInterRATCellList.h"
#include "NewInterRATCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellsForInterRATMeasList;

/* InterRATCellInfoList */
typedef struct InterRATCellInfoList {
	RemovedInterRATCellList_t	 removedInterRATCellList;
	NewInterRATCellList_t	 newInterRATCellList;
	struct CellsForInterRATMeasList	*cellsForInterRATMeasList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATCellInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CellsForInterRATMeasList.h"

#endif	/* _InterRATCellInfoList_H_ */
#include <asn_internal.h>
