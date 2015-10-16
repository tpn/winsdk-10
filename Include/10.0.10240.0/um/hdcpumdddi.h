/******************************Module*Header**********************************\
*
* Module Name: hdcpumdddi.h
*
* Content: User mode HDCP UMD data type and DDI function definitions.
*
* Copyright (c) Microsoft Corporation.  All rights reserved.
\*****************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _HDCPUMDDDI_H_
#define _HDCPUMDDDI_H_

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

// Driver interface query function

typedef
HRESULT
(NTAPI *QUERY_HDCP_DRIVER_INTERFACE)(
    _In_ UINT HDCPDriverInterfaceVersion,
    _In_ UINT cbHDCPDriverInterface,
    _Out_writes_bytes_(cbHDCPDriverInterface) VOID* pHDCPDriverInterface
    );

// HDCP UMD enums

typedef enum _HDCP_ENDPOINT_TYPE
{
    HDCP_ENDPOINT_TX = 0,
    HDCP_ENDPOINT_RX = 1,
} HDCP_ENDPOINT_TYPE;

typedef enum _HDCP_AUTHENTICATION_STATUS
{
    HDCP_AUTHENTICATION_SUCCESS = 0,
    HDCP_AUTHENTICATION_FAIL_GENERIC = 1,
    HDCP_AUTHENTICATION_FAIL_TIMEOUT = 2,
    HDCP_AUTHENTICATION_FAIL_CALCULATION_MISMATCH = 3,
    HDCP_AUTHENTICATION_FAIL_TEST_PRODUCTION_KEY_MISMATCH = 4,
    HDCP_AUTHENTICATION_FAIL_KEY_REVOKED = 5,
} HDCP_AUTHENTICATION_STATUS;

typedef enum _HDCP_LINK_STATUS
{
    HDCP_LINK_SUCCESS = 0,
    HDCP_LINK_FAIL_GENERIC = 1,
} HDCP_LINK_STATUS;

typedef enum _HDCP_ENCRYPTION_STATUS
{
    HDCP_ENCRYPTION_OK = 0,
    HDCP_ENCRYPTION_DELAYED = 1,
} HDCP_ENCRYPTION_STATUS;

// HDCP UMD callback function pointer definitions

typedef
VOID
(NTAPI *PFN_SEND_DATA)(
    _In_ PVOID pOSContext,
    _Field_size_bytes_(cbDataSize) PVOID pData,
    _In_ UINT cbDataSize
    );

typedef
VOID
(NTAPI *PFN_REPORT_AUTHENTICATION_RESULT)(
    _In_ PVOID pOSContext,
    _In_ HDCP_AUTHENTICATION_STATUS HdcpAuthenticationStatus,
    _In_ ULONG64 DriverDefinedStatus,
    _In_ BOOL fShouldRetry
    );

typedef
VOID
(NTAPI *PFN_REPORT_LINK_STATUS)(
    _In_ PVOID pOSContext,
    _In_ HDCP_LINK_STATUS HdcpLinkStatus,
    _In_ ULONG64 DriverDefinedStatus
    );

typedef
VOID
(NTAPI *PFN_REPORT_ENCRYPTION_STATUS)(
    _In_ PVOID pOSContext,
    _In_ HDCP_ENCRYPTION_STATUS EncryptionStatus
    );

// HDCP UMD structures

typedef struct _HDCP_CALLBACKS
{
    PFN_SEND_DATA SendData;
    PFN_REPORT_AUTHENTICATION_RESULT ReportAuthenticationResult;
    PFN_REPORT_LINK_STATUS ReportLinkStatus;
    PFN_REPORT_ENCRYPTION_STATUS ReportEncryptionStatus;
} HDCP_CALLBACKS, *PHDCP_CALLBACKS;

// HDCP UMD DDI functions

typedef
HRESULT
(NTAPI *PFN_CREATE_HDCP_CONTEXT)(
    _In_ PVOID pOSContext,
    _In_ PHDCP_CALLBACKS pCallbacks,
    _In_ HDCP_ENDPOINT_TYPE EndpointType,
    _In_ LUID AdapterLuid,
    _Out_ PVOID* ppDriverContext
    );

typedef
VOID
(NTAPI *PFN_DESTROY_HDCP_CONTEXT)(
    _In_ PVOID pDriverContext
    );

typedef
VOID
(NTAPI *PFN_RECEIVE_DATA)(
    _In_ PVOID pDriverContext,
    _Field_size_bytes_(cbDataSize) PVOID pData,
    _In_ UINT cbDataSize
    );

// Driver interface structure

typedef struct _HDCP_DRIVER_INTERFACE
{
    UINT cbSize;
    PFN_CREATE_HDCP_CONTEXT CreateHDCPContext;
    PFN_DESTROY_HDCP_CONTEXT DestroyHDCPContext;
    PFN_RECEIVE_DATA ReceiveData;
} HDCP_DRIVER_INTERFACE, *PHDCP_DRIVER_INTERFACE;

#define HDCP_DRIVER_INTERFACE_VERSION_1 0x101

#endif // (NTDDI_VERSION >= NTDDI_THRESHOLD)

#endif // _HDCPUMDDDI_H_
