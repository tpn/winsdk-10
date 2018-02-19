/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    wsk.h

Abstract:

    This module contains the definitions and structures for
    the Windows Sockets Kernel-Mode Interface.

Environment:

    Kernel-Mode only

--*/

#ifndef _WSK_
#define _WSK_

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <netioddk.h>
#include <ws2def.h>
#include <mswsockdef.h>

//
// Socket object.
//
// 'Dispatch' can be one of 5 types depending on the socket type:
// PWSK_PROVIDER_BASIC_DISPATCH, PWSK_PROVIDER_LISTEN_DISPATCH,
// PWSK_PROVIDER_DATAGRAM_DISPATCH, PWSK_PROVIDER_CONNECTION_DISPATCH,
// PWSK_PROVIDER_STREAM_DISPATCH
//

typedef struct _WSK_SOCKET {
    CONST VOID *Dispatch;
} WSK_SOCKET, *PWSK_SOCKET;

//
// Client object
//
typedef PVOID PWSK_CLIENT;

//
// WSK API calling convention
//
#define WSKAPI NTAPI

//
// WSK Interface ID
//
extern CONST NPIID NPI_WSK_INTERFACE_ID;

//
// WSK client must use the following macro to initialize the Version field
// in its WSK_CLIENT_DISPATCH structure.
//
#define MAKE_WSK_VERSION(Mj, Mn) ((USHORT)((Mj) << 8) | (USHORT)((Mn) & 0xff))

//
// WSK client must use the following macros to extract the Major and Minor
// version numbers from the HighestVersion and LowestVersion fields of the
// WSK_PROVIDER_CHARACTERISTICS structure, and the Version field of the
// WSK_PROVIDER_DISPATCH structure.
//
#define WSK_MAJOR_VERSION(V) ((UCHAR)((V) >> 8))
#define WSK_MINOR_VERSION(V) ((UCHAR)(V))

//
// WSK Provider characteristics determine the range of versions of the WSK
// interface supported by the WSK provider
//

typedef struct _WSK_PROVIDER_CHARACTERISTICS {
    USHORT HighestVersion;
    USHORT LowestVersion;
} WSK_PROVIDER_CHARACTERISTICS, *PWSK_PROVIDER_CHARACTERISTICS;

//
// Transport information structure
//

typedef struct _WSK_TRANSPORT {
    USHORT         Version; // Version of the transport
    USHORT         SocketType;
    ULONG          Protocol;
    ADDRESS_FAMILY AddressFamily;
    GUID           ProviderId;
} WSK_TRANSPORT, *PWSK_TRANSPORT;

//
// Buffer structure used for sending/receiving data.
// Mdl points to a chain of memory descriptors (scatter/gather list).
// The data described begin at 'Offset' and extend for 'Length' bytes.
// N.B. 'Offset' is required to lie entirely within the first MDL in
// the chain.
//

typedef struct _WSK_BUF {
    PMDL   Mdl;    // Locked MDL chain
    ULONG  Offset; // Offset into the "first" Mdl in the chain
    SIZE_T Length; // Length of data starting from Offset
} WSK_BUF, *PWSK_BUF;

//
// Data Indication structure used for indicating incoming data buffers
// on connection-oriented sockets.
//

typedef struct _WSK_DATA_INDICATION {
    struct _WSK_DATA_INDICATION *Next;
    WSK_BUF                      Buffer;
} WSK_DATA_INDICATION, *PWSK_DATA_INDICATION;

//
// Datagram Indication structure used for indicating incoming datagrams
// on datagram sockets.
//

typedef struct _WSK_DATAGRAM_INDICATION {
    struct _WSK_DATAGRAM_INDICATION *Next;
    WSK_BUF                          Buffer;
    _Field_size_bytes_(ControlInfoLength) PCMSGHDR ControlInfo;
    ULONG                            ControlInfoLength;
    PSOCKADDR                        RemoteAddress;
} WSK_DATAGRAM_INDICATION, *PWSK_DATAGRAM_INDICATION;

//
// Identification structure used for conditional-accept.
//

typedef struct _WSK_INSPECT_ID {
    ULONG_PTR Key;
    ULONG     SerialNumber;
} WSK_INSPECT_ID, *PWSK_INSPECT_ID;

//
// Actions that can be taken for connect request inspection
// on a conditional-accept listening socket.
//

typedef enum {
    WskInspectReject, // reject the connection request
    WskInspectAccept, // proceed with accept
    WskInspectPend,   // delay the decision (use WskInspectComplete later)
    WskInspectMax
} WSK_INSPECT_ACTION, *PWSK_INSPECT_ACTION;

//
// Flag used by some callback routines to indicate that the callback was
// invoked at DISPATCH_LEVEL IRQL.
//

#define WSK_FLAG_AT_DISPATCH_LEVEL 0x00000008

//
// Event indication callbacks
//
// Event indications are delivered in arbitrary thread context.
//

typedef
NTSTATUS
(WSKAPI * PFN_WSK_CLIENT_EVENT) (
    _In_opt_ PVOID ClientContext,
    _In_ ULONG     EventType,
    _In_reads_bytes_opt_(InformationLength) PVOID Information,
    _In_ SIZE_T    InformationLength
    );
/*
 * Indicates client-specific control event.
 *
 * Parameters:
 *  ClientContext - ClientContext value that was passed to WskRegister
 *  EventType - No event types are currently defined.
 *  Information - Optional event specific information.
 *  InformationLength - Length of information.
 * Returns:
 *  STATUS_SUCCESS unless otherwise is specified by specific EventTypes.
 */

typedef
_Must_inspect_result_
NTSTATUS
(WSKAPI * PFN_WSK_RECEIVE_FROM_EVENT) (
    _In_opt_ PVOID SocketContext,
    _In_ ULONG     Flags,
    _In_opt_ PWSK_DATAGRAM_INDICATION DataIndication
    );
/*
 * Indicates that one or more datagrams have arrived on one of the datagram
 * socket objects created by the client
 *
 * Parameters:
 *  SocketContext - Context value associated with the socket on which
 *     datagram(s) were received.
 *  Flags - MSG_BCAST, MSG_MCAST, WSK_FLAG_AT_DISPATCH_LEVEL
 *  DataIndication - List of one or more datagrams.
 *     NULL denotes that socket needs to be closed.
 * Returns:
 *  STATUS_SUCCESS - Datagram(s) were consumed and further indication should be
 *     made when new datagrams arrive.
 *  STATUS_PENDING - Datagram(s) were retained by the client and the data must
 *     remain valid until released by the client. Further indication should be
 *     made when new datagrams arrive.
 *  STATUS_DATA_NOT_ACCEPTED - Datagram(s) could not be processed and should be
 *     buffered by the transport if possible or required by the
 *     protocol. No further indication should be made until
 *     message indication callbacks are specifically re-enabled.
 */

//
// Forward declaration for connected socket callback table
//
typedef struct _WSK_CLIENT_CONNECTION_DISPATCH
    WSK_CLIENT_CONNECTION_DISPATCH, *PWSK_CLIENT_CONNECTION_DISPATCH;

typedef
_Must_inspect_result_
_At_(AcceptSocket, __drv_aliasesMem)
NTSTATUS
(WSKAPI * PFN_WSK_ACCEPT_EVENT) (
    _In_opt_ PVOID         SocketContext,
    _In_ ULONG             Flags,
    _In_ PSOCKADDR         LocalAddress,
    _In_ PSOCKADDR         RemoteAddress,
    _In_opt_ PWSK_SOCKET   AcceptSocket,
    _Outptr_result_maybenull_ PVOID *AcceptSocketContext,
    _Outptr_result_maybenull_ CONST WSK_CLIENT_CONNECTION_DISPATCH **AcceptSocketDispatch
    );
