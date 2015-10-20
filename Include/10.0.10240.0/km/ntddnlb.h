/*++

Copyright (c) 2001 Microsoft Corporation

Module Name:

    ntddnlb.h

Abstract:

    This header describes the structures and interfaces required to interact
    with the NLB intermediate device driver.

Revision History:

--*/

#ifndef __NTDDNLB_H__
#define __NTDDNLB_H__

#pragma once

#if (NTDDI_VERSION >= NTDDI_WS03)

/*
 * Note: This file is intended for inclusion by kernel-mode components that
 *       wish to utilize the public kernel-mode NLB connection notification 
 *       interface or the public kernel-mode NLB hook IOCTLs.  In order to 
 *       include only those definitions that are relevant to user-level 
 *       programs (i.e., registry key names), ensure that the following 
 *       macro is defined prior to including this file either via the 
 *       compiler command line:
 *
 *       -DNTDDNLB_USER_MODE_DEFINITIONS_ONLY=1
 *
 *       or in the source file(s) before inclusion of this file:
 *
 *       #define NTDDNLB_USER_MODE_DEFINITIONS_ONLY
 *
 *       Failing to define this macro before including this file in a user-
 *       level program will otherwise result in compilation failure.
 */

/*
  This registry key can be used to configure NLB to allow inter-host 
  communication in a unicast cluster under the following conditions:

  (i)  EVERY host in the cluster is properly configured with a Dedicated
       IP address, where "properly configured" implies:

       (a) The Dedicated IP address configured in NLB is valid
       (b) The Dedicated IP address configured in NLB has been added to
           to the TCP/IP properties IP address list OF THE NLB ADAPTER
       (c) The Dedicated IP address is the FIRST IP address listed in
           the TCP/IP properties IP address list OF THE NLB ADAPTER

       If any of these conditions is not met, do not expect inter-host 
       communication to work between all hosts, nor under all circumstances.

  (ii) The host is operating in unicast mode

  If the host is operating in eith multicast mode (multicast or IGMP multicast, 
  this feature is not needed, as hosts can already communication between one 
  another without additional support.

  This registry key will not exist by default, but can be created and
  set on a per-adapter basis under the following registry hive:
        
    HKLM\System\CurrentControlSet\Services\WLBS\Parameters\Interface\{GUID}\

  where {GUID} is the GUID of the particular NLB instance (use the "ClusterIP
  Address" key in this hive to identify clusters).  This key is boolean in 
  nature and is interpreted as follows:

    = 0 -> The feature is not active
    > 0 -> The feature is active

  ** This feature is intended solely for the purpose of inter-host communication 
  within a clustered firewall application (for example, Microsoft ISA Server).  
  Though its use outside of these types of applications is not precluded, ITS 
  USE OUTSIDE OF THESE APPLICATIONS IS EXPLICITLY NOT SUPPORTED BY MICROSOFT.
*/
#define NLB_INTERHOST_COMM_SUPPORT_KEY    L"UnicastInterHostCommSupport"

/*
  These registry keys instruct NLB on which notification mechanism to use.
  When deciding what notifications to use for a given type of notification X, 
  NLB checks the following, in this order:

  (i)  NLB first looks for the Enable[X]Notification registry key under 
        
       HKLM\System\CurrentControlSet\Services\WLBS\Parameters\Global\
        
       This key has three possible values that instruct NLB on which 
       notifications to listen for. They are:

         0 = Do not use any notifications.
         1 = Use the TCP/IP stack's internal notifications.
         2 = Use the NLB public callback notifications.

  (ii) If the Enable[X]Notification registry key is not present, NLB
       defaults to using the internal TCP/IP notifications.
  
  Note: The EnableSYNAttackNotification and EnableTimerStarvationNotification
  keys are not available in Windows Server 2003. Also, post-Windows Server 
  2003, a value of 0 is not permitted for the EnableTCPNotification key.
*/
#define NLB_CONNECTION_CALLBACK_KEY       L"EnableTCPNotification"
#define NLB_SYN_ATTACK_CALLBACK_KEY       L"EnableSYNAttackNotification"
#define NLB_TIMER_STARVATION_CALLBACK_KEY L"EnableTimerStarvationNotification"

/* Each of the above keys can be set to one of the values listed below. */
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define NLB_NOTIFICATION_NONE             0
#define NLB_NOTIFICATION_TCPIP            1
#define NLB_NOTIFICATION_ALTERNATE        2
#else
/* The following are legacy definitions from Windows Server 2003. */
#define NLB_CONNECTION_CALLBACK_NONE      0
#define NLB_CONNECTION_CALLBACK_TCP       1
#define NLB_CONNECTION_CALLBACK_ALTERNATE 2
#endif

