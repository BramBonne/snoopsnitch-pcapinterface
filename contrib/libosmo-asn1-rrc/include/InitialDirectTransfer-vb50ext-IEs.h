/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InitialDirectTransfer_vb50ext_IEs_H_
#define	_InitialDirectTransfer_vb50ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResultsOnRACH_EUTRAFreq;

/* InitialDirectTransfer-vb50ext-IEs */
typedef struct InitialDirectTransfer_vb50ext_IEs {
	struct MeasuredResultsOnRACH_EUTRAFreq	*measuredResultsOnRACHEUTRAFreq	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialDirectTransfer_vb50ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialDirectTransfer_vb50ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACH-EUTRAFreq.h"

#endif	/* _InitialDirectTransfer_vb50ext_IEs_H_ */
#include <asn_internal.h>