/*
 * Indicates that a connection request has arrived on one of the listening
 * sockets created by the client. Note that when this callback is made,
 * connection setup handshake with the remote party have already taken place.
 *
 * Parameters:
 *  SocketContext - Context value associated with the listening socket
 *     on which connection request has been received.
 *  Flags - WSK_FLAG_AT_DISPATCH_LEVEL
 *  LocalAddress - Local transport address this connection request arrived on.
 *     Useful if the listening socket is bound to the wildcard address.
 *  RemoteAddress - Transport address of the remote party.
 *  AcceptSocket - New connected socket object that represent the connection.
 *     NULL denotes that listening socket must be closed.
 *  AcceptSocketContext - OUT parameter through which the client passes the
 *     SocketContext for the new socket to WSK. WSK client must initialize
 *     this parameter before enabling event callbacks via
 *     SO_WSK_EVENT_CALLBACK option.
 *  AcceptSocketDispatch - OUT parameter through which the client passes the
 *     callback routines for the new socket to WSK. WSK client must
 *     initialize this parameter before enabling callbacks via
 *     SO_WSK_EVENT_CALLBACK option.
 * Returns:
 *  STATUS_SUCCESS - Client accepted the connection.
 *  STATUS_REQUEST_NOT_ACCEPTED - Client rejected the connection. WSK provider
 *     will close the socket. Client should not touch the socket any more.
 */

typedef
_Must_inspect_result_
WSK_INSPECT_ACTION
(WSKAPI * PFN_WSK_INSPECT_EVENT) (
    _In_opt_ PVOID           SocketContext,
    _In_ PSOCKADDR           LocalAddress,
    _In_ PSOCKADDR           RemoteAddress,
    _In_opt_ PWSK_INSPECT_ID InspectID
    );
/*
 * Indicates that a connection request has arrived on a conditional-accept
 * listening socket. This callback is used only for conditional-accept sockets.
 * This indication allows the client to decide if it wants to proceed with
 * regular connection acceptance before any actual connection setup handshake
 * with the remote party takes place. If the client decides to proceed with
 * regular acceptance than the WskAcceptEvent callback will be invoked later
 * if/when the connectin setup handshake with the remote party is performed
 * successfully.
 *
 * Parameters:
 *  SocketContext - Context value associated with the listening socket
 *                  on which connection request has been received.
 *  LocalAddress - Local transport address this connection request arrived on.
 *              Useful if the listening socket is bound to the wildcard address.
 *  RemoteAddress - Transport address of the remote party.
 *  InspectID - Pointer to the inspect ID structure. The connection request
 *              is identified via the contents of this structure (NOT via the
 *              pointer to the structure) until the WskAcceptEvent callback
 *              happens. If the client wants to preserve the inspect ID then it
 *              needs to copy this structure to its own memory before returning
 *              from this callback.
 *              NULL InspectID denotes that listening socket is to be closed.
 * Returns:
 *   WskInspectReject - Reject the connection request immediately. Neither
 *                      WskAcceptEvent nor WskAbortEvent will be invoked.
 *   WskInspectAccept - Proceed with regular acceptance. WskAcceptEvent
 *                      or WskAbortEvent may be invoked.
 *   WskInspectPend - Delay the decision. Client may invoke WskInspectComplete later to
 *                    convey its decision. WskAbortEvent may be invoked in
 *                    the meantime.
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_ABORT_EVENT) (
    _In_opt_ PVOID       SocketContext,
    _In_ PWSK_INSPECT_ID InspectID
    );
/*
 * Indicates that a previous connection request indicated by WskInspectEvent
 * callback is dropped. This callback is used only for conditional-accept
 * sockets.
 *
 * Parameters:
 *  SocketContext - Context value associated with the listening socket
 *                  on which connection request was received.
 *  InspectID - Pointer to the inspect ID structure. The connection request
 *              is identified via the contents of this structure (NOT via the
 *              pointer to the structure.) If the client wants to preserve the
 *              inspect ID then it needs to copy this sturcture to its own
 *              memory before returning from this callback.
 * Returns:
 *  STATUS_SUCCESS - This is the only allowed return value.
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_SEND_BACKLOG_EVENT) (
    _In_opt_ PVOID SocketContext,
    _In_ SIZE_T    IdealBacklogSize
    );
/*
 * Indicates that the ideal send backlog size has changed for the connection.
 * The ideal send backlog size denotes the optimal amount of send data that
 * needs to be kept outstanding (passed to the WSK provider, but not completed
 * by the WSK provider yet) in order to keep the data pipe full at all times.
 *
 * Parameters:
 *  SocketContext - Context value associated with the socket object.
 *  IdealBacklogSize - Ideal send backlog size
 * Returns:
 *  STATUS_SUCCESS - This is the only allowed return value.
 */

//
// Flag that denotes that the indicated buffers should NOT be
// retained by the client indefinitely. The client should
// avoid retaining such buffers, but if it does retain, then
// it has to release them ASAP.
//

#define WSK_FLAG_RELEASE_ASAP 0x00000002

#define WSK_FLAG_ENTIRE_MESSAGE 0x00000004

typedef
_Must_inspect_result_
NTSTATUS
(WSKAPI * PFN_WSK_RECEIVE_EVENT) (
    _In_opt_ PVOID  SocketContext,
    _In_ ULONG      Flags,
    _In_opt_ PWSK_DATA_INDICATION DataIndication,
    _In_ SIZE_T     BytesIndicated,
    _Inout_ SIZE_T *BytesAccepted
    );
/*
 * Indicates that data has arrived on one of the connected socket objects
 * created by the client
 *
 * Parameters:
 *  SocketContext - Context value associated with the socket object on which
 *     data was received.
 *  Flags - WSK_FLAG_RELEASE_ASAP, WSK_FLAG_ENTIRE_MESSAGE,
 *          WSK_FLAG_AT_DISPATCH_LEVEL
 *  DataIndication - List of one or more data buffers
 *    NULL denotes that socket needs to be closed.
 *  BytesIndicated - Total number of bytes being indicated.
 *  BytesAccepted - Number of bytes client accepted. Client needs to set this
 *    OUT parameter only if it wishes to accept a data indication partially.
 *    This OUT parameter is ignored if client returns STATUS_DATA_NOT_ACCEPTED
 *    or STATUS_PENDING. The parameter is meaningful only when client returns
 *    STATUS_SUCCESS. If the client wants to fully accept the indicated buffers
 *    then it does NOT have to set this parameter, i.e. returning STATUS_SUCCESS
 *    without touching this parameter means full acceptance.
 * Returns:
 *  STATUS_SUCCESS - Data buffer(s) were fully or partially consumed. If
 *     indication was fully consumed, further indication should be made when
 *     more data arrives. If indication was partially consumed, i.e. client
 *     sets the BytesAccepted parameter to a number smaller than BytesIndicated,
 *     then no further indications will be made until the client posts a
 *     WskReceive request and it gets completed.
 *  STATUS_PENDING - Data buffer(s) were retained by the client and the data
 *     must remain valid until released. Further indications should be made
 *     when more data arrives.
 *  STATUS_DATA_NOT_ACCEPTED - Data buffer(s) could not be processed and should
 *     be buffered by the transport if possible or required by the protocol.
 *     No further indications will be made until the client posts a WskReceive
 *     request and it gets completed.
 */

//
// Flags for indicating abortive/graceful connection teardown
//

#define WSK_FLAG_ABORTIVE 0x00000001

typedef
NTSTATUS
(WSKAPI * PFN_WSK_DISCONNECT_EVENT) (
    _In_opt_ PVOID SocketContext,
    _In_ ULONG     Flags
    );
/*
 * Indicates that peer of the connection has initiated disconnect sequence.
 *
 * Parameters:
 *  SocketContext - Context associated with the connected socket object.
 *  Flags - indicates whether disconnect is graceful or abortive (if the
 *     WSK_FLAG_ABORTIVE flag is set, it's abortive, otherwise it's graceful.)
 *     WSK_FLAG_AT_DISPATCH_LEVEL
 * Returns:
 *  STATUS_SUCCESS - This is the only allowed return value.
 */

//
// Flags denoting WSK socket types
//