/* This is the public callback object on which NLB will listen for all
   public notifications.  Currently, the types of notifications accepted by 
   NLB are session state notifications for TCP (protocol=6), SYN attack
   notifications, and timer starvation notifications (*).
  
   To notify NLB of the beginning/end of a SYN attack or timer starvation,
   open the callback object and call ExNotifyCallback with the following
   parameters:

   CallbackObject - The handle to the NLB public callback object.
   Argument1 - A callback code of type NLB_PUBLIC_CALLBACK_CODE, set to the
               NLBSYNAttackBegins[Ends] or NLBTimerStarvationBegins[Ends] 
               value.
   Argument2 - NULL (this parameter is unused)
   
   NLB requires that each begin notification is accompanied by a
   corresponding end notification. Furthermore, NLB makes no guarantees as 
   to the order in which multiple begin/end notifications are processed; it 
   is up to the caller to provide any necessary serialization.

   To notify NLB when connections change state, open the callback object,
   and call ExNotifyCallback with the following parameters (**):
   
   CallbackObject - The handle to the NLB public callback object.
   Argument1 - A callback code of type NLB_PUBLIC_CALLBACK_CODE, set to the 
               NLBSessionStateChange value.
   Argument2 - A pointer to an NLBConnectionInfo block, defined below.

   For TCP connections, NLB needs to be notified of the following state
   changes:

   CLOSED -> SYN_RCVD: A new incoming connection is being established.  This
   notification requires the IP interface index on which the SYN was
   received.  NLB will create state on the appropriate interface to track
   this TCP connection.
   
   CLOSED -> SYN_SENT: A new outgoing connection is being established.  At
   this time, it is unknown on which interface the connection will
   ultimately be established, so the IP interface index is NOT required for
   this notification.  NLB will create temporary state to track this
   connection should it return on an NLB interface.

   SYN_SENT -> ESTAB: An outgoing connection has been established.  This
   nofication requires the IP interface index on which the connection was
   ultimately established.  If the interface was NLB, state will be created
   to track the new connection; if the interface was not NLB, the temporary
   state created by the SYN_SENT notification is cleaned up.

   SYN_RCVD -> ESTAB: An incoming connection has been established.  This
   notification is not currently required by NLB.

   SYN_SENT -> CLOSED: An outgoing connection has been prematurely
   terminated (the connection never reached the ESTABlished state).  This
   notification does not require the IP interface index.  NLB will destroy
   any state created to track this connection.

   SYN_RCVD -> CLOSED: An outgoing connection has been prematurely
   terminated (the connection never reached the ESTABlished state).  This
   notification does not require the IP interface index.  NLB will destroy
   any state created to track this connection.
   
   ESTAB -> CLOSED: A connection has been *completely* terminated (i.e., the
   connection has gone through TIME_WAIT, if necessary, already).  This
   notification does not require the IP interface index.  NLB will destroy
   any state created to track this connection.

   (*) SYN attack and timer starvation notifications are not available in
   Windows Server 2003.

   (**) In Windows Server 2003, the pointer to the NLBConnectionInfo block
   is passed in Argument1 and Argument2 is set to NULL (unused).
*/
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define NLB_PUBLIC_CALLBACK_NAME          L"\\Callback\\NLBPublicCallback"
#else
/* The following are legacy definitions from Windows Server 2003. */
#define NLB_CONNECTION_CALLBACK_NAME      L"\\Callback\\NLBConnectionCallback"
#endif

/* Starting from V3 NLB hooks support versioning to allow writing backward and
   forward compatible code. Now all the structures passed as a parameter to the
   call backs start from the Version field. 
   To prevent legacy code (V1 or V2) from registering for the hooks
   we are adding Version field to the call-back registration structure. Moving
   forward this also will allow NLB to gracefully handle binaries that are compiled
   for a different version of the hook.
*/
typedef enum {
    NLBHookApiInvalid = 0,
    NLBHookApiV3      = 3,
    NLBHookApiMax     = 0xFFFF,                 
} NLB_HOOK_API_VERSION;


/* This enumerated type is used to indicate the type of notification that is
   being sent to the NLB connection callback object.
*/
typedef enum {
    NLBSessionStateChange,                  /* The state of a session (e.g. a TCP connection) has changed. */
    NLBSYNAttackBegins,                     /* A SYN attack has begun on the machine. */
    NLBSYNAttackEnds,                       /* A SYN attack has ended on the machine. */
    NLBTimerStarvationBegins,               /* Timer starvation has begun on the machine. */
    NLBTimerStarvationEnds                  /* Timer starvation has ended on the machine. */
} NLB_PUBLIC_CALLBACK_CODE;

#define NLB_TCPIP_PROTOCOL_TCP            6 /* IP protocol ID for TCP. */

#define NLB_TCP_CLOSED                    1 /* The TCP connection is/was CLOSED. */
#define NLB_TCP_SYN_SENT                  3 /* The TCP connection is/was in SYN_SENT. */
#define NLB_TCP_SYN_RCVD                  4 /* The TCP connection is/was in SYN_RCVD. */
#define NLB_TCP_ESTAB                     5 /* The TCP connection is/was ESTABlished. */

/* Force default alignment on the callback buffers. */
#pragma pack(push)
#pragma pack()
typedef struct NLBTCPAddressInfo_v1 {
    ULONG             RemoteIPAddress;      /* The remote (client) IP address, in network byte order. */
    ULONG             LocalIPAddress;       /* The local (server) IP address, in network byte order. */
    USHORT            RemotePort;           /* The remote (client) TCP port, in network byte order. */
    USHORT            LocalPort;            /* The local (server) TCP port, in network byte order. */
} NLBTCPAddressInfo_v1;

