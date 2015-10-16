//+---------------------------------------------------------------------------
//
// Microsoft Windows
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// File:     p2p.h
//
// Contents: Win32 APIs and structures for the Microsoft Peer To Peer infrastructure.
//
// Questions or feedback:
//
// Email:     peerfb@microsoft.com
// Website:   http://www.microsoft.com/p2p
// Newsgroup: microsoft.public.win32.programmer.networks
//
//----------------------------------------------------------------------------
//
//  If defined, the following flags inhibit definition of the indicated items.
//
//  NO_P2P_GROUP    - no Peer-to-Peer Grouping
//  NO_P2P_GRAPH    - no Peer-to-Peer Graphing
//  NO_P2P_IDENTITY - no Peer-to-Peer Identity manager
//  NO_P2P_PNRP     - no Peer-to-Peer Peer Name Resolution Protocol
//  NO_P2P_COLLABORATION - no Peer-to-Peer Collaboration Infrastructure
//
//----------------------------------------------------------------------------

#ifndef _P2P_H_
#define _P2P_H_
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef MIDL_PASS
#include <specstrings.h>
#include <winsock2.h>
#include <pnrpns.h>
#include <ws2tcpip.h>  // for sockaddrin_6
#endif

#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#if NTDDI_VERSION < NTDDI_VISTA

#ifndef NO_P2P_PNRP
#define NO_P2P_PNRP //P2P PNRP is not available prior to NTDDI_VISTA
#endif // NO_P2P_PNRP

#ifndef NO_P2P_COLLABORATION
#define NO_P2P_COLLABORATION //P2P COLLABORATION is not available prior to NTDDI_VISTA
#endif // NO_P2P_COLLABORATION

#endif // NTDDI_VERSION < NTDDI_VISTA


//////////////////////////////////////////////////////////////////////////////
// Constants

typedef enum peer_record_change_type_tag {
    PEER_RECORD_ADDED                           = 1,
    PEER_RECORD_UPDATED                         = 2,
    PEER_RECORD_DELETED                         = 3,
    PEER_RECORD_EXPIRED                         = 4,
} PEER_RECORD_CHANGE_TYPE;

typedef enum peer_connection_status_tag {
    PEER_CONNECTED                              = 1,
    PEER_DISCONNECTED                           = 2,
    PEER_CONNECTION_FAILED                      = 3,
} PEER_CONNECTION_STATUS;

typedef enum peer_connection_flags_tag {
    PEER_CONNECTION_NEIGHBOR                    = 0x0001,
    PEER_CONNECTION_DIRECT                      = 0x0002,
} PEER_CONNECTION_FLAGS;

typedef enum peer_record_flags_tag {
    PEER_RECORD_FLAG_AUTOREFRESH                = 0x0001,
    PEER_RECORD_FLAG_DELETED                    = 0x0002,
} PEER_RECORD_FLAGS;

////////////////////////////////////////////////////////////////////////////////////
// Types

typedef
#ifdef MIDL_PASS
    [context_handle]
#endif
void *HPEEREVENT;
typedef HPEEREVENT * PHPEEREVENT;

typedef
#ifdef MIDL_PASS
    [context_handle]
#endif
void *HPEERENUM;
typedef HPEERENUM * PHPEERENUM;

typedef struct peer_version_data_tag {
    WORD        wVersion;
    WORD        wHighestVersion;
} PEER_VERSION_DATA, *PPEER_VERSION_DATA;

typedef struct peer_data_tag {
    ULONG cbData;
#ifdef MIDL_PASS
    [size_is(cbData)]
#endif
    PBYTE pbData;
} PEER_DATA, * PPEER_DATA;
typedef const PEER_DATA * PCPEER_DATA;

typedef struct peer_record_tag {
    DWORD       dwSize;
    GUID        type;
    GUID        id;
    DWORD       dwVersion;
    DWORD       dwFlags;
    PWSTR       pwzCreatorId;
    PWSTR       pwzModifiedById;
    PWSTR       pwzAttributes;
    FILETIME    ftCreation;
    FILETIME    ftExpiration;
    FILETIME    ftLastModified;
    PEER_DATA   securityData;
    PEER_DATA   data;
} PEER_RECORD, *PPEER_RECORD;

typedef struct peer_address_tag {
    DWORD                   dwSize;
    SOCKADDR_IN6            sin6;
} PEER_ADDRESS, *PPEER_ADDRESS;
typedef const PEER_ADDRESS * PCPEER_ADDRESS;


typedef struct peer_connection_info_tag {
    DWORD              dwSize;
    DWORD              dwFlags;
    ULONGLONG          ullConnectionId;
    ULONGLONG          ullNodeId;
    PWSTR              pwzPeerId;
    PEER_ADDRESS       address;
} PEER_CONNECTION_INFO;

typedef struct peer_event_incoming_data_tag {
    DWORD                   dwSize;
    ULONGLONG               ullConnectionId;
    GUID                    type;
    PEER_DATA               data;
} PEER_EVENT_INCOMING_DATA, *PPEER_EVENT_INCOMING_DATA;

typedef struct peer_event_record_change_data_tag {
    DWORD                       dwSize;
    PEER_RECORD_CHANGE_TYPE     changeType;
    GUID                        recordId;
    GUID                        recordType;
} PEER_EVENT_RECORD_CHANGE_DATA, * PPEER_EVENT_RECORD_CHANGE_DATA;

typedef struct peer_event_connection_change_data_tag {
    DWORD                   dwSize;
    PEER_CONNECTION_STATUS  status;
    ULONGLONG               ullConnectionId;
    ULONGLONG               ullNodeId;
#if NTDDI_VERSION >= NTDDI_VISTA
    ULONGLONG               ullNextConnectionId;
    HRESULT                 hrConnectionFailedReason;
#endif
} PEER_EVENT_CONNECTION_CHANGE_DATA, * PPEER_EVENT_CONNECTION_CHANGE_DATA;

typedef struct peer_event_synchronized_data_tag {
    DWORD                   dwSize;
    GUID                    recordType;
} PEER_EVENT_SYNCHRONIZED_DATA, * PPEER_EVENT_SYNCHRONIZED_DATA;

#ifndef NO_P2P_GRAPH
#ifndef   MIDL_PASS

/////////////////////////////////////////////////////////////////////////////
//
//  G R A P H I N G
//
/////////////////////////////////////////////////////////////////////////////

typedef PVOID HGRAPH, *PHGRAPH;

/////////////////////////////////////////////////////////////////////////////
// Constants

#define PEER_GRAPH_VERSION MAKEWORD(1,0)

typedef enum peer_graph_event_type_tag {
    PEER_GRAPH_EVENT_STATUS_CHANGED             = 1,
    PEER_GRAPH_EVENT_PROPERTY_CHANGED           = 2,
    PEER_GRAPH_EVENT_RECORD_CHANGED             = 3,
    PEER_GRAPH_EVENT_DIRECT_CONNECTION          = 4,
    PEER_GRAPH_EVENT_NEIGHBOR_CONNECTION        = 5,
    PEER_GRAPH_EVENT_INCOMING_DATA              = 6,
    PEER_GRAPH_EVENT_CONNECTION_REQUIRED        = 7,
    PEER_GRAPH_EVENT_NODE_CHANGED               = 8,
    PEER_GRAPH_EVENT_SYNCHRONIZED               = 9,
} PEER_GRAPH_EVENT_TYPE;

typedef enum peer_node_change_type_tag {
    PEER_NODE_CHANGE_CONNECTED              = 1,
    PEER_NODE_CHANGE_DISCONNECTED           = 2,
    PEER_NODE_CHANGE_UPDATED                = 3,
} PEER_NODE_CHANGE_TYPE;

typedef enum peer_graph_status_flags_tag {
    PEER_GRAPH_STATUS_LISTENING            = 0x0001,
    PEER_GRAPH_STATUS_HAS_CONNECTIONS      = 0x0002,
    PEER_GRAPH_STATUS_SYNCHRONIZED         = 0x0004,
} PEER_GRAPH_STATUS_FLAGS;

typedef enum peer_graph_property_flags_tag {
    PEER_GRAPH_PROPERTY_HEARTBEATS         = 0x0001,
    PEER_GRAPH_PROPERTY_DEFER_EXPIRATION   = 0x0002,
} PEER_GRAPH_PROPERTY_FLAGS;

typedef enum peer_graph_scope_tag {
    PEER_GRAPH_SCOPE_ANY                     = 0,
    PEER_GRAPH_SCOPE_GLOBAL                  = 1,
    PEER_GRAPH_SCOPE_SITELOCAL               = 2,
    PEER_GRAPH_SCOPE_LINKLOCAL               = 3,
    PEER_GRAPH_SCOPE_LOOPBACK                = 4
} PEER_GRAPH_SCOPE;


/////////////////////////////////////////////////////////////////////////////
// Structures

typedef struct peer_graph_properties_tag {
    DWORD              dwSize;
    DWORD              dwFlags;          // PEER_GRAPH_PROPERTY_FLAGS
    DWORD              dwScope;
    DWORD              dwMaxRecordSize;
    PWSTR              pwzGraphId;
    PWSTR              pwzCreatorId;
    PWSTR              pwzFriendlyName;
    PWSTR              pwzComment;
    ULONG              ulPresenceLifetime;
    ULONG              cPresenceMax;
} PEER_GRAPH_PROPERTIES, *PPEER_GRAPH_PROPERTIES;

