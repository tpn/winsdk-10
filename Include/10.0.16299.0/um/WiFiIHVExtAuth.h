//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
/*++
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

--*/


#pragma once

#ifdef __cplusplus
extern "C" {
#endif


// -----------------------------------------
// Definitions
// -----------------------------------------
//
#define WIFI_IHV_EXT_VERSION_1 1

typedef enum _WIFI_IHV_EXT_TYPE
{
    WIFI_IHV_EXT_TYPE_WAPI
} WIFI_IHV_EXT_TYPE;

typedef enum _WIFI_IHV_UI_REQUEST_TYPE
{
    WIFI_IHV_UI_REQUEST_TYPE_PSK, // The user will be prompted to input a password. The response will be a WCHAR null terminated string with the password.
    WIFI_IHV_REQUEST_TYPE_CERT // The user will be prompted to choose a certificate. The response will have a BYTE array with the hash of the chosen certificate.
} WIFI_IHV_UI_REQUEST_TYPE;

typedef struct _WP_IHV_UI_REQUEST
{
    DWORD dwVersion;
    WIFI_IHV_EXT_TYPE IHVType;
    DWORD dwDataSize;
    BYTE DataBlob[1];
} WP_IHV_UI_REQUEST;

#ifdef __cplusplus
}
#endif

