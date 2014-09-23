/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_DPCH_InfoPerRL_r4_H_
#define	_DL_DPCH_InfoPerRL_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCPICH-UsageForChannelEst.h"
#include "DPCH-FrameOffset.h"
#include "DL-ChannelisationCodeList.h"
#include "TPC-CombinationIndex.h"
#include "SSDT-CellIdentity.h"
#include "ClosedLoopTimingAdjMode.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_DPCH_InfoPerRL_r4_PR {
	DL_DPCH_InfoPerRL_r4_PR_NOTHING,	/* No components present */
	DL_DPCH_InfoPerRL_r4_PR_fdd,
	DL_DPCH_InfoPerRL_r4_PR_tdd
} DL_DPCH_InfoPerRL_r4_PR;

/* Forward declarations */
struct SecondaryCPICH_Info;
struct DL_CCTrChList_r4;
struct DL_CCTrChListToRemove;

/* DL-DPCH-InfoPerRL-r4 */
typedef struct DL_DPCH_InfoPerRL_r4 {
	DL_DPCH_InfoPerRL_r4_PR present;
	union DL_DPCH_InfoPerRL_r4_u {
		struct DL_DPCH_InfoPerRL_r4__fdd {
			PCPICH_UsageForChannelEst_t	 pCPICH_UsageForChannelEst;
			DPCH_FrameOffset_t	 dpch_FrameOffset;
			struct SecondaryCPICH_Info	*secondaryCPICH_Info	/* OPTIONAL */;
			DL_ChannelisationCodeList_t	 dl_ChannelisationCodeList;
			TPC_CombinationIndex_t	 tpc_CombinationIndex;
			SSDT_CellIdentity_t	*dummy	/* OPTIONAL */;
			ClosedLoopTimingAdjMode_t	*closedLoopTimingAdjMode	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} fdd;
		struct DL_DPCH_InfoPerRL_r4__tdd {
			struct DL_CCTrChList_r4	*dl_CCTrChListToEstablish	/* OPTIONAL */;
			struct DL_CCTrChListToRemove	*dl_CCTrChListToRemove	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} tdd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoPerRL_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoPerRL_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecondaryCPICH-Info.h"
#include "DL-CCTrChList-r4.h"
#include "DL-CCTrChListToRemove.h"

#endif	/* _DL_DPCH_InfoPerRL_r4_H_ */
#include <asn_internal.h>
