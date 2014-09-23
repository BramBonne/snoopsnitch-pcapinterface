/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_LocationRegistrationAccessClassBarredList_H_
#define	_LocationRegistrationAccessClassBarredList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccessClassBarred.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LocationRegistrationAccessClassBarredList */
typedef struct LocationRegistrationAccessClassBarredList {
	A_SEQUENCE_OF(AccessClassBarred_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LocationRegistrationAccessClassBarredList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LocationRegistrationAccessClassBarredList;

#ifdef __cplusplus
}
#endif

#endif	/* _LocationRegistrationAccessClassBarredList_H_ */
#include <asn_internal.h>