#define WSK_FLAG_BASIC_SOCKET        0x00000000
#define WSK_FLAG_LISTEN_SOCKET       0x00000001
#define WSK_FLAG_CONNECTION_SOCKET   0x00000002
#define WSK_FLAG_DATAGRAM_SOCKET     0x00000004
#define WSK_FLAG_STREAM_SOCKET       0x00000008

typedef
_At_((void*)Irp->IoStatus.Information, __drv_allocatesMem(Mem))
NTSTATUS
(WSKAPI * PFN_WSK_SOCKET) (
    _In_ PWSK_CLIENT              Client,
    _In_ ADDRESS_FAMILY           AddressFamily,
    _In_ USHORT                   SocketType,
    _In_ ULONG                    Protocol,
    _In_ ULONG                    Flags,
    _In_opt_ PVOID                SocketContext,
    _In_opt_ CONST VOID          *Dispatch,
    _In_opt_ PEPROCESS            OwningProcess,
    _In_opt_ PETHREAD             OwningThread,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PIRP                  Irp
    );
/*
 * Creates socket object
 *
 * Parameters:
 *
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  AddressFamily - address family, e.g. AF_INET, AF_INET6
 *  SocketType - socket type, e.g. SOCK_STREAM, SOCK_DGRAM
 *  Protocol - protocol, e.g. IPPROTO_TCP, IPPROTO_UDP
 *  Flags - WSK_FLAG_LISTEN_SOCKET - This socket will be used for listening for
 *                                   incoming connection requests.
 *          WSK_FLAG_CONNECTION_SOCKET - This socket will be for connecting
 *                                       to a remote party.
 *          WSK_FLAG_DATAGRAM_SOCKET - This socket will be used for sending and
 *                                     receiving datagrams.
 *          WSK_FLAG_BASIC_SOCKET - This socket will be used for basic control
 *                                  operations.
 *  SocketContext - Context value to pass in event callbacks
 *  Dispatch - pointer to a constant structure that contains pointers to
 *            callback routines. OPTIONAL if client won't be enabling callbacks.
 *            Client must provide the right callback table based on socket type:
 *            WSK_CLIENT_LISTEN_DISPATCH for WSK_FLAG_LISTEN_SOCKET,
 *            WSK_CLIENT_CONNECTION_DISPATCH for WSK_FLAG_CONNECTION_SOCKET,
 *            WSK_CLIENT_DATAGRAM_DISPATCH for WSK_FLAG_DATAGRAM_SOCKET,
 *            WSK_CLIENT_STREAM_DISPATCH for WSK_FLAG_STREAM_SOCKET,
 *            NULL for WSK_FLAG_BASIC_SOCKET.
 *  OwningProcess - The process to retrieve the security context from. If this
 *                  is set to NULL then the current process is assumed. This is
 *                  used for implementing transport address security during bind.
 *  OwningThread  - The thread to retrieve the security context from. This is
 *                  useful only if an impersonation token is in effect and used
 *                  for implementing transport address security during bind.
 *  SecurityDescriptor - Optional security descriptor to protect the transport
 *                       address that this socket will be bound to. Only the
 *                       security descriptors obtained from the NT object
 *                       manager's security descriptor cache can be specified.
 *  Irp - IRP for async completion of the request
 *
 * Returns:
 *
 *  If the request is completed succesfully, the Irp.IoStatus.Information
 *  field will be holding a pointer to the new socket (PWSK_SOCKET)
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
_At_(Irp->IoStatus.Information, __drv_allocatesMem(Mem))
NTSTATUS
(WSKAPI * PFN_WSK_SOCKET_CONNECT) (
    _In_ PWSK_CLIENT                               Client,
    _In_ USHORT                                    SocketType,
    _In_ ULONG                                     Protocol,
    _In_ PSOCKADDR                                 LocalAddress,
    _In_ PSOCKADDR                                 RemoteAddress,
    _Reserved_ ULONG                               Flags,
    _In_opt_ PVOID                                 SocketContext,
    _In_opt_ CONST WSK_CLIENT_CONNECTION_DISPATCH *Dispatch,
    _In_opt_ PEPROCESS                             OwningProcess,
    _In_opt_ PETHREAD                              OwningThread,
    _In_opt_ PSECURITY_DESCRIPTOR                  SecurityDescriptor,
    _Inout_ PIRP                                   Irp
    );
/*
 * Creates, binds, and connects a socket object.
 *
 * Parameters:
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  SocketType - socket type, e.g. SOCK_STREAM
 *  Protocol - protocol, e.g. IPPROTO_TCP
 *  LocalAddress - Local address to bind the socket to.
 *  RemoteAddress - Remote address to connect to.
 *  Flags - Reserved. (Must be 0)
 *  SocketContext - Context value to pass in event callbacks
 *  Dispatch - pointer to a constant structure that contains pointers to
 *     callback routines. OPTIONAL if client won't be enabling callbacks.
 *  OwningProcess - The process to retrieve the security context from. If this
 *                  is set to NULL then the current process is assumed. This is
 *                  used for implementing transport address security during bind.
 *  OwningThread  - The thread to retrieve the security context from. This is
 *                  useful only if an impersonation token is in effect and used
 *                  for implementing transport address security during bind.
 *  SecurityDescriptor - Optional security descriptor to protect the transport
 *                       address that this socket will be bound to. Only the
 *                       security descriptors obtained from the NT object
 *                       manager's security descriptor cache can be specified.
 *  Irp - IRP for async completion of the request
 *
 * Returns:
 *
 *  If the request is completed succesfully, the Irp.IoStatus.Information
 *  field will be holding a pointer to the new socket (PWSK_SOCKET)
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

//
// Client Level Control Codes
//

#define WSK_TRANSPORT_LIST_QUERY 2
#define WSK_TRANSPORT_LIST_CHANGE 3
#define WSK_CACHE_SD 4
#define WSK_RELEASE_SD 5
#define WSK_TDI_DEVICENAME_MAPPING 6
#define WSK_SET_STATIC_EVENT_CALLBACKS 7
#define WSK_TDI_BEHAVIOR 8

//
// Structures used with WSK_TDI_DEVICENAME_MAPPING control request
//

typedef struct _WSK_TDI_MAP {
    USHORT         SocketType;
    ADDRESS_FAMILY AddressFamily;
    ULONG          Protocol;
    PCWSTR         TdiDeviceName;
} WSK_TDI_MAP, *PWSK_TDI_MAP;

typedef struct _WSK_TDI_MAP_INFO {
    CONST ULONG ElementCount;
    _Field_size_(ElementCount) CONST WSK_TDI_MAP *Map;
} WSK_TDI_MAP_INFO, *PWSK_TDI_MAP_INFO;

//
// Flag used with WSK_TDI_BEHAVIOR control request
//
#define WSK_TDI_BEHAVIOR_BYPASS_TDI 0x00000001

typedef
NTSTATUS
(WSKAPI * PFN_WSK_CONTROL_CLIENT) (
    _In_ PWSK_CLIENT                    Client,
    _In_ ULONG                          ControlCode,
    _In_ SIZE_T                         InputSize,
    _In_reads_bytes_opt_(InputSize) PVOID    InputBuffer,
    _In_ SIZE_T                         OutputSize,
    _Out_writes_bytes_opt_(OutputSize) PVOID  OutputBuffer,
    _Out_opt_ SIZE_T                   *OutputSizeReturned,
    _Inout_opt_ PIRP                    Irp
    );
/*
 * Issues control request to WSK subsystem, e.g., registration for protocol
 * change notifications, etc.
 *
 * Parameters:
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  ControlCode - request code. currently defined codes are:
 *               WSK_TRANSPORT_LIST_QUERY - Retrieves the array of transports
 *               into the OutputBuffer. InputSize and InputBuffer parameters
 *               are ignored. Irp must be NULL and pOutputSize must be Non-NULL.
 *               WSK_TRANSPORT_LIST_CHANGE - Notifies the client when a
 *               transport is added or removed. InputSize/InputBuffer,
 *               OutputSize/OutputBuffer, and pOutputSize parameters are
 *               ignored. Irp must be specified.
 *  InputSize - size of the input data residing in InputBuffer
 *  InputBuffer - buffer that holds input data
 *  OutputSize - size of the OutputBuffer
 *  OutputBuffer - buffer that will hold output data
 *  OutputSizeReturned - address of a variable that will contain the actual size
 *                of data copied into the OutputBuffer. This parameter is
 *                ignored if the Irp parameter is specified.
 *  Irp - IRP for the asynchronous completion of the request. Upon completion,
 *        Irp->Iostatus.Information will hold the actual size of data copied
 *        into the OutputBuffer.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later (Irp was specified.)
 *  FAILURES - request failed
 */

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef
_At_(*Result, __drv_allocatesMem(Mem))
NTSTATUS
(WSKAPI * PFN_WSK_GET_ADDRESS_INFO) (
    _In_ PWSK_CLIENT          Client,
    _In_opt_ PUNICODE_STRING  NodeName,
    _In_opt_ PUNICODE_STRING  ServiceName,
    _In_opt_ ULONG            NameSpace,
    _In_opt_ GUID            *Provider,
    _In_opt_ PADDRINFOEXW     Hints,
    _Outptr_ PADDRINFOEXW *Result,
    _In_opt_ PEPROCESS        OwningProcess,
    _In_opt_ PETHREAD         OwningThread,
    _Inout_ PIRP              Irp
    );
