/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_TS_ChannelisationCodesShort_VHCR_H_
#define	_DL_TS_ChannelisationCodesShort_VHCR_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "DL-TS-ChannelisationCode-VHCR.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR {
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR_NOTHING,	/* No components present */
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR_consecutive,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR_bitmap
} DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR;
typedef enum DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap {
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode32_SF32	= 0,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode31_SF32	= 1,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode30_SF32	= 2,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode29_SF32	= 3,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode28_SF32	= 4,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode27_SF32	= 5,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode26_SF32	= 6,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode25_SF32	= 7,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode24_SF32	= 8,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode23_SF32	= 9,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode22_SF32	= 10,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode21_SF32	= 11,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode20_SF32	= 12,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode19_SF32	= 13,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode18_SF32	= 14,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode17_SF32	= 15,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode16_SF32	= 16,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode15_SF32	= 17,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode14_SF32	= 18,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode13_SF32	= 19,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode12_SF32	= 20,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode11_SF32	= 21,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode10_SF32	= 22,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode9_SF32	= 23,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode8_SF32	= 24,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode7_SF32	= 25,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode6_SF32	= 26,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode5_SF32	= 27,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode4_SF32	= 28,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode3_SF32	= 29,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode2_SF32	= 30,
	DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap_chCode1_SF32	= 31
} e_DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__bitmap;

/* DL-TS-ChannelisationCodesShort-VHCR */
typedef struct DL_TS_ChannelisationCodesShort_VHCR {
	struct DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation {
		DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_PR present;
		union DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation_u {
			struct DL_TS_ChannelisationCodesShort_VHCR__codesRepresentation__consecutive {
				DL_TS_ChannelisationCode_VHCR_t	 firstChannelisationCode;
				DL_TS_ChannelisationCode_VHCR_t	 lastChannelisationCode;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} consecutive;
			BIT_STRING_t	 bitmap;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} codesRepresentation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_TS_ChannelisationCodesShort_VHCR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_TS_ChannelisationCodesShort_VHCR;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_TS_ChannelisationCodesShort_VHCR_H_ */
#include <asn_internal.h>
