/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TransmissionRLC_Discard_H_
#define	_TransmissionRLC_Discard_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ExplicitDiscard.h"
#include "NoExplicitDiscard.h"
#include "MaxDAT-Retransmissions.h"
#include "MaxDAT.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransmissionRLC_Discard_PR {
	TransmissionRLC_Discard_PR_NOTHING,	/* No components present */
	TransmissionRLC_Discard_PR_timerBasedExplicit,
	TransmissionRLC_Discard_PR_timerBasedNoExplicit,
	TransmissionRLC_Discard_PR_maxDAT_Retransmissions,
	TransmissionRLC_Discard_PR_noDiscard
} TransmissionRLC_Discard_PR;

/* TransmissionRLC-Discard */
typedef struct TransmissionRLC_Discard {
	TransmissionRLC_Discard_PR present;
	union TransmissionRLC_Discard_u {
		ExplicitDiscard_t	 timerBasedExplicit;
		NoExplicitDiscard_t	 timerBasedNoExplicit;
		MaxDAT_Retransmissions_t	 maxDAT_Retransmissions;
		MaxDAT_t	 noDiscard;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransmissionRLC_Discard_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransmissionRLC_Discard;

#ifdef __cplusplus
}
#endif

#endif	/* _TransmissionRLC_Discard_H_ */
#include <asn_internal.h>