/*
 * Provides protocol independent translation from host name to address.
 *
 * Parameters:
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  NodeName - Pointer to a UNICODE_STRING that contains a host (node) name. The
 *          host name must be a NULL-terminated unicode string. Either NodeName or
 *          ServiceName must point to a non-emptry string.
 *  ServiceName - Pointer to a UNICODE_STRING that contains either a service name
 *          or port number represented as a string. The service name or port number
 *          must be a NULL-terminated unicode string. Either NodeName or
 *          ServiceName must point to a non-emptry string.
 *  NameSpace - a namespace identifier that determines which namespace providers
 *          are queried. Passing a specific namespace identifier will result in
 *          only namespace providers that support the specified namepsace being
 *          queried.
 *  Provider - Pointer to a GUID of a specific namespace provider to query. Passing
 *          the GUID of specific namespace provider will result in only the specified
 *          namespace provider being queried.
 *  Hints - Pointer to an ADDRINFOEXW structure that provides hints about the type
 *          of socket the caller supports.
 *  Result - Pointer to a linked list of one or more ADDRINFOEXW structures that
 *          contains response information about the host. The caller must call
 *          WskFreeAddressInfo to free it.
 *  OwningProcess - The process to retrieve the security context from. If this is
 *          set to NULL then the current process is assumed.
 *  OwningThread  - The thread to retrieve the security context from. This is
 *          valid only if an impersonation token is in effect. This can be NULL
 *          only if the OwningProcess is NULL too.
 *  Irp - IRP for async completion of the request. Upon completion,
 *          Irp->Iostatus.Information will hold the returned status code.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later (Irp was specified.)
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_GET_NAME_INFO) (
    _In_ PWSK_CLIENT          Client,
    _In_ PSOCKADDR            SockAddr,
    _In_ ULONG                SockAddrLength,
    _Out_opt_ PUNICODE_STRING NodeName,
    _Out_opt_ PUNICODE_STRING ServiceName,
    _In_ ULONG                Flags,
    _In_opt_ PEPROCESS        OwningProcess,
    _In_opt_ PETHREAD         OwningThread,
    _Inout_ PIRP              Irp
    );
/*
 * Provides protocol independent translation from address to host name.
 *
 * Parameters:
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  SockAddr - Pointer to a socket address structure containing the IP address
 *          and port number of the socket.
 *  SockAddrLength - The length, in bytes, of the structure pointed to by the
 *          SockAddr parameter. The size should not exceed size of
 *          SOCKADDR_STORAGE.
 *  NodeName - Pointer to a UNICODE_STRING to hold the host name. On success,
 *          the Unicode host name is written into the buffer as a Fully Qualified
 *          Domain Name (FQDN) by default. The caller must provide a buffer large
 *          enough to hold the Unicode host name, including the terminating NULL
 *          character. If the NodeBuffer parameter is NULL, this indicates the
 *          caller does not want to receive a host name string. Either NodeBuffer
 *          or ServiceBuffer MUST be not NULL.
 *  ServiceName - Pointer to a UNICODE_STRING to hold the service name. On success,
 *          a Unicode string representing the service name associated with the port
 *          number is written into the buffer. The caller must provide a buffer large
 *          enough to hold the Unicode host name, including the terminating NULL
 *          character. If the ServiceBuffer parameter is NULL, this indicates the
 *          caller does not want to receive a service name string. Either NodeBuffer
 *          or ServiceBuffer MUST be not NULL.
 *  Flags - A value used to customize processing of the function.
 *  OwningProcess - The process to retrieve the security context from. If this is
 *          set to NULL then the current process is assumed.
 *  OwningThread  - The thread to retrieve the security context from. This is
 *          valid only if an impersonation token is in effect. This can be NULL
 *          only if the OwningProcess is NULL too.
 *  Irp - IRP for async completion of the request. Upon completion,
 *          Irp->Iostatus.Information will hold the returned status code.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later (Irp was specified.)
 *  FAILURES - request failed
 */

typedef
_At_(AddrInfo, __drv_freesMem(Mem))
VOID
(WSKAPI * PFN_WSK_FREE_ADDRESS_INFO) (
    _In_ PWSK_CLIENT  Client,
    _In_ PADDRINFOEXW AddrInfo
    );
/*
 * Free ADDRINFOEXW returned by WskGetAddressInfo to WSK subsystem.
 *
 * Parameters:
 *  Client - Pointer to the Client object returned by WskCaptureProviderNPI
 *  AddrInfo - ADDRINFOEXW structure returned by WskGetAddressInfo.
 *
 * Returns:
 *
 *  None.
 *
 */

#endif // if (NTDDI_VERSION >= NTDDI_WIN7)

typedef
NTSTATUS
(WSKAPI * PFN_WSK_BIND) (
    _In_ PWSK_SOCKET Socket,
    _In_ PSOCKADDR   LocalAddress,
    _Reserved_ ULONG Flags,
    _Inout_ PIRP     Irp
    );
