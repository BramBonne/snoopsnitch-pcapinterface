/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CD_SignatureCodeList_H_
#define	_CD_SignatureCodeList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CD-SignatureCode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CD-SignatureCodeList */
typedef struct CD_SignatureCodeList {
	A_SEQUENCE_OF(CD_SignatureCode_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CD_SignatureCodeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CD_SignatureCodeList;

#ifdef __cplusplus
}
#endif

#endif	/* _CD_SignatureCodeList_H_ */
#include <asn_internal.h>