typedef struct NLBTCPAddressInfo_v2 {
    ADDRESS_FAMILY    AddressFamily;        /* The address family of the remote/local IP addresses (AF_INET or AF_INET6). */
    const UCHAR *     RemoteIPAddress;      /* The remote (client) IP address, in network byte order. */
    const UCHAR *     LocalIPAddress;       /* The local (server) IP address, in network byte order. */
    USHORT            RemotePort;           /* The remote (client) TCP port, in network byte order. */
    USHORT            LocalPort;            /* The local (server) TCP port, in network byte order. */
} NLBTCPAddressInfo_v2;

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef NLBTCPAddressInfo_v2 NLBTCPAddressInfo;
#else 
typedef NLBTCPAddressInfo_v1 NLBTCPAddressInfo;
#endif

typedef struct NLBTCPConnectionInfo {
    ULONG             PreviousState;        /* The previous state for the connection, as defined above. */
    ULONG             CurrentState;         /* The new state for the connection, as defined above. */
    ULONG             IPInterface;          /* The IP interface index on which the connection was, or is being, established. */
    NLBTCPAddressInfo Address;              /* A pointer to a block containing the IP tuple for the connection. */
} NLBTCPConnectionInfo;

typedef struct NLBConnectionInfo {
    UCHAR                      Protocol;    /* The protocol of the connection (currently, only TCP is supported). */
    union {
        NLBTCPConnectionInfo * pTCPInfo;    /* A pointer to the TCP connection information block. */
    };
} NLBConnectionInfo;

#pragma pack(pop)

#if !defined (NTDDNLB_USER_MODE_DEFINITIONS_ONLY)

//#include <ndis.h>
//#include <ntddndis.h>
//#include <devioctl.h>

#define NLB_DEVICE_NAME            L"\\Device\\WLBS"                            /* The NLB device name for use in ZwCreateFile, for instance. */

/* 
   This IOCTL registers or de-registers a kernel-mode hook with NLB. The 
   IOCTL must be called at IRQL = PASSIVE_LEVEL.
   
   Returns:
   o STATUS_SUCCESS - if the (de)registration succeeds.
   o STATUS_INVALID_PARAMETER - if a parameter is invalid. E.g.,
       - The I/O buffers are missing or the incorrect size.
       - The HookIdentifier does not match a known NLB hook GUID.
       - The HookTable entry is non-NULL, but the DeregisterCallback is NULL.
       - The HookTable entry is non-NULL, but all hook function pointers are NULL.
       - The HookTable entry is NULL, but no function is registered for this hook.
   o STATUS_ACCESS_DENIED - if the operation will NOT be permitted by NLB. E.g.,
       - The request to (de)register a hook does not come from kernel-mode.
       - The request to (de)register a hook is called at an IRQL > PASSIVE_LEVEL.
       - The de-register information provided is for a hook that was registered
         by a different component, as identified by the RegisteringEntity.
       - The specified hook has already been registered by somebody (anybody).
         Components wishing to change their hook must first de-register it.
*/
#define NLB_IOCTL_REGISTER_HOOK    CTL_CODE(0xc0c0, 18, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define NLB_HOOK_IDENTIFIER_LENGTH 39                                           /* 39 is sufficient for {GUID}. */

#define NLB_FILTER_HOOK_INTERFACE  L"{069267c4-7eee-4aff-832c-02e22e00f96f}"    /* The filter interface includes hooks for influencing the NLB
                                                                                   load-balancing decision on either the send path, receive path,
                                                                                   or both.  This hook will be called for any packet for which
                                                                                   NLB would normally apply load-balancing policy.  Components 
                                                                                   registering this interface should use an NLB_FILTER_HOOK_TABLE
                                                                                   as the hook table in the NLB_IOCTL_REGISTER_HOOK_REQUEST. */

/* The de-register callback must be specifed for all register 
   operations.  This function is called by NLB whenever a 
   registered hook is de-registered, either gracefully by the 
   registrar, or forcefully by NLB itself (as a result of the 
   NLB device driver getting unloaded).
 */
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef VOID (* NLBHookDeregister) (
    _In_z_ const PWCHAR pHookIdentifier, 
    _In_ HANDLE         RegisteringEntity, 
    _In_ ULONG          Flags);

/* Bit settings for the Flags field of the de-register callback. */
#define NLB_HOOK_DEREGISTER_FLAGS_FORCED 0x00000001

/* This enumerated type is the feedback for all filter hooks. */
typedef enum {
    NLB_FILTER_HOOK_PROCEED_WITH_HASH,                                         /* Continue to load-balance normally; i.e., the hook has no specific feedback. */
    NLB_FILTER_HOOK_REVERSE_HASH,                                              /* Use reverse hashing (use destination parameters, rather than source). */
    NLB_FILTER_HOOK_FORWARD_HASH,                                              /* Use conventional forward hashing (use source parameters). */
    NLB_FILTER_HOOK_ACCEPT_UNCONDITIONALLY,                                    /* By-pass load-balancing and accept the packet unconditionally. */
    NLB_FILTER_HOOK_REJECT_UNCONDITIONALLY,                                    /* By-pass load-balancing and reject the packet unconditionally. */
    NLB_FILTER_HOOK_USE_MODIFIED_TUPLE                                         /* Use the NewTuple provided by the Client for Load Balancing. */   
}NLB_FILTER_HOOK_DIRECTIVE;

#define HOOK_IPv6_ADDRESS_NUM_FIELDS              16
#define HOOK_IPv4_ADDRESS_NUM_FIELDS              4