/*
 * Bind local (unicast or multicast) tranport address to a socket
 *
 * Parameters:
 *  Socket - socket object to bind address to
 *  LocalAddress - transport address specification
 *  Flags  - Reserved. (Must be 0)
 *  Irp    - IRP for async completion
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_CONNECT) (
    _In_ PWSK_SOCKET Socket,
    _In_ PSOCKADDR   RemoteAddress,
    _Reserved_ ULONG Flags,
    _Inout_ PIRP     Irp
    );
/*
 * Connect to the specified address.
 *
 * Parameters:
 *  Socket - socket object to establish connection for
 *  RemoteAddress - transport address specification
 *  Flags - Reserved. (Must be 0)
 *  Irp - IRP for async completion
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_CONNECT_EX) (
    _In_ PWSK_SOCKET  Socket,
    _In_ PSOCKADDR    RemoteAddress,
    _In_opt_ PWSK_BUF Buffer,
    _Reserved_ ULONG  Flags,
    _Inout_ PIRP      Irp
    );
/*
 * Like PFN_WSK_CONNECT, but with an optional send buffer to be sent during or
 * after connection synchronization.
 *
 * Parameters:
 *  Socket - socket object to establish connection for
 *  RemoteAddress - transport address specification
 *  Buffer  - data to send
 *  Flags - Reserved. (Must be 0)
 *  Irp - IRP for async completion
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

//
// Option/IOCTL Levels
//

//
// Socket Level Options specific to WSK
// (Standard socket level options are defined in ws2def.h)
//

#define SO_WSK_SECURITY        (WSK_SO_BASE+1)
#define SO_WSK_EVENT_CALLBACK  (WSK_SO_BASE+2)

//
// Flags for enabling event callbacks via WskControlSocket call with
// SO_WSK_EVENT_CALLBACK option.
//

#define WSK_EVENT_RECEIVE_FROM     0x00000100 // Datagram sockets
#define WSK_EVENT_ACCEPT           0x00000200 // Listen sockets
#define WSK_EVENT_SEND_BACKLOG     0x00000010 // Connection and Listen sockets
#define WSK_EVENT_RECEIVE          0x00000040 // Connection and Listen sockets
#define WSK_EVENT_DISCONNECT       0x00000080 // Connection and Listen sockets

//
// Flag for disabling a given event callback via WskControlSocket call with
// SO_WSK_EVENT_CALLBACK option.
//
#define WSK_EVENT_DISABLE       0x80000000

//
// Structure used with SO_WSK_EVENT_CALLBACK to enable/disable event callbacks
//
typedef struct _WSK_EVENT_CALLBACK_CONTROL {
    PNPIID NpiId;
    ULONG  EventMask;
} WSK_EVENT_CALLBACK_CONTROL, *PWSK_EVENT_CALLBACK_CONTROL;

//
// IOCTL codes specific to WSK
//

#define SIO_WSK_SET_REMOTE_ADDRESS        _WSAIOW(IOC_WSK,0x1)
#define SIO_WSK_REGISTER_EXTENSION        _WSAIORW(IOC_WSK,0x2)
#define SIO_WSK_QUERY_IDEAL_SEND_BACKLOG  _WSAIOR(IOC_WSK,0x3)
#define SIO_WSK_QUERY_RECEIVE_BACKLOG     _WSAIOR(IOC_WSK,0x4)
#define SIO_WSK_QUERY_INSPECT_ID          _WSAIOR(IOC_WSK,0x5)
#define SIO_WSK_SET_SENDTO_ADDRESS        _WSAIOW(IOC_WSK,0x6)
#define SIO_WSK_SET_TCP_SILENT_MODE       _WSAIO(IOC_WSK,0x7)


//
// Input structure used with SIO_WSK_REGISTER_EXTENSION
//
typedef struct _WSK_EXTENSION_CONTROL_IN {
    PNPIID      NpiId;
    PVOID       ClientContext;
    CONST VOID* ClientDispatch;
} WSK_EXTENSION_CONTROL_IN, *PWSK_EXTENSION_CONTROL_IN;

//
// Output structure used with SIO_WSK_REGISTER_EXTENSION
//
typedef struct _WSK_EXTENSION_CONTROL_OUT {
    PVOID       ProviderContext;
    CONST VOID* ProviderDispatch;
} WSK_EXTENSION_CONTROL_OUT, *PWSK_EXTENSION_CONTROL_OUT;


typedef enum {
    WskSetOption, // set socket option
    WskGetOption, // get socket option
    WskIoctl,     // socket IOCTL
    WskControlMax
} WSK_CONTROL_SOCKET_TYPE, *PWSK_CONTROL_SOCKET_TYPE;

typedef
NTSTATUS
(WSKAPI * PFN_WSK_CONTROL_SOCKET) (
    _In_ PWSK_SOCKET                    Socket,
    _In_ WSK_CONTROL_SOCKET_TYPE        RequestType,
    _In_ ULONG                          ControlCode,
    _In_ ULONG                          Level,
    _In_ SIZE_T                         InputSize,
    _In_reads_bytes_opt_(InputSize) PVOID    InputBuffer,
    _In_ SIZE_T                         OutputSize,
    _Out_writes_bytes_opt_(OutputSize) PVOID  OutputBuffer,
    _Out_opt_ SIZE_T                   *OutputSizeReturned,
    _Inout_opt_ PIRP                    Irp
    );
/*
 *
 * Parameters:
 *  Socket - socket object
 *  RequestType - WskSetOption, WskGetOption, or WskIoctl
 *  ControlCode - what kind of the request
 *  Level - SOL_SOCKET for socket-level options,
 *          Protocol number for transport/network specific options
 *  InputSize - size of the input data residing in InputBuffer
 *  InputBuffer - buffer that holds input data
 *  OutputSize - size of the OutputBuffer
 *  OutputBuffer - buffer that will hold output data
 *  OutputSizeReturned - if Irp is NULL for a ControlCode than this parameter
 *                must be specified to store the number of bytes written
 *                into OutputBuffer upon in-line completion of the request.
 *  Irp - IRP for the asynchronous completion of the request. Upon completion,
 *        Irp->Iostatus.Information will hold the actual size of data copied
 *        into the OutputBuffer. This will be either a required parameter or
 *        ignored (and must be NULL), or optional based on the ControlCode.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  STATUS_REQUEST_NOT_ACCEPTED - Inline completion is not possible.
 *  PENDING - request will be completed later (Irp was specified.)
 *  FAILURES - request failed
 */

typedef
_At_(Socket, __drv_freesMem(Mem))
NTSTATUS
(WSKAPI * PFN_WSK_CLOSE_SOCKET) (
    _In_ PWSK_SOCKET Socket,
    _Inout_ PIRP     Irp
    );
