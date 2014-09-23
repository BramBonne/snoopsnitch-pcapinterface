/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_LoggedCellInfo_vb50ext_H_
#define	_LoggedCellInfo_vb50ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LoggedEUTRACellInfo-vb50ext.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoggedCellInfo_vb50ext_PR {
	LoggedCellInfo_vb50ext_PR_NOTHING,	/* No components present */
	LoggedCellInfo_vb50ext_PR_loggedEUTRACellInfo
} LoggedCellInfo_vb50ext_PR;

/* LoggedCellInfo-vb50ext */
typedef struct LoggedCellInfo_vb50ext {
	LoggedCellInfo_vb50ext_PR present;
	union LoggedCellInfo_vb50ext_u {
		LoggedEUTRACellInfo_vb50ext_t	 loggedEUTRACellInfo;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedCellInfo_vb50ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedCellInfo_vb50ext;

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedCellInfo_vb50ext_H_ */
#include <asn_internal.h>