//typedef UINT32 HOOK_IP_ADDRESS_V4;
//typedef USHORT HOOK_IP_ADDRESS_V6[IPv6_ADDRESS_NUM_FIELDS];
typedef UCHAR HOOK_IP_ADDRESS_V4[HOOK_IPv4_ADDRESS_NUM_FIELDS];                /* Accepts IP Address in NETWORK BYTE ORDER */
typedef UCHAR HOOK_IP_ADDRESS_V6[HOOK_IPv6_ADDRESS_NUM_FIELDS];                /* Accepts IP Address in NETWORK BYTE ORDER */

/* IP Address Types supported by NLB;
   Both your Source IP and Destination IP needs to be of the same type.
*/
typedef enum {
    IP_INVALID = 0,
    IP_v4,
    IP_v6
} HOOK_IP_ADDRESS_TYPE;

/* Represents IP Address in NLBHookIPTuple */
typedef struct _HOOK_IP_ADDRESS {
    HOOK_IP_ADDRESS_TYPE Type;
    union
    {
        UCHAR              Address;
        HOOK_IP_ADDRESS_V4 v4;                                                 /* Accepts IP Address in NETWORK BYTE ORDER. */
        HOOK_IP_ADDRESS_V6 v6;                                                 /* Accepts IP Address in NETWORK BYTE ORDER. */
    };
} HOOK_IP_ADDRESS, * PHOOK_IP_ADDRESS;

/* Flags for the NLB_HOOK_IP_TUPLE.
     Only TCP or UDP protocol(s) supported.
     For TCP, indicate whether it is a first packet.
  */
#define NLB_HOOK_FLAGS_PROTOCOL_IS_TCP               0x00000100               /* To be set in case of TCP; If not set, the protocol is assumed to be UDP */
#define NLB_HOOK_FLAGS_CONNECTION_UP                 0x00000002               /* TCP/UDP connection UP (equivalent of TCP SYN or UDP IPSec Initial Contact) */
#define NLB_HOOK_FLAGS_CONNECTION_DOWN               0x00000004               /* TCP/UDP connection DOWN (equivalent of TCP FIN) - can be used for UDP IPSec connections as well */

/* NLB Tuple is represented by a combination of:
   "Protocol, Source IP, Source Port, Destination IP, Destination Port";
   This NLB Tuple is used by NLB to make load balancing decisions.
   Client can now modify the Tuple used by NLB to make load balancing decisions.
   As part of the Send, Receive and Query Hooks, NLB provides a new structure:
   "NewTuple of type NLBHookIPTuple";
   Note:
   Client would have to update the complete Tuple;
   Incomplete Tuple or Incorrectly filled up Tuples can lead to the packet being possibly dropped by NLB;
   Source IP and Destination IP are "required" to be of the same Type. Refer to HOOK_IP_ADDRESS_TYPE enum.
*/
typedef struct _NLB_HOOK_IP_TUPLE {
    struct {
        HOOK_IP_ADDRESS IP;                                                   /* Source IP used by NLB to make load balancing decisions */
        USHORT Port;                                                          /* Source Port - Accepts Port in HOST BYTE ORDER. */
    } Source;

    struct {
        HOOK_IP_ADDRESS IP;                                                   /* Destination IP */
        USHORT Port;                                                          /* Destination Port - Accepts Port in HOST BYTE ORDER. */
    } Destination;

    ULONG  Flags;                                                             /* Flag to indicate Protocol (TCP or UDP Only). If TCP Protocol, also indicate whether it is a SYN packet or not. */
} NLB_HOOK_IP_TUPLE, * PNLB_HOOK_IP_TUPLE;

/* This structure is used as a single parameter in the New Send and Receive Hook functions.
   This has the same parameters as the Send and Receive Hooks of version 2 (v2)
   along with NewTuple that should be populated by Client who wishes to modify the IP/Port/Protocol information used by NLB.
   Refer to NLBHookIPTuple for more information.
*/
typedef struct _SEND_RECEIVE_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION                          Version;                /* Version of the structure. For the V3 hooks it has to be set to NLBHookApiV3 */
    _In_z_ const WCHAR *                               pAdapter;               /* The GUID of the adapter on which the packet was received. */
    _In_ IF_INDEX                                      IFIndex;                /* The interface index of the adapter on which the packet was received/sent. */
    _In_opt_ const NET_BUFFER *                        pPacket;                /* A pointer to the NDIS packet, which CAN be NULL if not available. */
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR *      pMediaHeader;           /* A pointer to the media header (ethernet, since NLB supports only ethernet). */
    _In_ ULONG                                         cMediaHeaderLength;     /* The length of contiguous memory accessible from the media header pointer. */
    _In_reads_bytes_(cPayloadLength) const UCHAR *          pPayload;               /* A pointer to the payload of the packet. */
    _In_ ULONG                                         cPayloadLength;         /* The length of contiguous memory accesible from the payload pointer. */
    _In_ ULONG                                         Flags;                  /* Hook-related flags including whether or not the cluster is stopped. */
    _In_ VOID *                                        Reserved;               /* This field is reserved for future use. */
    _In_ NLB_HOOK_IP_TUPLE                             NewTuple;               /* This should be populated with new tuple values */
} SEND_RECEIVE_HOOK_INFO, * PSEND_RECEIVE_HOOK_INFO;