/*
 * Invalidates socket object, initiates cancellation of
 * all outstanding requests. Once WskCloseSocket is invoked on a socket,
 * it is illegal to issue any further calls on that socket. It's also illegal
 * to call WskCloseSocket when there are one or more WSK calls on the socket
 * that have not yet returned control to the client.
 *
 * Parameters:
 *  Socket - Socket to be closed.
 *  Irp - notification method to trigger when operation completes.
 *     This is a required parameter.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
_At_(Irp->IoStatus.Information, __drv_allocatesMem(Mem))
NTSTATUS
(WSKAPI * PFN_WSK_ACCEPT) (
    _In_ PWSK_SOCKET                               ListenSocket,
    _Reserved_ ULONG                               Flags,
    _In_opt_ PVOID                                 AcceptSocketContext,
    _In_opt_ CONST WSK_CLIENT_CONNECTION_DISPATCH *AcceptSocketDispatch,
    _Out_opt_ PSOCKADDR                            LocalAddress,
    _Out_opt_ PSOCKADDR                            RemoteAddress,
    _Inout_ PIRP                                   Irp
    );
/*
 * Dequeue (pend if it is not there) and return incoming connection request
 * on the specified listening socket.
 *
 * Parameters:
 *  ListenSocket - listening socket to dequeue request from
 *  Flags - Reserved. (Must be 0)
 *  AcceptSocketContext - context to be associated with the accepted socket
 *                object. This is passed as a parameter in event callbacks.
 *  AcceptSocketDispatch - pointer to a constant structure containining pointers
 *         to callback routines. OPTIONAL if client won't be enabling callbacks.
 *  LocalAddress - Optional buffer to return the local address on which
 *              this connection request arrived. Useful if listening socket is
 *              bound to the wildcard address.
 *  RemoteAddress - Optional buffer to return the remote party's address.
 *  Irp - IRP for async completion of the request
 *
 * Returns:
 *
 *  If the request is completed succesfully, the Irp.IoStatus.Information
 *  field will be holding a pointer to the accepted socket (PWSK_SOCKET)
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_INSPECT_COMPLETE) (
    _In_ PWSK_SOCKET        ListenSocket,
    _In_ PWSK_INSPECT_ID    InspectID,
    _In_ WSK_INSPECT_ACTION Action,
    _Inout_ PIRP            Irp
    );
/*
 * Resume a previously pended inspect operation. This routine is valid only
 * for conditional-accept sockets.
 *
 * Parameters:
 *  ListenSocket - listening socket on which the inspect action was pended for
 *                 the connection request identified by the structure pointed
 *                 by pInspectID.
 *  InspectID - Pointer to the inspect ID structure that identified the pended
 *              connection request.
 *  Action - Only one of the following two actions is allowed:
 *
 *    WskInspectReject - Reject the connection request. WskAcceptEvent won't
 *                       be invoked. WskAbortEvent may be invoked if the
 *                       connection request is dropped during WskInspectComplete call.
 *
 *    WskInspectAccept - Proceed with regular acceptance. WskAcceptEvent
 *                       or WskAbortEvent may be invoked.
 *
 *  Irp    - IRP for asynchronous completion of this operation. This is a
 *           required parameter.
 *
 * Returns:
 *
 *  STATUS_SUCCESS - request succeeded
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_SEND_TO) (
    _In_ PWSK_SOCKET   Socket,
    _In_ PWSK_BUF      Buffer,
    _Reserved_ ULONG   Flags,
    _In_opt_ PSOCKADDR RemoteAddress,
    _In_ ULONG         ControlInfoLength,
    _In_reads_bytes_opt_(ControlInfoLength) PCMSGHDR ControlInfo,
    _Inout_ PIRP       Irp
    );
/*
 * Send to the specified remote entity or group from the specified
 * datagram socket. Socket must have been bound to a local address.
 *
 * Parameters:
 *  Socket  - datagram socket object to send from
 *  Buffer  - data to send
 *  Flags   - Reserved. (Must be 0)
 *  RemoteAddress - remote transport address
 *  ControlInfo - additional information to pass to the remote party.
 *                Might not be supported by all transports.
 *  ControlInfoLength - length of control info
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// WSK_BUF list structure used for sending multiple datagrams
// via a single call to WskSendMessages
//

typedef struct _WSK_BUF_LIST {
    struct _WSK_BUF_LIST *Next;
    WSK_BUF               Buffer;
} WSK_BUF_LIST, *PWSK_BUF_LIST;

typedef
NTSTATUS
(WSKAPI * PFN_WSK_SEND_MESSAGES) (
    _In_ PWSK_SOCKET   Socket,
    _In_ PWSK_BUF_LIST BufferList,
    _Reserved_ ULONG   Flags,
    _In_opt_ PSOCKADDR RemoteAddress,
    _In_ ULONG         ControlInfoLength,
    _In_reads_bytes_opt_(ControlInfoLength) PCMSGHDR ControlInfo,
    _Inout_ PIRP       Irp
    );
/*
 * Send multiple datagrams to the specified remote entity or group from
 * the specified datagram socket. Socket must have been bound to a local
 * address.
 *
 * Parameters:
 *  Socket  - datagram socket object to send from
 *  BufferList  - List of datagrams to send
 *  Flags   - Reserved. (Must be 0)
 *  RemoteAddress - remote transport address
 *  ControlInfo - additional information to pass to the remote party.
 *                Might not be supported by all transports.
 *  ControlInfoLength - length of control info
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

#endif // if (NTDDI_VERSION >= NTDDI_WIN8)

typedef
NTSTATUS
(WSKAPI * PFN_WSK_RECEIVE_FROM) (
    _In_ PWSK_SOCKET    Socket,
    _In_ PWSK_BUF       Buffer,
    _Reserved_ ULONG    Flags,
    _Out_opt_ PSOCKADDR RemoteAddress,
    _Inout_ PULONG      ControlLength,
    _Out_writes_bytes_opt_(*ControlLength) PCMSGHDR ControlInfo,
    _Out_opt_ PULONG    ControlFlags,
    _Inout_ PIRP        Irp
    );
/*
 * Dequeue (pend if it is not there) and return incoming data packet on the
 * specified datagram socket.
 *
 * Parameters:
 *  Socket  - socket to dequeue packet from
 *  Buffer  - place to put incoming data into
 *  Flags   - Reserved. (Must be 0)
 *  RemoteAddress - OUT parameter to return the transport address of the remote
 *     party that sent the packet
 *  ControlLength - Pointer to a ULONG that specifies the length of buffer
 *     pointed by ControlInfo on input, and the length of actual control data
 *     copied into ControlInfo buffer on output. If ControlLength is NULL
 *     then ControlInfo and ControlFlags parameters are ignored.
 *     If ControlLength is non-NULL then ControlLength should be pointing to
 *     valid memory until the request completes.
 *  ControlInfo - Pointer to a buffer into which WSK copies the control data
 *     received with the datagram. This parameter is ignored if
 *     ControlLength parameter is NULL. Otherwise, if ControlInfo should
 *     be pointing to valid memory until the request completes.
 *  ControlFlags - Pointer to a ULONG through which WSK may pass the following
 *     flags when the request completes: MSG_MCAST, MSG_BCAST, MSG_TRUNC,
 *     MSG_CTRUNC. This parameter is ignored if it is NULL.
 *     Otherwise, ControlFlags should be pointing to valid memory until the
 *     request completes.
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_GET_LOCAL_ADDRESS) (
    _In_ PWSK_SOCKET Socket,
    _Out_ PSOCKADDR  LocalAddress,
    _Inout_ PIRP     Irp
    );
/*
 * Retrieve the transport address associated with this Socket object. This is
 * useful for retrieveing the specific transport address chosen by the transport
 * when a socket is bound to the wildcard transport address by the client.
 *
 * Parameters:
 *  Socket - Socket whose local address is being queried
 *  LocalAddress - local transport address
 *  Irp - Irp for async completion.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_GET_REMOTE_ADDRESS) (
    _In_ PWSK_SOCKET Socket,
    _Out_ PSOCKADDR  RemoteAddress,
    _Inout_ PIRP     Irp
    );
/*
 * Retrieve the transport address of the peer to which the socket is connected.
 * Clients are always informed -- upon connection setup -- of the peer's
 * address, so this call is useful if a socket is being shared between multiple
 * components of the client application. If one component set up the connection
 * and another component wishes to determine the peer address, it can do so via
 * this call.
 *
 * Parameters:
 *  Socket - Socket whose local address is being queried
 *  RemoteAddress - remote party's transport address
 *  Irp - Irp for async completion.
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_RELEASE_DATA_INDICATION_LIST) (
    _In_ PWSK_SOCKET          Socket,
    _In_ PWSK_DATA_INDICATION DataIndication
    );
/*
 * Release data indications that were previously retained by returning
 * STATUS_PENDING from the receive event callback on connection-oriented
 * socket.
 *
 * Parameters:
 *  Socket - Socket on which buffers were received
 *  DataIndication  - list of data indication elements
 *
 * Returns:
 *  SUCCESS - request succeeded
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_RELEASE_DATAGRAM_INDICATION_LIST) (
    _In_ PWSK_SOCKET              Socket,
    _In_ PWSK_DATAGRAM_INDICATION DatagramIndication
    );
/*
 * Release datagram indications that were previously retained by returning
 * STATUS_PENDING from the receive-from event callback on datagram socket.
 *
 * Parameters:
 *  Socket - Socket on which datagrams was received
 *  DatagramIndication  - list of datagram indication elements
 *
 * Returns:
 *  SUCCESS - request succeeded
 *  FAILURES - request failed
 */


//
// Flag used to specifiy that the send request data should be sent as OOB data.
//
#define WSK_FLAG_OOB 0x00000001

//
// Flag used for denoting that the send request (along with any previously
// queued send requests, if any) should be sent out without further delay.
//
#define WSK_FLAG_NODELAY 0x00000002

typedef
NTSTATUS
(WSKAPI * PFN_WSK_SEND) (
    _In_ PWSK_SOCKET Socket,
    _In_ PWSK_BUF    Buffer,
    _In_ ULONG       Flags,
    _Inout_ PIRP     Irp
    );
