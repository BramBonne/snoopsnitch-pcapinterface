/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SSDT_Information_r4_H_
#define	_SSDT_Information_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-Field.h"
#include "CodeWordSet.h"
#include "SSDT-UL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SSDT-Information-r4 */
typedef struct SSDT_Information_r4 {
	S_Field_t	 s_Field;
	CodeWordSet_t	 codeWordSet;
	SSDT_UL_t	*ssdt_UL_r4	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SSDT_Information_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SSDT_Information_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _SSDT_Information_r4_H_ */
#include <asn_internal.h>