/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GPS_TOW_Assist_H_
#define	_GPS_TOW_Assist_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SatID.h"
#include <BIT_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GPS-TOW-Assist */
typedef struct GPS_TOW_Assist {
	SatID_t	 satID;
	BIT_STRING_t	 tlm_Message;
	BIT_STRING_t	 tlm_Reserved;
	BOOLEAN_t	 alert;
	BOOLEAN_t	 antiSpoof;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPS_TOW_Assist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPS_TOW_Assist;

#ifdef __cplusplus
}
#endif

#endif	/* _GPS_TOW_Assist_H_ */
#include <asn_internal.h>