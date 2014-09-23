/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_GSM_Classmark2_H_
#define	_GSM_Classmark2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-Classmark2 */
typedef OCTET_STRING_t	 GSM_Classmark2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_Classmark2;
asn_struct_free_f GSM_Classmark2_free;
asn_struct_print_f GSM_Classmark2_print;
asn_constr_check_f GSM_Classmark2_constraint;
ber_type_decoder_f GSM_Classmark2_decode_ber;
der_type_encoder_f GSM_Classmark2_encode_der;
xer_type_decoder_f GSM_Classmark2_decode_xer;
xer_type_encoder_f GSM_Classmark2_encode_xer;
per_type_decoder_f GSM_Classmark2_decode_uper;
per_type_encoder_f GSM_Classmark2_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_Classmark2_H_ */
#include <asn_internal.h>
