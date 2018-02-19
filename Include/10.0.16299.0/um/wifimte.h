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


#ifndef __WIFI_MTE_H__
#define __WIFI_MTE_H__

#pragma once

#ifdef __cplusplus
extern "C" {
#endif


// -----------------------------------------
// Definitions
// -----------------------------------------
//

typedef struct _WLAN_MTE_ADAPTER
{
    GUID                            AdapterGuid;
    DOT11_CURRENT_OPERATION_MODE    Dot11CurrentOpMode;
} WLAN_MTE_ADAPTER, * PWLAN_MTE_ADAPTER;

typedef struct _WLAN_MTE_ADAPTER_LIST
{
    DWORD               dwNumAdapters;
    WLAN_MTE_ADAPTER   pAdapterList[1];
} WLAN_MTE_ADAPTER_LIST, * PWLAN_MTE_ADAPTER_LIST;

typedef struct _WLAN_MTE_PHY_LIST
{
    ULONG           uNumEntries;
    DOT11_PHY_TYPE  pDot11PHYType[1];
} WLAN_MTE_PHY_LIST, * PWLAN_MTE_PHY_LIST;


// -----------------------------------------
// Public Functions
// -----------------------------------------
//

//
// Callbacks
//
// the callback function for manufacturing notifications
typedef VOID (WINAPI *WLAN_MTE_NOTIFICATION_CALLBACK)(
    __in    PDOT11_MANUFACTURING_CALLBACK_PARAMETERS    pMTECallback,
    __in    PVOID                                       pvReserved
    );

// the callback function for Reset notifications
typedef VOID (WINAPI *WLAN_MTE_RESET_CALLBACK)(
    __in    DWORD   dwError,
    __in    PVOID   pvContext
    );

//
// APIs
//
DWORD
WlanMTEEnumAdapters(
    __out_opt   WLAN_MTE_ADAPTER_LIST  **ppWlanAdapterList
    );

DWORD
WlanMTEOpenHandle(
    __in    GUID    *pAdapterGuid,
    __out   HANDLE  *phAdapter
    );

DWORD
WlanMTECloseHandle(
    __in    HANDLE  hAdapter
    );

DWORD
WlanMTERegisterCallbackHandler(
    __in    HANDLE                          hAdapter,
    __in    WLAN_MTE_NOTIFICATION_CALLBACK  Callback
    );

DWORD
WlanMTEDeRegisterCallbackHandler(
    __in    HANDLE                          hAdapter
    );

DWORD
WlanMTEGetVendorInfo(
    __in                        HANDLE  hAdapter,
    __out                       ULONG   *puVendorId,
    __in                        ULONG   uOutBufLen,
    __out_bcount(uOutBufLen)    PUCHAR  pucOutBuffer
    );

DWORD
WlanMTEResetAdapter(
    __in        HANDLE                  hAdapter,
    __in        DOT11_RESET_REQUEST     *pDot11ResetRequest,
    __in_opt    WLAN_MTE_RESET_CALLBACK ResetCallback,
    __in_opt    PVOID                   pvContext
    );

DWORD
WlanMTEQueryMacAddress(
    __in    HANDLE              hAdapter,
    __out   DOT11_MAC_ADDRESS   *pDot11MacAddress
    );

DWORD
WlanMTEQueryPhyTypes(
    __in    HANDLE              hAdapter,
    __out   PWLAN_MTE_PHY_LIST *ppPhyList
    );

DWORD
WlanMTEStartSelfTest(
    __in                        HANDLE                              hAdapter,
    __in                        DOT11_MANUFACTURING_SELF_TEST_TYPE  eTestType,
    __in                        ULONG                               uTestID,
    __in                        PVOID                               pvContext,
    __in                        ULONG                               uPinBitMask,
    __in                        ULONG                               uInBufLen,
    __in_bcount_opt(uInBufLen)  PUCHAR                              pucInBuffer
    );

DWORD
WlanMTEQuerySelfTestResult(
    __in                            HANDLE                              hAdapter,
    __in                            DOT11_MANUFACTURING_SELF_TEST_TYPE  eTestType,
    __in                            ULONG                               uTestID,
    __in                            PVOID                               pvContext,
    __out                           BOOLEAN                             *pbResult,
    __out                           ULONG                               *puPinFailedBitMask,
    __out                           ULONG                               *puBytesWrittenOut,
    __in                            ULONG                               uOutBufLen,
    __out_bcount_opt(uOutBufLen)    PUCHAR                              pucOutBuffer
    );

DWORD
WlanMTERxSignal(
    __in    HANDLE      hAdapter,
    __out   BOOLEAN     *pbEnabled,
    __in    DOT11_BAND  Dot11Band,
    __in    ULONG       uChannel,
    __out   LONG        *pPowerLevel
    );

DWORD
WlanMTETxSignal(
    __in    HANDLE      hAdapter,
    __in    BOOLEAN     bEnable,
    __in    BOOLEAN     bOpenLoop,
    __in    DOT11_BAND  Dot11Band,
    __in    ULONG       uChannel,
    __in    ULONG       uSetPowerLevel,
    __out   LONG        *pADCPowerLevel
    );

DWORD
WlanMTEQueryADC(
    __in    HANDLE      hAdapter,
    __in    DOT11_BAND  Dot11Band,
    __in    ULONG       uChannel,
    __out   LONG        *pADCPowerLevel
    );

DWORD
WlanMTESetData(
    __in                    HANDLE  hAdapter,
    __in                    ULONG   uKey,
    __in                    ULONG   uOffset,
    __in                    ULONG   uInBufLen,
    __in_bcount(uInBufLen)  PUCHAR  pucInBuffer
    );

DWORD
WlanMTEQueryData(
    __in                        HANDLE  hAdapter,
    __in                        ULONG   uKey,
    __in                        ULONG   uOffset,
    __out                       ULONG   *puBytesWrittenOut,
    __in                        ULONG   uOutBufLen,
    __out_bcount(uOutBufLen)    PUCHAR  pucOutBuffer
    );

DWORD
WlanMTESleep(
    __in                    HANDLE  hAdapter,
    __in                    ULONG   uSleepTime,
    __in                    PVOID   pvContext
    );

DWORD
WlanMTEAwake(
    __in                    HANDLE  hAdapter
    );


// -----------------------------------------

#ifdef __cplusplus
}
#endif

#endif  // __WIFI_MTE_H__

