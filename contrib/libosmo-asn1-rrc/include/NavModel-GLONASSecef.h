/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_NavModel_GLONASSecef_H_
#define	_NavModel_GLONASSecef_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NavModel-GLONASSecef */
typedef struct NavModel_GLONASSecef {
	BIT_STRING_t	 gloEn;
	BIT_STRING_t	 gloP1;
	BIT_STRING_t	 gloP2;
	BIT_STRING_t	*gloM	/* OPTIONAL */;
	BIT_STRING_t	 gloX;
	BIT_STRING_t	 gloXdot;
	BIT_STRING_t	 gloXdotdot;
	BIT_STRING_t	 gloY;
	BIT_STRING_t	 gloYdot;
	BIT_STRING_t	 gloYdotdot;
	BIT_STRING_t	 gloZ;
	BIT_STRING_t	 gloZdot;
	BIT_STRING_t	 gloZdotdot;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NavModel_GLONASSecef_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NavModel_GLONASSecef;

#ifdef __cplusplus
}
#endif

#endif	/* _NavModel_GLONASSecef_H_ */
#include <asn_internal.h>
