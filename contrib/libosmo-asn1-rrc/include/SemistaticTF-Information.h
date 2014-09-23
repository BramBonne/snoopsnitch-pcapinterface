/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SemistaticTF_Information_H_
#define	_SemistaticTF_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ChannelCodingType.h"
#include "RateMatchingAttribute.h"
#include "CRC-Size.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SemistaticTF-Information */
typedef struct SemistaticTF_Information {
	ChannelCodingType_t	 channelCodingType;
	RateMatchingAttribute_t	 rateMatchingAttribute;
	CRC_Size_t	 crc_Size;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SemistaticTF_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SemistaticTF_Information;

#ifdef __cplusplus
}
#endif

#endif	/* _SemistaticTF_Information_H_ */
#include <asn_internal.h>
