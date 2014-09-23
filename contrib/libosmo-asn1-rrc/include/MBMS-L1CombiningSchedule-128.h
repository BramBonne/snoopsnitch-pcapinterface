/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MBMS_L1CombiningSchedule_128_H_
#define	_MBMS_L1CombiningSchedule_128_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-L1CombiningSchedule-128 */
typedef struct MBMS_L1CombiningSchedule_128 {
	long	*cycleOffset	/* OPTIONAL */;
	struct MBMS_L1CombiningSchedule_128__mtch_L1CombiningPeriodList {
		A_SEQUENCE_OF(struct MBMS_L1CombiningSchedule_128__mtch_L1CombiningPeriodList__Member {
			long	 periodStart;
			long	 periodDuration;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} mtch_L1CombiningPeriodList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_L1CombiningSchedule_128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_L1CombiningSchedule_128;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_L1CombiningSchedule_128_H_ */
#include <asn_internal.h>
