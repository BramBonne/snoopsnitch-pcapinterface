/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_UE_Positioning_Capability_r4_H_
#define	_UE_Positioning_Capability_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "NetworkAssistedGPS-Supported.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_Positioning_Capability_r4__validity_CellPCH_UraPCH {
	UE_Positioning_Capability_r4__validity_CellPCH_UraPCH_true	= 0
} e_UE_Positioning_Capability_r4__validity_CellPCH_UraPCH;
typedef enum UE_Positioning_Capability_r4__sfn_sfnType2Capability {
	UE_Positioning_Capability_r4__sfn_sfnType2Capability_true	= 0
} e_UE_Positioning_Capability_r4__sfn_sfnType2Capability;

/* UE-Positioning-Capability-r4 */
typedef struct UE_Positioning_Capability_r4 {
	BOOLEAN_t	 standaloneLocMethodsSupported;
	BOOLEAN_t	 ue_BasedOTDOA_Supported;
	NetworkAssistedGPS_Supported_t	 networkAssistedGPS_Supported;
	BOOLEAN_t	 supportForUE_GPS_TimingOfCellFrames;
	BOOLEAN_t	 supportForIPDL;
	BOOLEAN_t	 rx_tx_TimeDifferenceType2Capable;
	long	*validity_CellPCH_UraPCH	/* OPTIONAL */;
	long	*sfn_sfnType2Capability	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_Positioning_Capability_r4_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_validity_CellPCH_UraPCH_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_sfn_sfnType2Capability_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_Positioning_Capability_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_Positioning_Capability_r4_H_ */
#include <asn_internal.h>
