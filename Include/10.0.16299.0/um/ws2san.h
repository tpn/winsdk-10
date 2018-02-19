/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ws2san.h

Abstract:

    This module contains the Microsoft-specific extensions to the Windows
    Sockets SPI for WinSock Direct (SAN) support.

Revision History:

--*/

#ifndef _WS2SAN_H_
#define _WS2SAN_H_

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Option for getting maximum RDMA transfer size supported by provider
 */
#define SO_MAX_RDMA_SIZE                 0x700D

/*
 * Option for getting minimum RDMA transfer size feasible (performance-wise)
 * for the provider
 */
#define SO_RDMA_THRESHOLD_SIZE           0x700E

/*
 * The upcall table. This structure is passed by value to the service
 * provider's WSPStartup() entrypoint.
 */

typedef struct _WSPUPCALLTABLEEX {

    LPWPUCLOSEEVENT               lpWPUCloseEvent;
    LPWPUCLOSESOCKETHANDLE        lpWPUCloseSocketHandle;
    LPWPUCREATEEVENT              lpWPUCreateEvent;
    LPWPUCREATESOCKETHANDLE       lpWPUCreateSocketHandle;
    LPWPUFDISSET                  lpWPUFDIsSet;
    LPWPUGETPROVIDERPATH          lpWPUGetProviderPath;
    LPWPUMODIFYIFSHANDLE          lpWPUModifyIFSHandle;
    LPWPUPOSTMESSAGE              lpWPUPostMessage;
    LPWPUQUERYBLOCKINGCALLBACK    lpWPUQueryBlockingCallback;
    LPWPUQUERYSOCKETHANDLECONTEXT lpWPUQuerySocketHandleContext;
    LPWPUQUEUEAPC                 lpWPUQueueApc;
    LPWPURESETEVENT               lpWPUResetEvent;
    LPWPUSETEVENT                 lpWPUSetEvent;
    LPWPUOPENCURRENTTHREAD        lpWPUOpenCurrentThread;
    LPWPUCLOSETHREAD              lpWPUCloseThread;
    LPWPUCOMPLETEOVERLAPPEDREQUEST lpWPUCompleteOverlappedRequest;

} WSPUPCALLTABLEEX, FAR * LPWSPUPCALLTABLEEX;

/*
 *  An extended WSABUF, that includes a registration handle
 */

typedef struct _WSABUFEX {
    u_long      len;     /* the length of the buffer */
    _Field_size_bytes_(len) char FAR *  buf;     /* the pointer to the buffer */
    HANDLE  handle; /*  The handle returned by WSPRegisterMemory */
} WSABUFEX, FAR * LPWSABUFEX;


/*
 *  WinSock 2 SPI socket function prototypes
 */

_Must_inspect_result_
int
WSPAPI
WSPStartupEx(
    _In_ WORD wVersionRequested,
    _Out_ LPWSPDATA lpWSPData,
    _In_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _In_ LPWSPUPCALLTABLEEX lpUpcallTable,
    _Out_ LPWSPPROC_TABLE lpProcTable
    );

typedef
_Must_inspect_result_
int
(WSPAPI * LPWSPSTARTUPEX)(
    _In_ WORD wVersionRequested,
    _Out_ LPWSPDATA lpWSPData,
    _In_ LPWSAPROTOCOL_INFOW lpProtocolInfo,
    _In_ LPWSPUPCALLTABLEEX lpUpcallTable,
    _Out_ LPWSPPROC_TABLE lpProcTable
    );

