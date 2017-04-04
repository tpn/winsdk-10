/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    iointex.h

Abstract:

    This header exposes the new kernel APIs to connect and disconnect
    interrupts in a manner that makes it possible for drivers referencing
    these new APIs to run on downlevel systems.

--*/

#ifndef _IOINTEX_IOINTEX_H_
#define _IOINTEX_IOINTEX_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// Supply an overrideable library implementation of IoConnectInterruptEx.
// See DDK documentation for more details on this API.
//

#undef IoConnectInterruptEx
#define IoConnectInterruptEx WdmlibIoConnectInterruptEx

_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
WdmlibIoConnectInterruptEx (
    _Inout_ PIO_CONNECT_INTERRUPT_PARAMETERS Parameters
    );

//
// Supply an overrideable library implementation of IoDisconnectInterruptEx.
// See DDK documentation for more details on this API.
//

#undef IoDisconnectInterruptEx
#define IoDisconnectInterruptEx WdmlibIoDisconnectInterruptEx

_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
WdmlibIoDisconnectInterruptEx (
    _Inout_ PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters
    );

//
// Supply an overrideable library implementation of IoGetAffinityInterrupt.
// See DDK documentation for more details on this API.
//

#undef IoGetAffinityInterrupt
#define IoGetAffinityInterrupt WdmlibIoGetAffinityInterrupt

NTSTATUS
WdmlibIoGetAffinityInterrupt (
    _In_ PKINTERRUPT InterruptObject,
    _Out_ PGROUP_AFFINITY GroupAffinity
    );


#ifdef __cplusplus
} // extern "C"
#endif

#endif // !defined(_IOINTEX_IOINTEX_H_)
