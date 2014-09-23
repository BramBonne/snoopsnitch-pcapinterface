/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PhysicalChannelCapability_H_
#define	_PhysicalChannelCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DL-PhysChCapabilityFDD.h"
#include "UL-PhysChCapabilityFDD.h"
#include <constr_SEQUENCE.h>
#include "DL-PhysChCapabilityTDD.h"
#include "UL-PhysChCapabilityTDD.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalChannelCapability */
typedef struct PhysicalChannelCapability {
	struct PhysicalChannelCapability__fddPhysChCapability {
		DL_PhysChCapabilityFDD_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityFDD_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *fddPhysChCapability;
	struct PhysicalChannelCapability__tddPhysChCapability {
		DL_PhysChCapabilityTDD_t	 downlinkPhysChCapability;
		UL_PhysChCapabilityTDD_t	 uplinkPhysChCapability;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tddPhysChCapability;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelCapability;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalChannelCapability_H_ */
#include <asn_internal.h>
