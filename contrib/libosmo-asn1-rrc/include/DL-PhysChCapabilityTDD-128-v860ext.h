/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_PhysChCapabilityTDD_128_v860ext_H_
#define	_DL_PhysChCapabilityTDD_128_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "HSDSCH-physical-layer-category-extension.h"
#include "MultiCarrier-HSDSCH-physical-layer-category-extension.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_PhysChCapabilityTDD_128_v860ext__supportOfSFModeForHSPDSCHDualStream {
	DL_PhysChCapabilityTDD_128_v860ext__supportOfSFModeForHSPDSCHDualStream_sf1	= 0,
	DL_PhysChCapabilityTDD_128_v860ext__supportOfSFModeForHSPDSCHDualStream_sf1sf16	= 1
} e_DL_PhysChCapabilityTDD_128_v860ext__supportOfSFModeForHSPDSCHDualStream;

/* DL-PhysChCapabilityTDD-128-v860ext */
typedef struct DL_PhysChCapabilityTDD_128_v860ext {
	HSDSCH_physical_layer_category_extension_t	*hSDSCH_physical_layer_category_extension	/* OPTIONAL */;
	MultiCarrier_HSDSCH_physical_layer_category_extension_t	*multiCarrier_physical_layer_category_extension	/* OPTIONAL */;
	long	*supportOfSFModeForHSPDSCHDualStream	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_PhysChCapabilityTDD_128_v860ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportOfSFModeForHSPDSCHDualStream_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_PhysChCapabilityTDD_128_v860ext;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_PhysChCapabilityTDD_128_v860ext_H_ */
#include <asn_internal.h>