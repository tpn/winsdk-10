/*++

Copyright (c) 2016  Microsoft Corporation

Module Name:

    wskndk.h

Abstract:

    This module contains definitions and structures for
    exposing NDK (kernel-mode RDMA) API as extension from WSK.

Environment:

    Kernel-mode only.

--*/

#ifndef _WSKNDK_H_
#define _WSKNDK_H_

#if _MSC_VER > 1000
#pragma once
#endif

typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(WSKAPI *PFN_WSK_NDK_OPEN_ADAPTER)(
    _In_ PWSK_CLIENT Client,
    _In_ NDK_VERSION NdkVersion,
    _In_ NET_IFINDEX IfIndex,
    _Out_ NDK_ADAPTER **ppNdkAdapter
    );

typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(WSKAPI *PFN_WSK_NDK_CLOSE_ADAPTER)(
    _In_ PWSK_CLIENT Client,
    _In_ NDK_ADAPTER *pNdkAdapter
    );

typedef struct _WSK_PROVIDER_NDK_DISPATCH {
    PFN_WSK_NDK_OPEN_ADAPTER WskOpenNdkAdapter;
    PFN_WSK_NDK_CLOSE_ADAPTER WskCloseNdkAdapter;
} WSK_PROVIDER_NDK_DISPATCH, *PWSK_PROVIDER_NDK_DISPATCH;

#define WSKNDK_GET_WSK_PROVIDER_NDK_DISPATCH ((ULONG)'NDKD')

#endif // _WSKNDK_H_