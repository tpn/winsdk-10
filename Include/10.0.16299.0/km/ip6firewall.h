/*++

Copyright (c) 2004-2005  Microsoft Corporation

Module Name:

    ip6firewall.h

Abstract:

    This module contains definitions for the IPv6 firewall hook.

Environment:

    Kernel mode only.

--*/

#if (NTDDI_VERSION < NTDDI_LONGHORN) 

#ifndef _IP6FIREWALL_
#define _IP6FIREWALL_

#pragma once

#include <ipinfo.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Types used by the firewall hook.
//

typedef enum {
    DirectionTransmit,
    DirectionReceive,
    DirectionMax
} IPv6Direction;

typedef enum {
    ActionAccept,
    ActionDrop,
    ActionMax
} IPv6Action;

_Function_class_(IPv6FirewallHookProcType)
_IRQL_requires_max_(DISPATCH_LEVEL)
typedef 
IPv6Action
IPv6FirewallHookProcType (
    _In_ const IPv6Addr *SourceAddress,
    _In_ const IPv6Addr *DestinationAddress,
    _In_ uint PayloadLength,
    _In_ uchar HeaderType,
    _In_ const uchar *HeaderData,
    _In_ const void *PacketContext,
    _In_ uint DataLength,
    _In_ uint InterfaceIndex,
    _In_ IPv6Direction Direction,
    _In_ BOOLEAN IsLoopBack
    );

typedef IPv6FirewallHookProcType *IPv6FirewallHookProc;

typedef void
(*IPv6FirewallDeregistrationCompleteProc)(
    );

//
// Exported function declarations.
//
extern
_IRQL_requires_max_(DISPATCH_LEVEL)
_Success_(return==STATUS_SUCCESS)
NTSTATUS
IPv6EnableFirewallHook(
    _In_ IPv6FirewallHookProc FirewallHookFunction
    );

extern
_IRQL_requires_max_(DISPATCH_LEVEL)
void
IPv6DisableFirewallHook(
    _In_ IPv6FirewallDeregistrationCompleteProc CompletionRoutine
    );

extern
_IRQL_requires_max_(DISPATCH_LEVEL)
const uchar *
IPv6ObtainPacketData(
    _In_ const void *PacketContext,
    _In_ uint DataLength,
    _In_ uint Alignment
    );

extern 
_IRQL_requires_max_(DISPATCH_LEVEL)
IP_STATUS
IPv6GetBestRouteInfo(
    _In_ const IPv6Addr *Addr,
    _In_ ulong ScopeId,
    _In_ ulong Index,
    _Out_ IP6RouteEntry *Ire
    );
    
#ifdef __cplusplus
}
#endif

#endif // _IP6FIREWALL_

#endif //(NTDDI_VERSION < NTDDI_LONGHORN) 
