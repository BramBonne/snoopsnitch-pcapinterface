/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_ALM_NAVKeplerianSet_H_
#define	_ALM_NAVKeplerianSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "GANSS-SAT-Info-Almanac-NAVkpList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ALM-NAVKeplerianSet */
typedef struct ALM_NAVKeplerianSet {
	long	 t_oa;
	GANSS_SAT_Info_Almanac_NAVkpList_t	 sat_info_NAVkpList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ALM_NAVKeplerianSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ALM_NAVKeplerianSet;

#ifdef __cplusplus
}
#endif

#endif	/* _ALM_NAVKeplerianSet_H_ */
#include <asn_internal.h>