/* This structure is used as a single parameter in the New Query Hook function.
   This has the same parameters as the Query Hook of version 2 (v2)
   along with NewTuple that should be populated by Client who wishes to modify the IP/Port/Protocol information used by NLB.
   Refer to NLBHookIPTuple for more information.
*/
typedef struct _QUERY_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION                          Version;                /* Version of the structure. For the V3 hooks it has to be set to NLBHookApiV3 */
    _In_z_ const WCHAR *                               pAdapter;               /* The GUID of the adapter on which the packet was received. */
    _In_ IF_INDEX                                      IFIndex;                /* The interface index of the adapter on which the new connection would be established. */
    _In_ ADDRESS_FAMILY                                AddressFamily;          /* The address family of the server/client IP addresses (AF_INET or AF_INET6). */
    _When_(AddressFamily==2, _In_reads_bytes_(4))                               /* AF_INET == 2, address is 4 bytes */
    _When_(AddressFamily==23, _In_reads_bytes_(16))                             /* AF_INET6 == 23, address is 16 bytes */
        const UCHAR *                                  ServerIPAddress;        /* The server IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT                                        ServerPort;             /* The server port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _When_(AddressFamily==2, _In_reads_bytes_(4))                               /* AF_INET == 2, address is 4 bytes */
    _When_(AddressFamily==23, _In_reads_bytes_(16))                             /* AF_INET6 == 23, address is 16 bytes */
        const UCHAR *                                  ClientIPAddress;        /* The client IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT                                        ClientPort;             /* The client port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _In_ USHORT                                        Protocol;               /* The IP protocol of the "packet"; TCP, UDP, ICMP, GRE, etc. */
    _In_ BOOLEAN                                       bReceiveContext;        /* A boolean to indicate whether the packet is being processed in send or receive context. */
    _In_ ULONG                                         Flags;                  /* Hook-related flags including whether or not the cluster is stopped. */
    _In_ VOID *                                        Reserved;               /* This field is reserved for future use. */
    _In_ NLB_HOOK_IP_TUPLE                             NewTuple;               /* This should be populated with new tuple values */
} QUERY_HOOK_INFO, * PQUERY_HOOK_INFO;

/* This structure is used as a single parameter in the NotifyClearClientStickinessHook.
   This hook would get called for each port rule that is affected. If all of the port rules are affected, then the hook would be called for each of those port rules.
   pAdapter - Miniport GUID whose port rule is affected. In case of BDA, only the Master miniport is set. The hook implementation should then map this to the corresponding subordinate(s) as well.
   PortRuleIndex - Index of the port rule which is affected. 
   BDATeaming - Set to TRUE in case of BDATeaming. This would be useful since inside the hook the pAdapter should be mapped to master and the subordinate(s).
*/
typedef struct _CLEAR_CLIENT_STICKINESS_HOOK_INFO {
    _In_ NLB_HOOK_API_VERSION                          Version;                  /* Version of the structure. For the V3 hooks it has to be set to NLBHookApiV3 */
    _In_z_ const WCHAR *                               pAdapter;                 /* The GUID of the adapter whose connections would be affected due to change in the client stickiness state. */
    _In_ ULONG                                         PortRuleIndex;            /* Index of the Port Rule whose Client Stickiness List would be flushed. */
    _In_ BOOLEAN                                       BDATeaming;               /* This Flag would be set, when BDA Teaming is enabled. */
} CLEAR_CLIENT_STICKINESS_HOOK_INFO, * PCLEAR_CLIENT_STICKINESS_HOOK_INFO;

/* 
   Filter hooks:

   The adapter GUID (1st parameter) will allow the hook consumer to
   determine the adapter on which the packet is being sent or received.  
   Note that the length parameters are not necesarily indicative of the 
   actual length of the media header or payload themselves, but rather 
   indicate how much of the buffers pointed to are contiguously 
   accessible from the provided pointer.  For instance, the payload
   length may just be the length of an IP header, meaning that only
   the IP header can be found at that pointer.  However, it might
   be equal to the total size of the packet payload, in which case, 
   that pointer can be used to access subsequent pieces of the 
   packet, such as the TCP header.  If the payload length provided
   is not sufficient to find all necessary packet information, the
   packet pointer can be used to traverse the packet buffers manually 
   to try and find the information needed.  However, note that the 
   packet may not always be available (it may be NULL).
*/

/* The send filter hook is invoked for every packet sent on any
   adapter to which NLB is bound for which NLB would normally 
   apply load-balancing policy.  ARPs, for instance, are not 
   filtered by NLB, so such packets would not be indicated to 
   this hook.
*/

_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v1) (
    _In_z_ const WCHAR *                            pAdapter,                   /* The GUID of the adapter on which the packet is being sent. */
/* Even though this type is versioned, a compile error occurs if the
   NDIS_PACKET type is referenced from a non-legacy (NDIS 6.0+) driver. */
#if NDIS_LEGACY_DRIVER
    _In_opt_ const NDIS_PACKET *                    pPacket,                    /* A pointer to the NDIS packet, which CAN be NULL if not available. */
#else
    _In_opt_ const VOID *                           pPacket,
#endif
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR *   pMediaHeader,               /* A pointer to the media header (ethernet, since NLB supports only ethernet). */
    _In_ ULONG                                      cMediaHeaderLength,         /* The length of contiguous memory accessible from the media header pointer. */
    _In_reads_bytes_(cPayloadLength) const UCHAR *       pPayload,                   /* A pointer to the payload of the packet. */
    _In_ ULONG                                      cPayloadLength,             /* The length of contiguous memory accesible from the payload pointer. */
    _In_ ULONG                                      Flags);                     /* Hook-related flags including whether or not the cluster is stopped. */

