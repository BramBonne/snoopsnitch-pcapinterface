/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CipheringStatusList_H_
#define	_CipheringStatusList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CipheringStatusCNdomain;

/* CipheringStatusList */
typedef struct CipheringStatusList {
	A_SEQUENCE_OF(struct CipheringStatusCNdomain) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CipheringStatusList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CipheringStatusList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CipheringStatusCNdomain.h"

#endif	/* _CipheringStatusList_H_ */
#include <asn_internal.h>
