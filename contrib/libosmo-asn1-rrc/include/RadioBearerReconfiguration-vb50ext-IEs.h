/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioBearerReconfiguration_vb50ext_IEs_H_
#define	_RadioBearerReconfiguration_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_OLTD_InfoFDD;

/* RadioBearerReconfiguration-vb50ext-IEs */
typedef struct RadioBearerReconfiguration_vb50ext_IEs {
	struct UL_OLTD_InfoFDD	*ulOLTDInfoFDD	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerReconfiguration_vb50ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerReconfiguration_vb50ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-OLTD-InfoFDD.h"

#endif	/* _RadioBearerReconfiguration_vb50ext_IEs_H_ */
#include <asn_internal.h>