typedef struct peer_node_info_tag {
    DWORD              dwSize;
    ULONGLONG          ullNodeId;
    PWSTR              pwzPeerId;
    ULONG              cAddresses;
    PPEER_ADDRESS      pAddresses;
    PWSTR              pwzAttributes;
} PEER_NODE_INFO, *PPEER_NODE_INFO;

typedef struct peer_event_node_change_data_tag {
    DWORD                       dwSize;
    PEER_NODE_CHANGE_TYPE       changeType;
    ULONGLONG                   ullNodeId;
    PWSTR                       pwzPeerId;
} PEER_EVENT_NODE_CHANGE_DATA, *PPEER_EVENT_NODE_CHANGE_DATA;

typedef struct peer_graph_event_registration_tag {
    PEER_GRAPH_EVENT_TYPE eventType;
    GUID *                pType;
} PEER_GRAPH_EVENT_REGISTRATION, *PPEER_GRAPH_EVENT_REGISTRATION;

typedef struct peer_graph_event_data_tag {
    PEER_GRAPH_EVENT_TYPE eventType;
    union {
       PEER_GRAPH_STATUS_FLAGS                  dwStatus;
       PEER_EVENT_INCOMING_DATA                 incomingData;
       PEER_EVENT_RECORD_CHANGE_DATA            recordChangeData;
       PEER_EVENT_CONNECTION_CHANGE_DATA        connectionChangeData;
       PEER_EVENT_NODE_CHANGE_DATA              nodeChangeData;
       PEER_EVENT_SYNCHRONIZED_DATA             synchronizedData;
    };
} PEER_GRAPH_EVENT_DATA, *PPEER_GRAPH_EVENT_DATA;


typedef HRESULT (CALLBACK * PFNPEER_VALIDATE_RECORD)(
                _In_    HGRAPH                  hGraph,
                _In_opt_ PVOID                  pvContext,
                _In_ PPEER_RECORD               pRecord,
                _In_ PEER_RECORD_CHANGE_TYPE    changeType);

typedef HRESULT (CALLBACK * PFNPEER_SECURE_RECORD)(
                _In_ HGRAPH                         hGraph,
                _In_opt_ PVOID                      pvContext,
                _In_ PPEER_RECORD                   pRecord,
                _In_ PEER_RECORD_CHANGE_TYPE        changeType,
                _Outptr_ PPEER_DATA              * ppSecurityData);

typedef HRESULT (CALLBACK * PFNPEER_FREE_SECURITY_DATA)(
                _In_ HGRAPH             hGraph,
                _In_opt_ PVOID          pvContext,
                _In_ PPEER_DATA         pSecurityData);

typedef HRESULT (CALLBACK * PFNPEER_ON_PASSWORD_AUTH_FAILED)(
                _In_ HGRAPH             hGraph,
                _In_opt_ PVOID          pvContext);

typedef struct peer_security_interface_tag {
    DWORD                       dwSize;
    PWSTR                       pwzSspFilename;
    PWSTR                       pwzPackageName;
    ULONG                       cbSecurityInfo;
    PBYTE                       pbSecurityInfo;
    PVOID                       pvContext;
    PFNPEER_VALIDATE_RECORD     pfnValidateRecord;
    PFNPEER_SECURE_RECORD       pfnSecureRecord;
    PFNPEER_FREE_SECURITY_DATA  pfnFreeSecurityData;
    PFNPEER_ON_PASSWORD_AUTH_FAILED pfnAuthFailed;
}PEER_SECURITY_INTERFACE, * PPEER_SECURITY_INTERFACE;


/////////////////////////////////////////////////////////////////////////////
// API Definitions

HRESULT WINAPI PeerGraphStartup(
                _In_  WORD                  wVersionRequested,
                _Out_ PPEER_VERSION_DATA    pVersionData);

HRESULT WINAPI PeerGraphShutdown();

VOID WINAPI PeerGraphFreeData(
                _In_  PVOID       pvData);

HRESULT WINAPI PeerGraphGetItemCount(
                _In_    HPEERENUM   hPeerEnum,
                _Out_   ULONG       * pCount);

HRESULT WINAPI PeerGraphGetNextItem(
                _In_  HPEERENUM     hPeerEnum,
                _Inout_ ULONG       * pCount,
                _Outptr_result_buffer_(*pCount) PVOID ** pppvItems);

HRESULT WINAPI PeerGraphEndEnumeration(
                _In_  HPEERENUM   hPeerEnum);

HRESULT WINAPI PeerGraphCreate(
                _In_    PPEER_GRAPH_PROPERTIES          pGraphProperties,
                _In_    PCWSTR                          pwzDatabaseName,
                _In_opt_ PPEER_SECURITY_INTERFACE       pSecurityInterface,
                _Out_   HGRAPH                          * phGraph);

HRESULT WINAPI PeerGraphOpen(
                _In_  PCWSTR                                            pwzGraphId,
                _In_  PCWSTR                                            pwzPeerId,
                _In_  PCWSTR                                            pwzDatabaseName,
                _In_opt_ PPEER_SECURITY_INTERFACE                       pSecurityInterface,
                _In_  ULONG                                             cRecordTypeSyncPrecedence,
                _In_reads_opt_(cRecordTypeSyncPrecedence) const GUID   * pRecordTypeSyncPrecedence,
                _Out_ HGRAPH                                            * phGraph);

HRESULT WINAPI PeerGraphListen(
                _In_  HGRAPH        hGraph,
                _In_opt_ DWORD      dwScope,
                _In_opt_  DWORD     dwScopeId,
                _In_opt_  WORD      wPort);

HRESULT WINAPI PeerGraphConnect(
                _In_  HGRAPH            hGraph,
                _In_opt_  PCWSTR        pwzPeerId,
                _In_  PPEER_ADDRESS     pAddress,
                _Out_ ULONGLONG         * pullConnectionId);

HRESULT WINAPI PeerGraphClose(
                _In_  HGRAPH      hGraph);

HRESULT WINAPI PeerGraphDelete(
                _In_  PCWSTR      pwzGraphId,
                _In_  PCWSTR      pwzPeerId,
                _In_  PCWSTR      pwzDatabaseName);

HRESULT WINAPI PeerGraphGetStatus(
                _In_  HGRAPH       hGraph,
                _Out_   DWORD      * pdwStatus);

HRESULT WINAPI PeerGraphGetProperties(
                _In_  HGRAPH                        hGraph,
                _Outptr_ PPEER_GRAPH_PROPERTIES  * ppGraphProperties);

HRESULT WINAPI PeerGraphSetProperties(
                _In_  HGRAPH                    hGraph,
                _In_  PPEER_GRAPH_PROPERTIES    pGraphProperties);

// Eventing interfaces

HRESULT WINAPI PeerGraphRegisterEvent(
                _In_  HGRAPH                    hGraph,
                _In_  HANDLE                    hEvent,
                _In_  ULONG                     cEventRegistrations,
                _In_reads_(cEventRegistrations) PEER_GRAPH_EVENT_REGISTRATION  * pEventRegistrations,
                _Out_ HPEEREVENT                * phPeerEvent);

HRESULT WINAPI PeerGraphUnregisterEvent(
                _In_  HPEEREVENT   hPeerEvent);

HRESULT WINAPI PeerGraphGetEventData(
                _In_  HPEEREVENT                    hPeerEvent,
                _Outptr_ PPEER_GRAPH_EVENT_DATA  * ppEventData);


// Data Storage

HRESULT WINAPI PeerGraphGetRecord(
                _In_  HGRAPH             hGraph,
                _In_  const GUID         * pRecordId,
                _Outptr_ PPEER_RECORD * ppRecord);

HRESULT WINAPI PeerGraphAddRecord(
                _In_  HGRAPH        hGraph,
                _In_  PPEER_RECORD  pRecord,
                _Out_ GUID          * pRecordId);

HRESULT WINAPI PeerGraphUpdateRecord(
                _In_  HGRAPH            hGraph,
                _In_  PPEER_RECORD      pRecord);

HRESULT WINAPI PeerGraphDeleteRecord(
                _In_  HGRAPH       hGraph,
                _In_  const GUID * pRecordId,
                _In_  BOOL         fLocal);

HRESULT WINAPI PeerGraphEnumRecords(
                _In_  HGRAPH            hGraph,
                _In_opt_  const GUID    * pRecordType,
                _In_opt_  PCWSTR        pwzPeerId,
                _Out_ HPEERENUM         * phPeerEnum);

