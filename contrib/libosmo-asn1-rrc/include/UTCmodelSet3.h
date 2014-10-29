/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UTCmodelSet3_H_
#define	_UTCmodelSet3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UTCmodelSet3 */
typedef struct UTCmodelSet3 {
	BIT_STRING_t	 utcA1wnt;
	BIT_STRING_t	 utcA0wnt;
	BIT_STRING_t	 utcTot;
	BIT_STRING_t	 utcWNt;
	BIT_STRING_t	 utcDeltaTls;
	BIT_STRING_t	 utcWNlsf;
	BIT_STRING_t	 utcDN;
	BIT_STRING_t	 utcDeltaTlsf;
	BIT_STRING_t	 utcStandardID;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTCmodelSet3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTCmodelSet3;

#ifdef __cplusplus
}
#endif

#endif	/* _UTCmodelSet3_H_ */
#include <asn_internal.h>