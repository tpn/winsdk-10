/*++

Copyright (c) Microsoft Corporation

Module Name:

    ndisNDK.h

Abstract:

    NDIS definitions for NetworkDirect kernel-mode provider interface

Environment:

    Kernel  mode only.

--*/

#ifndef _NDISNDK_H_
#define _NDISNDK_H_

#if _MSC_VER > 1000
#pragma once
#endif

#if NDIS_SUPPORT_NDIS630

#include <ndkpi.h>

#define NETWORK_DIRECT_KEYWORD NDIS_STRING_CONST("*NetworkDirect")
#define NETWORK_DIRECT_GLOBAL_FLAGS_KEYWORD NDIS_STRING_CONST("*NetworkDirectGlobalFlags")

#define NETWORK_DIRECT_GLOBAL_FLAGS_ALLOW_REMOTE_IP_SUBNET 0x00000001

typedef struct _NDIS_OPEN_NDK_ADAPTER_PARAMETERS {
    NDK_VERSION Version;
    
#if (NDIS_SUPPORT_NDIS650)
    NDIS_NIC_SWITCH_ID SwitchId;
    NDIS_NIC_SWITCH_VPORT_ID VPortId;
#endif // NDIS_SUPPORT_NDIS650

} NDIS_OPEN_NDK_ADAPTER_PARAMETERS, *PNDIS_OPEN_NDK_ADAPTER_PARAMETERS;

typedef
NDIS_STATUS
(*OPEN_NDK_ADAPTER_HANDLER)(
    _In_ NDIS_HANDLE MiniportAdapterContext,
    _In_ PNDIS_OPEN_NDK_ADAPTER_PARAMETERS Parameters,
    _Outptr_ NDK_ADAPTER **ppNdkAdapter
    );

typedef
VOID
(*CLOSE_NDK_ADAPTER_HANDLER)(
    _In_ NDIS_HANDLE MiniportAdapterContext,
    _In_ NDK_ADAPTER *pNdkAdapter
    );

#define NDIS_NDK_PROVIDER_CHARACTERISTICS_REVISION_1 1

typedef struct _NDIS_NDK_PROVIDER_CHARACTERISTICS
{
    //
    // Header.Type = NDIS_OBJECT_TYPE_NDK_PROVIDER_CHARACTERISTICS
    // Header.Revision = NDIS_NDK_PROVIDER_CHARACTERISTICS_REVISION_1;
    // Header.Size = NDIS_SIZEOF_NDK_PROVIDER_CHARACTERISTICS_REVISION_1;
    //
    NDIS_OBJECT_HEADER Header;
    ULONG Flags; // reserved, must be set to 0
    OPEN_NDK_ADAPTER_HANDLER OpenNDKAdapterHandler;
    CLOSE_NDK_ADAPTER_HANDLER CloseNDKAdapterHandler;
} NDIS_NDK_PROVIDER_CHARACTERISTICS, *PNDIS_NDK_PROVIDER_CHARACTERISTICS;

#define NDIS_SIZEOF_NDK_PROVIDER_CHARACTERISTICS_REVISION_1    \
        RTL_SIZEOF_THROUGH_FIELD(NDIS_NDK_PROVIDER_CHARACTERISTICS, CloseNDKAdapterHandler)


#endif // NDIS_SUPPORT_NDIS630

#endif // _NDISNDK_H_


