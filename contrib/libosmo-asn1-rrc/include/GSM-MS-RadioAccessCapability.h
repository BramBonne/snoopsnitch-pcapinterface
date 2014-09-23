/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GSM_MS_RadioAccessCapability_H_
#define	_GSM_MS_RadioAccessCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-MS-RadioAccessCapability */
typedef OCTET_STRING_t	 GSM_MS_RadioAccessCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_MS_RadioAccessCapability;
asn_struct_free_f GSM_MS_RadioAccessCapability_free;
asn_struct_print_f GSM_MS_RadioAccessCapability_print;
asn_constr_check_f GSM_MS_RadioAccessCapability_constraint;
ber_type_decoder_f GSM_MS_RadioAccessCapability_decode_ber;
der_type_encoder_f GSM_MS_RadioAccessCapability_encode_der;
xer_type_decoder_f GSM_MS_RadioAccessCapability_decode_xer;
xer_type_encoder_f GSM_MS_RadioAccessCapability_encode_xer;
per_type_decoder_f GSM_MS_RadioAccessCapability_decode_uper;
per_type_encoder_f GSM_MS_RadioAccessCapability_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_MS_RadioAccessCapability_H_ */
#include <asn_internal.h>