_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v2) (
    _In_z_ const WCHAR *                            pAdapter,                   /* The GUID of the adapter on which the packet is being sent. */
    _In_opt_ const NET_BUFFER *                     pPacket,                    /* A pointer to the NDIS packet, which CAN be NULL if not available. */
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR *   pMediaHeader,               /* A pointer to the media header (ethernet, since NLB supports only ethernet). */
    _In_ ULONG                                      cMediaHeaderLength,         /* The length of contiguous memory accessible from the media header pointer. */
    _In_reads_bytes_(cPayloadLength) const UCHAR *       pPayload,                   /* A pointer to the payload of the packet. */
    _In_ ULONG                                      cPayloadLength,             /* The length of contiguous memory accesible from the payload pointer. */
    _In_ ULONG                                      Flags);                     /* Hook-related flags including whether or not the cluster is stopped. */

/* In v3, all the arguments passed to the Send Hook would be consolidated within the SendReceiveHookInfo structure.
   Any future changes to the arguments would be made in the structure so that the signature of the hook interface doesn't need to change.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBSendFilterHook_v3) (
    _In_ PSEND_RECEIVE_HOOK_INFO SendReceiveInfoPtr);                           /* The SendReceiveHookInfo structure would be used to pass all arguments in Send Hook. */


/* The receive filter hook is invoked for every packet received 
   on any adapter to which NLB is bound for which NLB would 
   normally apply load-balancing policy.  Some protocols, such
   as ARP, or NLB-specific packets not normally seen by the 
   protocol(s) bound to NLB (heartbeats, remote control requests)
   are not filtered by NLB and will not be indicated to the hook.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v1) (
    _In_z_ const WCHAR *                            pAdapter,                   /* The GUID of the adapter on which the packet was received. */
/* Even though this type is versioned, a compile error occurs if the
   NDIS_PACKET type is referenced from a non-legacy (NDIS 6.0+) driver. */
#if NDIS_LEGACY_DRIVER
    _In_opt_ const NDIS_PACKET *                    pPacket,                    /* A pointer to the NDIS packet, which CAN be NULL if not available. */
#else
    _In_opt_ const VOID *                           pPacket,
#endif
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR *   pMediaHeader,               /* A pointer to the media header (ethernet, since NLB supports only ethernet). */
    _In_ ULONG                                      cMediaHeaderLength,         /* The length of contiguous memory accessible from the media header pointer. */
    _In_reads_bytes_(cPayloadLength) const UCHAR *       pPayload,                   /* A pointer to the payload of the packet. */
    _In_ ULONG                                      cPayloadLength,             /* The length of contiguous memory accesible from the payload pointer. */
    _In_ ULONG                                      Flags);                     /* Hook-related flags including whether or not the cluster is stopped. */

_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v2) (
    _In_z_ const WCHAR *                            pAdapter,                   /* The GUID of the adapter on which the packet was received. */
    _In_opt_ const NET_BUFFER *                     pPacket,                    /* A pointer to the NDIS packet, which CAN be NULL if not available. */
    _In_reads_bytes_(cMediaHeaderLength) const UCHAR *   pMediaHeader,               /* A pointer to the media header (ethernet, since NLB supports only ethernet). */
    _In_ ULONG                                      cMediaHeaderLength,         /* The length of contiguous memory accessible from the media header pointer. */
    _In_reads_bytes_(cPayloadLength) const UCHAR *       pPayload,                   /* A pointer to the payload of the packet. */
    _In_ ULONG                                      cPayloadLength,             /* The length of contiguous memory accesible from the payload pointer. */
    _In_ ULONG                                      Flags);                     /* Hook-related flags including whether or not the cluster is stopped. */

/* In v3, all the arguments passed to the Receive Hook would be consolidated within the SendReceiveHookInfo structure.
   Any future changes to the arguments would be made in the structure so that the signature of the hook interface doesn't need to change.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBReceiveFilterHook_v3) (
    _In_ PSEND_RECEIVE_HOOK_INFO SendReceiveInfoPtr);                           /* The SendReceiveHookInfo structure would be used to pass all arguments in Receive Hook. */


/* The query filter hook is invoked in cases where the NLB driver
   needs to invoke its hashing algorithm and therefore needs to 
   know whether or not the hook will influence the way in which 
   manner NLB performs the hash, if at all.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v1) (
    _In_z_ const WCHAR *    pAdapter,                                           /* The GUID of the adapter on which the packet was received. */
    _In_ ULONG              ServerIPAddress,                                    /* The server IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT             ServerPort,                                         /* The server port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _In_ ULONG              ClientIPAddress,                                    /* The client IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT             ClientPort,                                         /* The client port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _In_ UCHAR              Protocol,                                           /* The IP protocol of the "packet"; TCP, UDP, ICMP, GRE, etc. */
    _In_ BOOLEAN            bReceiveContext,                                    /* A boolean to indicate whether the packet is being processed in send or receive context. */
    _In_ ULONG              Flags);                                             /* Hook-related flags including whether or not the cluster is stopped. */

