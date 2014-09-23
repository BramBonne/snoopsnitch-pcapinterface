/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_MeasurementQuantity_H_
#define	_UE_MeasurementQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_MeasurementQuantity {
	UE_MeasurementQuantity_ue_TransmittedPower	= 0,
	UE_MeasurementQuantity_utra_Carrier_RSSI	= 1,
	UE_MeasurementQuantity_ue_RX_TX_TimeDifference	= 2
} e_UE_MeasurementQuantity;

/* UE-MeasurementQuantity */
typedef long	 UE_MeasurementQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_MeasurementQuantity;
asn_struct_free_f UE_MeasurementQuantity_free;
asn_struct_print_f UE_MeasurementQuantity_print;
asn_constr_check_f UE_MeasurementQuantity_constraint;
ber_type_decoder_f UE_MeasurementQuantity_decode_ber;
der_type_encoder_f UE_MeasurementQuantity_encode_der;
xer_type_decoder_f UE_MeasurementQuantity_decode_xer;
xer_type_encoder_f UE_MeasurementQuantity_encode_xer;
per_type_decoder_f UE_MeasurementQuantity_decode_uper;
per_type_encoder_f UE_MeasurementQuantity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_MeasurementQuantity_H_ */
#include <asn_internal.h>