#define WSAID_REGISTERMEMORY \
        {0xC0B422F5,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#define WSAID_DEREGISTERMEMORY \
        {0xC0B422F6,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#define WSAID_REGISTERRDMAMEMORY \
        {0xC0B422F7,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#define WSAID_DEREGISTERRDMAMEMORY \
        {0xC0B422F8,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#define WSAID_RDMAWRITE \
        {0xC0B422F9,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#define WSAID_RDMAREAD \
        {0xC0B422FA,0xF58C,0x11d1,{0xAD,0x6C,0x00,0xC0,0x4F,0xA3,0x4A,0x2D}}

#if(_WIN32_WINNT >= 0x0501)
#define WSAID_MEMORYREGISTRATIONCACHECALLBACK \
        {0xE5DA4AF8,0xD824,0x48CD,{0xA7,0x99,0x63,0x37,0xA9,0x8E,0xD2,0xAF}}
#endif //(_WIN32_WINNT >= 0x0501)

#define MEM_READ        1
#define MEM_WRITE       2
#define MEM_READWRITE   3


_Must_inspect_result_
HANDLE WSPAPI
WSPRegisterMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_ LPINT lpErrno
    );

int WSPAPI
WSPDeregisterMemory(
    _In_ SOCKET s,
    _In_ HANDLE handle,
    _Out_ LPINT lpErrno
    );

_Must_inspect_result_
int WSPAPI
WSPRegisterRdmaMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_(*lpdwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _Inout_ LPDWORD lpdwDescriptorLength,
    _Out_ LPINT lpErrno
    );

int WSPAPI
WSPDeregisterRdmaMemory(
    _In_ SOCKET s,
    _In_reads_bytes_(dwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _In_ DWORD dwDescriptorLength,
    _Out_ LPINT lpErrno
    );

int WSPAPI
WSPRdmaWrite(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesWritten,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );

int WSPAPI
WSPRdmaRead(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesRead,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );

#if(_WIN32_WINNT >= 0x0501)
_Must_inspect_result_
int WSPAPI
WSPMemoryRegistrationCacheCallback(
    _In_reads_bytes_(Size) LPVOID lpvAddress,                             
    _In_ SIZE_T Size,                               
    _Out_ LPINT lpErrno                
    );
#endif //(_WIN32_WINNT >= 0x0501)

/*
 * "QueryInterface" versions of the above APIs.
 */

typedef
_Must_inspect_result_
HANDLE
(WSPAPI * LPFN_WSPREGISTERMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_ LPINT lpErrno
    );

typedef
int
(WSPAPI * LPFN_WSPDEREGISTERMEMORY)(
    _In_ SOCKET s,
    _In_ HANDLE handle,
    _Out_ LPINT lpErrno
    );

typedef
_Must_inspect_result_
BOOL
(WSPAPI * LPFN_WSPREGISTERRDMAMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwBufferLength) PVOID lpBuffer,
    _In_ DWORD dwBufferLength,
    _In_ DWORD dwFlags,
    _Out_writes_bytes_(*lpdwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _Inout_ LPDWORD lpdwDescriptorLength,
    _Out_ LPINT lpErrno
    );

typedef
int
(WSPAPI * LPFN_WSPDEREGISTERRDMAMEMORY)(
    _In_ SOCKET s,
    _In_reads_bytes_(dwDescriptorLength) LPVOID lpRdmaBufferDescriptor,
    _In_ DWORD dwDescriptorLength,
    _Out_ LPINT lpErrno
    );

typedef
int
(WSPAPI * LPFN_WSPRDMAWRITE)(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesWritten,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );

typedef
int
(WSPAPI * LPFN_WSPRDMAREAD)(
    _In_ SOCKET s,
    _In_reads_(dwBufferCount) LPWSABUFEX lpBuffers,
    _In_ DWORD dwBufferCount,
    _In_reads_bytes_(dwTargetDescriptorLength) LPVOID lpTargetBufferDescriptor,
    _In_ DWORD dwTargetDescriptorLength,
    _In_ DWORD dwTargetBufferOffset,
    _Out_ LPDWORD lpdwNumberOfBytesRead,
    _In_ DWORD dwFlags,
    _In_opt_ LPWSAOVERLAPPED lpOverlapped,
    _In_opt_ LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine,
    _In_ LPWSATHREADID lpThreadId,
    _Out_ LPINT lpErrno
    );

#if(_WIN32_WINNT >= 0x0501)
typedef
_Must_inspect_result_
int 
(WSPAPI * LPFN_WSPMEMORYREGISTRATIONCACHECALLBACK)(
    _In_reads_bytes_(Size) LPVOID lpvAddress,                             
    _In_ SIZE_T Size,                               
    _Out_ LPINT lpErrno                
    );
#endif //(_WIN32_WINNT >= 0x0501)

#ifdef __cplusplus
}
#endif

#endif // _WS2SAN_H_