_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v2) (
    _In_z_ const WCHAR *                                    pAdapter,           /* The GUID of the adapter on which the packet was received. */
    _In_ ADDRESS_FAMILY                                     AddressFamily,      /* The address family of the server/client IP addresses (AF_INET or AF_INET6). */
    _When_(AddressFamily==2, _In_reads_bytes_(4))                                /* AF_INET == 2, address is 4 bytes */
    _When_(AddressFamily==23, _In_reads_bytes_(16))                              /* AF_INET6 == 23, address is 16 bytes */
        const UCHAR *                                       ServerIPAddress,    /* The server IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT                                             ServerPort,         /* The server port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _When_(AddressFamily==2, _In_reads_bytes_(4))                                /* AF_INET == 2, address is 4 bytes */
    _When_(AddressFamily==23, _In_reads_bytes_(16))                              /* AF_INET6 == 23, address is 16 bytes */
        const UCHAR *                                       ClientIPAddress,    /* The client IP address of the "packet" in NETWORK byte order. */
    _In_ USHORT                                             ClientPort,         /* The client port of the "packet" (if applicable to the Protocol) in HOST byte order. */
    _In_ UCHAR                                              Protocol,           /* The IP protocol of the "packet"; TCP, UDP, ICMP, GRE, etc. */
    _In_ BOOLEAN                                            bReceiveContext,    /* A boolean to indicate whether the packet is being processed in send or receive context. */
    _In_ ULONG                                              Flags);             /* Hook-related flags including whether or not the cluster is stopped. */

/* In v3, all the arguments passed to the Query Hook would be consolidated within the QueryHookInfo structure.
   Any future changes to the arguments would be made in the structure so that the signature of the hook interface doesn't need to change.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef NLB_FILTER_HOOK_DIRECTIVE (* NLBQueryFilterHook_v3) (
    _In_ PQUERY_HOOK_INFO QueryHookInfoPtr);                                   /* The QueryHookInfo structure would be used to pass all arguments in Query Hook. */

/* The purpose of this hook is to synchronize the NLB's Client Stickiness state (built up by the Client Stickiness Notify IOCTL) with the 3rd party application's own state (if any).
   The NotifyClearClientStickinessHook gets invoked when NLB flushes its client stickiness state for all or a specific port rule(s).
   This hook should be registered to receive notifications for client stickiness state being cleared.
   This hook would get called for each port rule that is affected. If all of the port rules are affected, then the hook would be called for each of those port rules.
   This hook would also be called every time a NLB Load module is started for each of the port rules configured on that load module. 
   
   Note: When the NLB is in the transient state of stopping or draining load module or a specific port rule, the Client Stickiness Notify IOCTL would return "STATUS_RETRY" error.
   The caller then may decide to call the IOCTL after delay or at a later time.
   Once the 3rd party application is notified of this change, after that Client Stickiness IOCTL should function as expected.
*/
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
typedef void (* NLBClearClientStickinessFilterHook_v3) (
    _In_ PCLEAR_CLIENT_STICKINESS_HOOK_INFO ClearClientStickinessHookInfoPtr);

#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef NLBSendFilterHook_v3 NLBSendFilterHook;
typedef NLBReceiveFilterHook_v3 NLBReceiveFilterHook;
typedef NLBQueryFilterHook_v3 NLBQueryFilterHook;
typedef NLBClearClientStickinessFilterHook_v3 NLBClearClientStickinessFilterHook;
#else
    #if (NTDDI_VERSION >= NTDDI_VISTA)
    typedef NLBSendFilterHook_v2 NLBSendFilterHook;
    typedef NLBReceiveFilterHook_v2 NLBReceiveFilterHook;
    typedef NLBQueryFilterHook_v2 NLBQueryFilterHook;
    #else 
    typedef NLBSendFilterHook_v1 NLBSendFilterHook;
    typedef NLBReceiveFilterHook_v1 NLBReceiveFilterHook;
    typedef NLBQueryFilterHook_v1 NLBQueryFilterHook; 
    #endif
#endif

/* Bit settings for the Flags field of the filter hooks. */
#define NLB_FILTER_HOOK_FLAGS_STOPPED  0x00000001
#define NLB_FILTER_HOOK_FLAGS_DRAINING 0x00000002

/* Force default alignment on the IOCTL buffers. */
#pragma pack(push)
#pragma pack()
/* This table contains function pointers to register or de-register
   a packet filter hook.  To register a hook, set the appropriate
   function pointer.  Those not being specified (for instance if
   you want to register a receive hook, but not a send hook) should
   be set to NULL.  The QueryHook should ONLY be specified if in 
   conjunction with setting either the send or receive hook; i.e.
   a user may not ONLY register the QueryHook.  Further, if regis-
   tering a send or receive hook (or both), the QueryHook MUST be
   provided in order for NLB to query the hook response for cases
   where a hashing decision is needed, but we are not in the context
   of sending or receiving a packet; most notably, in a connection
   up or down notification from IPSec or TCP.
*/
typedef struct {
    _In_ ULONG                              Reserved;    /* This field must be set to 0 */
    _In_ NLB_HOOK_API_VERSION               Version;     /* Version of the structure. For the V3 hooks it has to be set to NLBHookApiV3 */
    _In_ NLBSendFilterHook                  SendHook;
    _In_ NLBQueryFilterHook                 QueryHook;
    _In_ NLBReceiveFilterHook               ReceiveHook;
    _In_ NLBClearClientStickinessFilterHook ClearClientStickinessHook;
} NLB_FILTER_HOOK_TABLE, * PNLB_FILTER_HOOK_TABLE;