/*
 * Send on the specified connected socket
 *
 * Parameters:
 *  Socket  - Socket to send on. Must have been connected or accepted
 *  Buffer  - data to send
 *  Flags   - WSK_FLAG_NODELAY: Must send without delaying
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

#define WSK_FLAG_WAITALL 0x00000002
#define WSK_FLAG_DRAIN   0x00000004

typedef
NTSTATUS
(WSKAPI * PFN_WSK_RECEIVE) (
    _In_ PWSK_SOCKET Socket,
    _In_ PWSK_BUF    Buffer,
    _In_ ULONG       Flags,
    _Inout_ PIRP     Irp
    );
/*
 * Dequeue (wait if it is not there) and return incoming data packet on the
 * specified connected socket
 *
 * Parameters:
 *  Socket  - Socket to dequeue data from. Must have been connected or accepted
 *  Buffer  - place to put incoming data into
 *  Flags   - WSK_FLAG_WAITALL: Wait until the receive buffer is filled up
 *            WSK_FLAG_DRAIN: Discard any existing and future incoming data
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

typedef
NTSTATUS
(WSKAPI * PFN_WSK_DISCONNECT) (
    _In_ PWSK_SOCKET  Socket,
    _In_opt_ PWSK_BUF Buffer,
    _In_ ULONG        Flags,
    _Inout_ PIRP      Irp
    );
/*
 * Send disconnect notification on specified connected socket
 * with optional data.
 *
 * Parameters:
 *  Socket - Socket to disconnect. Must have been connected or accepted.
 *  Buffer - Optional data to send along with graceful disconnect.
 *  Flags - If WSK_FLAG_ABORTIVE is specified then perform abortive disconnect.
 *          Otherwise, perform graceful disconnect.
 *  Irp - notification method to trigger when operation completes. (Required)
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
typedef
NTSTATUS
(WSKAPI * PFN_WSK_LISTEN) (
    _In_ PWSK_SOCKET Socket,
    _Inout_ PIRP     Irp
    );
/*
 * Listen for incoming connections at the address bound to.
 *
 * Parameters:
 *  Socket  - Socket to listen with. Must have been bound.
 *  Irp - notification method to trigger when operation completes
 *
 * Returns:
 *
 *  SUCCESS - request succeeded
 *  PENDING - request will be completed later
 *  FAILURES - request failed
 */
#endif // if (NTDDI_VERSION >= NTDDI_WIN10_RS2)



//
// WSK Dispatch tables.
// WSK interface consists of routines implemented by both
// the client and the provider. These routines operate
// at either client/provider level or socket level.
// Client/provider level function pointers are exchanged
// during WSK registration.
// Socket level function pointers are exchanged during
// socket creation.
//

//
// Client level callback table
//

typedef struct _WSK_CLIENT_DISPATCH {
    USHORT               Version;
    USHORT               Reserved;
    PFN_WSK_CLIENT_EVENT WskClientEvent;
} WSK_CLIENT_DISPATCH, *PWSK_CLIENT_DISPATCH;

//
// Socket level callbacks for listening sockets
//

typedef struct _WSK_CLIENT_LISTEN_DISPATCH {
    PFN_WSK_ACCEPT_EVENT        WskAcceptEvent;
    PFN_WSK_INSPECT_EVENT       WskInspectEvent;
    PFN_WSK_ABORT_EVENT         WskAbortEvent;
} WSK_CLIENT_LISTEN_DISPATCH, *PWSK_CLIENT_LISTEN_DISPATCH;

//
// Socket level callbacks for datagram sockets
//

typedef struct _WSK_CLIENT_DATAGRAM_DISPATCH {
    PFN_WSK_RECEIVE_FROM_EVENT  WskReceiveFromEvent;
} WSK_CLIENT_DATAGRAM_DISPATCH, *PWSK_CLIENT_DATAGRAM_DISPATCH;

//
// Socket level callbacks for connected sockets
//

typedef struct _WSK_CLIENT_CONNECTION_DISPATCH {
    PFN_WSK_RECEIVE_EVENT       WskReceiveEvent;
    PFN_WSK_DISCONNECT_EVENT    WskDisconnectEvent;
    PFN_WSK_SEND_BACKLOG_EVENT  WskSendBacklogEvent;
} WSK_CLIENT_CONNECTION_DISPATCH, *PWSK_CLIENT_CONNECTION_DISPATCH;

//
// Socket level callbacks for stream sockets
//

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
typedef struct _WSK_CLIENT_STREAM_DISPATCH {
    CONST WSK_CLIENT_LISTEN_DISPATCH* Listen;
    CONST WSK_CLIENT_CONNECTION_DISPATCH* Connect;
} WSK_CLIENT_STREAM_DISPATCH, *PWSK_CLIENT_STREAM_DISPATCH;
#endif // if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

//
// Provider level downcall table
//

typedef struct _WSK_PROVIDER_DISPATCH {
    USHORT                    Version;
    USHORT                    Reserved;
    PFN_WSK_SOCKET            WskSocket;
    PFN_WSK_SOCKET_CONNECT    WskSocketConnect;
    PFN_WSK_CONTROL_CLIENT    WskControlClient;
#if (NTDDI_VERSION >= NTDDI_WIN7)
    PFN_WSK_GET_ADDRESS_INFO  WskGetAddressInfo;
    PFN_WSK_FREE_ADDRESS_INFO WskFreeAddressInfo;
    PFN_WSK_GET_NAME_INFO     WskGetNameInfo;
#endif // if (NTDDI_VERSION >= NTDDI_WIN7)
} WSK_PROVIDER_DISPATCH, *PWSK_PROVIDER_DISPATCH;

//
// Basic socket downcalls
// These routines are supported for all socket types.
//

typedef struct _WSK_PROVIDER_BASIC_DISPATCH {
    PFN_WSK_CONTROL_SOCKET       WskControlSocket;
    PFN_WSK_CLOSE_SOCKET         WskCloseSocket;
} WSK_PROVIDER_BASIC_DISPATCH, *PWSK_PROVIDER_BASIC_DISPATCH;

//
// Listening socket downcalls
//

typedef struct _WSK_PROVIDER_LISTEN_DISPATCH {
#ifdef __cplusplus
    WSK_PROVIDER_BASIC_DISPATCH Basic;
#else
    WSK_PROVIDER_BASIC_DISPATCH;
#endif
    PFN_WSK_BIND                WskBind;
    PFN_WSK_ACCEPT              WskAccept;
    PFN_WSK_INSPECT_COMPLETE    WskInspectComplete;
    PFN_WSK_GET_LOCAL_ADDRESS   WskGetLocalAddress;
} WSK_PROVIDER_LISTEN_DISPATCH, *PWSK_PROVIDER_LISTEN_DISPATCH;

//
// Datagram socket downcalls
//

typedef struct _WSK_PROVIDER_DATAGRAM_DISPATCH {
#ifdef __cplusplus
    WSK_PROVIDER_BASIC_DISPATCH Basic;
#else
    WSK_PROVIDER_BASIC_DISPATCH;
#endif
    PFN_WSK_BIND                WskBind;
    PFN_WSK_SEND_TO             WskSendTo;
    PFN_WSK_RECEIVE_FROM        WskReceiveFrom;
    PFN_WSK_RELEASE_DATAGRAM_INDICATION_LIST WskRelease;
    PFN_WSK_GET_LOCAL_ADDRESS   WskGetLocalAddress;
#if (NTDDI_VERSION >= NTDDI_WIN8)
    PFN_WSK_SEND_MESSAGES       WskSendMessages;
#endif // if (NTDDI_VERSION >= NTDDI_WIN8)
} WSK_PROVIDER_DATAGRAM_DISPATCH, *PWSK_PROVIDER_DATAGRAM_DISPATCH;


//
// Connected socket downcalls
//

typedef struct _WSK_PROVIDER_CONNECTION_DISPATCH {
#ifdef __cplusplus
    WSK_PROVIDER_BASIC_DISPATCH Basic;
#else
    WSK_PROVIDER_BASIC_DISPATCH;
#endif
    PFN_WSK_BIND                WskBind;
    PFN_WSK_CONNECT             WskConnect;
    PFN_WSK_GET_LOCAL_ADDRESS   WskGetLocalAddress;
    PFN_WSK_GET_REMOTE_ADDRESS  WskGetRemoteAddress;
    PFN_WSK_SEND                WskSend;
    PFN_WSK_RECEIVE             WskReceive;
    PFN_WSK_DISCONNECT          WskDisconnect;
    PFN_WSK_RELEASE_DATA_INDICATION_LIST WskRelease;
    PFN_WSK_CONNECT_EX          WskConnectEx;
} WSK_PROVIDER_CONNECTION_DISPATCH, *PWSK_PROVIDER_CONNECTION_DISPATCH;

