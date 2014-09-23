/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GANSS_SAT_Info_Almanac_SBASecef_H_
#define	_GANSS_SAT_Info_Almanac_SBASecef_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GANSS-SAT-Info-Almanac-SBASecef */
typedef struct GANSS_SAT_Info_Almanac_SBASecef {
	BIT_STRING_t	 sbasAlmDataID;
	long	 svID;
	BIT_STRING_t	 sbasAlmHealth;
	BIT_STRING_t	 sbasAlmXg;
	BIT_STRING_t	 sbasAlmYg;
	BIT_STRING_t	 sbasAlmZg;
	BIT_STRING_t	 sbasAlmXgdot;
	BIT_STRING_t	 sbasAlmYgDot;
	BIT_STRING_t	 sbasAlmZgDot;
	BIT_STRING_t	 sbasAlmTo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GANSS_SAT_Info_Almanac_SBASecef_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GANSS_SAT_Info_Almanac_SBASecef;

#ifdef __cplusplus
}
#endif

#endif	/* _GANSS_SAT_Info_Almanac_SBASecef_H_ */
#include <asn_internal.h>
