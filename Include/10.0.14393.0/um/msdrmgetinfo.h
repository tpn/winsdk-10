#pragma once
/*
//-----------------------------------------------------------------------------
//
// File: msdrmgetinfo.h
//
// Copyright (C) 2001-2004 Microsoft Corporation.  All Rights Reserved.
//
//-----------------------------------------------------------------------------
*/

#ifndef __MSDRMGETINFO_H_
#define __MSDRMGETINFO_H_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include "msdrm.h"

/*

The following codes are used to indicate where the various query strings may be used:

for example, GI(*) means that all DRMHANDLES may be asked the indicated question using DRMGetInfo &
             GI(hEnv) means on environment handle only

GI: DRMGetInfo
GULA: DRMGetUnboundLicenceAttribute
GULO: DRMGetUnboundLicenseObject
GBLA: DRMGetBoundLicenseAttribute
GBLO: DRMGetBoundLicenseObject

*/

const PWSTR     g_wszTAG_ASCII = L"ASCII Tag",
                g_wszTAG_XRML = L"XrML Tag",
                g_wszTAG_FILENAME = L"filename",
                g_wszTAG_MSGUID = L"MS-GUID",

                g_wszPLUG_STANDARDENABLINGPRINCIPAL = L"UDStdPlg Enabling Principal",
                g_wszPLUG_STANDARDRIGHTSINTERPRETER = L"XrMLv2a",
                g_wszPLUG_STANDARDEBDECRYPTOR = L"UDStdPlg Enabling Bits Decryptor",
                g_wszPLUG_STANDARDEBENCRYPTOR = L"UDStdPlg Enabling Bits Encryptor",
                g_wszPLUG_STANDARDEBCRYPTOPROVIDER = L"UDStdPlg Enabling Bits Crypto Provider",
                g_wszPLUG_STANDARDLIBRARY = L"UDStdPlg",

                g_wszALGORITHMID_DES = L"DES",
                g_wszALGORITHMID_COCKTAIL = L"COCKTAIL",
                g_wszALGORITHMID_AES = L"AES",
                g_wszALGORITHMID_RC4 = L"RC4",

                // QUERY CONSTANTS BELOW HERE ////////////////////////////////////////////////

                // GI(*)
                g_wszQUERY_OBJECTIDTYPE = L"object-id-type",
                g_wszQUERY_OBJECTID = L"object-id",

                // GBLA(on a bound right object), GULA(on a principal object, rights group, right, & work)
                g_wszQUERY_NAME = L"name",

                // GBLA(on a bound license)
                g_wszQUERY_CONTENTIDTYPE = L"content-id-type",
                g_wszQUERY_CONTENTIDVALUE = L"content-id-value",
                g_wszQUERY_CONTENTSKUTYPE = L"content-sku-type",
                g_wszQUERY_CONTENTSKUVALUE = L"content-sku-value",

                // GI(hEnv)
                g_wszQUERY_MANIFESTSOURCE = L"manifest-xrml",
                g_wszQUERY_MACHINECERTSOURCE = L"machine-certificate-xrml",

                // GI(hEnv)
                g_wszQUERY_APIVERSION = L"api-version",
                g_wszQUERY_SECREPVERSION = L"secrep-version",

                // GI(hCrypto)
                g_wszQUERY_BLOCKSIZE  = L"block-size",
                g_wszQUERY_SYMMETRICKEYTYPE  = L"symmetric-key-type";

                // GULO(on a condition list), GBLO(on a bound right)
const PWSTR     g_wszQUERY_ACCESSCONDITION = L"access-condition",

                // GULA(on a principal)
                g_wszQUERY_ADDRESSTYPE = L"address-type",
                g_wszQUERY_ADDRESSVALUE = L"address-value",

                g_wszQUERY_APPDATANAME = L"appdata-name",
                g_wszQUERY_APPDATAVALUE = L"appdata-value",

                // GULA(on a license, a work, and rights group, or a right)
                g_wszQUERY_CONDITIONLIST = L"condition-list",

                // GULO(on a license or revocation condition)
                g_wszQUERY_DISTRIBUTIONPOINT = L"distribution-point",

                g_wszQUERY_OBJECTTYPE = L"object-type",

                // GBLA(on a bound license)
                g_wszQUERY_ENABLINGPRINCIPALIDTYPE = L"enabling-principal-id-type",
                g_wszQUERY_ENABLINGPRINCIPALIDVALUE = L"enabling-principal-id-value",

                // GULO(on a license)
                g_wszQUERY_GROUPIDENTITYPRINCIPAL = L"group-identity-principal",

                // GULO(on an interval time condition)
                g_wszQUERY_FIRSTUSETAG = L"first-use-tag",

                // GULA(on a range time condition)
                g_wszQUERY_FROMTIME = L"from-time",

                // GULA(on a license, principal, or work)
                g_wszQUERY_IDTYPE = L"id-type",
                g_wszQUERY_IDVALUE = L"id-value",

                // GULO(on a license)
                g_wszQUERY_ISSUEDPRINCIPAL = L"issued-principal",

                // GULA(on a license)
                g_wszQUERY_ISSUEDTIME = L"issued-time",

                // GULO(on a license)
                g_wszQUERY_ISSUER = L"issuer",

                // GULO(on a work)
                g_wszQUERY_OWNER = L"owner",

                // GULO(on an access condition)
                g_wszQUERY_PRINCIPAL = L"principal",

                // GI(hEnablingPrincipal)
                g_wszQUERY_PRINCIPALIDVALUE = L"principal-id-value",
                g_wszQUERY_PRINCIPALIDTYPE = L"principal-id-type",

                // GULO(on a condition list)
                g_wszQUERY_RANGETIMECONDITION = L"rangetime-condition",
                g_wszQUERY_OSEXCLUSIONCONDITION = L"os-exclusion-condition",

                // GULA
                g_wszQUERY_INTERVALTIMECONDITION = L"intervaltime-condition",
                g_wszQUERY_INTERVALTIMEINTERVAL = L"intervaltime-interval",
                g_wszQUERY_MAXVERSION = L"max-version",
                g_wszQUERY_MINVERSION = L"min-version",

                // GULA(on a revocation condition)
                g_wszQUERY_REFRESHPERIOD = L"refresh-period",

                // GULO(on a condition list)
                g_wszQUERY_REVOCATIONCONDITION = L"revocation-condition",

                // GULO(on a rights group), GBLO(on a bound license)
                g_wszQUERY_RIGHT = L"right",

                // GULO(on a work)
                g_wszQUERY_RIGHTSGROUP = L"rights-group",

                // GULA(on a right), GBLA(on a bound right)
                g_wszQUERY_RIGHTSPARAMETERNAME = L"rights-parameter-name",
                g_wszQUERY_RIGHTSPARAMETERVALUE = L"rights-parameter-value",

                // GULA(on a work)
                g_wszQUERY_SKUTYPE = L"sku-type",
                g_wszQUERY_SKUVALUE = L"sku-value",

                // GULA(on an interval time or metered time condition)
                g_wszQUERY_TIMEINTERVAL = L"time-interval",

                // GULA(on a range time condition)
                g_wszQUERY_UNTILTIME = L"until-time",

                // GULA(on a license)
                g_wszQUERY_VALIDITYFROMTIME = L"valid-from",
                g_wszQUERY_VALIDITYUNTILTIME = L"valid-until",

                // GULO(on a license)
                g_wszQUERY_WORK = L"work";


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // __MSDRMGETINFO_H_

