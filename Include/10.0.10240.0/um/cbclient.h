
//==========================================================================
//
//  cbclient.h
//
//      Header file for API provider for Connection Broker functionality.
//
//  Copyright (C) Microsoft Corporation. All rights reserved.
//
//==========================================================================

#ifndef _CBCLIENT_H_
#define _CBCLIENT_H_

#include <objbase.h>

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#define CB_USERNAME_LENGTH      256
#define CB_DOMAINNAME_LENGTH    128
#define CB_FARMNAME_LENGTH      64
#define CB_PLUGINNAME_LENGTH    64
#define CB_INITAPP_LENGTH       256
#define CB_MAX_ADDRESSES        12
#define CB_IPADDRESS_LEN        256

typedef enum _CB_REQUEST_STATUS {
    CB_STATUS_INVALID = -1,
    CB_STATUS_INITIATING_REQUEST = 0,
    CB_STATUS_REQUEST_COMPLETED,
    CB_STATUS_REQUEST_FAILED,
    CB_STATUS_REQUEST_ABORTED,
    CB_STATUS_FINDING_DESTINATION,
    CB_STATUS_LOADING_DESTINATION,
    CB_STATUS_BRINGING_SESSION_ONLINE,
    CB_STATUS_REDIRECTING_TO_DESTINATION,
} CB_REQUEST_STATUS;

typedef enum _CB_RESOURCE_TYPE {
    CB_RESOURCE_UNDEFINED = 0,
    CB_RESOURCE_SESSION = 1,
    CB_RESOURCE_VM
} CB_RESOURCE_TYPE;

typedef enum _CB_ADDRESS_TYPE
{
    CB_ADDR_UNDEFINED  = 0, 
    CB_ADDR_IPv4       = 4, 
    CB_ADDR_IPv6       = 6,
} CB_ADDRESS_TYPE;

typedef struct {
    WCHAR UserName[CB_USERNAME_LENGTH];
    WCHAR Domain[CB_DOMAINNAME_LENGTH];
    WCHAR InitialProgram[CB_INITAPP_LENGTH];
    CB_RESOURCE_TYPE Resource;
    WCHAR PluginName[CB_PLUGINNAME_LENGTH];
    WCHAR FarmName[CB_FARMNAME_LENGTH];
    DWORD dwVendorInfoLength;
    PBYTE pVendorSpecificInfo;
} CB_CONNECTION_INFO, *PCB_CONNECTION_INFO;

typedef struct {
    WCHAR ServerName[128];
    DWORD AddressCount;
    WCHAR Addresses[CB_MAX_ADDRESSES][CB_IPADDRESS_LEN];
} CB_TARGET_INFO, *PCB_TARGET_INFO;


//  IConnectionBrokerRequest interface
//      This interface represents an asynchronous request to Connection Broker.
//
//  Methods:
//      CheckStatus:- 
//          This method is used to check the status of asynchronous request.
#undef INTERFACE
#define INTERFACE IConnectionBrokerRequest
DECLARE_INTERFACE_IID_( IConnectionBrokerRequest, IUnknown, "25114427-ED5D-46A6-AF53-C62D33A4108E")
{
    // *** IUnknown methods ***
    STDMETHOD( QueryInterface ) ( THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj ) PURE;
    STDMETHOD_( ULONG, AddRef ) ( THIS )  PURE;
    STDMETHOD_( ULONG, Release ) ( THIS ) PURE;

    // *** IConnectionBrokerRequest methods ***
    STDMETHOD( CheckStatus ) ( THIS_ _Out_ CB_REQUEST_STATUS *pReqStatus ) PURE;
};
typedef IConnectionBrokerRequest *LPCONNECTION_BROKER_REQUEST;

//  IConnectionBrokerClient interface
//      This interface represents RPC connection with Connection Broker.
//
//  Methods:
//      GetTargetInfo:- 
//          This method is used to get redirection info for an incoming connection.
#undef INTERFACE
#define INTERFACE IConnectionBrokerClient
DECLARE_INTERFACE_IID_( IConnectionBrokerClient, IUnknown, "D6818DF2-8338-4EB7-AD77-DE210817987C")
{
    //  IUnknown methods
    STDMETHOD( QueryInterface )( THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    //  IConnectionBrokerClient methods
    STDMETHOD( GetTargetInfo ) ( THIS_ _In_ CB_CONNECTION_INFO *pConnectionInfo,
                                       _In_ DWORD Reserved,
                                       _In_ HANDLE hStatusEvent,
                                       _Out_ CB_TARGET_INFO *pTargetInfo,
                                       _Out_ DWORD *pResult,
                                       _Out_opt_ IConnectionBrokerRequest **ppCbReq ) PURE;
};
typedef IConnectionBrokerClient *LPCONNECTION_BROKER_CLIENT;

// {D6818DF2-8338-4EB7-AD77-DE210817987C}
EXTERN_GUID( IID_IConnectionBrokerClient, 0xd6818df2, 0x8338, 0x4eb7, 0xad, 0x77, 0xde, 0x21, 0x08, 0x17, 0x98, 0x7c );
// {25114427-ED5D-46A6-AF53-C62D33A4108E}
EXTERN_GUID( IID_IConnectionBrokerRequest, 0x25114427, 0xed5d, 0x46a6, 0xaf, 0x53, 0xc6, 0x2d, 0x33, 0xa4, 0x10, 0x8e );

HRESULT CBCreateClientInstance(
        _In_ DWORD Version,
        _Outptr_ IConnectionBrokerClient **ppCbClient );

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif  // _CBCLIENT_H_ 
