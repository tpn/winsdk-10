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

    // the following are not errors
    
    HDCP_AUTHENTICATION_TYPE1_STREAM_BLOCKED = 100,
    HDCP_AUTHENTICATION_HDCP_OUTPUT_CHANGE = 101,
    HDCP_AUTHENTICATION_HANDSHAKE_RESTARTED = 102,
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

typedef enum _HDCP_AUTHENTICATION_TYPE
{
	HDCP_AUTHENTICATION_CONSTRAIN_TO_TYPE_0_CONTENT = 0,
	HDCP_AUTHENTICATION_ALLOW_TYPE_1_CONTENT = 1,
	HDCP_AUTHENTICATION_TRANSPORT_GENERIC_WIRELESS = 0, // Deprecated
	HDCP_AUTHENTICATION_TRANSPORT_GENERIC_WIRED = 1, // Deprecated
} HDCP_AUTHENTICATION_TYPE;

typedef enum _HDCP_TRANSPORT_TYPE
{
    HDCP_TRANSPORT_GENERIC = 0,
    HDCP_TRANSPORT_HDMI = 1,
    HDCP_TRANSPORT_DP = 2,
} HDCP_TRANSPORT_TYPE;

typedef enum _HDCP_HANDSHAKE_STATE
{
    HDCP_STATE_NONE = 0,                            // After Destroy
    HDCP_STATE_INIT,                                // After Create and Set Config

    // AKE Tx
    HDCP_STATE_WAITING_TO_START_AKE,                // Before StartAke
    HDCP_STATE_WAITING_FOR_AKE_SEND_CERT,           // Waiting for AKE_Send_Cert
    HDCP_STATE_WAITING_FOR_AKE_RX_INFO,             // Waiting for AKE_Receiver_Info
    HDCP_STATE_WAITING_FOR_AKE_SEND_RRX,            // Waiting for AKE_Send_rrx
    HDCP_STATE_WAITING_FOR_AKE_SEND_HPRIME,         // Waiting for AKE_Send_H_prime
    HDCP_STATE_WAITING_FOR_AKE_SEND_PAIRING_INFO,   // Waiting for AKE_Send_Pairing_Info

    // LC Tx
    HDCP_STATE_WAITING_RTT_READY,                   // Waiting for RTT_Ready
    HDCP_STATE_WAITING_LC_LPRIME,                   // Waiting for LC_Send_L_prime

    // AKE Rx
    HDCP_STATE_WAITING_FOR_AKE_INIT = 1000,         // Waiting for AKE_Init
    HDCP_STATE_WAITING_FOR_AKE_TX_INFO,             // Waiting for AKE_Transmitter_Info
    HDCP_STATE_WAITING_FOR_AKE_KM_MESSAGE,          // Waiting for AKE_XXX_km

    // LC Rx
    HDCP_STATE_WAITING_LC_INIT,                     // Waiting for LC_Init
    HDCP_STATE_WAITING_RTT_CHALLENGE,               // Waiting for RTT_Challenge

    // SKE Rx
    HDCP_STATE_WAITING_FOR_SKE_SEND_EKS,            // Waiting for SKE_Send_Eks

    // SKE Tx and Rx
    HDCP_STATE_SKE_COMPLETE = 2000,                 // SKE_Send_Eks is sent/received, ready to stream

    HDCP_STATE_UNEXPECTED_ERROR = 0x80000000,       // Unexpected errors
    HDCP_STATE_USER_ERROR,                          // Error due to invalid parameter or call sequence

    // AKE failed
    HDCP_STATE_TxAkeFailed,                         // AKE failed on Tx
    HDCP_STATE_RxAkeFailed,                         // AKE failed on Rx

    HDCP_STATE_TxLCFailed,                          // Locality Check failed

} HDCP_HANDSHAKE_STATE;

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
HRESULT
(NTAPI *PFN_CREATE_HDCP_CONTEXT_2)(
    _In_ PVOID pOSContext,
    _In_ PHDCP_CALLBACKS pCallbacks,
    _In_ HDCP_ENDPOINT_TYPE EndpointType,
	_In_ HDCP_AUTHENTICATION_TYPE AuthenticationType,
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

typedef
VOID
(NTAPI *PFN_GET_OPM_CONTEXT)(
	_In_ PVOID pDriverContext,
	_Out_ PVOID* pOPMContext
	);

typedef
VOID
(NTAPI *PFN_QUERY_TOTAL_BANDWIDTH)(
	_Out_ UINT* punBandwidth
	);

typedef
VOID
(NTAPI *PFN_QUERY_MAXIMUM_CONCURRENT_SESSIONS)(
	_Out_ UINT* pcSessions
	);

typedef
VOID
(NTAPI *PFN_QUERY_PACKET_SIZE_CONSTRAINTS)(
	_Out_ UINT* pcbMinPacketSize,
	_Out_ UINT* pcbMaxPacketSize
	);

// Note: HDCP versions are encoded into a UINT: v * 0x1000000 + sv * 0x10000 + er,
//       where v is version, sv is subversion, er is the errata number. So latest HDCP
//       version 2.2 errata 1 is 0x2020001, and HDCP 2.1 with no errata is 0x2010000.
//       Unknown version is indicated with 0. Errata of 0xffff indicate max available.

typedef
VOID
(NTAPI *PFN_SET_CONFIGURATION)(
    _In_ PVOID pDriverContext,
    _In_ UINT uMaxResolutionHorizontal,
    _In_ UINT uMaxResolutionVertical,
    _In_ UINT uMaxAudioBitarate,
    _In_ HDCP_TRANSPORT_TYPE TransportType,
    _In_ UINT uMaxLocalHdcpVersion
    );

typedef
VOID
(NTAPI *PFN_GET_STATUS)(
    _In_ PVOID pDriverContext,
    _Out_ HDCP_HANDSHAKE_STATE* pState,
    _Out_ BOOL* pfReceiver,
    _Out_ BOOL* pfRepeater,
    _Out_ HDCP_TRANSPORT_TYPE* pTransportType,
    _Out_ UINT* puLocalHdcpVersion,
    _Out_ UINT* puPeerHdcpVersion
    );

typedef
VOID
(NTAPI *PFN_START_AKE)(
    _In_ PVOID pDriverContext
    );

// Driver interface structure

typedef struct _HDCP_DRIVER_INTERFACE
{
    UINT cbSize;
    PFN_CREATE_HDCP_CONTEXT     CreateHDCPContext;
    PFN_DESTROY_HDCP_CONTEXT    DestroyHDCPContext;
    PFN_RECEIVE_DATA            ReceiveData;
} HDCP_DRIVER_INTERFACE, *PHDCP_DRIVER_INTERFACE;

typedef struct _HDCP_DRIVER_INTERFACE_2
{
    UINT cbSize;
    PFN_CREATE_HDCP_CONTEXT_2 CreateHDCPContext2;
    PFN_DESTROY_HDCP_CONTEXT DestroyHDCPContext;
    PFN_RECEIVE_DATA ReceiveData;
    PFN_GET_OPM_CONTEXT GetOPMContext;
    PFN_QUERY_TOTAL_BANDWIDTH QueryTotalBandwidth;
    PFN_QUERY_MAXIMUM_CONCURRENT_SESSIONS QueryMaximumConcurrentSessions;
	PFN_QUERY_PACKET_SIZE_CONSTRAINTS QueryPacketSizeConstraints;

    PFN_SET_CONFIGURATION SetConfiguration;
    PFN_GET_STATUS GetStatus;
    PFN_START_AKE StartAke;
} HDCP_DRIVER_INTERFACE_2, *PHDCP_DRIVER_INTERFACE_2;


#define HDCP_DRIVER_INTERFACE_VERSION_1 0x101
#define HDCP_DRIVER_INTERFACE_VERSION_2 0x102

#endif // (NTDDI_VERSION >= NTDDI_THRESHOLD)

#endif // _HDCPUMDDDI_H_
