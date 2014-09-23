/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PhysicalChannelReconfigurationComplete_H_
#define	_PhysicalChannelReconfigurationComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UL-TimingAdvance.h"
#include "ActivationTime.h"
#include <BIT_STRING.h>
#include "PhysicalChannelReconfigurationComplete-v770ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntegrityProtActivationInfo;
struct RB_ActivationTimeInfoList;
struct UL_CounterSynchronisationInfo;

/* PhysicalChannelReconfigurationComplete */
typedef struct PhysicalChannelReconfigurationComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct IntegrityProtActivationInfo	*ul_IntegProtActivationInfo	/* OPTIONAL */;
	UL_TimingAdvance_t	*ul_TimingAdvance	/* OPTIONAL */;
	ActivationTime_t	*count_C_ActivationTime	/* OPTIONAL */;
	struct RB_ActivationTimeInfoList	*dummy	/* OPTIONAL */;
	struct UL_CounterSynchronisationInfo	*ul_CounterSynchronisationInfo	/* OPTIONAL */;
	struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions {
		BIT_STRING_t	*physicalChannelReconfigurationComplete_r3_add_ext	/* OPTIONAL */;
		struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions {
			PhysicalChannelReconfigurationComplete_v770ext_IEs_t	 physicalChannelReconfigurationComplete_v770ext;
			struct PhysicalChannelReconfigurationComplete__laterNonCriticalExtensions__v770NonCriticalExtensions__nonCriticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v770NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *laterNonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelReconfigurationComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfigurationComplete;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtActivationInfo.h"
#include "RB-ActivationTimeInfoList.h"
#include "UL-CounterSynchronisationInfo.h"

#endif	/* _PhysicalChannelReconfigurationComplete_H_ */
#include <asn_internal.h>
