/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_Digit_H_
#define	_Digit_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Digit */
typedef long	 Digit_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Digit;
asn_struct_free_f Digit_free;
asn_struct_print_f Digit_print;
asn_constr_check_f Digit_constraint;
ber_type_decoder_f Digit_decode_ber;
der_type_encoder_f Digit_encode_der;
xer_type_decoder_f Digit_decode_xer;
xer_type_encoder_f Digit_encode_xer;
per_type_decoder_f Digit_decode_uper;
per_type_encoder_f Digit_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Digit_H_ */
#include <asn_internal.h>
