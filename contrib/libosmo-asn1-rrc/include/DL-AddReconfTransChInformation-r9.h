/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_AddReconfTransChInformation_r9_H_
#define	_DL_AddReconfTransChInformation_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-TrCH-TypeId1-r5.h"
#include "TransportFormatSet.h"
#include "UL-TransportChannelIdentity.h"
#include "HSDSCH-Info-r9.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR {
	DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR_NOTHING,	/* No components present */
	DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR_explicit_config,
	DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR_sameAsULTrCH,
	DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR_hsdsch
} DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR;

/* Forward declarations */
struct QualityTarget;

/* DL-AddReconfTransChInformation-r9 */
typedef struct DL_AddReconfTransChInformation_r9 {
	DL_TrCH_TypeId1_r5_t	 dl_TransportChannelType;
	struct DL_AddReconfTransChInformation_r9__tfs_SignallingMode {
		DL_AddReconfTransChInformation_r9__tfs_SignallingMode_PR present;
		union DL_AddReconfTransChInformation_r9__tfs_SignallingMode_u {
			TransportFormatSet_t	 explicit_config;
			UL_TransportChannelIdentity_t	 sameAsULTrCH;
			HSDSCH_Info_r9_t	 hsdsch;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} tfs_SignallingMode;
	struct QualityTarget	*dch_QualityTarget	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AddReconfTransChInformation_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInformation_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QualityTarget.h"

#endif	/* _DL_AddReconfTransChInformation_r9_H_ */
#include <asn_internal.h>