HRESULT WINAPI PeerGraphSearchRecords(
                _In_  HGRAPH        hGraph,
                _In_  PCWSTR        pwzCriteria,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGraphExportDatabase(
                _In_  HGRAPH       hGraph,
                _In_  PCWSTR       pwzFilePath);

HRESULT WINAPI PeerGraphImportDatabase(
                _In_  HGRAPH       hGraph,
                _In_  PCWSTR       pwzFilePath);

HRESULT WINAPI PeerGraphValidateDeferredRecords(
                _In_  HGRAPH                        hGraph,
                _In_  ULONG                         cRecordIds,
                _In_reads_(cRecordIds) const GUID  * pRecordIds);


// Node/Connection interfaces

HRESULT WINAPI PeerGraphOpenDirectConnection(
                _In_  HGRAPH            hGraph,
                _In_  PCWSTR            pwzPeerId,
                _In_  PPEER_ADDRESS     pAddress,
                _Out_ ULONGLONG         * pullConnectionId);

HRESULT WINAPI PeerGraphSendData(
                _In_  HGRAPH                hGraph,
                _In_  ULONGLONG             ullConnectionId,
                _In_  const GUID            * pType,
                _In_  ULONG                 cbData,
                _In_reads_bytes_(cbData) PVOID   pvData);

HRESULT WINAPI PeerGraphCloseDirectConnection(
                _In_  HGRAPH       hGraph,
                _In_  ULONGLONG    ullConnectionId);

HRESULT WINAPI PeerGraphEnumConnections(
                _In_  HGRAPH        hGraph,
                _In_  DWORD         dwFlags,         // PEER_CONNECTION_FLAGS
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGraphEnumNodes(
                _In_  HGRAPH        hGraph,
                _In_opt_ PCWSTR     pwzPeerId,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGraphSetPresence(
                _In_  HGRAPH       hGraph,
                _In_  BOOL         fPresent);

HRESULT WINAPI PeerGraphGetNodeInfo(
                _In_  HGRAPH                hGraph,
                _In_  ULONGLONG             ullNodeId,
                _Outptr_ PPEER_NODE_INFO * ppNodeInfo);

HRESULT WINAPI PeerGraphSetNodeAttributes(
                _In_  HGRAPH       hGraph,
                _In_  PCWSTR       pwzAttributes);

HRESULT WINAPI PeerGraphPeerTimeToUniversalTime(
                _In_  HGRAPH       hGraph,
                _In_  FILETIME *   pftPeerTime,
                _Out_ FILETIME *   pftUniversalTime);

HRESULT WINAPI PeerGraphUniversalTimeToPeerTime(
                _In_  HGRAPH       hGraph,
                _In_  FILETIME *   pftUniversalTime,
                _Out_ FILETIME *   pftPeerTime);

#endif //   MIDL_PASS
#endif // NO_P2P_GRAPH

#if (!(defined (NO_P2P_GROUP)) || (!defined (NO_P2P_IDENTITY)))
#ifndef MIDL_PASS

//////////////////////////////////////////////////////////////////////////////
//
//  Common APIs used by Grouping and the Identity Manager
//
//////////////////////////////////////////////////////////////////////////////

#include <wincrypt.h>

VOID    WINAPI PeerFreeData(
                _In_opt_    LPCVOID     pvData);

HRESULT WINAPI PeerGetItemCount(
                _In_    HPEERENUM       hPeerEnum,
                _Out_   ULONG           * pCount);

HRESULT WINAPI PeerGetNextItem(
                _In_  HPEERENUM                     hPeerEnum,
                _Inout_ ULONG                       * pCount,
                _Outptr_result_buffer_(*pCount) PVOID   ** pppvItems);

HRESULT WINAPI PeerEndEnumeration(
                _In_  HPEERENUM    hPeerEnum);

#endif // MIDL_PASS
#endif

#ifndef NO_P2P_GROUP
/////////////////////////////////////////////////////////////////////////////
//
//  G R O U P I N G
//
/////////////////////////////////////////////////////////////////////////////

typedef PVOID HGROUP, *PHGROUP;

typedef GUID  PEER_ROLE_ID;

/////////////////////////////////////////////////////////////////////////////
// Constants

#if NTDDI_VERSION >= NTDDI_VISTA
    #define PEER_GROUP_VERSION MAKEWORD(1,1)
#else
    #define PEER_GROUP_VERSION MAKEWORD(1,0)
#endif

typedef enum peer_group_event_type_tag {
    PEER_GROUP_EVENT_STATUS_CHANGED             = 1,
    PEER_GROUP_EVENT_PROPERTY_CHANGED           = 2,
    PEER_GROUP_EVENT_RECORD_CHANGED             = 3,
    PEER_GROUP_EVENT_DIRECT_CONNECTION          = 4,
    PEER_GROUP_EVENT_NEIGHBOR_CONNECTION        = 5,
    PEER_GROUP_EVENT_INCOMING_DATA              = 6,
    PEER_GROUP_EVENT_MEMBER_CHANGED             = 8,
    PEER_GROUP_EVENT_CONNECTION_FAILED          = 10,
    PEER_GROUP_EVENT_AUTHENTICATION_FAILED          = 11
} PEER_GROUP_EVENT_TYPE;

typedef enum peer_group_status_tag {
    PEER_GROUP_STATUS_LISTENING            = 0x0001,
    PEER_GROUP_STATUS_HAS_CONNECTIONS      = 0x0002,
} PEER_GROUP_STATUS;

typedef enum peer_group_property_flags_tag {
    PEER_MEMBER_DATA_OPTIONAL              = 0x0001,
    PEER_DISABLE_PRESENCE                  = 0x0002,
    PEER_DEFER_EXPIRATION                  = 0x0004,
} PEER_GROUP_PROPERTY_FLAGS;


#if NTDDI_VERSION >= NTDDI_VISTA
typedef enum peer_group_authentication_scheme_tag {
    PEER_GROUP_GMC_AUTHENTICATION          = 0x00000001,
    PEER_GROUP_PASSWORD_AUTHENTICATION     = 0x00000002,
} PEER_GROUP_AUTHENTICATION_SCHEME;
#endif

typedef enum peer_member_flags_tag {
    PEER_MEMBER_PRESENT                    = 0x0001,
} PEER_MEMBER_FLAGS;

typedef enum peer_member_change_type_tag {
    PEER_MEMBER_CONNECTED                  = 1,
    PEER_MEMBER_DISCONNECTED               = 2,
    PEER_MEMBER_UPDATED                    = 3,
    PEER_MEMBER_JOINED                     = 4,
    PEER_MEMBER_LEFT                       = 5,
} PEER_MEMBER_CHANGE_TYPE;

typedef enum peer_issue_credential_flags_tag {
    PEER_GROUP_STORE_CREDENTIALS      = 0x0001,
} PEER_GROUP_ISSUE_CREDENTIAL_FLAGS;

/////////////////////////////////////////////////////////////////////////////
// Structures

#ifndef   MIDL_PASS

typedef struct peer_credential_info_tag
{
    DWORD                   dwSize;
    DWORD                   dwFlags;
    PWSTR                   pwzFriendlyName;
    CERT_PUBLIC_KEY_INFO  * pPublicKey;
    PWSTR                   pwzIssuerPeerName;
    PWSTR                   pwzIssuerFriendlyName;
    FILETIME                ftValidityStart;
    FILETIME                ftValidityEnd;
    ULONG                   cRoles;
    _Field_size_(cRoles) PEER_ROLE_ID          * pRoles;
} PEER_CREDENTIAL_INFO, * PPEER_CREDENTIAL_INFO;

typedef struct peer_member_tag {
    DWORD                   dwSize;
    DWORD                   dwFlags;     // PEER_MEMBER_FLAGS
    PWSTR                   pwzIdentity;
    PWSTR                   pwzAttributes;
    ULONGLONG               ullNodeId;
    ULONG                   cAddresses;
    _Field_size_(cAddresses) PEER_ADDRESS          * pAddresses;
    PEER_CREDENTIAL_INFO  * pCredentialInfo;
} PEER_MEMBER, *PPEER_MEMBER;

typedef struct peer_invitation_info_tag {
    DWORD            dwSize;
    DWORD            dwFlags;
    PWSTR            pwzCloudName;
    DWORD            dwScope;
    DWORD            dwCloudFlags;
    PWSTR            pwzGroupPeerName;
    PWSTR            pwzIssuerPeerName;
    PWSTR            pwzSubjectPeerName;
    PWSTR            pwzGroupFriendlyName;
    PWSTR            pwzIssuerFriendlyName;
    PWSTR            pwzSubjectFriendlyName;
    FILETIME         ftValidityStart;
    FILETIME         ftValidityEnd;
    ULONG            cRoles;
    PEER_ROLE_ID   * pRoles;
    ULONG            cClassifiers;
    PWSTR*           ppwzClassifiers;
    CERT_PUBLIC_KEY_INFO * pSubjectPublicKey;
#if NTDDI_VERSION >= NTDDI_VISTA
    PEER_GROUP_AUTHENTICATION_SCHEME authScheme;
#endif
} PEER_INVITATION_INFO, *PPEER_INVITATION_INFO;

#endif // MIDL_PASS

//start 

typedef struct peer_group_properties_tag {
    DWORD            dwSize;
    DWORD            dwFlags;            // PEER_GROUP_PROPERTY_FLAGS
    PWSTR            pwzCloud;
    PWSTR            pwzClassifier;
    PWSTR            pwzGroupPeerName;
    PWSTR            pwzCreatorPeerName;
    PWSTR            pwzFriendlyName;
    PWSTR            pwzComment;
    ULONG            ulMemberDataLifetime;
    ULONG            ulPresenceLifetime;
#if NTDDI_VERSION >= NTDDI_VISTA
    DWORD            dwAuthenticationSchemes; // PEER_GROUP_AUTHENTICATION_SCHEME
    // group password authentication data
    PWSTR            pwzGroupPassword;
    PEER_ROLE_ID     groupPasswordRole;
#endif
} PEER_GROUP_PROPERTIES, *PPEER_GROUP_PROPERTIES;

typedef struct peer_event_member_change_data_tag {
    DWORD                   dwSize;
    PEER_MEMBER_CHANGE_TYPE changeType;
    PWSTR                   pwzIdentity;
} PEER_EVENT_MEMBER_CHANGE_DATA, * PPEER_EVENT_MEMBER_CHANGE_DATA;

typedef struct peer_group_event_registration_tag {
    PEER_GROUP_EVENT_TYPE eventType;
    GUID *                pType;
} PEER_GROUP_EVENT_REGISTRATION, *PPEER_GROUP_EVENT_REGISTRATION;

#ifdef MIDL_PASS
typedef struct peer_group_event_data_tag 
{
    PEER_GROUP_EVENT_TYPE eventType;
    [switch_is(eventType)] union
    {
        [case(PEER_GROUP_EVENT_STATUS_CHANGED)]
            PEER_GROUP_STATUS                 dwStatus;
        [case(PEER_GROUP_EVENT_PROPERTY_CHANGED)]
            ;
        [case(PEER_GROUP_EVENT_RECORD_CHANGED)]
            PEER_EVENT_RECORD_CHANGE_DATA     recordChangeData;
        [case(PEER_GROUP_EVENT_NEIGHBOR_CONNECTION, PEER_GROUP_EVENT_DIRECT_CONNECTION)]
            PEER_EVENT_CONNECTION_CHANGE_DATA connectionChangeData;
        [case(PEER_GROUP_EVENT_INCOMING_DATA)]
            PEER_EVENT_INCOMING_DATA          incomingData;
        [case(PEER_GROUP_EVENT_MEMBER_CHANGED)]
            PEER_EVENT_MEMBER_CHANGE_DATA     memberChangeData;
        [case(PEER_GROUP_EVENT_CONNECTION_FAILED)]
            HRESULT                           hrConnectionFailedReason;
        [default]
            ;
    };
} PEER_GROUP_EVENT_DATA, *PPEER_GROUP_EVENT_DATA;
#else  // !MIDL_PASS
typedef struct peer_group_event_data_tag 
{
    PEER_GROUP_EVENT_TYPE eventType;
    union 
    {
       PEER_GROUP_STATUS                 dwStatus;
       PEER_EVENT_INCOMING_DATA          incomingData;
       PEER_EVENT_RECORD_CHANGE_DATA     recordChangeData;
       PEER_EVENT_CONNECTION_CHANGE_DATA connectionChangeData;
       PEER_EVENT_MEMBER_CHANGE_DATA     memberChangeData;
       HRESULT                           hrConnectionFailedReason;
    };
} PEER_GROUP_EVENT_DATA, *PPEER_GROUP_EVENT_DATA;
#endif // MIDL_PASS

//end

typedef struct peer_name_pair_tag {
    DWORD           dwSize;
    PWSTR           pwzPeerName;
    PWSTR           pwzFriendlyName;
} PEER_NAME_PAIR, * PPEER_NAME_PAIR;

/////////////////////////////////////////////////////////////////////////////
// API Definitions

#ifndef MIDL_PASS

HRESULT WINAPI PeerGroupStartup(
                _In_  WORD                  wVersionRequested,
                _Out_ PPEER_VERSION_DATA    pVersionData);

HRESULT WINAPI PeerGroupShutdown();

HRESULT WINAPI PeerGroupCreate(
                _In_  PPEER_GROUP_PROPERTIES    pProperties,
                _Out_ HGROUP                    * phGroup);

HRESULT WINAPI PeerGroupOpen(
                _In_  PCWSTR       pwzIdentity,
                _In_  PCWSTR       pwzGroupPeerName,
                _In_opt_  PCWSTR   pwzCloud,
                _Out_ HGROUP       * phGroup);

HRESULT WINAPI PeerGroupJoin(
                _In_  PCWSTR        pwzIdentity,
                _In_  PCWSTR        pwzInvitation,
                _In_opt_  PCWSTR    pwzCloud,
                _Out_ HGROUP        * phGroup);


#if NTDDI_VERSION >= NTDDI_VISTA
HRESULT WINAPI PeerGroupPasswordJoin(
                _In_  PCWSTR        pwzIdentity,
                _In_  PCWSTR        pwzInvitation,
                _In_  PCWSTR        pwzPassword,
                _In_opt_  PCWSTR    pwzCloud,
                _Out_ HGROUP        * phGroup);
#endif

HRESULT WINAPI PeerGroupConnect(
                _In_  HGROUP       hGroup);

#if NTDDI_VERSION >= NTDDI_VISTA
HRESULT WINAPI PeerGroupConnectByAddress(
                _In_  HGROUP                            hGroup,
                      ULONG                             cAddresses,
                _In_reads_(cAddresses) PPEER_ADDRESS   pAddresses);
#endif

HRESULT WINAPI PeerGroupClose(
                _In_  HGROUP       hGroup);

HRESULT WINAPI PeerGroupDelete(
                _In_  PCWSTR       pwzIdentity,
                _In_  PCWSTR       pwzGroupPeerName);

HRESULT WINAPI PeerGroupCreateInvitation(
                _In_  HGROUP                        hGroup,
                _In_  PCWSTR                        pwzIdentityInfo,
                _In_opt_  FILETIME                  * pftExpiration,
                _In_  ULONG                         cRoles,
                _In_reads_opt_(cRoles) const GUID  * pRoles,
                _Outptr_ PWSTR                   * ppwzInvitation);

#if NTDDI_VERSION >= NTDDI_VISTA
HRESULT WINAPI PeerGroupCreatePasswordInvitation(
                _In_  HGROUP        hGroup,
                _Outptr_ PWSTR   * ppwzInvitation);
#endif

HRESULT WINAPI PeerGroupParseInvitation(
                _In_  PCWSTR                        pwzInvitation,
                _Outptr_ PPEER_INVITATION_INFO   * ppInvitationInfo);

HRESULT WINAPI PeerGroupGetStatus(
                _In_  HGROUP        hGroup,
                _Out_ DWORD         * pdwStatus);

HRESULT WINAPI PeerGroupGetProperties(
                _In_  HGROUP                        hGroup,
                _Outptr_ PPEER_GROUP_PROPERTIES  * ppProperties);

HRESULT WINAPI PeerGroupSetProperties(
                _In_  HGROUP                    hGroup,
                _In_  PPEER_GROUP_PROPERTIES    pProperties);

HRESULT WINAPI PeerGroupEnumMembers(
                _In_  HGROUP        hGroup,
                _In_  DWORD         dwFlags,      // PEER_MEMBER_FLAGS
                _In_opt_ PCWSTR     pwzIdentity,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGroupOpenDirectConnection(
                _In_  HGROUP            hGroup,
                _In_  PCWSTR            pwzIdentity,
                _In_  PPEER_ADDRESS     pAddress,
                _Out_ ULONGLONG         * pullConnectionId);

HRESULT WINAPI PeerGroupCloseDirectConnection(
                _In_  HGROUP       hGroup,
                _In_  ULONGLONG    ullConnectionId);

HRESULT WINAPI PeerGroupEnumConnections(
                _In_  HGROUP        hGroup,
                _In_  DWORD         dwFlags,         // PEER_CONNECTION_FLAGS
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGroupSendData(
                _In_  HGROUP                hGroup,
                _In_  ULONGLONG             ullConnectionId,
                _In_  const GUID            * pType,
                _In_  ULONG                 cbData,
                _In_reads_bytes_(cbData) PVOID   pvData);


// Eventing interfaces

HRESULT WINAPI PeerGroupRegisterEvent(
                _In_  HGROUP                hGroup,
                _In_  HANDLE                hEvent,
                _In_  DWORD                 cEventRegistration,
                _In_reads_(cEventRegistration) PEER_GROUP_EVENT_REGISTRATION   * pEventRegistrations,
                _Out_ HPEEREVENT            * phPeerEvent);

HRESULT WINAPI PeerGroupUnregisterEvent(
                _In_  HPEEREVENT   hPeerEvent);

HRESULT WINAPI PeerGroupGetEventData(
                _In_  HPEEREVENT                    hPeerEvent,
                _Outptr_ PPEER_GROUP_EVENT_DATA  * ppEventData);


// Data Storage

HRESULT WINAPI PeerGroupGetRecord(
                _In_  HGROUP                hGroup,
                _In_  const GUID            * pRecordId,
                _Outptr_ PPEER_RECORD    * ppRecord);

HRESULT WINAPI PeerGroupAddRecord(
                _In_  HGROUP        hGroup,
                _In_  PPEER_RECORD pRecord,
                _Out_ GUID          * pRecordId);

HRESULT WINAPI PeerGroupUpdateRecord(
                _In_  HGROUP        hGroup,
                _In_  PPEER_RECORD pRecord);

HRESULT WINAPI PeerGroupDeleteRecord(
                _In_  HGROUP       hGroup,
                _In_  const GUID * pRecordId);

HRESULT WINAPI PeerGroupEnumRecords(
                _In_  HGROUP        hGroup,
                _In_opt_ const GUID * pRecordType,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGroupSearchRecords(
                _In_  HGROUP        hGroup,
                _In_  PCWSTR        pwzCriteria,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI PeerGroupExportDatabase(
                _In_  HGROUP       hGroup,
                _In_  PCWSTR       pwzFilePath);

HRESULT WINAPI PeerGroupImportDatabase(
                _In_  HGROUP       hGroup,
                _In_  PCWSTR       pwzFilePath);

HRESULT WINAPI PeerGroupIssueCredentials(
                _In_ HGROUP                     hGroup,
                _In_ PCWSTR                     pwzSubjectIdentity,
                _In_opt_ PEER_CREDENTIAL_INFO   * pCredentialInfo,
                _In_ DWORD                      dwFlags,
                _Outptr_opt_ PWSTR           * ppwzInvitation);

HRESULT WINAPI PeerGroupExportConfig(
                _In_  HGROUP        hGroup,
                _In_  PCWSTR        pwzPassword,
                _Outptr_ PWSTR   * ppwzXML);

HRESULT WINAPI PeerGroupImportConfig(
                _In_ PCWSTR         pwzXML,
                _In_ PCWSTR         pwzPassword,
                _In_ BOOL           fOverwrite,
                _Outptr_ PWSTR   * ppwzIdentity,
                _Outptr_ PWSTR   * ppwzGroup);

HRESULT WINAPI PeerGroupPeerTimeToUniversalTime(
                _In_  HGROUP       hGroup,
                _In_  FILETIME *   pftPeerTime,
                _Out_ FILETIME *   pftUniversalTime);

HRESULT WINAPI PeerGroupUniversalTimeToPeerTime(
                _In_  HGROUP       hGroup,
                _In_  FILETIME *   pftUniversalTime,
                _Out_ FILETIME *   pftPeerTime);

#if NTDDI_VERSION >= NTDDI_WIN7
HRESULT WINAPI PeerGroupResumePasswordAuthentication(
                _In_ HGROUP hGroup,
                _In_ HPEEREVENT hPeerEventHandle);
#endif

#endif // NIDL_PASS

#endif // NO_P2P_GROUP

#ifndef   NO_P2P_IDENTITY
#ifndef MIDL_PASS

/////////////////////////////////////////////////////////////////////////////
//
//  I D E N T I T Y
//
/////////////////////////////////////////////////////////////////////////////

// API Definitions

HRESULT WINAPI PeerIdentityCreate(
                _In_opt_  PCWSTR        pwzClassifier,
                _In_opt_  PCWSTR        pwzFriendlyName,
                _In_opt_  HCRYPTPROV    hCryptProv,
                _Outptr_ PWSTR       * ppwzIdentity);

HRESULT WINAPI  PeerIdentityGetFriendlyName(
                _In_opt_  PCWSTR    pwzIdentity,
                _Outptr_ PWSTR   * ppwzFriendlyName);

HRESULT WINAPI  PeerIdentitySetFriendlyName(
                _In_opt_  PCWSTR    pwzIdentity,
                _In_  PCWSTR       pwzFriendlyName);

HRESULT WINAPI  PeerIdentityGetCryptKey(
                _In_opt_  PCWSTR    pwzIdentity,
                _Out_ HCRYPTPROV    * phCryptProv);

HRESULT WINAPI  PeerIdentityDelete(
                _In_  PCWSTR       pwzIdentity);

HRESULT WINAPI  PeerEnumIdentities(
                _Out_ HPEERENUM  * phPeerEnum);

HRESULT WINAPI  PeerEnumGroups(
                _In_  PCWSTR        pwzIdentity,
                _Out_ HPEERENUM     * phPeerEnum);

HRESULT WINAPI  PeerCreatePeerName(
                _In_opt_ PCWSTR     pwzIdentity,
                _In_opt_ PCWSTR     pwzClassifier,
                _Outptr_ PWSTR   * ppwzPeerName);

HRESULT WINAPI PeerIdentityGetXML(
                _In_opt_  PCWSTR    pwzIdentity,
                _Outptr_ PWSTR   * ppwzIdentityXML);

HRESULT WINAPI PeerIdentityExport(
                _In_opt_  PCWSTR    pwzIdentity,
                _In_  PCWSTR        pwzPassword,
                _Outptr_ PWSTR   * ppwzExportXML);

HRESULT WINAPI PeerIdentityImport(
                _In_  PCWSTR        pwzImportXML,
                _In_  PCWSTR        pwzPassword,
                _Outptr_ PWSTR   * ppwzIdentity);

HRESULT WINAPI PeerIdentityGetDefault(
                _Outptr_ PWSTR   * ppwzPeerName);

#endif // MIDL_PASS
#endif // NO_P2P_IDENTITY

#ifndef NO_P2P_COLLABORATION

/////////////////////////////////////////////////////////////////////////////
//
//  C O L L A B O R A T I O N
//
/////////////////////////////////////////////////////////////////////////////

#define PEER_COLLAB_VERSION MAKEWORD(1,0)

//////////////////////////////////////////////////////////////////////////////
//
//  Common used by AppInvite, Contact API's and Serverless Presence
//
//////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// Constants

typedef enum peer_signin_flags_tag {
    PEER_SIGNIN_NONE         = 0x0,
    PEER_SIGNIN_NEAR_ME      = 0x1,
    PEER_SIGNIN_INTERNET     = 0x2,
    PEER_SIGNIN_ALL          = PEER_SIGNIN_INTERNET | PEER_SIGNIN_NEAR_ME
} PEER_SIGNIN_FLAGS;

typedef enum peer_watch_permission_tag {
    PEER_WATCH_BLOCKED          = 0,
    PEER_WATCH_ALLOWED          = 1
} PEER_WATCH_PERMISSION;

typedef enum peer_publication_scope_tag {
    PEER_PUBLICATION_SCOPE_NONE         = 0x0,
    PEER_PUBLICATION_SCOPE_NEAR_ME      = 0x1,
    PEER_PUBLICATION_SCOPE_INTERNET     = 0x2,
    PEER_PUBLICATION_SCOPE_ALL          = PEER_PUBLICATION_SCOPE_NEAR_ME | PEER_PUBLICATION_SCOPE_INTERNET
} PEER_PUBLICATION_SCOPE;

/////////////////////////////////////////////////////////////////////////////
// Structures

typedef struct peer_application_tag {
    GUID            id;
    PEER_DATA       data;
    PWSTR           pwzDescription;
} PEER_APPLICATION, *PPEER_APPLICATION;
typedef const PEER_APPLICATION * PCPEER_APPLICATION;

typedef struct peer_object_tag {
    GUID            id;
    PEER_DATA       data;
    DWORD           dwPublicationScope;
} PEER_OBJECT, * PPEER_OBJECT;
typedef const PEER_OBJECT   * PCPEER_OBJECT;

typedef struct peer_contact_tag
{
    PWSTR                               pwzPeerName;
    PWSTR                               pwzNickName;
    PWSTR                               pwzDisplayName;
    PWSTR                               pwzEmailAddress;
    BOOL                                fWatch;
    PEER_WATCH_PERMISSION               WatcherPermissions;
    PEER_DATA                           credentials;
} PEER_CONTACT, *PPEER_CONTACT;
typedef const PEER_CONTACT * PCPEER_CONTACT;

typedef struct peer_endpoint_tag {
    PEER_ADDRESS                address;
    PWSTR                       pwzEndpointName;
} PEER_ENDPOINT, *PPEER_ENDPOINT;
typedef const PEER_ENDPOINT * PCPEER_ENDPOINT;

typedef struct peer_people_near_me_tag {
    PWSTR                       pwzNickName;
    PEER_ENDPOINT               endpoint;
    GUID                        id;
} PEER_PEOPLE_NEAR_ME, *PPEER_PEOPLE_NEAR_ME;
typedef const PEER_PEOPLE_NEAR_ME *PCPEER_PEOPLE_NEAR_ME;
typedef PPEER_PEOPLE_NEAR_ME *PPPEER_PEOPLE_NEAR_ME;

#ifndef MIDL_PASS
/////////////////////////////////////////////////////////////////////////////
// APIs

HRESULT WINAPI PeerCollabStartup(
                _In_  WORD      wVersionRequested);

HRESULT WINAPI PeerCollabShutdown();

HRESULT WINAPI PeerCollabSignin(
                _In_opt_    HWND      hwndParent,
                _In_        DWORD     dwSigninOptions);

HRESULT WINAPI PeerCollabSignout(
                _In_  DWORD     dwSigninOptions);

HRESULT WINAPI PeerCollabGetSigninOptions(
                _Out_  DWORD    * pdwSigninOptions);

#endif //MIDL_PASS
/////////////////////////////////////////////////////////////////////////////
//
//  A P P I N V I T E
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// constants

typedef enum peer_invitation_response_type_tag {
    PEER_INVITATION_RESPONSE_DECLINED       = 0,
    PEER_INVITATION_RESPONSE_ACCEPTED       = 1,
    PEER_INVITATION_RESPONSE_EXPIRED        = 2,
    PEER_INVITATION_RESPONSE_ERROR          = 3
} PEER_INVITATION_RESPONSE_TYPE;

typedef enum peer_application_registration_type_tag {
    PEER_APPLICATION_CURRENT_USER   = 0,
    PEER_APPLICATION_ALL_USERS      = 1
} PEER_APPLICATION_REGISTRATION_TYPE;

/////////////////////////////////////////////////////////////////////////////
// Structures

typedef struct peer_invitation_tag {
    GUID                applicationId;
    PEER_DATA           applicationData;
    PWSTR               pwzMessage;
} PEER_INVITATION, * PPEER_INVITATION;
typedef const PEER_INVITATION   * PCPEER_INVITATION;

typedef struct peer_invitation_response_tag {
    PEER_INVITATION_RESPONSE_TYPE   action;
    PWSTR                           pwzMessage;
    HRESULT                         hrExtendedInfo;
} PEER_INVITATION_RESPONSE, * PPEER_INVITATION_RESPONSE;
typedef const PEER_INVITATION_RESPONSE * PCPEER_INVITATION_RESPONSE;

typedef struct peer_app_launch_info_tag {
    PPEER_CONTACT               pContact;
    PPEER_ENDPOINT              pEndpoint;
    PPEER_INVITATION            pInvitation;
} PEER_APP_LAUNCH_INFO, * PPEER_APP_LAUNCH_INFO;
typedef const PEER_APP_LAUNCH_INFO * PCPEER_APP_LAUNCH_INFO;

typedef struct peer_application_registration_info_tag {
    PEER_APPLICATION            application;
    PWSTR                       pwzApplicationToLaunch;
    PWSTR                       pwzApplicationArguments;
    DWORD                       dwPublicationScope;
} PEER_APPLICATION_REGISTRATION_INFO, *PPEER_APPLICATION_REGISTRATION_INFO;
typedef const PEER_APPLICATION_REGISTRATION_INFO * PCPEER_APPLICATION_REGISTRATION_INFO;

#ifndef MIDL_PASS
/////////////////////////////////////////////////////////////////////////////
// API's

// AppInvite sender side API's
HRESULT WINAPI PeerCollabAsyncInviteContact(
                    _In_opt_ PCPEER_CONTACT             pcContact,
                    _In_  PCPEER_ENDPOINT               pcEndpoint,
                    _In_  PCPEER_INVITATION             pcInvitation,
                    _In_opt_  HANDLE                    hEvent,
                    _Out_opt_ HANDLE                    * phInvitation);

HRESULT WINAPI PeerCollabGetInvitationResponse(
                    _In_  HANDLE                            hInvitation,
                    _Outptr_ PPEER_INVITATION_RESPONSE   * ppInvitationResponse);

HRESULT WINAPI PeerCollabCancelInvitation(
                    _In_  HANDLE        hInvitation);

HRESULT WINAPI PeerCollabCloseHandle(
                    _In_  HANDLE        hInvitation);

HRESULT WINAPI  PeerCollabInviteContact(
                    _In_opt_     PCPEER_CONTACT             pcContact,
                    _In_  PCPEER_ENDPOINT                   pcEndpoint,
                    _In_  PCPEER_INVITATION                 pcInvitation,
                    _Outptr_ PPEER_INVITATION_RESPONSE   * ppResponse);

HRESULT WINAPI PeerCollabAsyncInviteEndpoint(
                    _In_  PCPEER_ENDPOINT               pcEndpoint,
                    _In_  PCPEER_INVITATION             pcInvitation,
                    _In_opt_  HANDLE                    hEvent,
                    _Out_opt_ HANDLE                    * phInvitation);

HRESULT WINAPI PeerCollabInviteEndpoint(
                    _In_  PCPEER_ENDPOINT                   pcEndpoint,
                    _In_  PCPEER_INVITATION                 pcInvitation,
                    _Outptr_ PPEER_INVITATION_RESPONSE   * ppResponse);

// AppInvite receiver side API's
HRESULT WINAPI PeerCollabGetAppLaunchInfo(
                    _Outptr_ PPEER_APP_LAUNCH_INFO       * ppLaunchInfo);

// Applications registration API's
HRESULT WINAPI  PeerCollabRegisterApplication(
                    _In_ PCPEER_APPLICATION_REGISTRATION_INFO   pcApplication,
                    _In_ PEER_APPLICATION_REGISTRATION_TYPE     registrationType);

HRESULT WINAPI PeerCollabUnregisterApplication(
                    _In_ const GUID                             * pApplicationId,
                    _In_ PEER_APPLICATION_REGISTRATION_TYPE     registrationType);

HRESULT WINAPI PeerCollabGetApplicationRegistrationInfo(
                    _In_ const GUID                                     * pApplicationId,
                    _In_ PEER_APPLICATION_REGISTRATION_TYPE             registrationType,
                    _Outptr_ PPEER_APPLICATION_REGISTRATION_INFO     * ppApplication);

HRESULT WINAPI PeerCollabEnumApplicationRegistrationInfo(
                    _In_  PEER_APPLICATION_REGISTRATION_TYPE      registrationType,
                    _Out_ HPEERENUM                               * phPeerEnum);
#endif // MIDL_PASS

/////////////////////////////////////////////////////////////////////////////
//
//  S E R V E R L E S S    P R E S E N C E
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// constants

typedef enum peer_presence_status_tag {
    PEER_PRESENCE_OFFLINE               = 0,
    PEER_PRESENCE_OUT_TO_LUNCH          = 1,
    PEER_PRESENCE_AWAY                  = 2,
    PEER_PRESENCE_BE_RIGHT_BACK         = 3,
    PEER_PRESENCE_IDLE                  = 4,
    PEER_PRESENCE_BUSY                  = 5,
    PEER_PRESENCE_ON_THE_PHONE          = 6,
    PEER_PRESENCE_ONLINE                = 7
} PEER_PRESENCE_STATUS;

/////////////////////////////////////////////////////////////////////////////
// Structures

typedef struct peer_presence_info_tag {
    PEER_PRESENCE_STATUS            status;
    PWSTR                           pwzDescriptiveText;
} PEER_PRESENCE_INFO, *PPEER_PRESENCE_INFO;
typedef const PEER_PRESENCE_INFO * PCPEER_PRESENCE_INFO;

#ifndef MIDL_PASS
//////////////////////////////////////////////////////////////////////////////
// API's

// Subscriber
HRESULT WINAPI PeerCollabGetPresenceInfo(
                _In_opt_  PCPEER_ENDPOINT           pcEndpoint,
                _Outptr_ PPEER_PRESENCE_INFO     *ppPresenceInfo);

HRESULT WINAPI PeerCollabEnumApplications(
                _In_opt_  PCPEER_ENDPOINT           pcEndpoint,
                _In_opt_  const GUID                * pApplicationId,
                _Out_ HPEERENUM                     * phPeerEnum);

HRESULT WINAPI PeerCollabEnumObjects(
                _In_opt_ PCPEER_ENDPOINT            pcEndpoint,
                _In_opt_ const GUID                 * pObjectId,
                _Out_ HPEERENUM                     * phPeerEnum);

HRESULT WINAPI PeerCollabEnumEndpoints(
                _In_opt_    PCPEER_CONTACT          pcContact,
                _Out_ HPEERENUM                     * phPeerEnum);

HRESULT WINAPI PeerCollabRefreshEndpointData(
                _In_ PCPEER_ENDPOINT                pcEndpoint);

HRESULT WINAPI PeerCollabDeleteEndpointData(
                _In_ PCPEER_ENDPOINT                pcEndpoint);

HRESULT WINAPI PeerCollabQueryContactData(
                _In_opt_ PCPEER_ENDPOINT            pcEndpoint,
                _Outptr_ PWSTR                   * ppwzContactData);

HRESULT WINAPI PeerCollabSubscribeEndpointData(
                _In_ const PCPEER_ENDPOINT        pcEndpoint);

HRESULT WINAPI PeerCollabUnsubscribeEndpointData(
                _In_ const PCPEER_ENDPOINT        pcEndpoint);

// Publisher

HRESULT WINAPI PeerCollabSetPresenceInfo(
                _In_ PCPEER_PRESENCE_INFO    pcPresenceInfo);

HRESULT WINAPI PeerCollabGetEndpointName(
                _Outptr_ PWSTR            * ppwzEndpointName);

HRESULT WINAPI PeerCollabSetEndpointName(
                _In_ PCWSTR                  pwzEndpointName);

HRESULT WINAPI PeerCollabSetObject(
                _In_ PCPEER_OBJECT           pcObject);

HRESULT WINAPI PeerCollabDeleteObject(
                _In_ const GUID              * pObjectId);

#endif

/////////////////////////////////////////////////////////////////////////////
//
//  R E G I S T R A T I O N
//
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// constants

typedef enum peer_change_type_tag {
    PEER_CHANGE_ADDED           = 0,
    PEER_CHANGE_DELETED         = 1,
    PEER_CHANGE_UPDATED         = 2
} PEER_CHANGE_TYPE;

typedef enum peer_collab_event_type_tag {
    PEER_EVENT_WATCHLIST_CHANGED                = 1,
    PEER_EVENT_ENDPOINT_CHANGED                 = 2,
    PEER_EVENT_ENDPOINT_PRESENCE_CHANGED        = 3,
    PEER_EVENT_ENDPOINT_APPLICATION_CHANGED     = 4,
    PEER_EVENT_ENDPOINT_OBJECT_CHANGED          = 5,
    PEER_EVENT_MY_ENDPOINT_CHANGED              = 6,
    PEER_EVENT_MY_PRESENCE_CHANGED              = 7,
    PEER_EVENT_MY_APPLICATION_CHANGED           = 8,
    PEER_EVENT_MY_OBJECT_CHANGED                = 9,
    PEER_EVENT_PEOPLE_NEAR_ME_CHANGED           = 10,
    PEER_EVENT_REQUEST_STATUS_CHANGED           = 11
} PEER_COLLAB_EVENT_TYPE;

/////////////////////////////////////////////////////////////////////////////
// Structures

typedef struct peer_collab_event_registration_tag {
    PEER_COLLAB_EVENT_TYPE     eventType;
    #ifdef MIDL_PASS
    [unique]
    #endif
    GUID                        * pInstance;
} PEER_COLLAB_EVENT_REGISTRATION, *PPEER_COLLAB_EVENT_REGISTRATION;

typedef struct peer_event_watchlist_changed_data_tag {
    PPEER_CONTACT           pContact;
    PEER_CHANGE_TYPE        changeType;
} PEER_EVENT_WATCHLIST_CHANGED_DATA, *PPEER_EVENT_WATCHLIST_CHANGED_DATA;

typedef struct peer_event_presence_changed_data_tag {
    PPEER_CONTACT           pContact;
    PPEER_ENDPOINT          pEndpoint;
    PEER_CHANGE_TYPE        changeType;
    PPEER_PRESENCE_INFO     pPresenceInfo;
} PEER_EVENT_PRESENCE_CHANGED_DATA, *PPEER_EVENT_PRESENCE_CHANGED_DATA;

typedef struct peer_event_application_changed_data_tag {
    PPEER_CONTACT           pContact;
    PPEER_ENDPOINT          pEndpoint;
    PEER_CHANGE_TYPE        changeType;
    PPEER_APPLICATION       pApplication;
} PEER_EVENT_APPLICATION_CHANGED_DATA, *PPEER_EVENT_APPLICATION_CHANGED_DATA;

typedef struct peer_event_object_changed_data_tag {
    PPEER_CONTACT           pContact;
    PPEER_ENDPOINT          pEndpoint;
    PEER_CHANGE_TYPE        changeType;
    PPEER_OBJECT            pObject;
} PEER_EVENT_OBJECT_CHANGED_DATA, *PPEER_EVENT_OBJECT_CHANGED_DATA;

typedef struct peer_event_endpoint_changed_data_tag {
    PPEER_CONTACT           pContact;
    PPEER_ENDPOINT          pEndpoint;
} PEER_EVENT_ENDPOINT_CHANGED_DATA, *PPEER_EVENT_ENDPOINT_CHANGED_DATA;

typedef struct peer_event_people_near_me_changed_data_tag {
    PEER_CHANGE_TYPE        changeType;
    PPEER_PEOPLE_NEAR_ME    pPeopleNearMe;
} PEER_EVENT_PEOPLE_NEAR_ME_CHANGED_DATA, *PPEER_EVENT_PEOPLE_NEAR_ME_CHANGED_DATA;

typedef struct peer_event_request_status_changed_data_tag {
    PPEER_ENDPOINT          pEndpoint;
    HRESULT                 hrChange;
} PEER_EVENT_REQUEST_STATUS_CHANGED_DATA, *PPEER_EVENT_REQUEST_STATUS_CHANGED_DATA;

#ifdef MIDL_PASS
    typedef struct peer_collab_event_data_tag {
        PEER_COLLAB_EVENT_TYPE                     eventType;
        [switch_is(eventType)]
        union {
            [case(PEER_EVENT_WATCHLIST_CHANGED)]
            PEER_EVENT_WATCHLIST_CHANGED_DATA               watchListChangedData;

            [case(PEER_EVENT_ENDPOINT_PRESENCE_CHANGED, PEER_EVENT_MY_PRESENCE_CHANGED)]
            PEER_EVENT_PRESENCE_CHANGED_DATA                presenceChangedData;

            [case(PEER_EVENT_ENDPOINT_APPLICATION_CHANGED, PEER_EVENT_MY_APPLICATION_CHANGED)]
            PEER_EVENT_APPLICATION_CHANGED_DATA              applicationChangedData;

            [case(PEER_EVENT_ENDPOINT_OBJECT_CHANGED, PEER_EVENT_MY_OBJECT_CHANGED)]
            PEER_EVENT_OBJECT_CHANGED_DATA                  objectChangedData;

            [case(PEER_EVENT_ENDPOINT_CHANGED, PEER_EVENT_MY_ENDPOINT_CHANGED)]
            PEER_EVENT_ENDPOINT_CHANGED_DATA                endpointChangedData;

            [case(PEER_EVENT_PEOPLE_NEAR_ME_CHANGED)]
            PEER_EVENT_PEOPLE_NEAR_ME_CHANGED_DATA          peopleNearMeChangedData;

            [case(PEER_EVENT_REQUEST_STATUS_CHANGED)]
            PEER_EVENT_REQUEST_STATUS_CHANGED_DATA          requestStatusChangedData;

            [default]
                ;
        };
    } PEER_COLLAB_EVENT_DATA, *PPEER_COLLAB_EVENT_DATA;
#else
    typedef struct peer_collab_event_data_tag {
        PEER_COLLAB_EVENT_TYPE                     eventType;
        union {
            PEER_EVENT_WATCHLIST_CHANGED_DATA                   watchListChangedData;
            PEER_EVENT_PRESENCE_CHANGED_DATA                    presenceChangedData;
            PEER_EVENT_APPLICATION_CHANGED_DATA                 applicationChangedData;
            PEER_EVENT_OBJECT_CHANGED_DATA                      objectChangedData;
            PEER_EVENT_ENDPOINT_CHANGED_DATA                    endpointChangedData;
            PEER_EVENT_PEOPLE_NEAR_ME_CHANGED_DATA              peopleNearMeChangedData;
            PEER_EVENT_REQUEST_STATUS_CHANGED_DATA              requestStatusChangedData;
        };
    } PEER_COLLAB_EVENT_DATA, *PPEER_COLLAB_EVENT_DATA;
#endif


#ifndef MIDL_PASS
/////////////////////////////////////////////////////////////////////////////
// API's

HRESULT WINAPI PeerCollabRegisterEvent(
                _In_ HANDLE                       hEvent,
                _In_ DWORD                        cEventRegistration,
                _In_reads_(cEventRegistration) PEER_COLLAB_EVENT_REGISTRATION * pEventRegistrations,
                _Out_ HPEEREVENT                  *phPeerEvent);

HRESULT WINAPI PeerCollabGetEventData(
                _In_  HPEEREVENT                        hPeerEvent,
                _Outptr_ PPEER_COLLAB_EVENT_DATA     * ppEventData);

HRESULT WINAPI PeerCollabUnregisterEvent(
                _In_ HPEEREVENT                         hPeerEvent);

//////////////////////////////////////////////////////////////////////////////
//
//  P N M
//
//////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// API's

HRESULT WINAPI PeerCollabEnumPeopleNearMe(
                _Out_ HPEERENUM                 *phPeerEnum);

//////////////////////////////////////////////////////////////////////////////
//
//  C O N T A C T
//
//////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// API's

HRESULT WINAPI PeerCollabAddContact(
                _In_           PCWSTR           pwzContactData,
                _Outptr_opt_ PPEER_CONTACT   * ppContact);

HRESULT WINAPI PeerCollabDeleteContact(
                _In_           PCWSTR           pwzPeerName);

HRESULT WINAPI PeerCollabGetContact(
                _In_opt_ PCWSTR                 pwzPeerName,
                _Outptr_ PPEER_CONTACT       * ppContact);

HRESULT WINAPI PeerCollabUpdateContact(
                _In_    PCPEER_CONTACT          pContact);

HRESULT WINAPI PeerCollabEnumContacts(
                _Out_ HPEERENUM                 * phPeerEnum);

HRESULT WINAPI PeerCollabExportContact(
                _In_opt_  PCWSTR                pwzPeerName,
                _Outptr_ PWSTR               * ppwzContactData);

HRESULT WINAPI PeerCollabParseContact(
                _In_        PCWSTR              pwzContactData,
                _Outptr_ PPEER_CONTACT       * ppContact);

#endif // MIDL_PASS
#endif // NO_P2P_COLLABORATION


/////////////////////////////////////////////////////////////////////////////
//
//  PNRP APIs
//
/////////////////////////////////////////////////////////////////////////////

#ifndef   MIDL_PASS
#ifndef   NO_P2P_PNRP

#define PNRP_VERSION     MAKEWORD(2,0)

#define PEER_PNRP_ALL_LINK_CLOUDS   L"PEER_PNRP_ALL_LINKS"
#define PEER_PNRP_AUTO_ADDRESSES    ((ULONG)(-1))

/////////////////////////////////////////////////////////////////////////////
// Structures

typedef PVOID HRESOLUTION, HREGISTRATION;

typedef struct peer_pnrp_endpoint_info_tag
{
    PWSTR       pwzPeerName;
    ULONG       cAddresses;
    _Field_size_(cAddresses) SOCKADDR  **ppAddresses;
    PWSTR       pwzComment;
    PEER_DATA   payload;
} PEER_PNRP_ENDPOINT_INFO, *PPEER_PNRP_ENDPOINT_INFO;

typedef struct peer_pnrp_cloud_info_tag
{
    PWSTR       pwzCloudName;
    PNRP_SCOPE  dwScope;
    DWORD       dwScopeId;
} PEER_PNRP_CLOUD_INFO, *PPEER_PNRP_CLOUD_INFO;

typedef struct peer_pnrp_registration_info_tag {
    PWSTR           pwzCloudName;
    PWSTR           pwzPublishingIdentity;
    ULONG           cAddresses;
    _Field_size_(cAddresses) SOCKADDR        **ppAddresses;
    WORD            wPort;
    PWSTR           pwzComment;
    PEER_DATA       payload;
} PEER_PNRP_REGISTRATION_INFO, *PPEER_PNRP_REGISTRATION_INFO;

/////////////////////////////////////////////////////////////////////////////
// API's

HRESULT WINAPI PeerNameToPeerHostName(
                _In_    PCWSTR      pwzPeerName,
                _Outptr_ PWSTR   *ppwzHostName);

HRESULT WINAPI PeerHostNameToPeerName(
                _In_  PCWSTR        pwzHostName,
                _Outptr_ PWSTR   *ppwzPeerName);

HRESULT WINAPI PeerPnrpStartup(
                _In_ WORD           wVersionRequested);

HRESULT WINAPI PeerPnrpShutdown();

HRESULT WINAPI PeerPnrpRegister(
                  _In_  PCWSTR                            pcwzPeerName,
                  _In_opt_  PPEER_PNRP_REGISTRATION_INFO  pRegistrationInfo,
                  _Out_ HREGISTRATION                    *phRegistration);

HRESULT WINAPI PeerPnrpUpdateRegistration(
                  _In_ HREGISTRATION                 hRegistration,
                  _In_ PPEER_PNRP_REGISTRATION_INFO  pRegistrationInfo);

HRESULT WINAPI PeerPnrpUnregister(
                _In_ HREGISTRATION   hRegistration);

HRESULT WINAPI PeerPnrpResolve(
                  _In_ PCWSTR                           pcwzPeerName,
                  _In_opt_ PCWSTR                       pcwzCloudName,
                  _Inout_ ULONG                         *pcEndpoints,
                  _Outptr_result_buffer_(*pcEndpoints) PPEER_PNRP_ENDPOINT_INFO  *ppEndpoints);

HRESULT WINAPI PeerPnrpStartResolve(
                  _In_  PCWSTR          pcwzPeerName,
                  _In_opt_  PCWSTR      pcwzCloudName,
                  _In_opt_  ULONG       cMaxEndpoints,
                  _In_  HANDLE          hEvent,
                  _Out_ HRESOLUTION    *phResolve);

HRESULT WINAPI PeerPnrpGetCloudInfo(
                  _Out_ ULONG                                               *pcNumClouds,
                  _Outptr_result_buffer_(*pcNumClouds) PPEER_PNRP_CLOUD_INFO    *ppCloudInfo);

HRESULT WINAPI PeerPnrpGetEndpoint(
                  _In_  HRESOLUTION                       hResolve,
                  _Outptr_ PPEER_PNRP_ENDPOINT_INFO   *ppEndpoint);

HRESULT WINAPI PeerPnrpEndResolve(
                  _In_ HRESOLUTION   hResolve);

#endif // NO_P2P_PNRP
#endif // MIDL_PASS

#ifdef __cplusplus
}
#endif /* __cplusplus */


/////////////////////////////////////////////////////////////////////////////
//
// Error codes
//
/////////////////////////////////////////////////////////////////////////////

//
//  all the error codes with a facility of FACILITY_P2P have been moved to winerror.h
//
//  it is build from %SDXROOT%\minkernel\publish\base\winerror.mc



//
// WSA_PNRP_* error codes returned by the NSP
//

// These errors are only used by PNRP NSP and applications using the NSP.
// Any usage from other system/apps not related to PNRP (for example PNRP based getaddrinfo
// implementations) would require these errors be moved to winerror.h

#define WSA_PNRP_ERROR_BASE                  11500
#define WSA_PNRP_CLOUD_NOT_FOUND             (WSA_PNRP_ERROR_BASE +  1)
#define WSA_PNRP_CLOUD_DISABLED              (WSA_PNRP_ERROR_BASE +  2)
#define WSA_PNRP_INVALID_IDENTITY            (WSA_PNRP_ERROR_BASE +  3)
#define WSA_PNRP_TOO_MUCH_LOAD               (WSA_PNRP_ERROR_BASE +  4)
#define WSA_PNRP_CLOUD_IS_SEARCH_ONLY        (WSA_PNRP_ERROR_BASE +  5)
#define WSA_PNRP_CLIENT_INVALID_COMPARTMENT_ID (WSA_PNRP_ERROR_BASE +  6)
#define WSA_PNRP_DUPLICATE_PEER_NAME           (WSA_PNRP_ERROR_BASE +  8)
#define WSA_PNRP_CLOUD_IS_DEAD               (WSA_PNRP_ERROR_BASE + 9)

//
//	these are the HRESULTs corresponding to the WSA error codes above and returned by Grouping and Simple API
//
#define PEER_E_CLOUD_NOT_FOUND                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_CLOUD_NOT_FOUND)
#define PEER_E_CLOUD_DISABLED                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_CLOUD_DISABLED)
#define PEER_E_INVALID_IDENTITY                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_INVALID_IDENTITY)
#define PEER_E_TOO_MUCH_LOAD                    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_TOO_MUCH_LOAD)
#define PEER_E_CLOUD_IS_SEARCH_ONLY             MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_CLOUD_IS_SEARCH_ONLY)
#define PEER_E_CLIENT_INVALID_COMPARTMENT_ID    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_CLIENT_INVALID_COMPARTMENT_ID)
#define PEER_E_DUPLICATE_PEER_NAME              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_DUPLICATE_PEER_NAME)
#define PEER_E_CLOUD_IS_DEAD                    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, WSA_PNRP_CLOUD_IS_DEAD)


//
// these are the error codes that are not defined by winerror.h, so we define them as our own
//
#define PEER_E_NOT_FOUND                        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, ERROR_NOT_FOUND)
#define PEER_E_DISK_FULL                        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, ERROR_DISK_FULL)
#define PEER_E_ALREADY_EXISTS                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WIN32, ERROR_ALREADY_EXISTS)


#pragma warning(pop)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif  // _P2P_H_


/////////////////////////////////////////////////////////////////////////////
//
// These GUIDs are outside conditional includes so you can
//   #include <p2p.h>   in precompiled header
// then
//   #include <initguid.h>  in a single source file
//   #include <p2p.h>   in that source file a second time to instantiate the GUIDs

#ifdef DEFINE_GUID

#ifndef NO_P2P_GROUP

DEFINE_GUID(PEER_GROUP_ROLE_ADMIN, /* 04387127-aa56-450a-8ce5-4f565c6790f4 */
    0x04387127, 0xaa56, 0x450a, 0x8c, 0xe5, 0x4f, 0x56, 0x5c, 0x67, 0x90, 0xf4);

DEFINE_GUID(PEER_GROUP_ROLE_MEMBER, /* f12dc4c7-0857-4ca0-93fc-b1bb19a3d8c2 */
    0xf12dc4c7, 0x0857, 0x4ca0, 0x93, 0xfc, 0xb1, 0xbb, 0x19, 0xa3, 0xd8, 0xc2);

#if NTDDI_VERSION >= NTDDI_VISTA
DEFINE_GUID(PEER_GROUP_ROLE_INVITING_MEMBER, /* 4370fd89-dc18-4cfb-8dbf-9853a8a9f905 */
    0x4370fd89, 0xdc18, 0x4cfb, 0x8d, 0xbf, 0x98, 0x53, 0xa8, 0xa9, 0xf9, 0x05);
#endif

#endif // NO_P2P_GROUP

#ifndef NO_P2P_COLLABORATION
DEFINE_GUID(PEER_COLLAB_OBJECTID_USER_PICTURE, /* dd15f41f-fc4e-4922-b035-4c06a754d01d */
    0xdd15f41f, 0xfc4e, 0x4922, 0xb0, 0x35, 0x4c, 0x06, 0xa7, 0x54, 0xd0, 0x1d);
#endif

#endif // DEFINE_GUID