//
// Stream socket downcalls
//

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
typedef struct _WSK_PROVIDER_STREAM_DISPATCH {
#ifdef __cplusplus
    WSK_PROVIDER_BASIC_DISPATCH Basic;
#else
    WSK_PROVIDER_BASIC_DISPATCH;
#endif
    PFN_WSK_BIND                WskBind;
    PFN_WSK_ACCEPT              WskAccept;
    PFN_WSK_CONNECT             WskConnect;
    PFN_WSK_LISTEN              WskListen;
    PFN_WSK_SEND                WskSend;
    PFN_WSK_RECEIVE             WskReceive;
    PFN_WSK_DISCONNECT          WskDisconnect;
    PFN_WSK_RELEASE_DATA_INDICATION_LIST WskRelease;
    PFN_WSK_GET_LOCAL_ADDRESS   WskGetLocalAddress;
    PFN_WSK_GET_REMOTE_ADDRESS  WskGetRemoteAddress;
    PFN_WSK_CONNECT_EX          WskConnectEx;
} WSK_PROVIDER_STREAM_DISPATCH, *PWSK_PROVIDER_STREAM_DISPATCH;
#endif // if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

//
// Structures and routines used for WSK registration and deregistration
//

//
// WSK Client NPI
//
typedef struct _WSK_CLIENT_NPI {
    PVOID                        ClientContext;
    CONST WSK_CLIENT_DISPATCH   *Dispatch;
} WSK_CLIENT_NPI, *PWSK_CLIENT_NPI;

//
// WSK Provider NPI
//
typedef struct _WSK_PROVIDER_NPI {
    PWSK_CLIENT                  Client;
    CONST WSK_PROVIDER_DISPATCH *Dispatch;
} WSK_PROVIDER_NPI, *PWSK_PROVIDER_NPI;

//
// WSK Registration block that needs to be provided by the WSK client and
// initialized by the WSK subsystem via WskRegister. WSK client should not
// manipulate any of the fields of the registration block directly.
//
typedef struct _WSK_REGISTRATION {
    ULONGLONG  ReservedRegistrationState;
    PVOID      ReservedRegistrationContext;
    KSPIN_LOCK ReservedRegistrationLock;
} WSK_REGISTRATION, *PWSK_REGISTRATION;

_Must_inspect_result_
NTSTATUS
WskRegister(
    _In_ PWSK_CLIENT_NPI    WskClientNpi,
    _Out_ PWSK_REGISTRATION WskRegistration
    );
/*
 * Register as a WSK client. WSK clients may invoke this routine multiple times
 * with a seperate WskRegistation block for each call in order to have multiple
 * WSK registration instances. For each successful WskRegister call, there must
 * be exactly one corresponding WskDeregister call with the same WskRegistration
 * block that was passed to WskRegister.
 *
 * Required IRQL == PASSIVE_LEVEL
 *
 * Parameters:
 *  WskClientNpi - Pointer to the client NPI implemented by the WSK client.
 *  WskRegistration - Registration block used to identify this instance of
 *                    the WSK registration. This block of memory must be kept
 *                    allocated (not freed or gone out of scope) as long as
 *                    there are outstanding calls to the functions below.
 *
 * Returns:
 *
 *  STATUS_SUCCESS - request succeeded
 *  FAILURES - request failed
 */

#define WSK_NO_WAIT 0
#define WSK_INFINITE_WAIT 0xffffffff

_Must_inspect_result_
NTSTATUS
WskCaptureProviderNPI(
    _In_ PWSK_REGISTRATION  WskRegistration,
    _In_ ULONG              WaitTimeout,
    _Out_ PWSK_PROVIDER_NPI WskProviderNpi
    );
/*
 * Capture the provider NPI implemented by the WSK provider when the WSK
 * provider becomes available. This routine may be called multiple times.
 * For each call to WskCaptureProviderNPI that returns successfully, there must
 * be exactly one corresponding call to WskReleaseProviderNPI.
 * It's OK to call WskCaptureProviderNPI after WskDeregister is called as long
 * as the WskRegistration block is not freed or overwritten. After WskDeregister
 * is called, any further calls to WskCaptureProviderNPI will fail with
 * STATUS_DEVICE_NOT_READY, and any exisiting WskCaptureProviderNPI calls that
 * are blocked in other threads waiting for WSK provider to become available
 * will also return immediately with the STATUS_DEVICE_NOT_READY status code.
 *
 * Required IRQL == PASSIVE_LEVEL  if WaitTimeout != WSK_NO_WAIT
 *          IRQL <= DISPATCH_LEVEL if WaitTimeout == WSK_NO_WAIT
 *
 * Parameters:
 *  WskRegistration - Registration block initialized by WskRegister.
 *  WaitTimeout - Time in milliseconds for how long to wait for the WSK provider
 *                to become available.
 *                WSK_NO_WAIT : return immediately if provider not available
 *                WSK_INFINITE_WAIT : wait until provider becomes available
 * WskProviderNpi - Provider NPI returned by the WSK provider. WSK clients can
 *                  invoke functions in WSK_PROVIDER_DISPATCH until the provider
 *                  NPI is released via WskReleaseProviderNPI.
 * Returns:
 *
 *  STATUS_SUCCESS - request succeeded
 *  STATUS_DEVICE_NOT_READY - WSK provider was not available yet.
 *  STATUS_NOINTERFACE - Client's requested version is not supported.
 *  FAILURES - request failed
 */

VOID
WskReleaseProviderNPI(
    _In_ PWSK_REGISTRATION WskRegistration
    );
/*
 * Release the provider NPI instance that was captured via WskCaptureProviderNPI.
 * There must be exactly one call to WskReleaseProviderNPI for each call to
 * WskCaptureProviderNPI that returns successfully.
 *
 * Required IRQL <= DISPATCH_LEVEL
 *
 * Parameters:
 *  WskRegistration - Registration block initialized by WskRegister.
 *
 * Returns:
 *
 *  None.
 */

_Must_inspect_result_
NTSTATUS
WskQueryProviderCharacteristics(
    _In_ PWSK_REGISTRATION              WskRegistration,
    _Out_ PWSK_PROVIDER_CHARACTERISTICS WskProviderCharacteristics
    );
/*
 * Query the characterisitics of the WSK provider. This routine should be called
 * after WskCaptureProviderNPI returns STATUS_NOINTERFACE or STATUS_SUCCESS.
 * WSK clients may use this routine to find out the versions supported by the
 * WSK provider.
 *
 * Required IRQL <= DISPATCH_LEVEL
 *
 * Parameters:
 *  WskRegistration - Registration block initialized by WskRegister.
 * WskProviderCharacteristics - Provider characterisitics returned by the WSK
 *                              provider
 * Returns:
 *
 *  STATUS_SUCCESS - request succeeded
 *  STATUS_DEVICE_NOT_READY - WSK provider was not available yet.
 *  FAILURES - request failed
 */

VOID
WskDeregister(
    _In_ PWSK_REGISTRATION WskRegistration
    );
/*
 * Deregister as a WSK client. For each successful WskRegister call, there must
 * be exactly one corresponding WskDeregister call with the same WskRegistration
 * block that was passed to WskRegister.
 * WskDeregister will wait until all captured instances of the provider NPI are
 * released, any outstanding calls to functions in WSK_PROVIDER_DISPATCH have
 * returned, and all sockets are closed.
 *
 * Required IRQL == PASSIVE_LEVEL
 *
 * Parameters:
 *  WskRegistration - Registration block initialized by WskRegister.
 *
 * Returns:
 *
 *  None.
 */

#ifdef __cplusplus
}
#endif

#endif // _WSK_