/* This is the input buffer for the hook (de)register IOCTL.  There is
   no corresponding output buffer.  This structure identifies the hook 
   interface being (de)registered, the entity registering the hook and
   all appropriate function pointers (callbacks).  Note that hooks are
   registered in groups, called interfaces, which prevents different
   related hooks from being owned by different entities (for example,
   it prevents one entity owned the send hook, but another owned the 
   receive hook).  Interfaces are identified by a GUID, and to set any
   hook in the interface requires ownership of the entire interface - 
   even if not all hooks in the interface are being specified.  The hook
   table should be a pointer to a hook table of the type required by the
   specified hook identifier.  To de-register a hook, set the hook table 
   pointer to NULL. 

   Note: The HookTable pointer does NOT need to be valid following the 
   completion of the IOCTL.  That is, this pointer is only referenced
   within the context of the IOCTL.
*/
typedef struct {
    WCHAR             HookIdentifier[NLB_HOOK_IDENTIFIER_LENGTH];               /* The GUID identifying the hook interface being registered. */
    HANDLE            RegisteringEntity;                                        /* The open file handle on the NLB driver, which uniquely identifies the registrar. */
    PVOID             HookTable;                                                /* A pointer to the appropriate hook table containing the hook function pointers. */
    NLBHookDeregister DeregisterCallback;                                       /* The de-register callback function, which MUST be non-NULL if the operation is a registration. */
} NLB_IOCTL_REGISTER_HOOK_REQUEST, * PNLB_IOCTL_REGISTER_HOOK_REQUEST;


/* These define which IOCTLs would be published to the Client Apps of NLB.
    Currently, only Kernel mode components can call the IOCTLs.
    All the IOCTLs originating from user-mode components would be rejected.
*/
#define NLB_PUBLIC_DEVICE_TYPE_CORE                             0xc0c0
#define NLB_PUBLIC_DEVICE_NAME                                  L"\\Device\\WLBS"
#define NLB_PUBLIC_IOCTL_MINIPORT_NAME_LENGTH                   48

/* These values are used by ClientStickinessNotify structure. */
#define START_CLIENT_STICKINESS                0
#define STOP_CLIENT_STICKINESS                 1

#define NLB_PUBLIC_IOCTL_CLIENT_STICKINESS_NOTIFY               CTL_CODE(NLB_PUBLIC_DEVICE_TYPE_CORE, 21, METHOD_BUFFERED, FILE_WRITE_ACCESS)

/* All NLB IOCTLs expect the following structure as input. */
typedef struct _NLB_PUBLIC_IOCTL_INPUT
{
    /* The MiniPortName (adapter GUID) field needs to be filled out for all
       IOCTLs. */
    WCHAR MiniportName[NLB_PUBLIC_IOCTL_MINIPORT_NAME_LENGTH];

    union
    {
        /* NLB IOCTLS may fill out IOCTL-specific fields below to identify
           a particular target of the IOCTL. */

        /* Is used to start/stop client stickiness for connectionless protocols (like UDP)
           Currently, only UDP is supported.
             Parameters:
             a) RequestType: Indicate whether it's a start/stop request
                 Accepted values: 
                     START_CLIENT_STICKINESS
                     STOP_CLIENT_STICKINESS
             b) ClientIPAddress: Client IP for which stickiness needs to start/stop.
             c) Protocol: Used to identify Port Rule. Currently Unused. Defaults to UDP.
             d) UsePortIndex:
                     TRUE: Use PortIndex for identifying port rule
                     FALSE: Use ServerTuple for identifying port rule
             e) PortIndex: Port Rule Index
             f) ServerTuple: IP and Port of Server used to identify PortRule

             It applies to IOCTL:
                 NLB_PUBLIC_IOCTL_CLIENT_STICKINESS_NOTIFY
        */
        struct
        {
            USHORT RequestType;                                                   /* Indicate request type (start/stop) */
            HOOK_IP_ADDRESS ClientIPAddress;                                      /* Client IP and it's type for the stickiness is to be started/stopped. Accepts IP Address in NETWORK BYTE ORDER. */
            USHORT Protocol;                                                      /* For future use. Currently ignored. This should be set to 0. Only UDP protocol is supported. */
            BOOLEAN UsePortIndex;                                                 /* Indicate which type of port rule identification is specified. */
            union
            {
                ULONG      PortIndex;                                             /* Port Rule Index. */
                struct
                {
                    HOOK_IP_ADDRESS IP;                                           /* Server IP and Type - Accepts IP Address in NETWORK BYTE ORDER. */
                    USHORT Port;                                                  /* Server Port - Accepts Port in HOST BYTE ORDER. */
                }
                ServerTuple;                                                      /* Required to identify the Port Rule */
            };
        }
        ClientStickinessNotify;
    };
}  NLB_PUBLIC_IOCTL_INPUT, * PNLB_PUBLIC_IOCTL_INPUT;

#pragma pack(pop)

#endif /* !USER_MODE_DEFINITIONS_ONLY */

#endif /* (NTDDI_VERSION >= NTDDI_WS03) */

#endif /* __NTDDNLB_H__ */
