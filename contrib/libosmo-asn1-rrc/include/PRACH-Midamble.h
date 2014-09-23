/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PRACH_Midamble_H_
#define	_PRACH_Midamble_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PRACH_Midamble {
	PRACH_Midamble_direct	= 0,
	PRACH_Midamble_direct_Inverted	= 1
} e_PRACH_Midamble;

/* PRACH-Midamble */
typedef long	 PRACH_Midamble_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Midamble;
asn_struct_free_f PRACH_Midamble_free;
asn_struct_print_f PRACH_Midamble_print;
asn_constr_check_f PRACH_Midamble_constraint;
ber_type_decoder_f PRACH_Midamble_decode_ber;
der_type_encoder_f PRACH_Midamble_encode_der;
xer_type_decoder_f PRACH_Midamble_decode_xer;
xer_type_encoder_f PRACH_Midamble_encode_xer;
per_type_decoder_f PRACH_Midamble_decode_uper;
per_type_encoder_f PRACH_Midamble_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Midamble_H_ */
#include <asn_internal.h>
