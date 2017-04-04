/* ++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    TraceLoggingProvider.h

Abstract:

    Event Provider API for C/C++.

Environment:

    User mode or kernel mode.

--*/

/*
Quick start:

#include <windows.h> // or <wdm.h> for kernel-mode.
#include <TraceLoggingProvider.h>

TRACELOGGING_DEFINE_PROVIDER( // defines g_hProvider
    g_hProvider,  // Name of the provider variable
    "MyProvider", // Human-readable name of the provider
    (0xb3864c38, 0x4273, 0x58c5, 0x54, 0x5b, 0x8b, 0x36, 0x08, 0x34, 0x34, 0x71)); // Provider GUID

int main(int argc, char* argv[]) // or DriverEntry for kernel-mode.
{
    TraceLoggingRegister(g_hProvider);
    TraceLoggingWrite(
        g_hProvider,
        "MyEvent1",
        TraceLoggingString(argv[0], "arg0"), // field name is "arg0"
        TraceLoggingInt32(argc)); // field name is implicitly "argc"
    TraceLoggingUnregister(g_hProvider);
    return 0;
}

Compatibility note:

Depending on its configuration, TraceLoggingProvider.h can be
backwards-compatible (compatible with Vista or later), or can be optimized for
later OS versions. TraceLoggingProvider.h uses WINVER (user mode) and
NTDDI_VERSION (kernel mode) to determine whether it should be compatible with
earlier OS versions or be optimized for newer OS versions.

For user-mode, if you include <windows.h> before setting WINVER, <windows.h>
will set WINVER to the SDK's default target OS version. If WINVER is set to
0x602 or higher, TraceLoggingProvider.h will optimize its behavior for Windows
8 and your program will not run on earlier versions of Windows. If you need
your program to run on Vista or Windows 7, be sure to set WINVER to the
appropriate value before including <windows.h>.

Similarly, if you include <wdm.h> before setting NTDDI_VERSION, <wdm.h> will
set NTDDI_VERSION to a default value. If NTDDI_VERSION is set to 0x06040000
or higher, TraceLoggingProvider.h will optimize its behavior for Windows 10
and your driver will not work on earlier versions of Windows.

For additional details, see TLG_HAVE_EVENT_SET_INFORMATION.
*/

#ifndef _TRACELOGGINGPROVIDER_
#define _TRACELOGGINGPROVIDER_

#include <evntprov.h>

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// Enum declaration may be missing from older evntprov.h:
enum _EVENT_INFO_CLASS
#if !defined(__INTELLISENSE__) && defined(__cplusplus) && (_MSC_VER >= 1700)
    : int // base type for enum forward declaration
#endif
    ;

#ifdef _ETW_KM_
typedef PETWENABLECALLBACK     TLG_PENABLECALLBACK;
typedef NTSTATUS               TLG_STATUS;
#else // _ETW_KM_
typedef PENABLECALLBACK        TLG_PENABLECALLBACK;
typedef HRESULT                TLG_STATUS;
#endif // _ETW_KM_

/*
Determine whether TraceLoggingWriteEx should be defined.
- If TLG_EVENT_WRITE_EX is defined, TraceLoggingWriteEx will be defined.
- If target is kernel-mode with NTDDI_VERSION >= 0x06010000, TraceLoggingWriteEx will be defined.
- If target is user-mode with WINVER >= 0x0601, TraceLoggingWriteEx will be defined.
- Otherwise, TraceLoggingWriteEx will not be defined by this header.
*/
#ifdef TLG_EVENT_WRITE_EX
#define _TLG_ENABLE_TraceLoggingWriteEx 1
#elif defined(_ETW_KM_)
#define _TLG_ENABLE_TraceLoggingWriteEx NTDDI_VERSION >= 0x06010000
#else
#define _TLG_ENABLE_TraceLoggingWriteEx WINVER >= 0x0601
#endif

#pragma region Public interface

/*
Typedef TraceLoggingHProvider:
The type of a provider handle.
To define a provider handle, use TRACELOGGING_DEFINE_PROVIDER.
To forward-declare a provider handle, use TRACELOGGING_DECLARE_PROVIDER.

Notes:

The scope of a TraceLogging provider handle is strictly limited to the module
(the DLL or EXE) in which it is defined. The provider handle from one module
must not be shared with code in other modules. In other words, for any handle
g_hProvider, all instances of TraceLoggingWrite(g_hProvider, ...) must reside
in the same EXE or DLL as the TRACELOGGING_DEFINE_PROVIDER(g_hProvider, ...)
definition. If this rule is not followed, the behavior of TraceLoggingWrite is
unpredictable, especially regarding the way it handles event IDs (e.g. event
ID collisions are likely).

The TraceLoggingHProvider type should almost never need to be used directly.
In most cases, the provider handle should be a global variable that is defined
and declared using TRACELOGGING macros. In most cases, all uses of the
provider handle will refer directly to this global variable (no copies of the
global variable are made), so user-defined variables of type
TraceLoggingHProvider should usually be unnecessary. (Using the global variable
directly also results in the most efficient code and automatically avoids the
scoping problem described above.)
*/
typedef struct _TlgProvider_t const* TraceLoggingHProvider;

/*
Macro TRACELOGGING_DEFINE_PROVIDER(hProviderVariableName, "ProviderName", providerId, [option]):
Invoke this macro to allocate static storage for a provider and define a
TraceLoggingHProvider variable that references the storage. The provider name
must be a string literal (not a variable) and must not contain any '\0'
characters. The handle and copies of the handle are valid as long as the
original handle is in scope.

An invocation of

    TRACELOGGING_DEFINE_PROVIDER(
        g_hMyProvider,
        "MyProvider",
        (0xb3864c38, 0x4273, 0x58c5, 0x54, 0x5b, 0x8b, 0x36, 0x08, 0x34, 0x34, 0x71));

can be thought of as expanding to something like this:

    static struct _TlgProvider_t uniqueVarName = { ... }; // stores provider state
    extern const TraceLoggingHProvider g_hMyProvider = &uniqueVarName; // defines a handle

The providerId specifies the ETW provider GUID. The providerId parameter must
be a parenthesized list of 11 integers e.g. (n1, n2, n3, ... n11).

After the providerId GUID, you may optionally specify a TraceLoggingOption...
macro to configure your provider, e.g.

    TRACELOGGING_DEFINE_PROVIDER(g_hMyProvider, "MyProvider",
        (0xb3864c38, 0x4273, 0x58c5, 0x54, 0x5b, 0x8b, 0x36, 0x08, 0x34, 0x34, 0x71),
        TraceLoggingOptionGroup(0xfaaf2f61, 0x9b26, 0x4591, 0x9b, 0xb1, 0xb9, 0xb8, 0xba, 0xe2, 0xd3, 0x4c));

Note that the provider handle is created in the "unregistered" state. Calls to
TraceLoggingWrite on unregistered handles are no-ops. Call
TraceLoggingRegister to register the handle.

For kernel-mode, be aware that while provider metadata is explicitly stored
into TLG_METADATA_SEGMENT, the uniqueVarName and g_hMyProvider variables are
not explicitly assigned a segment and will use the current implicit segments.
The TRACELOGGING_DEFINE_PROVIDER macro expects the implicit const and data
segments to be configured appropriately (they usually need to be nonpaged). If
this is not the case already, the caller must set the data segment via #pragma
data_seg (for uniqueVarName) and/or the const segment via #pragma const_seg
(for g_hMyProvider) before invoking the TRACELOGGING_DEFINE_PROVIDER macro.
*/
#define TRACELOGGING_DEFINE_PROVIDER(handleVariable, providerName, providerId, ...) \
    _TlgDefineProvider_annotation(handleVariable, _Tlg##handleVariable##Prov, 1, providerName); \
    _TlgProviderStorage_imp(_Tlg##handleVariable##Prov, providerName, providerId, 1, __VA_ARGS__); \
    extern const TraceLoggingHProvider handleVariable = &_Tlg##handleVariable##Prov

/*
Macro TRACELOGGING_DEFINE_PROVIDER_STORAGE(storageVariable, "ProviderName", providerId, [option]):
Advanced scenarios only: Use this macro to help create a provider handle
when additional control is needed over the storage of the provider's data.
The provider name must be a string literal (not a variable) and must not
contain any '\0' characters.

Typical usage:

    TRACELOGGING_DEFINE_PROVIDER_STORAGE(myProviderStorage, "MyProvider",
        (0xb3864c38, 0x4273, 0x58c5, 0x54, 0x5b, 0x8b, 0x36, 0x08, 0x34, 0x34, 0x71));
    const TraceLoggingHProvider g_hMyProvider = &myProviderStorage;

The above example can be thought of as expanding to something like this:

    static struct _TlgProvider_t myProviderStorage = { ... };
    const TraceLoggingHProvider g_hMyProvider = &myProviderStorage;

Refer to the documentation for TRACELOGGING_DEFINE_PROVIDER for the syntax of
the providerId and option parameters.

For kernel-mode, be aware that while provider metadata is explicitly stored
into TLG_METADATA_SEGMENT, the myProviderStorage variable is not explicitly
assigned a segment and will use the current implicit segment. The
TRACELOGGING_DEFINE_PROVIDER_STORAGE macro expects the implicit data segment to
be configured appropriately (it usually needs to be nonpaged). If this is not
the case already, the caller must set the data segment via #pragma data_seg for
myProviderStorage before invoking the TRACELOGGING_DEFINE_PROVIDER_STORAGE
macro.
*/
#define TRACELOGGING_DEFINE_PROVIDER_STORAGE(storageVariable, providerName, providerId, ...) \
    _TlgProviderStorage_imp(storageVariable, providerName, providerId, 0, __VA_ARGS__)

/*
Macro TRACELOGGING_DECLARE_PROVIDER(hProviderVariableName):
Invoke this macro to forward-declare a TraceLoggingHProvider variable that
will be defined by TRACELOGGING_DEFINE_PROVIDER. This is for declaring a global
provider handle variable in a header file.

An invocation of

    TRACELOGGING_DECLARE_PROVIDER(g_hMyProvider);

can be thought of as expanding to something like this:

    extern const TraceLoggingHProvider g_hMyProvider;

A variable declared by TRACELOGGING_DECLARE_PROVIDER must later be defined
using the TRACELOGGING_DEFINE_PROVIDER macro.

Note that if your header is used in both C and C++ code, you will need to
enclose the use of TRACELOGGING_DECLARE_PROVIDER in an extern "C" region so
that the provider handle variable is declared as C-compatible. For example:

    #ifdef __cplusplus
    extern "C" {
    #endif
    TRACELOGGING_DECLARE_PROVIDER(g_hMyProvider);
    #ifdef __cplusplus
    } // extern "C"
    #endif
*/
#define TRACELOGGING_DECLARE_PROVIDER(handleVariable) \
    extern const TraceLoggingHProvider handleVariable

/*
Function TraceLoggingUnregister(hProvider):
Call this function to unregister your provider. Normally you will register at
component startup and unregister at component stop.

Note that unregistration is important, especially in the case of a DLL that
might be dynamically unloaded before the process ends. TraceLoggingRegister
sets up an ETW callback. If the DLL unloads without calling
TraceLoggingUnregister, the ETW callback will cause a crash.

Thread safety: Note that it is not safe to overlap calls to
TraceLoggingRegister and TraceLoggingUnregister with calls to other
TraceLogging APIs using the same provider handle. In particular, the call to
TraceLoggingRegister must return before you call TraceLoggingWrite or
TraceLoggingUnregister, calls to other APIs must complete before you call
TraceLoggingUnregister, and the call to TraceLoggingUnregister must complete
before you call any subsequent APIs. In addition, you must not call
TraceLoggingRegister on a handle that is already registered.

After unregistering a provider, it is ok to register it again. In other words,
the following is ok:

    TRACELOGGING_DECLARE_PROVIDER(hProvider);
    ...
    TraceLoggingRegister(hProvider);
    ...
    TraceLoggingUnregister(hProvider);
    ...
    TraceLoggingRegister(hProvider);
    ...
    TraceLoggingUnregister(hProvider);

However, re-registering a provider should only happen because a component
has been uninitialized and then reinitialized. You should not register and
unregister a provider each time you need to write a few events.
*/
_IRQL_requires_max_(PASSIVE_LEVEL)
__inline void TraceLoggingUnregister(
    TraceLoggingHProvider _Inout_ hProvider);

/*
Function TraceLoggingRegister(hProvider):
Call this function to register your provider with ETW.
The provider handle must be in the "unregistered" state.
In user-mode, returns an HRESULT code. Use SUCCEEDED to check success.
In kernel-mode, returns an NTSTATUS code. Use NT_SUCCESS to check success.
Calling TraceLoggingRegister(hProvider) is the same as calling
TraceLoggingRegisterEx(hProvider, NULL, NULL).
Refer to the documentation in TraceLoggingUnregister for additional information
about registration.
Note that it is ok to ignore failure - if TraceLoggingRegisterEx fails,
TraceLoggingWrite and TraceLoggingUnregister will be no-ops.
*/
_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingRegister(
    TraceLoggingHProvider _Inout_ hProvider);

/*
Function TraceLoggingRegisterEx(hProvider, pEnableCallback, pCallbackContext):
Call this function to register your provider with ETW if you need callbacks
(advanced scenarios only).
The provider handle must be in the "unregistered" state.
Refer to the documentation in TraceLoggingUnregister for additional information
about registration.
In user-mode, returns an HRESULT code. Use SUCCEEDED to check success.
In kernel-mode, returns an NTSTATUS code. Use NT_SUCCESS to check success.
Note that it is ok to ignore failure - if TraceLoggingRegisterEx fails,
TraceLoggingWrite and TraceLoggingUnregister will be no-ops.
*/
_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingRegisterEx(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_opt_ TLG_PENABLECALLBACK pEnableCallback,
    _In_opt_ PVOID pCallbackContext);

/*
Function TraceLoggingSetInformation(hProvider, informationClass, pvInformation, cbInformation):
Call this function to provide special-purpose information to the ETW runtime.
For details, see the corresponding ETW API: EventSetInformation.
Note that the EventSetInformation API is not available on all versions of
Windows. This wrapper has configurable behavior for how it should access the
EventSetInformation API. The default behavior of this function depends on the
value of WINVER (user-mode) or NTDDI_VERSION (kernel-mode). Use the
TLG_HAVE_EVENT_SET_INFORMATION macro to override the default behavior.
*/
_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingSetInformation(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_ enum _EVENT_INFO_CLASS informationClass,
    _In_reads_bytes_opt_(cbInformation) PVOID pvInformation,
    _In_ ULONG cbInformation);

/*
Function TraceLoggingProviderEnabled(hProvider, eventLevel, eventKeyword):
Call this function to determine whether the given provider is enabled for
events with the specified level and keyword. Use 0 for eventLevel to determine
whether the provider is enabled for any level. Use 0 for eventKeyword to
determine whether the provider is enabled for any keyword.
*/
_IRQL_requires_max_(HIGH_LEVEL)
__inline BOOLEAN TraceLoggingProviderEnabled(
    TraceLoggingHProvider _In_ hProvider,
    UCHAR eventLevel,
    ULONGLONG eventKeyword);

/*
Function TraceLoggingProviderId(hProvider):
Returns the provider ID (GUID) that was specified in
TRACELOGGING_DEFINE_PROVIDER.
*/
_IRQL_requires_max_(HIGH_LEVEL)
__inline GUID TraceLoggingProviderId(
    TraceLoggingHProvider _In_ hProvider);

/*
Macro TraceLoggingWrite(hProvider, "EventName", args...):
Invoke this macro to log an event.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingInt32(myIntVar),
        TraceLoggingWideString(myString));

The event name must be a string literal (not a variable) and must not contain
any '\0' characters.

Supports up to 99 args (subject to compiler limitations). Each arg must be a
wrapper macro such as TraceLoggingLevel, TraceLoggingKeyword, TraceLoggingInt32,
TraceLoggingString, etc.
*/
#define TraceLoggingWrite(hProvider, eventName, ...) \
    _TlgWrite_imp(_TlgWrite, \
    hProvider, eventName, \
    (NULL, NULL), \
    __VA_ARGS__)

/*
Macro TraceLoggingWriteActivity(hProvider, "EventName", pActivityId, pRelatedId, args...):
Invoke this macro to log an event with explicitly-specified activity GUIDs.

Example:

    TraceLoggingWriteActivity(
        g_hProvider,
        "MyEventName",
        pActivityId,
        pRelatedActivityId,
        TraceLoggingInt32(myIntVar),
        TraceLoggingWideString(myString));

The event name must be a string literal (not a variable) and must not contain
any '\0' characters.

Supports up to 99 args (subject to compiler limitations). Each arg must be a
wrapper macro such as TraceLoggingLevel, TraceLoggingKeyword, TraceLoggingInt32,
TraceLoggingString, etc.
*/
#define TraceLoggingWriteActivity(hProvider, eventName, pActivityId, pRelatedActivityId, ...) \
    _TlgWrite_imp(_TlgWrite, \
    hProvider, eventName, \
    ((pActivityId), (pRelatedActivityId)), \
    __VA_ARGS__)

#if _TLG_ENABLE_TraceLoggingWriteEx

/*
Macro TraceLoggingWriteEx(hProvider, "EventName", filter, flags, pActivityId, pRelatedId, args...):
Invoke this macro to log an event with explicitly-specified filter, flags, and
activity GUIDs. Use this macro when you need to set the filter or flags
parameters (see the documentation of EventWriteEx for details). Otherwise, use
the TraceLoggingWrite and TraceLoggingWriteActivity macros.
This macro is only available if WINVER is set to Windows 7 or later.

Example:

    TraceLoggingWriteEx(
        g_hProvider,
        "MyEventName",
        filter,             // normally 0 (no filter)
        flags,              // normally 0 (no flags)
        pActivityId,        // normally NULL (implicit activity ID)
        pRelatedActivityId, // normally NULL (no related activity ID)
        TraceLoggingInt32(myIntVar),
        TraceLoggingWideString(myString));

The event name must be a string literal (not a variable) and must not contain
any '\0' characters.

Supports up to 99 args (subject to compiler limitations). Each arg must be a
wrapper macro such as TraceLoggingLevel, TraceLoggingKeyword, TraceLoggingInt32,
TraceLoggingString, etc.
*/
#define TraceLoggingWriteEx(hProvider, eventName, filter, flags, pActivityId, pRelatedActivityId, ...) \
    _TlgWrite_imp(_TlgWriteEx, \
    hProvider, eventName, \
    ((filter), (flags), (pActivityId), (pRelatedActivityId)), \
    __VA_ARGS__)

#endif // _TLG_ENABLE_TraceLoggingWriteEx

/*
Macro TraceLoggingLevel(eventLevel)
Wrapper macro for setting the event's level.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingLevel(TRACE_LEVEL_WARNING),
        TraceLoggingWideString(myString));

The eventLevel parameter must be a compile-time constant 0 to 255 (typically
a TRACE_LEVEL_??? constant from evntrace.h or a WINEVENT_LEVEL_??? constant
from winmeta.h). If no TraceLoggingLevel(n) arg is provided, the default
logging level is 5 (TRACE_LEVEL_VERBOSE). If multiple TraceLoggingLevel(n) args
are provided, the value from the last TraceLoggingLevel(n) is used.
*/
#define TraceLoggingLevel(eventLevel) \
    _TlgArg(,,,, _TlgLevel, eventLevel,,)

/*
Macro TraceLoggingOptionGroup(g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11):
Wrapper macro for use in TRACELOGGING_DEFINE_PROVIDER that declares the
provider's membership in a provider group. A provider can be a member of no
more than one group. The semantics of group membership are determined by
ETW controllers that make use of the group membership information.

The parameters to this macro are 11 compile-time constant integers that will
form the group GUID. The GUID will be initialized as follows:

    GUID g = { g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11 };

Example:

    TRACELOGGING_DEFINE_PROVIDER(
        g_hMyProvider,
        "MyProvider",
        (0xb3864c38, 0x4273, 0x58c5, 0x54, 0x5b, 0x8b, 0x36, 0x08, 0x34, 0x34, 0x71),
        TraceLoggingOptionGroup(0xfaaf2f61, 0x9b26, 0x4591, 0x9b, 0xb1, 0xb9, 0xb8, 0xba, 0xe2, 0xd3, 0x4c));
*/
#define TraceLoggingOptionGroup(g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11) \
    _TlgOptionGroup(g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11)

/*
Macro TraceLoggingOpcode(eventOpcode):
Wrapper macro for setting the event's opcode.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingOpcode(EVENT_TRACE_TYPE_START),
        TraceLoggingWideString(myString));

The eventOpcode parameter must be a compile-time constant 0 to 255 (typically
a EVENT_TRACE_TYPE_??? constant from evntrace.h or a WINEVENT_OPCODE_???
constant from winmeta.h). If no TraceLoggingOpcode(n) arg is provided, the
default opcode is 0 (EVENT_TRACE_TYPE_INFO). If multiple TraceLoggingOpcode(n)
args are provided, the value from the last TraceLoggingOpcode(n) is used.
*/
#define TraceLoggingOpcode(eventOpcode) \
    _TlgArg(,,,, _TlgOpcode, eventOpcode,,)

/*
Macro TraceLoggingKeyword(eventKeyword):
Wrapper macro for setting the event's keyword(s).

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingKeyword(WINEVENT_KEYWORD_RESPONSE_TIME),
        TraceLoggingWideString(myString));

The value parameter must be a compile-time constant 0 to UINT64_MAX (typically
an enum). If no TraceLoggingKeyword(n) arg is provided, the default keyword is
0. If multiple TraceLoggingKeyword(n) args are provided, they are OR'ed
together.
*/
#define TraceLoggingKeyword(eventKeyword) \
    _TlgArg(,,,, _TlgKeyword, eventKeyword,,)

/*
Macro TraceLoggingChannel(eventChannel)
Wrapper macro for setting the event's channel. (Advanced scenarios.)

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingChannel(WINEVENT_CHANNEL_GLOBAL_APPLICATION),
        TraceLoggingWideString(myString));

Channels are used in advanced ETW scenarios such as writing to system-defined
event consumers such as the event log. When using channels with the event log,
a manifest must be registered with the system to define the provider and its
channels. A manifest for a TraceLogging provider should define the provider
and the channels but should omit the event definitions, since they are managed
by TraceLogging.

The eventChannel parameter must be a compile-time constant 0 to 255. If no
TraceLoggingChannel(n) arg is provided, the default logging level is 11
(WINEVENT_CHANNEL_TRACELOGGING), indicating that this is a normal
TraceLogging event. If multiple TraceLoggingChannel(n) args are provided, the
value from the last TraceLoggingChannel(n) is used.

NOTE: If your provider will run on Windows earlier than Windows 10, do not use
TraceLoggingChannel. For an event to be recognized as TraceLogging-compatible,
it must either have the channel set to 11 or it must have been marked by the
ETW runtime during EventWrite. The Windows 10 ETW runtime will recognize and
mark TraceLogging events regardless of channel, but earlier versions of
Windows require a system update in order to support marking TraceLogging
events. For events captured on systems without an update, the channel is the
only way to recognize a TraceLogging event, so events with other channels may
be harder to decode.
*/
#define TraceLoggingChannel(eventChannel) \
    _TlgArg(,,,, _TlgChannel, eventChannel,,)

/*
Macro TraceLoggingEventTag(eventTag):
Wrapper macro for setting the event's tag(s).

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingEventTag(0x200000),
        TraceLoggingWideString(myString));

Tags are a 28-bit user-defined metadata field. The semantics of the tags are
defined by the event consumer. During event processing, this tag can be
retrieved from the TRACE_EVENT_INFO Tags field.

The eventTag parameter must be a compile-time constant, 0x0FFFFFFF or less.
(In C, the low 14 bits of eventTag must all be 0, as only the top 14 bits are
supported.)

If no TraceLoggingEventTag(eventTag) arg is provided, the tag value will be 0.
If multiple TraceLoggingEventTag(eventTag) args are provided, the tag values
will be OR'ed together.

Tag encoding is optimized in favor of the high bits, so you should generally
start assigning tag values at 0x08000000 (the highest supported tag bit), then
assign subsequent values to lower bits.

C specific:

The C implementation always uses a 2-byte encoding for tags, supporting up to
14 bits of tag data. The value parameter must be a compile-time constant
covered by mask 0x0FFFC000 (i.e. only tag bits 15-28 are supported).

C++ specific:

The C++ implementation uses a 1-byte, 2-byte, or 4-byte encoding for tags,
depending on tag's value. Tags that leave low bits unset can be encoded more
optimally. For example:

- 0x00000000 uses a 1-byte encoding.
- 0x0FE00000 uses a 1-byte encoding.
- 0x0FFFC000 uses a 2-byte encoding.
- 0x0FFFFFFF uses a 4-byte encoding.

Technical details:

The TraceLogging schema convention encodes tags as 28-bit fields by using a
chain of up to four bytes with the upper-most bit used as a 'chain' bit
(4 bytes * 7 bits per byte = 28 bits supported). Data is encoded
most-significant byte first. The encoding always uses at least 1 byte.
*/
#define TraceLoggingEventTag(eventTag) \
    _TlgArg(,,,, _TlgEvtTag, _TlgEvtTagEncode(eventTag),,)

/*
Macro TraceLoggingDescription(description):
Wrapper macro for setting a description for an event.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingDescription("My event's detailed description"),
        TraceLoggingWideString(myString));

The value parameter must be a string literal. If no
TraceLoggingDescription(description) part is provided, the default is
empty. If multiple TraceLoggingDescriptions(description) args are provided,
they are concatenated together into a single string.

Descriptions are stored in the PDB. They are not available at runtime.
*/
#define TraceLoggingDescription(description) \
    _TlgArg(,,,, _TlgDesc, 0,,, description)

/*
Macro TraceLoggingCustomAttribute(key, value):
Wrapper macro for adding custom information about an event to the PDB.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingCustomAttribute("Key", "Value"),
        TraceLoggingWideString(myString));

Both parameters must be string literals. Multiple custom attributes can be
specified per event.

Custom attributes are stored in the PDB. They are not available at runtime.
*/
#define TraceLoggingCustomAttribute(key, value) \
    _TlgArg(,,,, _TlgCustAnn, 0,, key, value)

/*
Macro TraceLoggingStruct(fieldCount, "structName", "description", tags):
Wrapper macro for defining a group of related fields in an event.

The description and tags parameters are optional.

The fieldCount parameter must be a compile-time constant. It indicates the
number of fields that will be considered to be part of the struct. A struct and
all of its contained fields count as a single field in any parent structs.

The name parameter must be a string literal (not a variable) and must not
contain any '\0' characters.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Example:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingStruct(2, "Name"),
        TraceLoggingWideString(szLast),
        TraceLoggingWideString(szFirst));
*/
#define TraceLoggingStruct(fieldCount, name, ...) \
    _TlgArg(, _TlgInSTRUCT,,, _TlgStruct,, fieldCount, name, __VA_ARGS__)

#if defined(__cplusplus) && defined(_MSC_VER) && (_MSC_VER >= 1600)
/*
Macro TraceLoggingValue(value, "name", "description", tags):
Wrapper macro for event fields. Automatically deduces value type. C++ only.

The name, description, and tags parameters are optional.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the value
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingValue(val1)                      // field name = "val1", description = unset,  tags = 0.
- TraceLoggingValue(val1, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingValue(val1, "name", "desc"       // field name = "name", description = "desc", tags = 0.
- TraceLoggingValue(val1, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.

Based on the type of val, TraceLoggingValue(val, ...) is equivalent to:
- bool       --> TraceLoggingBoolean(val, ...)
- char       --> TraceLoggingChar(val, ...)
- wchar_t    --> TraceLoggingWChar(val, ...) // only for native wchar_t type, not for USHORT
- INT8       --> TraceLoggingInt8(val, ...)
- UINT8      --> TraceLoggingUInt8(val, ...)
- INT16      --> TraceLoggingInt16(val, ...)
- UINT16     --> TraceLoggingUInt16(val, ...)
- INT32      --> TraceLoggingInt32(val, ...)
- UINT32     --> TraceLoggingUInt32(val, ...)
- INT64      --> TraceLoggingInt64(val, ...)
- UINT64     --> TraceLoggingUInt64(val, ...)
- LONG       --> TraceLoggingInt32(val, ...)
- ULONG      --> TraceLoggingUInt32(val, ...)
- FLOAT      --> TraceLoggingFloat32(val, ...)
- DOUBLE     --> TraceLoggingFloat64(val, ...)
- GUID       --> TraceLoggingGuid(val, ...)
- FILETIME   --> TraceLoggingFileTime(val, ...)
- SYSTEMTIME --> TraceLoggingSystemTime(val, ...)
- SID*       --> TraceLoggingSid(val, ...)        // also works when val is const SID*
- void*      --> TraceLoggingPointer(val, ...)    // also works when val is const void*
- char*      --> TraceLoggingString(val, ...)     // also works when val is const char*
- wchar_t*   --> TraceLoggingWideString(val, ...) // also works when val is const wchar_t*
*/
#define TraceLoggingValue(value, ...) \
    _TlgArg(,,, value, _TlgAuto, value,, __VA_ARGS__)
#endif // __cplusplus && _MSC_VER >= 1600

/*
Wrapper macros for event fields with simple scalar values.
Usage: TraceLoggingInt32(value, "name", "description", tags).

In C, a GUID, FILETIME, or SYSTEMTIME value parameter must be an lvalue.

The name, description, and tags parameters are optional.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the value
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Notes:
- TraceLoggingBool is for 32-bit boolean values.
- TraceLoggingBoolean is for 8-bit boolean values.

Examples:
- TraceLoggingInt32(val1)                      // field name = "val1", description = unset,  tags = 0.
- TraceLoggingInt32(val1, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingInt32(val1, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingInt32(val1, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingInt8(value, ...)       _TlgArg(INT8,       TlgInINT8,             0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingUInt8(value, ...)      _TlgArg(UINT8,      TlgInUINT8,            0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingInt16(value, ...)      _TlgArg(INT16,      TlgInINT16,            0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingUInt16(value, ...)     _TlgArg(UINT16,     TlgInUINT16,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingInt32(value, ...)      _TlgArg(INT32,      TlgInINT32,            0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingUInt32(value, ...)     _TlgArg(UINT32,     TlgInUINT32,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingInt64(value, ...)      _TlgArg(INT64,      TlgInINT64,            0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingUInt64(value, ...)     _TlgArg(UINT64,     TlgInUINT64,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingFloat32(value, ...)    _TlgArg(float,      TlgInFLOAT,            0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingFloat64(value, ...)    _TlgArg(double,     TlgInDOUBLE,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingBool(value, ...)       _TlgArg(INT32,      TlgInBOOL32,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingGuid(value, ...)       _TlgArg(GUID,       TlgInGUID,             0, 0, _TlgP, value,, __VA_ARGS__)
#define TraceLoggingPointer(value, ...)    _TlgArg(void const*,TlgInPOINTER,          0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingFileTime(value, ...)   _TlgArg(struct _FILETIME,  TlgInFILETIME,  0, 0, _TlgP, value,, __VA_ARGS__)
#define TraceLoggingSystemTime(value, ...) _TlgArg(struct _SYSTEMTIME,TlgInSYSTEMTIME,0, 0, _TlgP, value,, __VA_ARGS__)
#define TraceLoggingHexInt8(value, ...)    _TlgArg(INT8,       TlgInUINT8,    TlgOutHEX, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexUInt8(value, ...)   _TlgArg(UINT8,      TlgInUINT8,    TlgOutHEX, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexInt32(value, ...)   _TlgArg(INT32,      TlgInHEXINT32,         0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexUInt32(value, ...)  _TlgArg(UINT32,     TlgInHEXINT32,         0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexInt64(value, ...)   _TlgArg(INT64,      TlgInHEXINT64,         0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexUInt64(value, ...)  _TlgArg(UINT64,     TlgInHEXINT64,         0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingWChar(value, ...)      _TlgArg(WCHAR,      TlgInUINT16,TlgOutSTRING, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingChar(value, ...)       _TlgArg(CHAR,       TlgInUINT8, TlgOutSTRING, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingIntPtr(value, ...)     _TlgArg(INT_PTR,    TlgInINTPTR,           0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingUIntPtr(value, ...)    _TlgArg(UINT_PTR,   TlgInUINTPTR,          0, 0, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingBoolean(value, ...)    _TlgArg(BOOLEAN,    TlgInUINT8,TlgOutBOOLEAN, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexInt16(value, ...)   _TlgArg(INT16,      TlgInUINT16,   TlgOutHEX, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHexUInt16(value, ...)  _TlgArg(UINT16,     TlgInUINT16,   TlgOutHEX, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingPid(value, ...)        _TlgArg(UINT32,     TlgInUINT32,   TlgOutPID, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingTid(value, ...)        _TlgArg(UINT32,     TlgInUINT32,   TlgOutTID, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingPort(value, ...)       _TlgArg(UINT16,     TlgInUINT16,  TlgOutPORT, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingWinError(value, ...)   _TlgArg(UINT32, TlgInUINT32,TlgOutWIN32ERROR, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingNTStatus(value, ...)   _TlgArg(NTSTATUS, TlgInUINT32,TlgOutNTSTATUS, 1, _TlgS, value,, __VA_ARGS__)
#define TraceLoggingHResult(value, ...)    _TlgArg(HRESULT,    TlgInINT32,TlgOutHRESULT, 1, _TlgS, value,, __VA_ARGS__)

/*
Wrapper macros for event fields with zero-terminated or counted string values.
Usage: TraceLoggingString(pszVal, "name", "description", tags).
Usage: TraceLoggingCountedString(pchVal, cchVal, "name", "description", tags).

The name, description, and tags parameters are optional.

For TraceLoggingString and TraceLoggingWideString, the pszVal parameter is
treated as a nul-terminated string. If pszVal is NULL, it is treated as an
empty (zero-length) string.

For TraceLoggingCountedString and TraceLoggingCountedWideString, the pchVal
parameter is treated as a counted string, with length cchVal given in
characters. The pchVal parameter may be NULL only if cchVal is 0.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pszVal
or pchVal parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingString(psz1)                      // field name = "psz1", description = unset,  tags = 0.
- TraceLoggingString(psz1, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingString(psz1, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingString(psz1, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingString(pszVal, ...)                    _TlgArg(CHAR,  TlgInANSISTRING,        0, 0, _TlgSz,  pszVal, ,        __VA_ARGS__)
#define TraceLoggingWideString(pszVal, ...)                _TlgArg(WCHAR, TlgInUNICODESTRING,     0, 0, _TlgWsz, pszVal, ,        __VA_ARGS__)
#define TraceLoggingCountedString(pchVal, cchVal, ...)     _TlgArg(CHAR,  TlgInCOUNTEDANSISTRING, 0, 0, _TlgCS,  pchVal, cchVal,  __VA_ARGS__)
#define TraceLoggingCountedWideString(pchVal, cchVal, ...) _TlgArg(WCHAR, TlgInCOUNTEDSTRING,     0, 0, _TlgCS,  pchVal, cchVal,  __VA_ARGS__)

/*
Wrapper macros for event fields with PANSI_STRING, PUNICODE_STRING, etc. values.
Usage: TraceLoggingUnicodeString(pString, "name", "description", tags).

Use TraceLoggingUnicodeString for PUNICODE_STRING or PCUNICODE_STRING.
Use TraceLoggingAnsiString for PSTRING, PANSI_STRING, PCANSI_STRING, POEM_STRING, etc.

The name, description, and tags parameters are optional.

The pString parameter must not be NULL.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pString
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingUnicodeString(pStr)                      // field name = "pStr", description = unset,  tags = 0.
- TraceLoggingUnicodeString(pStr, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingUnicodeString(pStr, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingUnicodeString(pStr, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingAnsiString(pString, ...)       _TlgArg(struct _STRING,         TlgInCOUNTEDANSISTRING, 0, 0, _TlgString, pString,, __VA_ARGS__)
#define TraceLoggingUnicodeString(pString, ...)    _TlgArg(struct _UNICODE_STRING, TlgInCOUNTEDSTRING,     0, 0, _TlgString, pString,, __VA_ARGS__)

/*
Wrapper macro for raw binary data.
Usage: TraceLoggingBinary(pbData, cbData, "name", "description", tags).

The pbData parameter is treated as a const void* so that any kind of data can
be provided. The cbData parameter is the size of the data, in bytes.

The name, description, and tags parameters are optional.

The pbData parameter may be NULL only if cbData is 0.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pbData
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingBinary(pObj, sizeof(*pObj))                      // field name = "pObj", description = unset,  tags = 0.
- TraceLoggingBinary(pObj, sizeof(*pObj), "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingBinary(pObj, sizeof(*pObj), "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingBinary(pObj, sizeof(*pObj), "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingBinary(pbData, cbData, ...)            _TlgArg(void, TlgInBINARY, 0,       0, _TlgB, pbData, cbData, __VA_ARGS__)

/*
Wrapper macros for event fields with PSOCKADDR, PSOCKADDR_IN, etc. values.
Usage: TraceLoggingSocketAddress(pSockAddr, cbSockAddr, "name", "description", tags).

Note that the amount of data needed for a SOCKADDR field varies depending on
the type of address. If the data is stored in a union variable, be sure to
set the cbSockAddr parameter to the size of the correct union member or the
data might be truncated.

The name, description, and tags parameters are optional.

The pSockAddr parameter must not be NULL.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pSockAddr
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingSocketAddress(pSock, sizeof(*pSock))                      // field name = "pSock", description = unset,  tags = 0.
- TraceLoggingSocketAddress(pSock, sizeof(*pSock), "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingSocketAddress(pSock, sizeof(*pSock), "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingSocketAddress(pSock, sizeof(*pSock), "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingSocketAddress(pSockAddr, cbSockAddr, ...) _TlgArg(void, TlgInBINARY, TlgOutSOCKETADDRESS, 1, _TlgB, pSockAddr, cbSockAddr, __VA_ARGS__)

#ifdef SID_DEFINED
/*
Wrapper macros for event fields with PSID values.
Usage: TraceLoggingSid(pSid, "name", "description", tags).

Note that the amount of data needed for a SID field varies depending on
the number of subauthorities. TraceLogging assumes the SID structure is valid
and will send the amount of data indicated by the subauthority count.

The name, description, and tags parameters are optional.

The pSid parameter must not be NULL and must point at a valid SID
(SubAuthorityCount must be initialized).

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pSid
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingSid(pSid)                      // field name = "pSid", description = unset,  tags = 0.
- TraceLoggingSid(pSid, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingSid(pSid, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingSid(pSid, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingSid(pSid, ...) _TlgArg(SID, TlgInSID, 0, 0, _TlgSid, pSid,, __VA_ARGS__)
#endif

/*
Wrapper macros for event fields with values that are fixed-length arrays.
Usage: TraceLoggingInt32FixedArray(pVals, cVals, "name", "description", tags).

The cVals parameter must be a compile-time constant value. It must not be 0.

The name, description, and tags parameters are optional.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pbData
or pVals parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingUInt8FixedArray(pbX1, 32)                      // field name = "pbX1", description = unset,  tags = 0.
- TraceLoggingUInt8FixedArray(pbX1, 32, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingUInt8FixedArray(pbX1, 32, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingUInt8FixedArray(pbX1, 32, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingInt8FixedArray(pbData, cbData, ...)           _TlgArg(INT8,       TlgInINT8,             0, 0, _TlgFA,  pbData, cbData, __VA_ARGS__)
#define TraceLoggingUInt8FixedArray(pbData, cbData, ...)          _TlgArg(UINT8,      TlgInUINT8,            0, 0, _TlgFA,  pbData, cbData, __VA_ARGS__)
#define TraceLoggingInt16FixedArray(pVals, cVals, ...)            _TlgArg(INT16,      TlgInINT16,            0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt16FixedArray(pVals, cVals, ...)           _TlgArg(UINT16,     TlgInUINT16,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingInt32FixedArray(pVals, cVals, ...)            _TlgArg(INT32,      TlgInINT32,            0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt32FixedArray(pVals, cVals, ...)           _TlgArg(UINT32,     TlgInUINT32,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingInt64FixedArray(pVals, cVals, ...)            _TlgArg(INT64,      TlgInINT64,            0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt64FixedArray(pVals, cVals, ...)           _TlgArg(UINT64,     TlgInUINT64,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFloat32FixedArray(pVals, cVals, ...)          _TlgArg(float,      TlgInFLOAT,            0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFloat64FixedArray(pVals, cVals, ...)          _TlgArg(double,     TlgInDOUBLE,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingBoolFixedArray(pVals, cVals, ...)             _TlgArg(INT32,      TlgInBOOL32,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingGuidFixedArray(pVals, cVals, ...)             _TlgArg(GUID,       TlgInGUID,             0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingPointerFixedArray(pVals, cVals, ...)          _TlgArg(LPVOID,     TlgInPOINTER,          0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFileTimeFixedArray(pVals, cVals, ...)         _TlgArg(struct _FILETIME,TlgInFILETIME,    0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingSystemTimeFixedArray(pVals, cVals, ...)       _TlgArg(struct _SYSTEMTIME,TlgInSYSTEMTIME,0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt8FixedArray(pVals, cVals, ...)          _TlgArg(INT8,       TlgInUINT8,   TlgOutHEX, 1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt8FixedArray(pVals, cVals, ...)         _TlgArg(UINT8,      TlgInUINT8,   TlgOutHEX, 1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt32FixedArray(pVals, cVals, ...)         _TlgArg(INT32,      TlgInHEXINT32,         0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt32FixedArray(pVals, cVals, ...)        _TlgArg(UINT32,     TlgInHEXINT32,         0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt64FixedArray(pVals, cVals, ...)         _TlgArg(INT64,      TlgInHEXINT64,         0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt64FixedArray(pVals, cVals, ...)        _TlgArg(UINT64,     TlgInHEXINT64,         0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingWCharFixedArray(pVals, cVals, ...)            _TlgArg(WCHAR,      TlgInUINT16,TlgOutSTRING,1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingCharFixedArray(pVals, cVals, ...)             _TlgArg(CHAR,       TlgInUINT8, TlgOutSTRING,1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingIntPtrFixedArray(pVals, cVals, ...)           _TlgArg(INT_PTR,    TlgInINTPTR,           0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUIntPtrFixedArray(pVals, cVals, ...)          _TlgArg(UINT_PTR,   TlgInUINTPTR,          0, 0, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingBooleanFixedArray(pVals, cVals, ...)          _TlgArg(BOOLEAN,    TlgInUINT8,TlgOutBOOLEAN,1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt16FixedArray(pVals, cVals, ...)         _TlgArg(INT16,      TlgInUINT16,  TlgOutHEX, 1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt16FixedArray(pVals, cVals, ...)        _TlgArg(UINT16,     TlgInUINT16,  TlgOutHEX, 1, _TlgFA,  pVals,  cVals,  __VA_ARGS__)

/*
Wrapper macros for event fields with values that are variable-length arrays.
Usage: TraceLoggingInt32Array(pVals, cVals, "name", "description", tags).

The name, description, and tags parameters are optional.

The pointer parameter may be NULL only if the count parameter is 0.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pbData
or pVals parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Examples:
- TraceLoggingUInt8Array(pbX1, cbX1)                      // field name = "pbX1", description = unset,  tags = 0.
- TraceLoggingUInt8Array(pbX1, cbX1, "name")              // field name = "name", description = unset,  tags = 0.
- TraceLoggingUInt8Array(pbX1, cbX1, "name", "desc")      // field name = "name", description = "desc", tags = 0.
- TraceLoggingUInt8Array(pbX1, cbX1, "name", "desc", 0x4) // field name = "name", description = "desc", tags = 0x4.
*/
#define TraceLoggingInt8Array(pbData, cbData, ...)     _TlgArg(INT8,       TlgInINT8,             0, 0, _TlgA,  pbData, cbData, __VA_ARGS__)
#define TraceLoggingUInt8Array(pbData, cbData, ...)    _TlgArg(UINT8,      TlgInUINT8,            0, 0, _TlgA,  pbData, cbData, __VA_ARGS__)
#define TraceLoggingInt16Array(pVals, cVals, ...)      _TlgArg(INT16,      TlgInINT16,            0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt16Array(pVals, cVals, ...)     _TlgArg(UINT16,     TlgInUINT16,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingInt32Array(pVals, cVals, ...)      _TlgArg(INT32,      TlgInINT32,            0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt32Array(pVals, cVals, ...)     _TlgArg(UINT32,     TlgInUINT32,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingInt64Array(pVals, cVals, ...)      _TlgArg(INT64,      TlgInINT64,            0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUInt64Array(pVals, cVals, ...)     _TlgArg(UINT64,     TlgInUINT64,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFloat32Array(pVals, cVals, ...)    _TlgArg(float,      TlgInFLOAT,            0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFloat64Array(pVals, cVals, ...)    _TlgArg(double,     TlgInDOUBLE,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingBoolArray(pVals, cVals, ...)       _TlgArg(INT32,      TlgInBOOL32,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingGuidArray(pVals, cVals, ...)       _TlgArg(GUID,       TlgInGUID,             0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingPointerArray(pVals, cVals, ...)    _TlgArg(LPVOID,     TlgInPOINTER,          0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingFileTimeArray(pVals, cVals, ...)   _TlgArg(struct _FILETIME, TlgInFILETIME,   0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingSystemTimeArray(pVals, cVals, ...) _TlgArg(struct _SYSTEMTIME, TlgInSYSTEMTIME,0,0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt8Array(pVals, cVals, ...)    _TlgArg(INT8,       TlgInUINT8,   TlgOutHEX, 1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt8Array(pVals, cVals, ...)   _TlgArg(UINT8,      TlgInUINT8,   TlgOutHEX, 1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt32Array(pVals, cVals, ...)   _TlgArg(INT32,      TlgInHEXINT32,         0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt32Array(pVals, cVals, ...)  _TlgArg(UINT32,     TlgInHEXINT32,         0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt64Array(pVals, cVals, ...)   _TlgArg(INT64,      TlgInHEXINT64,         0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt64Array(pVals, cVals, ...)  _TlgArg(UINT64,     TlgInHEXINT64,         0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingWCharArray(pVals, cVals, ...)      _TlgArg(WCHAR,      TlgInUINT16,TlgOutSTRING,1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingCharArray(pVals, cVals, ...)       _TlgArg(CHAR,       TlgInUINT8, TlgOutSTRING,1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingIntPtrArray(pVals, cVals, ...)     _TlgArg(INT_PTR,    TlgInINTPTR,           0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingUIntPtrArray(pVals, cVals, ...)    _TlgArg(UINT_PTR,   TlgInUINTPTR,          0, 0, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingBooleanArray(pVals, cVals, ...)    _TlgArg(BOOLEAN,    TlgInUINT8,TlgOutBOOLEAN,1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexInt16Array(pVals, cVals, ...)   _TlgArg(INT16,      TlgInUINT16,  TlgOutHEX, 1, _TlgA,  pVals,  cVals,  __VA_ARGS__)
#define TraceLoggingHexUInt16Array(pVals, cVals, ...)  _TlgArg(UINT16,     TlgInUINT16,  TlgOutHEX, 1, _TlgA,  pVals,  cVals,  __VA_ARGS__)

/*
Wrapper macros for manually-packed fields (advanced scenarios).
These macros support custom serialization of fields for use in creating events
that would otherwise be inexpressible through TraceLoggingProvider.h. For
example, these macros can be used to write fields containing arrays of strings
or arrays of structures. Note that the correct use of these macros requires an
understanding of how TraceLogging encodes events. If used incorrectly, these
macros can generate events that are impossible to decode. Note that to write
arrays of strings or arrays of structures, you will usually need to do
additional work such as manually buffering or marshaling the data before
invoking TraceLoggingWrite.

TraceLoggingPackedField(pbData, cbData, inType, "name", "description", tags)
TraceLoggingPackedFieldEx(pbData, cbData, inType, outType, "name", "description", tags)
TraceLoggingPackedMetadata(inType, "name", "description", tags)
TraceLoggingPackedMetadataEx(inType, outType, "name", "description", tags)
TraceLoggingPackedStruct(fieldCount, "name", "description", tags)
TraceLoggingPackedStructArray(fieldCount, "name", "description", tags)
TraceLoggingPackedData(pbData, cbData)

The name parameter must be a string literal (not a variable) and must not
contain any '\0' characters. For TraceLoggingPackedField and
TraceLoggingPackedFieldEx, the name parameter is optional. If the name is not
provided, the TraceLoggingPackedField and TraceLoggingPackedFieldEx macros will
use the pbData parameter to automatically generate a field name.

The description parameter is optional. If provided, the description parameter
must be a string literal. The description will be included in the PDB.

The tags parameter is optional. If provided, the tags parameter must be an
integer value. The low 28 bits of the value will be included in the field's
metadata. The semantics of the tags are defined by the event consumer. During
event processing, this tag can be retrieved from the EVENT_PROPERTY_INFO Tags
field.

A TraceLogging event contains metadata and data. The metadata is the list of
fields, each with a name and a type. The data is the payload - an array of
raw bytes that contains the values of the event fields. The metadata is
composed of compile-time-constant data, while the data can be different each
time the event is generated. The metadata is used to decode the data, so the
metadata and the data need to be coordinated. The other wrapper macros
(TraceLoggingInt32, TraceLoggingString, etc.) automatically keep the metadata
and data coordinated, but the TraceLoggingPacked macros allow direct control
over the metadata and data so incorrect use of them can result in events that
do not decode correctly.

The TraceLoggingPackedField macro adds both metadata and data. It adds an
arbitrary field to the event's type, and adds arbitrary data to the event's
payload. The TraceLoggingPackedFieldEx macro does the same, but includes a byte
for the field's OutType in the field descriptor.

The TraceLoggingPackedMetadata macro adds only metadata. It adds a field to the
event's type without adding any data to the event's payload. The
TraceLoggingPackedMetadataEx macro does the same, but includes a byte for the
field's OutType in the field descriptor.

The TraceLoggingPackedStruct macro adds only metadata (a struct declaration
never contains data -- the struct's data is provided by its fields). It begins
a structure in the event: the <fieldCount> logical fields that follow the start
of the structure are considered to be part of the structure, and they will form
one logical field. (Structures can nest, and a nested structure counts as one
logical field in the parent structure.) The TraceLoggingPackedStructArray does
the same, but it begins an array of structures (which also counts as one
logical field).

The TraceLoggingPackedData macro adds data directly into the event payload
without adding a field to the event's type.

These macros can be combined in various ways to express TraceLogging field
structures not otherwise possible. Possible scenarios include:

* Write a simple field with a specific InType/OutType combination that is
  not supported by the core TraceLogging macros.

  For example, to write a nul-terminated wide string that is tagged as
  containing JSON data:

    TraceLoggingWrite(
        g_hProvider,
        "MyEventWithJsonData",
        TraceLoggingInt32(otherData1),
        TraceLoggingPackedFieldEx(
            szJson,
            (wcslen(szJson) + 1) * sizeof(wchar_t),
            TlgInUNICODESTRING,
            TlgOutJSON,
            "MyJsonFieldName"),
        TraceLoggingInt32(otherData2));

* Write a complex field that requires marshaling data into a temporary
  buffer.

  For example, to write an array of nul-terminated ANSI strings:

    // This scenario requires manually marshaling data.
    // Don't spend time marshaling data if the event is disabled.
    if (TraceLoggingProviderEnabled(g_hProvider, level, keyword))
    {
        // This example assumes that the strings will fit into 100 bytes.
        // Your production code will need to do additional error checking, or
        // perhaps use std::vector<BYTE> and do a buf.push_back(val) instead of
        // buf[iBuf++] = val.
        BYTE buf[100];
        unsigned iBuf = 0;

        // Packed arrays start with a UINT16 value indicating the number of
        // elements in the array.
        buf[iBuf++] = (BYTE)cStrings;        // Low byte of the element count
        buf[iBuf++] = (BYTE)(cStrings >> 8); // High byte of the element count

        // Then we need to add the content of each array element.
        for (UINT i = 0; i != cStrings; i++)
        {
            for (LPCSTR pString = pStrings[i]; *pString != 0; pString++)
            {
                buf[iBuf++] = *pString;
            }
            buf[iBuf++] = 0; // nul-terminate
        }

        TraceLoggingWrite(
            g_hProvider,
            "MyEventWithArrayOfStrings",
            TraceLoggingLevel(level),
            TraceLoggingKeyword(keyword),
            TraceLoggingInt32(otherData1),
            TraceLoggingPackedField(
                buf,
                iBuf,
                TlgInANSISTRING | TlgInVcount, // TlgInVcount means this is an array.
                "MyArrayOfStringsFieldName"),
            TraceLoggingInt32(otherData2));
    }

* Write a structure directly as a single entity instead of as a series of
  fields.

  This can be a minor performance optimization in some cases (it can reduce
  per-event CPU and reduce stack usage), since it reduces the number of
  EVENT_DATA_DESCRIPTOR that need to be created and initialized when generating
  the event. Note that structures can only be written directly if the structure
  contains no internal padding or non-blittable fields. If the structure
  contains padding or non-blittable fields, you would need to buffer and repack
  the data before using this technique, in which case it would have been more
  efficient to use the normal methods for logging structures (i.e. using a
  normal TraceLoggingStruct followed by the appropriate TraceLoggingValue for
  each field).

  Overview: provide the data for the struct using TraceLoggingPackedData;
  provide the number of fields and the name of the structure with
  TraceLoggingPackedStruct; provide the names and types of the fields using
  TraceLoggingPackedMetadata.

  Note that while the order of metadata is important and the ordering of data is
  important, the ordering between metadata and data is not important. In the
  example below, the TraceLoggingPackedData macro could appear anywhere between
  otherData1 and otherData2 without changing the result. However, it could not
  appear before otherData1 or after otherData2, since each of those also emit
  data, and the data from TraceLoggingPackedData must appear after otherData1
  and before otherData2.

    TraceLoggingWrite(
        g_hProvider,
        "MyEventWithRect",
        TraceLoggingInt32(otherData1),
        TraceLoggingPackedData(&rect, sizeof(RECT)), // Data for all 4 fields
        TraceLoggingPackedStruct(4, "RectangleFieldName"), // Structure with 4 fields
            TraceLoggingPackedMetadata(TlgInINT32, "left"),
            TraceLoggingPackedMetadata(TlgInINT32, "top"),
            TraceLoggingPackedMetadata(TlgInINT32, "right"),
            TraceLoggingPackedMetadata(TlgInINT32, "bottom"),
        TraceLoggingInt32(otherData2));

* Write an array of structures.

  Overview: Provide the data for the array (the array count and the array
  content) using TraceLoggingPackedData; provide the number of fields and the
  name of the structure with TraceLoggingPackedStructArray; provide the names
  and types of the fields using TraceLoggingPackedMetadata.

  In the example below, the array contains no padding and no non-blittable data
  (i.e. variable-length data, out-of-line data like pointers to strings, etc.),
  so we can provide a pointer directly to the array content. If the array
  contained padding or contained non-blittable data, you would need to allocate
  a buffer and re-pack the data, inlining any non-blittable elements and
  omitting any padding. The example below needs to provide the array element
  count (UINT16) as well as the array content, so it uses
  TraceLoggingPackedData twice.

    TraceLoggingWrite(
        g_hProvider,
        "MyEventWithArrayOfRectangles",
        TraceLoggingInt32(otherData1),
        TraceLoggingPackedData(&cRectangles, sizeof(UINT16)), // Data for the array count
        TraceLoggingPackedData(pRectangles, cRectangles * sizeof(RECT)), // Data for the array content
        TraceLoggingPackedStructArray(4, "RectangleArrayFieldName"), // Structure with 4 fields 
            TraceLoggingPackedMetadata(TlgInINT32, "left"),
            TraceLoggingPackedMetadata(TlgInINT32, "top"),
            TraceLoggingPackedMetadata(TlgInINT32, "right"),
            TraceLoggingPackedMetadata(TlgInINT32, "bottom"),
        TraceLoggingInt32(otherData2));

Notes on serializing data:

- When the decoder receives the event, it sees the event payload as a single
  block of bytes. It does not see any boundaries between chunks of data in the
  payload. If I use TraceLoggingPackedMetadata to add an Int32 field but
  provide 5 bytes of data, the decoder will not be able to correctly decode the
  remaining fields of the event. The developer must take care that the data
  written matches up with the field definitions. On the other hand, this allows
  flexibility in the way the data is encoded. For example, I might write the
  data for several fields using a single TraceLoggingPackedData macro (more
  efficient if the data is already contiguous in memory), or I might use
  multiple TraceLoggingPackedData macros to gather bits of a single field's
  value from multiple locations in memory (more efficient than recopying the
  data to make it contiguous).
- Encoding/decoding behavior only uses the inType. The outType is only a
  formatting hint and may be ignored by the decoder.
- TlgInUNICODESTRING means "nul-terminated UTF-16 wchar_t string".
- TlgInANSISTRING means "nul-terminated MBCS char string".
- TlgInCOUNTEDSTRING means "size-prefixed UTF-16 wchar_t string".
- TlgInCOUNTEDANSISTRING means "size-prefixed MBCS char string".
- TlgInBINARY means "size-prefixed binary data".
- TlgInBINARY, TlgInCOUNTEDSTRING, and TlgInCOUNTEDANSISTRING are encoded as
  a little-endian UINT16 byte-count (not a char-count) followed by the data.
- Form an array by adding the TlgInVcount flag to the inType. For example,
  an inType of TlgInANSISTRING will result in a field that stores a single
  string, but an inType of TlgInANSISTRING|TlgInVcount will result in a field
  that stores an array of strings.
- Arrays are serialized as a little-endian UINT16 element-count followed by the
  elements. The elements in an array are serialized exactly as if they were not
  in an array, even if the element has a variable length. For example, the
  payload corrsponding to the 3-element array { "ABC", "DE", "F" } would be:
  BYTE a[] = { '\3', '\0', 'A', 'B', 'C', '\0', 'D', 'E', '\0', 'F', '\0' };
- Array of TlgInBINARY should not be used because TDH cannot decode it.
  As an alternative, you can create an array of structures and put a field of
  type TlgInBINARY inside it.
*/
#define TraceLoggingPackedField(pbData, cbData, inType, ...)            _TlgArg(, inType, 0,       0, _TlgPF, pbData, cbData, __VA_ARGS__)
#define TraceLoggingPackedFieldEx(pbData, cbData, inType, outType, ...) _TlgArg(, inType, outType, 1, _TlgPF, pbData, cbData, __VA_ARGS__)
#define TraceLoggingPackedMetadata(inType, name, ...)                   _TlgArg(, inType, 0,       0, _TlgPM, 0,     0, name, __VA_ARGS__)
#define TraceLoggingPackedMetadataEx(inType, outType, name, ...)        _TlgArg(, inType, outType, 1, _TlgPM, 0,     0, name, __VA_ARGS__)
#define TraceLoggingPackedStruct(fieldCount, name, ...)                 _TlgArg(, _TlgInSTRUCT,,, _TlgStruct,, fieldCount, name, __VA_ARGS__)
#define TraceLoggingPackedStructArray(fieldCount, name, ...)            _TlgArg(, _TlgInSTRUCT|TlgInVcount,,, _TlgStruct,, fieldCount, name, __VA_ARGS__)
#define TraceLoggingPackedData(pbData, cbData)                          _TlgArg(,,,, _TlgPD, pbData, cbData)

/*
Wrapper macros for binary data referenced by a structure (advanced scenarios).
Usage: TraceLoggingBinaryBuffer(pMyStruct, MyStructType, "name", "description", tags).
Usage: TraceLoggingBinaryBufferEx(pMyStruct, MyStructType, TlgOutTYPE, "name", "description", tags).

These macros support serialization of structures that have fields "Buffer" and
"Length", where the Buffer field points to the data to be transmitted and the
Length field contains the number of bytes to be transmitted.

Use TraceLoggingBinaryBuffer for normal binary data.
Use TraceLoggingBinaryBufferEx to specify a custom value for OutType.

The name, description, and tags parameters are optional.

The pMyStruct parameter must not be NULL.

If provided, the name parameter must be a string literal (not a variable) and
must not contain any '\0' characters. If the name is not provided, the pString
parameter is used to automatically generate a name.

If provided, the description parameter must be a string literal, and will be
included in the PDB.

If provided, the tags parameter must be an integer value. The low 28 bits of
the value will be included in the field's metadata. The semantics of the tags
are defined by the event consumer. During event processing, this tag can be
retrieved from the EVENT_PROPERTY_INFO Tags field.

Requirements:

- The pMyStruct parameter must be a non-null pointer to dataType (or const
  dataType).
- The dataType must have fields "Length" and "Buffer".
  - The Length field must contain the size of the data (in bytes).
  - The Buffer field must contain a pointer to the data. (Buffer may be null if
    Length is 0.)
*/
#define TraceLoggingBinaryBuffer(pString, dataType, ...)            _TlgArg(dataType, TlgInBINARY, 0,       0, _TlgString, pString,, __VA_ARGS__)
#define TraceLoggingBinaryBufferEx(pString, dataType, outType, ...) _TlgArg(dataType, TlgInBINARY, outType, 1, _TlgString, pString,, __VA_ARGS__)

/*
Macro TraceLoggingCustom(pbValue, cbValue, protocol, bSchema, cbSchema, name, ...):
Wrapper macro for an event field packed using a custom serializer.

The pbValue/cbValue are the field payload serialized at runtime
by a serializer from the specified protocol family.

The protocol family may be specified as a value from 1 to 31
with reserved values defined below (TRACELOGGING_PROTOCOL_*).

The bSchema/cbSchema need to be compile-time literals (not variables).

Example:

    BYTE rgValue[] = {...};

    TraceLoggingWrite(
        g_hProvider,
        "MyEventName",
        TraceLoggingCustom(
            rgValue,
            sizeof(rgValue),
            TRACELOGGING_PROTOCOL_MYPROTOCOL,
            ( 0x0, 0x1, 0x2 ), // schema bytes
            3, // number of schema bytes
            "MyCustomField"
            ));
*/
#define TraceLoggingCustom(pbValue, cbValue, protocol, bSchema, cbSchema, ...) \
    _TlgArg(, protocol, bSchema, cbSchema, _TlgCustom, pbValue, cbValue, __VA_ARGS__)

#define TRACELOGGING_PROTOCOL_MICROSOFT_RESERVED0   0
#define TRACELOGGING_PROTOCOL_MICROSOFT_RESERVED1   1
#define TRACELOGGING_PROTOCOL_MICROSOFT_RESERVED2   2
#define TRACELOGGING_PROTOCOL_MICROSOFT_RESERVED3   3
#define TRACELOGGING_PROTOCOL_MICROSOFT_RESERVED4   4


/*
By default, non-pageable TraceLogging inline functions go into the ".text"
segment. This can be overridden if necessary by setting the
TLG_NONPAGED_SEGMENT macro before including <TraceLoggingProvider.h>.
*/
#ifndef TLG_NONPAGED_SEGMENT
#define TLG_NONPAGED_SEGMENT ".text"
#endif

/*
By default, pageable TraceLogging inline functions go into the ".text" segment
(user-mode) or the "PAGE" segment (kernel-mode). This can be overridden if
necessary by setting the TLG_PAGED_SEGMENT macro before including
<TraceLoggingProvider.h>.
*/
#ifndef TLG_PAGED_SEGMENT
#ifdef _ETW_KM_
#define TLG_PAGED_SEGMENT "PAGE"
#else
#define TLG_PAGED_SEGMENT ".text"
#endif
#endif

/*
By default, event metadata is stored in a blob in the ".rdata" segment. This
can be overridden if necessary by setting the TLG_METADATA_SEGMENT_BASE macro
before including <TraceLoggingProvider.h>. If overridden, this value must be
set consistently for all .obj files within the same module.

Note that for kernel-mode code, the metadata usually needs to be in non-paged
memory.
*/
#ifndef TLG_METADATA_SEGMENT_BASE
#define TLG_METADATA_SEGMENT_BASE .rdata
#endif

#pragma endregion

#pragma region Utility macros (for internal use only)

#ifndef _TLG_DEBUG
  #if (DBG || defined(DEBUG) || defined(_DEBUG)) && !defined(NDEBUG)
    #define _TLG_DEBUG 1
  #else // DBG
    #define _TLG_DEBUG 0
  #endif // DBG
#endif // _TLG_DEBUG

#ifndef _TLG_ASSERT
  #if _TLG_DEBUG
    #define _TLG_ASSERT(exp, str) ((void)(!(exp) ? (__annotation(L"Debug", L"AssertFail", L"TraceLogging: " L## #exp L" : " L##str), DbgRaiseAssertionFailure(), 0) : 0))
  #else // _TLG_DEBUG
    #define _TLG_ASSERT(exp, str) ((void)0)
  #endif // _TLG_DEBUG
#endif // _TLG_ASSERT

#ifndef _TLG_CASSERT
  #if defined(__cplusplus) && defined(_MSC_VER) && (_MSC_VER >= 1600)
    #define _TLG_CASSERT(exp, str) static_assert(exp, str)
  #else // __cplusplus
    #define _TLG_CASSERT(exp, str) C_ASSERT(exp)
  #endif // __cplusplus
#endif // _TLG_CASSERT

#define _TLG_FLATTEN(...)       __VA_ARGS__
#define _TLG_PARENTHESIZE(...) (__VA_ARGS__)

#define _TLG_STRINGIZE_imp(x) #x
#define _TLG_STRINGIZE(x) _TLG_STRINGIZE_imp(x)

#define _TLG_PASTE_imp(a, b)  a##b
#define _TLG_PASTE(a, b)      _TLG_PASTE_imp(a, b)

#define _TLG_CAT_imp(a, ...) a##__VA_ARGS__
#define _TLG_CAT(a, ...)     _TLG_CAT_imp(a, __VA_ARGS__)

#define _TLG_SPLIT_imp0(false_val, ...) false_val
#define _TLG_SPLIT_imp1(false_val, ...) __VA_ARGS__
#define _TLG_SPLIT_imp(cond, args) _TLG_PASTE(_TLG_SPLIT_imp, cond) args
#define _TLG_SPLIT(cond, ...) _TLG_SPLIT_imp(cond, (__VA_ARGS__))

#define _TLG_IS_PARENTHESIZED_imp0(...) 1
#define _TLG_IS_PARENTHESIZED_imp1      1,
#define _TLG_IS_PARENTHESIZED_imp_TLG_IS_PARENTHESIZED_imp0 0,
#define _TLG_IS_PARENTHESIZED(...) \
    _TLG_SPLIT(0, _TLG_CAT(_TLG_IS_PARENTHESIZED_imp, _TLG_IS_PARENTHESIZED_imp0 __VA_ARGS__))

#define _TLG_IS_EMPTY(...) _TLG_SPLIT( \
    _TLG_IS_PARENTHESIZED(__VA_ARGS__), \
    _TLG_IS_PARENTHESIZED(_TLG_PARENTHESIZE __VA_ARGS__()), \
    0)

#define _TLG_NARGS_imp2( \
         a1, a2, a3, a4, a5, a6, a7, a8, a9, \
    a10,a11,a12,a13,a14,a15,a16,a17,a18,a19, \
    a20,a21,a22,a23,a24,a25,a26,a27,a28,a29, \
    a30,a31,a32,a33,a34,a35,a36,a37,a38,a39, \
    a40,a41,a42,a43,a44,a45,a46,a47,a48,a49, \
    a50,a51,a52,a53,a54,a55,a56,a57,a58,a59, \
    a60,a61,a62,a63,a64,a65,a66,a67,a68,a69, \
    a70,a71,a72,a73,a74,a75,a76,a77,a78,a79, \
    a80,a81,a82,a83,a84,a85,a86,a87,a88,a89, \
    a90,a91,a92,a93,a94,a95,a96,a97,a98,a99, \
    size, ...) size
#define _TLG_NARGS_imp0(...) _TLG_PASTE(_TLG_NARGS_imp2(__VA_ARGS__, \
    99,98,97,96,95,94,93,92,91,90, \
    89,88,87,86,85,84,83,82,81,80, \
    79,78,77,76,75,74,73,72,71,70, \
    69,68,67,66,65,64,63,62,61,60, \
    59,58,57,56,55,54,53,52,51,50, \
    49,48,47,46,45,44,43,42,41,40, \
    39,38,37,36,35,34,33,32,31,30, \
    29,28,27,26,25,24,23,22,21,20, \
    19,18,17,16,15,14,13,12,11,10, \
     9, 8, 7, 6, 5, 4, 3, 2, 1,),)
#define _TLG_NARGS_imp1() 0
#define _TLG_NARGS_imp(is_empty, args) _TLG_PASTE(_TLG_NARGS_imp, is_empty) args
#define _TLG_NARGS(...) _TLG_NARGS_imp(_TLG_IS_EMPTY(__VA_ARGS__), (__VA_ARGS__))

#define _TLG_FOR_imp0( fn)
#define _TLG_FOR_imp1( fn, arg, ...) _TLG_FOR_impN( 0, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp2( fn, arg, ...) _TLG_FOR_impN( 1, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp3( fn, arg, ...) _TLG_FOR_impN( 2, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp4( fn, arg, ...) _TLG_FOR_impN( 3, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp5( fn, arg, ...) _TLG_FOR_impN( 4, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp6( fn, arg, ...) _TLG_FOR_impN( 5, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp7( fn, arg, ...) _TLG_FOR_impN( 6, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp8( fn, arg, ...) _TLG_FOR_impN( 7, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp9( fn, arg, ...) _TLG_FOR_impN( 8, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp10(fn, arg, ...) _TLG_FOR_impN( 9, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp11(fn, arg, ...) _TLG_FOR_impN(10, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp12(fn, arg, ...) _TLG_FOR_impN(11, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp13(fn, arg, ...) _TLG_FOR_impN(12, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp14(fn, arg, ...) _TLG_FOR_impN(13, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp15(fn, arg, ...) _TLG_FOR_impN(14, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp16(fn, arg, ...) _TLG_FOR_impN(15, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp17(fn, arg, ...) _TLG_FOR_impN(16, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp18(fn, arg, ...) _TLG_FOR_impN(17, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp19(fn, arg, ...) _TLG_FOR_impN(18, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp20(fn, arg, ...) _TLG_FOR_impN(19, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp21(fn, arg, ...) _TLG_FOR_impN(20, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp22(fn, arg, ...) _TLG_FOR_impN(21, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp23(fn, arg, ...) _TLG_FOR_impN(22, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp24(fn, arg, ...) _TLG_FOR_impN(23, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp25(fn, arg, ...) _TLG_FOR_impN(24, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp26(fn, arg, ...) _TLG_FOR_impN(25, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp27(fn, arg, ...) _TLG_FOR_impN(26, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp28(fn, arg, ...) _TLG_FOR_impN(27, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp29(fn, arg, ...) _TLG_FOR_impN(28, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp30(fn, arg, ...) _TLG_FOR_impN(29, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp31(fn, arg, ...) _TLG_FOR_impN(30, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp32(fn, arg, ...) _TLG_FOR_impN(31, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp33(fn, arg, ...) _TLG_FOR_impN(32, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp34(fn, arg, ...) _TLG_FOR_impN(33, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp35(fn, arg, ...) _TLG_FOR_impN(34, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp36(fn, arg, ...) _TLG_FOR_impN(35, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp37(fn, arg, ...) _TLG_FOR_impN(36, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp38(fn, arg, ...) _TLG_FOR_impN(37, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp39(fn, arg, ...) _TLG_FOR_impN(38, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp40(fn, arg, ...) _TLG_FOR_impN(39, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp41(fn, arg, ...) _TLG_FOR_impN(40, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp42(fn, arg, ...) _TLG_FOR_impN(41, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp43(fn, arg, ...) _TLG_FOR_impN(42, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp44(fn, arg, ...) _TLG_FOR_impN(43, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp45(fn, arg, ...) _TLG_FOR_impN(44, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp46(fn, arg, ...) _TLG_FOR_impN(45, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp47(fn, arg, ...) _TLG_FOR_impN(46, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp48(fn, arg, ...) _TLG_FOR_impN(47, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp49(fn, arg, ...) _TLG_FOR_impN(48, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp50(fn, arg, ...) _TLG_FOR_impN(49, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp51(fn, arg, ...) _TLG_FOR_impN(50, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp52(fn, arg, ...) _TLG_FOR_impN(51, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp53(fn, arg, ...) _TLG_FOR_impN(52, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp54(fn, arg, ...) _TLG_FOR_impN(53, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp55(fn, arg, ...) _TLG_FOR_impN(54, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp56(fn, arg, ...) _TLG_FOR_impN(55, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp57(fn, arg, ...) _TLG_FOR_impN(56, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp58(fn, arg, ...) _TLG_FOR_impN(57, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp59(fn, arg, ...) _TLG_FOR_impN(58, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp60(fn, arg, ...) _TLG_FOR_impN(59, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp61(fn, arg, ...) _TLG_FOR_impN(60, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp62(fn, arg, ...) _TLG_FOR_impN(61, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp63(fn, arg, ...) _TLG_FOR_impN(62, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp64(fn, arg, ...) _TLG_FOR_impN(63, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp65(fn, arg, ...) _TLG_FOR_impN(64, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp66(fn, arg, ...) _TLG_FOR_impN(65, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp67(fn, arg, ...) _TLG_FOR_impN(66, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp68(fn, arg, ...) _TLG_FOR_impN(67, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp69(fn, arg, ...) _TLG_FOR_impN(68, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp70(fn, arg, ...) _TLG_FOR_impN(69, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp71(fn, arg, ...) _TLG_FOR_impN(70, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp72(fn, arg, ...) _TLG_FOR_impN(71, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp73(fn, arg, ...) _TLG_FOR_impN(72, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp74(fn, arg, ...) _TLG_FOR_impN(73, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp75(fn, arg, ...) _TLG_FOR_impN(74, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp76(fn, arg, ...) _TLG_FOR_impN(75, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp77(fn, arg, ...) _TLG_FOR_impN(76, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp78(fn, arg, ...) _TLG_FOR_impN(77, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp79(fn, arg, ...) _TLG_FOR_impN(78, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp80(fn, arg, ...) _TLG_FOR_impN(79, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp81(fn, arg, ...) _TLG_FOR_impN(80, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp82(fn, arg, ...) _TLG_FOR_impN(81, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp83(fn, arg, ...) _TLG_FOR_impN(82, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp84(fn, arg, ...) _TLG_FOR_impN(83, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp85(fn, arg, ...) _TLG_FOR_impN(84, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp86(fn, arg, ...) _TLG_FOR_impN(85, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp87(fn, arg, ...) _TLG_FOR_impN(86, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp88(fn, arg, ...) _TLG_FOR_impN(87, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp89(fn, arg, ...) _TLG_FOR_impN(88, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp90(fn, arg, ...) _TLG_FOR_impN(89, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp91(fn, arg, ...) _TLG_FOR_impN(90, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp92(fn, arg, ...) _TLG_FOR_impN(91, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp93(fn, arg, ...) _TLG_FOR_impN(92, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp94(fn, arg, ...) _TLG_FOR_impN(93, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp95(fn, arg, ...) _TLG_FOR_impN(94, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp96(fn, arg, ...) _TLG_FOR_impN(95, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp97(fn, arg, ...) _TLG_FOR_impN(96, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp98(fn, arg, ...) _TLG_FOR_impN(97, fn, arg, fn, __VA_ARGS__)
#define _TLG_FOR_imp99(fn, arg, ...) _TLG_FOR_impN(98, fn, arg, fn, __VA_ARGS__)

#define _TLG_FOR_impN(n, fn, arg, ...) \
    fn(n, arg) \
    _TLG_PASTE(_TLG_FOR_imp, n) _TLG_FLATTEN((__VA_ARGS__))

#define _TLG_FOR_imp(n, fnAndArgs)  _TLG_PASTE(_TLG_FOR_imp, n) fnAndArgs
#define _TLG_FOREACH(fn, ...) _TLG_FOR_imp(_TLG_NARGS(__VA_ARGS__), (fn, __VA_ARGS__))

#pragma endregion

#pragma region Declarations

/*
Core field types and flags.
*/
enum TlgIn_t
{
    TlgInNULL,
    TlgInUNICODESTRING,
    TlgInANSISTRING,
    TlgInINT8,
    TlgInUINT8,
    TlgInINT16,
    TlgInUINT16,
    TlgInINT32,
    TlgInUINT32,
    TlgInINT64,
    TlgInUINT64,
    TlgInFLOAT,
    TlgInDOUBLE,
    TlgInBOOL32,
    TlgInBINARY,
    TlgInGUID,
    _TlgInPOINTER_unsupported,
    TlgInFILETIME,
    TlgInSYSTEMTIME,
    TlgInSID,
    TlgInHEXINT32,
    TlgInHEXINT64,

    // Note: TlgInCOUNTEDSTRING != TDH_INTYPE_COUNTEDSTRING.
    // Semantics are the same, but enum value is different.
    TlgInCOUNTEDSTRING,

    // Note: TlgInCOUNTEDANSISTRING != TDH_INTYPE_COUNTEDANSISTRING.
    // Semantics are the same, but enum value is different.
    TlgInCOUNTEDANSISTRING,

    _TlgInSTRUCT,
    // New values go above this line, but _TlgInMax must not exceed 32.
    _TlgInMax,
    TlgInINTPTR = sizeof(void*) == 8 ? TlgInINT64 : TlgInINT32,
    TlgInUINTPTR = sizeof(void*) == 8 ? TlgInUINT64 : TlgInUINT32,
    TlgInPOINTER = sizeof(void*) == 8 ? TlgInHEXINT64 : TlgInHEXINT32,
    _TlgInCcount = 32, // Indicates that field metadata contains a const-array-count tag.
    TlgInVcount = 64,  // Indicates that field data contains variable-array-count tag.
    _TlgInChain = 128, // Indicates that field metadata contains a TlgOut tag.
    _TlgInCustom = TlgInVcount | _TlgInCcount, // Indicates that the field uses a custom serializer.
    _TlgInTypeMask = 31,
    _TlgInCountMask = TlgInVcount | _TlgInCcount,
    _TlgInFlagMask = _TlgInChain | TlgInVcount | _TlgInCcount
};
_TLG_CASSERT(_TlgInMax <= _TlgInCcount, "Too many TlgIn_t values.");
#define _TLG_AssertValidPackedMetadataInType(in_type) \
    _TLG_CASSERT( \
        ((in_type)&_TlgInTypeMask) != _TlgInPOINTER_unsupported && \
        ((in_type)&_TlgInTypeMask) != _TlgInSTRUCT && \
        ((in_type)|_TlgInTypeMask|TlgInVcount) == (_TlgInTypeMask|TlgInVcount) && \
        (in_type) != (TlgInBINARY|TlgInVcount), \
        "Invalid packed metadata in_type: " #in_type)
#ifdef __cplusplus
#define _TLG_AssertValidPackedMetadataInTypeCppOnly(in_type) _TLG_AssertValidPackedMetadataInType(in_type);
#else
#define _TLG_AssertValidPackedMetadataInTypeCppOnly(in_type)
#endif

/*
Extended field formatting and flags.
*/
enum TlgOut_t
{
    TlgOutNULL,
    TlgOutNOPRINT,
    TlgOutSTRING,
    TlgOutBOOLEAN, // Used with InType = uint8
    TlgOutHEX, // Used with InType = uint8, uint16, uint32, uint64, binary
    TlgOutPID, // Used with InType = uint32
    TlgOutTID, // Used with InType = uint32
    TlgOutPORT, // Used with InType = uint16, encoded as big-endian
    TlgOutIPV4, // Used with InType = uint32
    TlgOutIPV6, // Used with InType = binary
    TlgOutSOCKETADDRESS, // Used with InType = binary
    TlgOutXML, // Used with InType = unicodestring, ansistring (counted and nul-terminated)
    TlgOutJSON, // Used with InType = unicodestring, ansistring (counted and nul-terminated)
    TlgOutWIN32ERROR, // Used with InType = uint32
    TlgOutNTSTATUS, // Used with InType = uint32
    TlgOutHRESULT, // Used with InType = int32
    TlgOutFILETIME,
    TlgOutSIGNED,
    TlgOutUNSIGNED,
    // RS1+: Values 32 and higher are the same as the corresponding TDH_OUTTYPE values.
    TlgOutUTF8 = 35, // Used with InType = ansistring (counted and nul-terminated)
    TlgOutPKCS7_WITH_TYPE_INFO = 36, // Used with InType = binary
    _TlgOutMax,
    _TlgOutChain = 128,
    _TlgOutTypeMask = _TlgOutChain - 1
};
_TLG_CASSERT(_TlgOutMax <= _TlgOutChain, "Too many TlgOut_t values.");

/*
This comment defines the TraceLogging encoding format.
TraceLogging events are sent to ETW as described in this section.

*** General concepts:

- Each event has metadata and data.
- The metadata describes invariant characteristics of the event -- information
  that is the same for each instance of the event.
- The data describes variable characteristics of the event -- information that
  is different each time the event is written.
- The metadata includes provider characteristics, event characteristics, and
  field characteristics.
- Each provider has a name and may optionally have other characteristics.
- Each event has a name and may optionally have fields and tags.
- Each field has a name, a type, and may optionally have tags.
- Field types can be considered as a combination of InType, OutType, and arity.
  - InType defines how a field size is determined, and also defines a default
    formatting behavior that will be used if no OutType is given. For example,
    TlgInINT32 indicates that field size is 4 and that if no OutType is
    given, the default formatting should be "signed decimal".
  - If provided, OutType provides additional formatting information. For
    example, TlgOutHEX would set formatting to "unsigned hexadecimal".
  - If provided, arity indicates whether the field is a scalar (one value),
    a fixed-length array (the same number of values for all events), or a
    variable-length array (different events may have a different number of
    values).
- TraceLogging supports grouping fields into structures.
  - Structures can contain other structures (i.e. nesting is supported).
  - Structures can contain arrays, and array-of-structure is supported.
- Events and fields can optionally set tags. Tags is a 28-bit metadata value
  with user-defined semantics. For example, event tag 0x01000000 might be
  defined as indicating a high-priority event, or field tag 0x02000000 might be
  defined as indicating a field that contains potentially-private information.

*** How to initialize a TraceLogging provider:

- Call EventRegister.
- Call EventSetInformation to set your provider's characteristics and enable
  the use of the Reserved field in EVENT_DATA_DESCRIPTOR.

Example:

EventRegister(&ProviderId, NULL, NULL, &RegHandle);
EventSetInformation(RegHandle, EventProviderSetTraits, &ProviderMetadata, ProviderMetadata.Size);

*** How to send a TraceLogging event to ETW:

- Determine N = the number of EVENT_DATA_DESCRIPTORs you need for your data.
- Allocate N + 2 EVENT_DATA_DESCRIPTORs.
- Use the first EVENT_DATA_DESCRIPTOR for provider metadata.
- Use the second EVENT_DATA_DESCRIPTOR for event metadata.
- Use the remaining EVENT_DATA_DESCRIPTORs for your data.

Example:

EVENT_DATA_DESCRIPTOR DataDescriptors[N + 2];
DataDescriptors[0].Ptr = (ULONGLONG)(ULONG_PTR)&ProviderMetadata; // Defined below
DataDescriptors[0].Size = ProviderMetadata.Size;
DataDescriptors[0].Reserved = EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA;
DataDescriptors[1].Ptr = (ULONGLONG)(ULONG_PTR)&EventMetadata; // Defined below
DataDescriptors[1].Size = EventMetadata.Size;
DataDescriptors[1].Reserved = EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA;
// ...
// Use EventDataDescCreate(...) to populate the remaining N DataDescriptors
// with the data for your event, e.g.
// EventDataDescCreate(&DataDescriptors[2], &myData, sizeof(myData));
// Note that the data layout in the remaining N DataDescriptors must match up
// with the fields defined in EventMetadata.
// ...
EventWrite(RegHandle, &EventDescriptor, N + 2, DataDescriptors);

*** How to encode metadata:

// ProviderMetadata:
// This pseudo-structure is the layout of the "provider traits" referenced by
// EventProviderSetTraits, EtwGetTraitFromProviderTraits,
// EVENT_HEADER_EXT_TYPE_PROV_TRAITS, and
// EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA.
// It provides the provider's name, plus other optional information such as group ID.
struct ProviderMetadata // Variable-length pseudo-structure, byte-aligned, tightly-packed.
{
    UINT16 Size; // = sizeof(ProviderMetadata)
    char Name[]; // UTF-8 nul-terminated provider name
    ProviderMetadataChunk AdditionalProviderInfo[]; // 0 or more chunks of data.
};

// ProviderMetadataChunk:
struct ProviderMetadataChunk // Variable-length pseudo-structure, byte-aligned, tightly-packed.
{
    UINT16 Size; // = sizeof(ProviderMetadataChunk)
    UINT8 Type; // Value from the ETW_PROVIDER_TRAIT_TYPE enumeration.
    AnyType Data;
};

// EventMetadata:
// This pseudo-structure is the layout of the "event metadata" referenced by
// EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA.
// It provides the event's name, event tags, and field information.
struct EventMetadata // Variable-length pseudo-structure, byte-aligned, tightly-packed.
{
    UINT16 Size; // = sizeof(EventMetadata)
    UINT8 Extension[]; // 1 or more bytes. Read until you hit a byte with high bit unset.
    char Name[]; // UTF-8 nul-terminated event name
    FieldMetadata Fields[]; // 0 or more field definitions.
};

// FieldMetadata:
struct FieldMetadata // Variable-length pseudo-structure, byte-aligned, tightly-packed.
{
    char Name[]; // UTF-8 nul-terminated field name
    UINT8 InType; // Values from the TlgIn enumeration.
    UINT8 OutType; // TlgOut enumeration. Only present if (InType & 128) == 128.
    UINT8 Extension[]; // Only present if OutType is present and (OutType & 128) == 128. Read until you hit a byte with high bit unset.
    UINT16 ValueCount;  // Only present if (InType & CountMask) == Ccount.
    UINT16 TypeInfoSize; // Only present if (InType & CountMask) == Custom.
    char TypeInfo[TypeInfoSize]; // Only present if (InType & CountMask) == Custom.
};

Each field has InType and OutType. The InType controls how the field's size is
determined and also implies a default formatting behavior that should be used
if OutType is 0 or not present. For example, TlgInINT32 indicates that the
field's size is 4 and that if no OutType is given (or if the decoder does not
understand the given OutType), the field formatting should be "signed decimal".

Some InType values have special behaviors or limitations:

- TlgInNULL: This means the field has no data (size = 0). Array of NULL is
  illegal. In addition, many decoders do not correctly support NULL fields.
- TlgInBINARY: Array of BINARY should not be used. Array of BINARY is legal,
  but TDH cannot decode a field with type array of BINARY.
- _TlgInPOINTER_unsupported: Do not use. This value is reserved because the
  corresponding TDH value is TDH_INTYPE_POINTER. TraceLogging does not directly
  support a POINTER type. Instead, TraceLogging defines TlgInPOINTER as
  TlgInHEXINT32 for 32-bit binaries and defines TlgInPOINTER as TlgInHEXINT64
  for 64-bit binaries.
- A struct has no data for itself, but it groups the following N logical fields
  together into a single logical field. The value N is encoded in the OutType.
  Arrays of struct are allowed, and structs can contain other structs (or
  arrays of structs).

The EventMetadata and FieldMetadata structures contain an Extension field. The
size of the Extension field is variable and unlimited. The decoder should
consume bytes until it has consumed a byte with the high bit set to 0.

At present, only the first 4 bytes of Extension are defined (the remaining
bytes of the Extension field are reserved for future use and should be
ignored). The first 4 bytes (if present) each contribute 7 bits of "Tag" data
to the event or field, for up to 28 bits of "Tag" data. Tags are encoded
high-bits first. For example, if the first byte of Extension is 0x12, that
means the Extension field is 1 byte in length (high bit is unset), and value of
the Tag data is 0x02400000 (0x12 low 7 bits are 0010010, used as bits 21..27 of
the Tag data).

*** Encoding data:

Each scalar field's data is appended end-to-end with no alignment or padding.

A fixed-length array is encoded by appending the data for N values end-to-end
with no alignment or padding, where N is the number of values as encoded in
the field's metadata. This rule applies even if the data is variable-length or
complex (e.g. it applies even if the field is a structure). Note that a length
of 0 for a fixed-length array can cause problems with some decoders.

A variable-length array is encoded as a UINT16 containing the number of values
followed by the data for those values, end-to-end.

Most value types are fixed size (e.g. sizeof(INT32) == 4), but the following
value types are variable-size:

- SID: size is 8 + 4*SubAuthorityCount. Note that SID_MAX_SUB_AUTHORITIES==15,
  so events with larger SubAuthorityCount should be considered corrupt.
- ANSISTRING: size is strlen(value) + 1. (Use strnlen for safe parsing.)
- UNICODESTRING: size is wcslen(value)*2 + 2. (Use wcsnlen for safe parsing.)
- BINARY, COUNTEDSTRING, COUNTEDANSISTRING: first two bytes are UINT16
  bytecount.
*/

/*
The following information is not part of the TraceLogging protocol - it
describes how the information needed by this header is stored in memory.
The following information is internal implementation information, and may
change in future revisions of this header.
*/

/*
Type codes for metadata blobs in the binary.
*/
enum _TlgBlob_t
{
    _TlgBlobNone,
    _TlgBlobEnd,
    _TlgBlobProvider,
    _TlgBlobEvent3,
    _TlgBlobProvider3,
    _TlgBlobEvent2,
    _TlgBlobMax
};

enum _TlgFlags_t
{
    _TlgFlagsNone = 0,
    _TlgFlagsPtr64 = 1
};

enum _TlgOptions_t
{
    _TlgOptionNone = 0,
    _TlgOptionGroup = 1 // = EtwProviderTraitTypeGroup
};

/*
A module's ETW metadata consists of a _TraceLoggingMetadata_t (8-byte aligned)
followed by metadata blobs (1-byte aligned). Extra zero-byte padding may be
present before or after blobs and must be ignored. (The extra padding is most
obvious in unoptimized builds.)
*/
struct _TraceLoggingMetadata_t
{
    UINT32 Signature; // = _TlgSigVal = "ETW0"
    UINT16 Size; // = sizeof(_TraceLoggingMetadata_t)
    UINT8 Version; // = _TlgVerVal
    UINT8 Flags; // = _TlgFlagsVal
    UINT64 Magic; // = _TlgMagicVal
};

#include <pshpack1.h> // Tight packing for metadata.

/*
This is the data stored in the binary to describe a TraceLogging provider.
This structure may change in future revisions of this header.
The current design has the structure start with information needed by the
functions in this header (Type, ProviderId), and the structure ends with
information that will be passed on to ETW (provider traits).
Variable-length structure, byte-aligned, tightly-packed.
Actual size is: sizeof(Type) + _TLG_PROVIDER_METADATA_PREAMBLE + RemainingSize.
*/
struct _TlgProviderMetadata_t
{
    UINT8 Type; // = _TlgBlobProvider3
    GUID ProviderId;
#define _TLG_PROVIDER_METADATA_PREAMBLE 16 // = sizeof(ProviderId)
    UINT16 RemainingSize; // = sizeof(RemainingSize + ProviderName)
    /*
    char ProviderName[sizeof("providerName")]; // UTF-8 nul-terminated provider name
    for each additional chunk of metadata {
        UINT16 ChunkSize;
        UINT8 ChunkType;
        UINT8 ChunkData[ChunkSize - 3];
    }
    */
};

/*
This is the data stored in the binary to describe a TraceLogging event.
This structure may change in future revisions of this header.
The current design has the structure start with information needed by the
functions in this header (Type, Channel, etc.), and the structure ends with
information that will be passed on to ETW (event traits).
Variable-length structure, byte-aligned, tightly-packed.
Actual size is: sizeof(Type) + _TLG_EVENT_METADATA_PREAMBLE + RemainingSize
*/
struct _TlgEventMetadata_t
{
    UINT8 Type; // = _TlgBlobEvent3
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    ULONGLONG Keyword;
#define _TLG_EVENT_METADATA_PREAMBLE 11 // sizeof(Channel + Level + Opcode + Keyword)
    UINT16 RemainingSize; // = sizeof(RemainingSize + Tags + EventName + Fields)
    /*
    UINT8 Tags[]; // 1 or more bytes. Read until you hit a byte with high bit unset.
    char EventName[sizeof("eventName")]; // UTF-8 nul-terminated event name
    for each field {
        char FieldName[sizeof("fieldName")]; // UTF-8 nul-terminated field name
        UINT8 InType; // TlgIn_t
        UINT8 OutType; // TlgOut_t, only present if (InType & Chain) == Chain.
        UINT8 Tags[]; // Only present if OutType is present and (OutType & Chain) == Chain. Read until you hit a byte with high bit unset.
        UINT16 ValueCount;  // Only present if (InType & CountMask) == Ccount.
        UINT16 TypeInfoSize; // Only present if (InType & CountMask) == Custom.
        char TypeInfo[TypeInfoSize]; // Only present if (InType & CountMask) == Custom.
    }
    */
};

#include <poppack.h>
#include <pshpack8.h> // Default packing for other structures.

/*
Data for TraceLoggingHProvider.
Note: this structure should be considered as opaque and may change. Use the
provided accessor functions instead of reading members directly.
*/
struct _TlgProvider_t
{
    UINT32 LevelPlus1;
    UINT16 const UNALIGNED* ProviderMetadataPtr; // Points to the RemainingSize member of provider metadata.
    ULONGLONG KeywordAny;
    ULONGLONG KeywordAll;
    REGHANDLE RegHandle;
    TLG_PENABLECALLBACK EnableCallback;
    PVOID CallbackContext;
    void (__cdecl *AnnotationFunc)();
};

/*
Tag type. Has no effect on code. Can be used for detection of wrapper type for
a provider (such as TraceLoggingActivity). The tag indicates that the first
template parameter of the wrapper type is a reference to the provider handle
variable.

Example:
template<
    TraceLoggingHProvider const& provider,
    typename TlgReflectorTag = _TlgReflectorTag_Param0IsHProvider>
class Activity
{
    ...
};
*/
struct _TlgReflectorTag_Param0IsHProvider;

/*
Tag type. Has no effect on code. Can be used for detection of a wrapper type
for a provider (such as TraceLoggingActivity). The tag indicates that the first
template parameter of the wrapper type is a type T that wraps a provider, such
that T::Provider() returns an HProvider.

Example:
template<
    typename ProviderType,
    typename TlgReflectorTag = _TlgReflectorTag_Param0IsHProvider>
class Activity
{
    static TraceLoggingHProvider Provider()
    {
        return ProviderType::Provider();
    }
};
*/
struct _TlgReflectorTag_Param0IsProviderType;

#include <poppack.h>

#pragma endregion

#pragma region Helper functions

#pragma code_seg(push)

/*
The following macros can be set to affect the behavior of this header.
If used, the macros must be set before including the header. Most of the
macros are simple: if set, the macro will be used instead of invoking the
corresponding API; otherwise, the API will be invoked. For example, if the
TLG_EVENT_WRITE_TRANSFER macro is defined, then TraceLoggingProvider.h will
invoke TLG_EVENT_WRITE_TRANSFER(...) in places where it would have otherwise
invoked EventWriteTransfer(...) or EtwWriteTransfer(...).

The TLG_HAVE_EVENT_SET_INFORMATION is a bit more complex. It is used to
control how the TraceLoggingSetInformation function should behave.
TraceLoggingSetInformation is complex because the corresponding API
(EventSetInformation or EtwSetInformation) is not available on all versions of
Windows supported by TraceLoggingProvider.h. While TraceLoggingProvider.h
works correctly without the SetInformation API, it works better when the
SetInformation API is present. If TLG_HAVE_EVENT_SET_INFORMATION is left
unset, TraceLoggingSetInformation will use a default behavior that works for
most situations.

If TLG_HAVE_EVENT_SET_INFORMATION is undefined but TLG_EVENT_SET_INFORMATION
is defined, TraceLoggingSetInformation(...) will invoke
TLG_EVENT_SET_INFORMATION(...).

If both TLG_HAVE_EVENT_SET_INFORMATION and TLG_EVENT_SET_INFORMATION are
undefined, TraceLoggingSetInformation(...) behavior will depend on the Windows
version targeted at compile time, as determined by WINVER (user-mode) or
NTDDI_VERSION (kernel-mode). If the EventSetInformation API is available on
the targeted version of Windows, it will be called directly. Otherwise,
TraceLoggingSetInformation will use GetProcAddress (user-mode) or
MmGetSystemRoutineAddress (kernel-mode) in an attempt to locate the API.

If TLG_HAVE_EVENT_SET_INFORMATION is set to 0, TraceLoggingSetInformation(...)
will no nothing and will always return a NOT_SUPPORTED error.

If TLG_HAVE_EVENT_SET_INFORMATION is set to 1 and the
TLG_EVENT_SET_INFORMATION macro is defined,
TraceLoggingSetInformation(...) will invoke TLG_EVENT_SET_INFORMATION(...).

If TLG_HAVE_EVENT_SET_INFORMATION is set to 1 and the
TLG_EVENT_SET_INFORMATION macro is not defined,
TraceLoggingSetInformation(...) will directly invoke EventSetInformation(...)
for user-mode or EtwSetInformation(...) for kernel-mode.

If TLG_HAVE_EVENT_SET_INFORMATION is set to 2, TraceLoggingSetInformation(...)
will attempt to load EventSetInformation via GetProcAddress (user-mode) or
will attempt to load EtwSetInformation via MmGetSystemRoutineAddress
(kernel-mode). If the load is successful, it will be invoked. Otherwise,
TraceLoggingSetInformation will return a NOT_SUPPORTED error.
*/
#ifdef _ETW_KM_
#ifndef   TLG_PAGED_CODE
  #define TLG_PAGED_CODE()          PAGED_CODE()
#endif
#ifndef   TLG_EVENT_REGISTER
  #define TLG_EVENT_REGISTER        EtwRegister
#endif
#ifndef   TLG_EVENT_UNREGISTER
  #define TLG_EVENT_UNREGISTER      EtwUnregister
#endif
#ifndef   TLG_EVENT_WRITE_TRANSFER
  #define TLG_EVENT_WRITE_TRANSFER  EtwWriteTransfer
#endif
#ifndef   TLG_EVENT_WRITE_EX
  #define TLG_EVENT_WRITE_EX        EtwWriteEx
#endif
#ifndef   TLG_EVENT_SET_INFORMATION
  #define TLG_EVENT_SET_INFORMATION EtwSetInformation
  #ifndef   TLG_HAVE_EVENT_SET_INFORMATION
    #if NTDDI_VERSION < 0x06040000
      #define TLG_HAVE_EVENT_SET_INFORMATION 2 // Find "EtwSetInformation" via MmGetSystemRoutineAddress
    #else
      #define TLG_HAVE_EVENT_SET_INFORMATION 1 // Directly invoke TLG_EVENT_SET_INFORMATION(...)
    #endif
  #endif
#elif !defined(TLG_HAVE_EVENT_SET_INFORMATION)
  #define TLG_HAVE_EVENT_SET_INFORMATION 1 // Directly invoke TLG_EVENT_SET_INFORMATION(...)
#endif
#else // _ETW_KM_
#ifndef   TLG_PAGED_CODE
  #define TLG_PAGED_CODE()          ((void)0)
#endif
#ifndef   TLG_EVENT_REGISTER
  #define TLG_EVENT_REGISTER        EventRegister
#endif
#ifndef   TLG_EVENT_UNREGISTER
  #define TLG_EVENT_UNREGISTER      EventUnregister
#endif
#ifndef   TLG_EVENT_WRITE_TRANSFER
  #define TLG_EVENT_WRITE_TRANSFER  EventWriteTransfer
#endif
#ifndef   TLG_EVENT_WRITE_EX
  #define TLG_EVENT_WRITE_EX        EventWriteEx
#endif
#ifndef   TLG_EVENT_SET_INFORMATION
  #define TLG_EVENT_SET_INFORMATION EventSetInformation
  #ifndef TLG_HAVE_EVENT_SET_INFORMATION
    #if WINVER < 0x0602 || !defined(EVENT_FILTER_TYPE_SCHEMATIZED)
      #define TLG_HAVE_EVENT_SET_INFORMATION 2 // Find "EventSetInformation" via GetModuleHandleExW/GetProcAddress
    #else
      #define TLG_HAVE_EVENT_SET_INFORMATION 1 // Directly invoke TLG_EVENT_SET_INFORMATION(...)
    #endif
  #endif
#elif !defined(TLG_HAVE_EVENT_SET_INFORMATION)
  #define TLG_HAVE_EVENT_SET_INFORMATION 1 // Directly invoke TLG_EVENT_SET_INFORMATION(...)
#endif
#endif // _ETW_KM_

#define _TlgSigVal   '0WTE' // "ETW0"
#define _TlgVerVal   0
#define _TlgFlagsVal (sizeof(void*)==8?1:0)
#define _TlgSkipVal  2
#define _TlgMagicVal 0xBB8A052B88040E86

#define _TlgSegMetadataBegin     _TLG_STRINGIZE(_TLG_PASTE(TLG_METADATA_SEGMENT_BASE, $zETW0))
#define _TlgSegMetadataEvents    _TLG_STRINGIZE(_TLG_PASTE(TLG_METADATA_SEGMENT_BASE, $zETW1))
#define _TlgSegMetadataProviders _TLG_STRINGIZE(_TLG_PASTE(TLG_METADATA_SEGMENT_BASE, $zETW2))
#define _TlgSegMetadataEnd       _TLG_STRINGIZE(_TLG_PASTE(TLG_METADATA_SEGMENT_BASE, $zETW9))

#pragma section(_TlgSegMetadataBegin, read)
#pragma section(_TlgSegMetadataEvents, read)
#pragma section(_TlgSegMetadataProviders, read)
#pragma section(_TlgSegMetadataEnd, read)

#pragma code_seg(TLG_PAGED_SEGMENT)

_IRQL_requires_max_(PASSIVE_LEVEL)
_IRQL_requires_same_
__inline void NTAPI _TlgEnableCallback(
    _In_ LPCGUID pSourceId,
    _In_ ULONG callbackType,
    _In_ UCHAR level,
    _In_ ULONGLONG keywordAny,
    _In_ ULONGLONG keywordAll,
    _In_opt_ PEVENT_FILTER_DESCRIPTOR pFilterData,
    _Inout_opt_ PVOID pCallbackContext)
{
    TLG_PAGED_CODE();
    if (pCallbackContext)
    {
        struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)pCallbackContext;
        switch (callbackType)
        {
        case 0: // EVENT_CONTROL_CODE_DISABLE_PROVIDER
            pProvider->LevelPlus1 = 0;
            break;
        case 1: // EVENT_CONTROL_CODE_ENABLE_PROVIDER
            pProvider->LevelPlus1 = level != 0 ? (UINT32)level + 1u : 256u;
            pProvider->KeywordAny = keywordAny;
            pProvider->KeywordAll = keywordAll;
            break;
        }

        if (pProvider->EnableCallback)
        {
            pProvider->EnableCallback(
                pSourceId,
                callbackType,
                level,
                keywordAny,
                keywordAll,
                pFilterData,
                pProvider->CallbackContext);
        }
    }
}

_IRQL_requires_max_(PASSIVE_LEVEL)
__inline void TraceLoggingUnregister(TraceLoggingHProvider _Inout_ hProvider)
{
    struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)hProvider;
    TLG_PAGED_CODE();
    TLG_EVENT_UNREGISTER(hProvider->RegHandle);
    pProvider->RegHandle = 0;
    pProvider->LevelPlus1 = 0;
}

_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingRegister(
    TraceLoggingHProvider _Inout_ hProvider)
{
    TLG_PAGED_CODE();
    return TraceLoggingRegisterEx(hProvider, NULL, NULL);
}

_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingRegisterEx(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_opt_ TLG_PENABLECALLBACK pEnableCallback,
    _In_opt_ PVOID pCallbackContext)
{
    TLG_STATUS status;
    struct _TlgProvider_t* pProvider = (struct _TlgProvider_t*)hProvider;
    GUID const providerId = TraceLoggingProviderId(pProvider);
    TLG_PAGED_CODE();
    _TLG_ASSERT(
        pProvider->RegHandle == 0,
        "TraceLoggingRegister called with already-registered handle");
    pProvider->EnableCallback = pEnableCallback;
    pProvider->CallbackContext = pCallbackContext;
    status = TLG_EVENT_REGISTER(
        &providerId,
        &_TlgEnableCallback,
        pProvider,
        &pProvider->RegHandle);
    if (status != 0)
    {
#ifndef _ETW_KM_
        status = HRESULT_FROM_WIN32(status);
#endif
    }
    else
    {
        UINT16 const cbMetadata = *pProvider->ProviderMetadataPtr;
        (void)TraceLoggingSetInformation(
            pProvider,
            (enum _EVENT_INFO_CLASS)2, // EventProviderSetTraits
            (PVOID)pProvider->ProviderMetadataPtr,
            cbMetadata);
    }
    return status;
}

_IRQL_requires_max_(PASSIVE_LEVEL)
__inline TLG_STATUS TraceLoggingSetInformation(
    TraceLoggingHProvider _Inout_ hProvider,
    _In_ enum _EVENT_INFO_CLASS informationClass,
    _In_reads_bytes_opt_(cbInformation) PVOID pvInformation,
    _In_ ULONG cbInformation)
{
    TLG_STATUS status;

#if TLG_HAVE_EVENT_SET_INFORMATION == 1

    TLG_PAGED_CODE();
#pragma warning(suppress: 6387) // It's ok for pvInformation to be null if cbInformation is 0.
    status = TLG_EVENT_SET_INFORMATION(
        hProvider->RegHandle,
        informationClass,
        pvInformation,
        cbInformation);
#ifndef _ETW_KM_
    status = HRESULT_FROM_WIN32(status);
#endif

#elif TLG_HAVE_EVENT_SET_INFORMATION == 2

#ifdef _ETW_KM_
    typedef NTSTATUS(NTAPI* PFEtwSetInformation)(
        _In_ REGHANDLE RegHandle,
        _In_ enum _EVENT_INFO_CLASS InformationClass,
        _In_reads_bytes_opt_(InformationLength) PVOID EventInformation,
        _In_ ULONG InformationLength);
    static UNICODE_STRING strEtwSetInformation = {
        sizeof(L"EtwSetInformation") - 2,
        sizeof(L"EtwSetInformation") - 2,
        L"EtwSetInformation"
    };
    PFEtwSetInformation pfEtwSetInformation;
    TLG_PAGED_CODE();
    status = STATUS_NOT_SUPPORTED;
#pragma warning(push)
#pragma warning(disable: 4055) // Allow the cast from a PVOID to a PFN
    pfEtwSetInformation = (PFEtwSetInformation)MmGetSystemRoutineAddress(&strEtwSetInformation);
#pragma warning(pop)
    if (pfEtwSetInformation)
    {
        status = pfEtwSetInformation(
            hProvider->RegHandle,
            informationClass,
            pvInformation,
            cbInformation);
    }
#else // _ETW_KM_
    HMODULE hEventing;
    status = ERROR_NOT_SUPPORTED;
    if (GetModuleHandleExW(0, L"api-ms-win-eventing-provider-l1-1-0", &hEventing) ||
        GetModuleHandleExW(0, L"advapi32", &hEventing))
    {
        typedef ULONG(WINAPI* PFEventSetInformation)(
            _In_ REGHANDLE RegHandle,
            _In_ enum _EVENT_INFO_CLASS InformationClass,
            _In_reads_bytes_opt_(InformationLength) PVOID EventInformation,
            _In_ ULONG InformationLength);
        PFEventSetInformation pfEventSetInformation =
            (PFEventSetInformation)GetProcAddress(hEventing, "EventSetInformation");
        if (pfEventSetInformation)
        {
            status = pfEventSetInformation(
                hProvider->RegHandle,
                informationClass,
                pvInformation,
                cbInformation);
        }

        FreeLibrary(hEventing);
    }
    status = HRESULT_FROM_WIN32(status);
#endif // _ETW_KM_

#else // TLG_HAVE_EVENT_SET_INFORMATION == 0

    (void)hProvider;
    (void)informationClass;
    (void)pvInformation;
    (void)cbInformation;

  #ifdef _ETW_KM_
    TLG_PAGED_CODE();
    status = STATUS_ENTRYPOINT_NOT_FOUND;
  #else // _ETW_KM_
    status = HRESULT_FROM_WIN32(ERROR_NOT_SUPPORTED);
  #endif // _ETW_KM_

#endif // TLG_HAVE_EVENT_SET_INFORMATION

    return status;
}

#pragma code_seg(TLG_NONPAGED_SEGMENT)

extern struct _TraceLoggingMetadata_t const
    __declspec(selectany allocate(_TlgSegMetadataBegin))
    _TraceLoggingMetadata = {
    _TlgSigVal,
    sizeof(_TraceLoggingMetadata),
    _TlgVerVal,
    _TlgFlagsVal,
    _TlgMagicVal
};

extern UINT8 const
    __declspec(selectany allocate(_TlgSegMetadataEnd))
    _TraceLoggingMetadataEnd = _TlgBlobEnd;

#pragma warning(push)
#pragma warning(disable: 4714) // Don't warn if _TlgWriteCommon not inlined

/*
Marking _TlgWriteCommon as __forceinline helps ensure minimal code size.
In most cases, there is no difference between __inline or __forceinline.
In a few cases __inline results in larger code. This is most common when both
_TlgWrite and _TlgWriteEx are used in the same module.

Usually, _TlgWriteCommon gets inlined into _TlgWrite, and _TlgWrite does not
get inlined into call sites. This is generally the best result.

Without __forceinline, _TlgWrite sometimes gets inlined into call sites, and
_TlgWriteCommon does not get inlined. The result is slightly larger code at the
call site with little or no benefit in performance.
*/
_IRQL_requires_max_(HIGH_LEVEL)
#if defined(PFORCEINLINE)
    // __forceinline recommended for performance.
    // In this case, it typically results in smaller code.
    PFORCEINLINE
#elif defined(FORCEINLINE)
    FORCEINLINE
#else
    __inline
#endif
void _TlgWriteCommon(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    _Out_writes_(2) ULONGLONG* pDesc,
    _Out_writes_(2) EVENT_DATA_DESCRIPTOR* pData)
{
    _TLG_CASSERT(2 == _TlgSkipVal, "_TlgWrite out of sync with _TlgSkipVal.");
    _TLG_CASSERT(_TLG_EVENT_METADATA_PREAMBLE == 1 + 2 + 4 + 4, "_TlgWrite out of sync with _TLG_EVENT_METADATA_PREAMBLE.");
    UINT32 const eventId = (UINT32)((LPCCH)pEventMetadata - (LPCCH)&_TraceLoggingMetadata);
    UINT8 const* p = (UINT8 const*)pEventMetadata;

    // Force reference to _TraceLoggingMetadataEnd:
#if defined(_M_ARM) || defined(_M_ARM64)
    (void)__iso_volatile_load8((CHAR const*)&_TraceLoggingMetadataEnd);
#else
    (void)*(CHAR const volatile*)&_TraceLoggingMetadataEnd;
#endif

    ((UINT32*)pDesc)[0] = eventId | (*p << 24);  p += 1; // Id, Version, Channel
    ((UINT32*)pDesc)[1] = *(UINT16 UNALIGNED*)p; p += 2; // Level, Opcode, Task
    pDesc[1] = *(ULONGLONG UNALIGNED*)p; p += 8; // Keyword
    pData[0].Ptr = (ULONGLONG)(ULONG_PTR)hProvider->ProviderMetadataPtr;
    pData[0].Size = *hProvider->ProviderMetadataPtr;
    pData[0].Reserved = 2; // = EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA
    pData[1].Ptr = (ULONGLONG)(ULONG_PTR)p;
    pData[1].Size = *(UINT16 UNALIGNED*)p;
    pData[1].Reserved = 1; // = EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA
    _TLG_ASSERT(eventId < 0x01000000, "EventId out of range"); // Event metadata segment too large (too many events)
    _TLG_ASSERT((void*)&_TraceLoggingMetadata < (void*)pEventMetadata, "Event metadata not in metadata segment.");
    _TLG_ASSERT((void*)&_TraceLoggingMetadataEnd > (void*)pEventMetadata, "Event metadata not in metadata segment.");

    /*
    Passing provider handles from one module to another is illegal.
    Please fix your code to avoid doing this.
    */
    _TLG_ASSERT(
        (void*)&_TraceLoggingMetadata < (void*)hProvider->ProviderMetadataPtr,
        "Provider handles must not be used outside of the module in which it was declared. Please don't share provider handles with other DLLs.");
    _TLG_ASSERT(
        (void*)&_TraceLoggingMetadataEnd > (void*)hProvider->ProviderMetadataPtr,
        "Provider handles must not be used outside of the module in which it was declared. Please don't share provider handles with other DLLs.");
}

_IRQL_requires_max_(HIGH_LEVEL)
__inline
TLG_STATUS _TlgWrite(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    _In_opt_ LPCGUID pActivityId,
    _In_opt_ LPCGUID pRelatedActivityId,
    _In_range_(2, 128) UINT32 cData,
    _Inout_cap_(cData) EVENT_DATA_DESCRIPTOR* pData)
{
    TLG_STATUS status;
    ULONGLONG desc[2];
    _TlgWriteCommon(hProvider, pEventMetadata, desc, pData);
    _TLG_ASSERT(cData <= 128, "Too many data values.");
    status = TLG_EVENT_WRITE_TRANSFER(hProvider->RegHandle, (EVENT_DESCRIPTOR*)desc, pActivityId, pRelatedActivityId, cData, pData);
    return status;
}

#if _TLG_ENABLE_TraceLoggingWriteEx

_IRQL_requires_max_(HIGH_LEVEL)
__inline
TLG_STATUS _TlgWriteEx(
    _In_ TraceLoggingHProvider hProvider,
    _In_reads_bytes_(_TLG_EVENT_METADATA_PREAMBLE + *(UINT16*)((char*)pEventMetadata + _TLG_EVENT_METADATA_PREAMBLE))
        void const UNALIGNED* pEventMetadata,
    ULONG64 filter,
    ULONG flags,
    _In_opt_ LPCGUID pActivityId,
    _In_opt_ LPCGUID pRelatedActivityId,
    _In_range_(2, 128) UINT32 cData,
    _Inout_cap_(cData) EVENT_DATA_DESCRIPTOR* pData)
{
    TLG_STATUS status;
    ULONGLONG desc[2];
    _TlgWriteCommon(hProvider, pEventMetadata, desc, pData);
    _TLG_ASSERT(cData <= 128, "Too many data values.");
    status = TLG_EVENT_WRITE_EX(hProvider->RegHandle, (EVENT_DESCRIPTOR*)desc, filter, flags, pActivityId, pRelatedActivityId, cData, pData);
    return status;
}

#endif // _TLG_ENABLE_TraceLoggingWriteEx

#pragma warning(pop) // Don't warn if _TlgWriteCommon not inlined

_IRQL_requires_max_(HIGH_LEVEL)
__inline BOOLEAN _TlgKeywordOn(
    TraceLoggingHProvider _In_ hProvider,
    ULONGLONG keyword)
{
    return keyword == 0 || (
        (keyword & hProvider->KeywordAny) &&
        (keyword & hProvider->KeywordAll) == hProvider->KeywordAll);
}

_IRQL_requires_max_(HIGH_LEVEL)
__inline BOOLEAN TraceLoggingProviderEnabled(
    TraceLoggingHProvider _In_ hProvider,
    UCHAR eventLevel,
    ULONGLONG eventKeyword)
{
    return eventLevel < hProvider->LevelPlus1 && _TlgKeywordOn(hProvider, eventKeyword);
}

_IRQL_requires_max_(HIGH_LEVEL)
__inline GUID TraceLoggingProviderId(
    TraceLoggingHProvider _In_ hProvider)
{
    GUID const UNALIGNED* pProviderId =
        &CONTAINING_RECORD(hProvider->ProviderMetadataPtr, struct _TlgProviderMetadata_t, RemainingSize)->ProviderId;
    return *pProviderId;
}

#pragma warning(push)
#pragma warning(disable: 4995 4996) // strlen/wcslen marked as deprecated

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateSz(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_opt_z_ LPCSTR psz)
{
    LPCSTR pch = "";
    SIZE_T cch = 0;
    if (psz)
    {
        pch = psz;
        cch = strlen(psz);
    }
    EventDataDescCreate(pDesc, pch, 1 + (ULONG)cch);
}

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateWsz(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_opt_z_ LPCWSTR pwsz)
{
    LPCWSTR pch = L"";
    SIZE_T cch = 0;
    if (pwsz)
    {
        pch = pwsz;
        cch = wcslen(pwsz);
    }
    EventDataDescCreate(pDesc, pch, 2 + 2 * (ULONG)cch);
}

#pragma warning(pop)

#ifdef SID_DEFINED
_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateSid(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_ SID const* pSid)
{
    ULONG const cAuthorities = pSid->SubAuthorityCount <= SID_MAX_SUB_AUTHORITIES
        ? pSid->SubAuthorityCount
        : SID_MAX_SUB_AUTHORITIES;
    ULONG const cb = sizeof(SID) - 4 + cAuthorities * 4;
    EventDataDescCreate(pDesc, pSid, cb);
}
#endif

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateFixedArray(
    _Out_ PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals * cbVal) void const* pVals,
    ULONG cVals,
    ULONG cbVal)
{
    EventDataDescCreate(pDesc, pVals, cVals * cbVal);
}

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateBinary(
    _Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals) void const* pVals,
    _In_ ULONG cVals)
{
    EventDataDescCreate(pDesc + 0, &pDesc[1].Size, 2);
    EventDataDescCreate(pDesc + 1, pVals, cVals);
}

#ifdef __cplusplus

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateArray(
    _Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(cVals * cbVal) void const* pVals,
    _In_ UINT16 const& cVals,
    ULONG cbVal)
{
    EventDataDescCreate(pDesc + 0, &cVals, 2);
    EventDataDescCreate(pDesc + 1, pVals, cVals * cbVal);
}

#else // __cplusplus

_IRQL_requires_max_(HIGH_LEVEL)
__inline void _TlgCreateArray(
    _Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc,
    _In_reads_bytes_(*pcVals * cbVal) void const* pVals,
    _In_ UINT16 const* pcVals,
    ULONG cbVal)
{
    EventDataDescCreate(pDesc + 0, pcVals, 2);
    EventDataDescCreate(pDesc + 1, pVals, *pcVals * cbVal);
}

#endif // __cplusplus

#ifdef __cplusplus
} // extern "C"

template<unsigned StructSize, bool Ok = (StructSize < 128)>
struct _TlgStructSizeMustBeLessThan128;

template<unsigned StructSize>
struct _TlgStructSizeMustBeLessThan128<StructSize, true> {};

template<class T>
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateDesc(_Out_ PEVENT_DATA_DESCRIPTOR pDesc, T const& val)
{
    EventDataDescCreate(pDesc, &val, sizeof(T));
}

template<class T>
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateString(_Out_writes_(2) PEVENT_DATA_DESCRIPTOR pDesc, _In_ T const* pStr)
{
    EventDataDescCreate(pDesc + 0, &pDesc[1].Size, 2);
    EventDataDescCreate(pDesc + 1, pStr->Buffer, pStr->Length);
}

#if defined(_MSC_VER) && (_MSC_VER >= 1600)

// remove reference from non-reference type (no-op).
template<class T>
struct _TlgRemoveReference
{
    typedef T type;
};

// remove reference from lvalue-reference type.
template<class T>
struct _TlgRemoveReference<T&>
{
    typedef T type;
};

// remove reference from rvalue-reference type.
template<class T>
struct _TlgRemoveReference<T&&>
{
    typedef T type;
};

template<class T> struct _TlgDecay_cv { typedef T type; };
template<class T> struct _TlgDecay_cv<T const> { typedef T type; };
template<class T> struct _TlgDecay_cv<T volatile> { typedef T type; };
template<class T> struct _TlgDecay_cv<T const volatile> { typedef T type; };

// Given non-ref non-array type, remove const/volatile.
template<class T>
struct _TlgDecay_noref
{
    typedef typename _TlgDecay_cv<T>::type type;
};

// Given array type, decay to pointer.
template<class T>
struct _TlgDecay_noref<T[]>
{
    typedef T* type;
};

// Given array type, decay to pointer.
template<class T, SIZE_T N>
struct _TlgDecay_noref<T[N]>
{
    typedef T* type;
};

// Remove reference, remove const/volatile, arrays decay to pointers.
template<class T>
struct _TlgDecay
{
    typedef typename _TlgDecay_noref<typename _TlgRemoveReference<T>::type>::type type;
};

/*
Convert a type into an TlgIn_t value.
*/
template<class T> struct _TlgTypeMapBase
{
    _TLG_CASSERT(sizeof(T) == 0, "The type is not supported by TraceLoggingValue.");
};

// _TlgInTypeBaseDecl0: out_type is 0.
#define _TlgInTypeBaseDecl0(data_type, in_type) \
    template<> struct _TlgTypeMapBase<data_type> \
    { \
        typedef UINT8  _TlgTypeType0; \
        typedef UINT16 _TlgTypeType1; \
        static _TlgTypeType0 const _TlgType0 = in_type | 0x0000; \
        static _TlgTypeType1 const _TlgType1 = in_type | 0x8080; \
    }

// _TlgInTypeBaseDecl1: out_type is not 0.
#define _TlgInTypeBaseDecl1(data_type, in_type, out_type) \
    template<> struct _TlgTypeMapBase<data_type> \
    { \
        typedef UINT16 _TlgTypeType0; \
        typedef UINT16 _TlgTypeType1; \
        static _TlgTypeType0 const _TlgType0 = in_type | 0x0080 | (out_type << 8); \
        static _TlgTypeType1 const _TlgType1 = in_type | 0x8080 | (out_type << 8); \
    }

_TlgInTypeBaseDecl1(bool,       TlgInUINT8,  TlgOutBOOLEAN);
_TlgInTypeBaseDecl1(char,       TlgInUINT8,  TlgOutSTRING);
_TlgInTypeBaseDecl1(__wchar_t,  TlgInUINT16, TlgOutSTRING);
_TlgInTypeBaseDecl0(INT8,       TlgInINT8);
_TlgInTypeBaseDecl0(UINT8,      TlgInUINT8);
_TlgInTypeBaseDecl0(INT16,      TlgInINT16);
_TlgInTypeBaseDecl0(UINT16,     TlgInUINT16);
_TlgInTypeBaseDecl0(INT32,      TlgInINT32);
_TlgInTypeBaseDecl0(UINT32,     TlgInUINT32);
_TlgInTypeBaseDecl0(INT64,      TlgInINT64);
_TlgInTypeBaseDecl0(UINT64,     TlgInUINT64);
_TlgInTypeBaseDecl0(LONG,       sizeof(LONG) == 8 ? TlgInINT64 : TlgInINT32);
_TlgInTypeBaseDecl0(ULONG,      sizeof(ULONG) == 8 ? TlgInUINT64 : TlgInUINT32);
_TlgInTypeBaseDecl0(float,      TlgInFLOAT);
_TlgInTypeBaseDecl0(double,     TlgInDOUBLE);
_TlgInTypeBaseDecl0(GUID,       TlgInGUID);
_TlgInTypeBaseDecl0(struct _FILETIME, TlgInFILETIME);
_TlgInTypeBaseDecl0(struct _SYSTEMTIME, TlgInSYSTEMTIME);
#ifdef SID_DEFINED
_TlgInTypeBaseDecl0(SID*,       TlgInSID);
_TlgInTypeBaseDecl0(SID const*, TlgInSID);
#endif
_TlgInTypeBaseDecl0(void*,      TlgInPOINTER);
_TlgInTypeBaseDecl0(void const*,TlgInPOINTER);
_TlgInTypeBaseDecl0(char*,      TlgInANSISTRING);
_TlgInTypeBaseDecl0(char const*,TlgInANSISTRING);
_TlgInTypeBaseDecl0(wchar_t*,   TlgInUNICODESTRING);
_TlgInTypeBaseDecl0(wchar_t const*, TlgInUNICODESTRING);
template<class T> struct _TlgTypeMap
    : _TlgTypeMapBase<typename _TlgDecay<T>::type> {};

template<class T>
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, T const& val)
{
    (void)_TlgTypeMap<T>::_TlgType0; // Ensure compile error for unmappable type.
    EventDataDescCreate(pDesc, &val, sizeof(T));
}

#ifdef SID_DEFINED
_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, SID const* pVal)
{
    _TlgCreateSid(pDesc, pVal);
}
#endif

_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, _In_z_ char* psz)
{
    _TlgCreateSz(pDesc, psz);
}

_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, _In_z_ char const* psz)
{
    _TlgCreateSz(pDesc, psz);
}

_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, _In_z_ wchar_t* psz)
{
    _TlgCreateWsz(pDesc, psz);
}

_IRQL_requires_max_(HIGH_LEVEL)
inline void _TlgCreateAuto(EVENT_DATA_DESCRIPTOR* pDesc, _In_z_ wchar_t const* psz)
{
    _TlgCreateWsz(pDesc, psz);
}

#endif // _MSC_VER >= 1600

#pragma detect_mismatch("TLG_METADATA_SEGMENT_BASE", _TLG_STRINGIZE(TLG_METADATA_SEGMENT_BASE))

template<
    UINT32 eventTag,
    unsigned length
    = (eventTag & 0x0FE00000) == eventTag ? 1
    : (eventTag & 0x0FFFC000) == eventTag ? 2
    : (eventTag & 0x0FFFFFFF) == eventTag ? 4
    : 0>
struct _TlgTagEnc
{
    _TLG_CASSERT(
        (eventTag & 0x0FFFFFFF) == eventTag,
        "Invalid Tag value. Tag must be a 28-bit compile-time constant integer.");
};

template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 1>
{
    typedef UINT8 type;
    static const UINT8 value =
        ((eventTag & 0xfe00000) >> 21);
};

template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 2>
{
    typedef UINT16 type;
    static const UINT16 value = 0x80
        | ((eventTag & 0xfe00000) >> 21)
        | ((eventTag & 0x01fc000) >> 6);
};

template<UINT32 eventTag>
struct _TlgTagEnc<eventTag, 4>
{
    typedef UINT32 type;
    static const UINT32 value = 0x808080
        | ((eventTag & 0xfe00000) >> 21)
        | ((eventTag & 0x01fc000) >> 6)
        | ((eventTag & 0x0003f80) << 9)
        | ((eventTag & 0x000007f) << 24);
};

#define _TlgEvtTagEncode(eventTag) (eventTag)
#define _TlgEvtTagDecl(...)        typedef _TlgTagEnc<0 _TLG_FOREACH(_TlgEvtTagVal, __VA_ARGS__)> _TlgTagTy;
#define _TlgEvtTagType             _TlgTagTy::type
#define _TlgEvtTagInit(...)        _TlgTagTy::value

#else // __cplusplus

/*
Input = user-facing EventTag value.
Output = EventTag value encoded for UINT16 (but without chain bit set).
*/
#define _TlgEvtTagEncode(eventTag) \
    (((eventTag)&0xfe00000)>>21) /* Encode 0x0fe00000 bits into UINT16  */ \
    |(((eventTag)&0x1fc000)>>6)  /* Encode 0x001fc000 bits into UINT16  */ \
    |(((eventTag)&0x3fff)<<16)   /* Trigger warning for 0x00003fff bits */ \
    |(~(~(eventTag)|0x0FFFFFFF)) /* Trigger warning for any other bits  */ \

#define _TlgEvtTagDecl(...)
#define _TlgEvtTagType      UINT16
#define _TlgEvtTagInit(...) 128 _TLG_FOREACH(_TlgEvtTagVal, __VA_ARGS__)

#endif // __cplusplus

#pragma code_seg(pop)

#pragma endregion

#pragma region Implementation macros

#if defined(_MSC_VER) && (_MSC_VER != 1700)
#define _TlgPragmaUtf8Begin __pragma(execution_character_set(push, "UTF-8"))
#define _TlgPragmaUtf8End   __pragma(execution_character_set(pop))
#else
#define _TlgPragmaUtf8Begin
#define _TlgPragmaUtf8End
#endif

#define _TlgParseProviderId(...) \
    _TlgParseProviderIdN(_TLG_NARGS(__VA_ARGS__), __VA_ARGS__)
#define _TlgParseProviderIdN(n, providerId) \
    _TLG_PASTE(_TlgParseProviderId, n)(providerId)
#define _TlgParseProviderId0(...) /* parameter not provided - error case */ \
    _Tracelogging_SyntaxError_ProviderIdMustBeSpecified
#define _TlgParseProviderId1(providerId) \
    _Tracelogging_SyntaxError_ProviderIdMustBeEnclosedInParentheses providerId
#define _Tracelogging_SyntaxError_ProviderIdMustBeEnclosedInParentheses(...) \
    _TlgParseProviderId_N(_TLG_NARGS(__VA_ARGS__), __VA_ARGS__)
#define _TlgParseProviderId_N(n, ...) \
    _TLG_PASTE(_Tracelogging_SyntaxError_ProviderIdMustBeElevenIntegers_, n) _TLG_FLATTEN((__VA_ARGS__))
#define _Tracelogging_SyntaxError_ProviderIdMustBeElevenIntegers_11(...) /* not an error */ \
    { __VA_ARGS__ }

#define _TlgParseOption(option) \
    _Tracelogging_UnrecognizedOption_##option
#define _Tracelogging_UnrecognizedOption__TlgOptionGroup(...) /* recognized */ \
    {__VA_ARGS__}

#define _TlgProviderStorage_imp(    storageVariable, providerName, providerId, annotationFunc, ...)  _TlgProviderStorage_impn( \
           _TLG_NARGS(__VA_ARGS__), storageVariable, providerName, providerId, annotationFunc, __VA_ARGS__)
#define _TlgProviderStorage_impn(n, storageVariable, providerName, providerId, annotationFunc, ...) _TLG_PASTE(_TlgProviderStorage_imp, n) \
                    _TLG_FLATTEN((  storageVariable, providerName, providerId, annotationFunc, __VA_ARGS__))

#define _TlgProviderStorage_imp0(storageVariable, providerName, providerId, annotationFunc, ...) \
    _TlgProviderStorage_impx(storageVariable, providerName, providerId, annotationFunc \
        , () \
        , () \
        )

#define _TlgProviderStorage_imp1(storageVariable, providerName, providerId, annotationFunc, groupOption) \
    _TlgProviderStorage_impx(storageVariable, providerName, providerId, annotationFunc \
        , (UINT16 _TlgOptionSize1; UINT8 _TlgOptionEnum1; GUID _TlgOptionVal1; ) \
        , (, 3 + sizeof(GUID), _TlgOptionGroup, _TlgParseOption(groupOption)) \
        )

#define _TlgProviderStorage_impx(storageVariable, providerName, providerId, annotationFunc, optionVars, optionVals) \
    _TlgPragmaUtf8Begin \
    __pragma(pack(push, 1)) \
    static struct { \
        struct _TlgProviderMetadata_t _TlgProv; \
        char _TlgName[sizeof(providerName)]; \
        _TLG_FLATTEN optionVars \
    } const __declspec(allocate(_TlgSegMetadataProviders)) __declspec(align(1)) storageVariable##_Meta = { \
        { _TlgBlobProvider3, _TlgParseProviderId(providerId), sizeof(storageVariable##_Meta) - 1 - _TLG_PROVIDER_METADATA_PREAMBLE }, \
        (providerName) \
        _TLG_FLATTEN optionVals \
    }; \
    __pragma(pack(pop)) \
    _TlgPragmaUtf8End \
    static struct _TlgProvider_t storageVariable = { \
        0, &storageVariable##_Meta._TlgProv.RemainingSize, \
        0, 0, 0, 0, 0, \
        _TlgAnnotationFunc_imp(annotationFunc, storageVariable) \
    }

#define _TlgAnnotationFunc_imp(use_annotationFunc, storageVariable) _TLG_PASTE(_TlgAnnotationFunc_imp, use_annotationFunc) (storageVariable)
#define _TlgAnnotationFunc_imp0(storageVariable) 0
#define _TlgAnnotationFunc_imp1(storageVariable) &_TLG_PASTE(_TlgDefineProvider_annotation_, storageVariable)

/*
_TlgArg(data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags)
data_type: The base type of the item. Does not include const, *, [], etc.
in_type  : The TlgIn type of the item.
out_type : The _TlgOut type of the item, or 0 for default.
has_out  : If out_type is known to be 0, this should be 0. Otherwise 1.
dim      : The dimension, which determines how this _TlgArg is expanded. See below.
value    : The value expression. Different dimensions handle this differently.
cVals    : The number of values. Different dimensions handle this differently.
name     : The name for this argument (string literal). Optional.
desc     : The description for this argument (string literal). Optional.
tags     : Field tags. Optional.

Dimensions:
_TlgAuto: Automatic scalar. Uses template magic to determine InType/OutType. Sets has_out/value to the expression, data_type/in_type/out_type/cVals unused.
_TlgS: Small scalar. In C, a temporary copy of the value is made. (C++ will only copy if value is an rvalue.)
_TlgP: Large scalar. In C, the value must be an lvalue. (In C++, _TlgP is the same as _TlgS.)
_TlgSid: SID. value is a pointer to a SID. Size is determined via GetLengthSid. NULL will cause AV.
_TlgSz: Nul-terminated string. Value is CHAR*. NULL is treated like "".
_TlgWsz: Nul-terminated string. Value is WCHAR*. NULL is treated like L"".
_TlgString: STRING structure. Value is PUNICODE_STRING/PANSI_STRING. NULL will cause AV.
_TlgA: Array. Value is data_type*. cVals is item count. NULL is ok if cVals is 0.
_TlgB: Binary. Value is void*. cVals is a byte count. NULL is ok if cVals is 0.
_TlgCS: Counted string. Value is data_type*. cVals is item (character) count. NULL is ok if cVals is 0.
_TlgFA: Fixed array. Value is data_type*. cVals is compile-time-constant item count.
_TlgPF: PackedField. Value is void*. cVals is a byte count. NULL is ok if cVals is 0. Data is added raw (not length-prefixed).
_TlgPM: PackedMetadata. Like _TlgPF, but metadata only - no data.
_TlgPD: PackedData. Like _TlgPF, but data only - no metadata.
_TlgCustom: Custom serializer. Value is BYTE*. cVals is a byte count.
_TlgStruct: Structure. cVals is compile-time-constant number of logical fields in the structure.
_TlgLevel: Event level. Value is the event level.
_TlgOpcode: Event opcode. Value is the event opcode.
_TlgKeyword: Event keyword. Value is the event keyword.
_TlgEvtTag: Event tag. Value is the event tag.
_TlgDesc: Event description. Desc is the description. Emitted into the PDB.
*/

#define _TlgArg_imp0(  data_type, in_type, out_type, has_out, dim, value, cVals, x                     ) \
                    (  data_type, in_type, out_type, has_out, dim, value, cVals, #value,,           , 0)
#define _TlgArg_imp1(  data_type, in_type, out_type, has_out, dim, value, cVals, name                  ) \
                    (  data_type, in_type, out_type, has_out, dim, value, cVals, name,,             , 0)
#define _TlgArg_imp2(  data_type, in_type, out_type, has_out, dim, value, cVals, name,    desc         ) \
                    (  data_type, in_type, out_type, has_out, dim, value, cVals, name, L##desc,     , 0)
#define _TlgArg_imp3(  data_type, in_type, out_type, has_out, dim, value, cVals, name,    desc, tags   ) \
                    (  data_type, in_type, out_type, has_out, dim, value, cVals, name, L##desc, tags, 1)
#define _TlgArg_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, ...        ) _TLG_PASTE(_TlgArg_imp, n) \
       _TLG_FLATTEN((  data_type, in_type, out_type, has_out, dim, value, cVals, __VA_ARGS__))
#define _TlgArg(       data_type, in_type, out_type, has_out, dim, value, cVals, ...        ) _TlgArg_imp(_TLG_NARGS(__VA_ARGS__), \
                       data_type, in_type, out_type, has_out, dim, value, cVals, __VA_ARGS__)

#define _TlgapplyArgs_imp2(fn, n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    fn##_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags)
#define _TlgapplyArgs_imp1(args) _TlgapplyArgs_imp2 args
#define _TlgapplyArgs(fn, n, args) _TlgapplyArgs_imp1((fn, n, _TLG_FLATTEN args))

#define _TlgInfoVars(n, args) _TlgapplyArgs(_TlgInfoVars, n, args)
#define _TlgInfoVars_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgInfoVars##dim(n, name, in_type, has_out, has_tags)
#define _TlgInfoVars_TlgAuto(   n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; _TlgTypeMap<decltype(has_out)>::_TlgTypeType##has_tags _TlgTy##n; _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgS(      n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgP(      n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgSid(    n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgSz(     n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgWsz(    n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgString( n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgA(      n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgB(      n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgCS(     n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n)
#define _TlgInfoVars_TlgFA(     n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n) UINT16 _TlgValCount##n;
#define _TlgInfoVars_TlgPF(     n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n) _TLG_AssertValidPackedMetadataInTypeCppOnly(in_type)
#define _TlgInfoVars_TlgPM(     n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_##has_out##has_tags(n) _TLG_AssertValidPackedMetadataInTypeCppOnly(in_type)
#define _TlgInfoVars_TlgPD(     n, name, in_type, has_out, has_tags)
#define _TlgInfoVars_TlgCustom( n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_0##has_tags(n) UINT16 _TlgCustLen##n; UINT8 _TlgCustDat##n[has_out];
#define _TlgInfoVars_TlgStruct( n, name, in_type, has_out, has_tags)  char _TlgName##n[sizeof(name)]; UINT8 _TlgIn##n; _TlgInfoVars_1##has_tags(n)
#define _TlgInfoVars_TlgChannel(n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgLevel(  n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgOpcode( n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgKeyword(n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgEvtTag( n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgDesc(   n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_TlgCustAnn(n, name, in_type, has_out, has_tags)  _TlgInfoVars_##has_tags(n)
#define _TlgInfoVars_0(n)
#define _TlgInfoVars_1(n) UINT32 _TlgTags##n;
#define _TlgInfoVars_00(n)
#define _TlgInfoVars_10(n) UINT8 _TlgOut##n;
#define _TlgInfoVars_01(n) UINT8 _TlgOut##n;UINT32 _TlgTags##n;
#define _TlgInfoVars_11(n) UINT8 _TlgOut##n;UINT32 _TlgTags##n;

#define _TlgInfoVals(n, args) _TlgapplyArgs(_TlgInfoVals, n, args)
#define _TlgInfoVals_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgInfoVals##dim(in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgAuto(   in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), _TlgTypeMap<decltype(has_out)>::_TlgType##has_tags _TlgInfoVals_##has_tags(tags)
#define _TlgInfoVals_TlgS(      in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgP(      in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgSid(    in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgSz(     in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgWsz(    in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgString( in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgA(      in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type|64 _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgB(      in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgCS(     in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_##has_out##has_tags(out_type, tags)
#define _TlgInfoVals_TlgFA(     in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type|32 _TlgInfoVals_##has_out##has_tags(out_type, tags), (cVals)
#define _TlgInfoVals_TlgPF(     in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), (in_type) _TlgInfoVals_##has_out##has_tags(((out_type)&_TlgOutTypeMask), tags)
#define _TlgInfoVals_TlgPM(     in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), (in_type) _TlgInfoVals_##has_out##has_tags(((out_type)&_TlgOutTypeMask), tags)
#define _TlgInfoVals_TlgPD(     in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgCustom( in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), ((in_type)&31)|96 _TlgInfoVals_0##has_tags(0, tags), has_out, {_TLG_FLATTEN out_type}
#define _TlgInfoVals_TlgStruct( in_type, out_type, has_out, cVals, name, has_tags, tags)    , (name), in_type _TlgInfoVals_1##has_tags(cVals, tags)
#define _TlgInfoVals_TlgChannel(in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgLevel(  in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgOpcode( in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgKeyword(in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgEvtTag( in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgDesc(   in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_TlgCustAnn(in_type, out_type, has_out, cVals, name, has_tags, tags)
#define _TlgInfoVals_0(...)
#define _TlgInfoVals_1(tags) ,_TlgInfoVals_Tags(tags)
#define _TlgInfoVals_00(out_type, tags)
#define _TlgInfoVals_10(out_type, tags) |128,out_type
#define _TlgInfoVals_01(out_type, tags) |128,128,_TlgInfoVals_Tags(tags)
#define _TlgInfoVals_11(out_type, tags) |128,out_type|128,_TlgInfoVals_Tags(tags)
#define _TlgInfoVals_Tags(tags) 0x808080|(((tags)&0x7f)<<24)|(((tags)&0x3f80)<<9)|(((tags)&0x1fc000)>>6)|(((tags)&0xfe00000)>>21)

#ifdef __cplusplus

#define _TlgDataDescCreate(n, args) _TlgapplyArgs(_TlgDataDescCreate, n, args)
#define _TlgDataDescCreate_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgDataDescCreate##dim(n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgAuto(   n, data_type, value, cVals)  _TlgCreateAuto(           &_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgS(      n, data_type, value, cVals)  _TlgCreateDesc<data_type>(&_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgP(      n, data_type, value, cVals)  _TlgCreateDesc<data_type>(&_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgSid(    n, data_type, value, cVals)  _TlgCreateSid(            &_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgSz(     n, data_type, value, cVals)  _TlgCreateSz(             &_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgWsz(    n, data_type, value, cVals)  _TlgCreateWsz(            &_TlgData[_TlgIdx++], (value)),
#define _TlgDataDescCreate_TlgString( n, data_type, value, cVals)  _TlgCreateString<data_type>(&_TlgData[_TlgIdx], (value)), _TlgIdx += 2,
#define _TlgDataDescCreate_TlgA(      n, data_type, value, cVals)  _TlgCreateArray(          &_TlgData[_TlgIdx],   (value), (cVals),  sizeof(data_type)),_TlgIdx += 2,
#define _TlgDataDescCreate_TlgB(      n, data_type, value, cVals)  _TlgCreateBinary(         &_TlgData[_TlgIdx],   (value), (cVals)), _TlgIdx += 2,
#define _TlgDataDescCreate_TlgCS(     n, data_type, value, cVals)  _TlgCreateBinary(         &_TlgData[_TlgIdx],   (value), (cVals) * sizeof(data_type)),_TlgIdx += 2,
#define _TlgDataDescCreate_TlgFA(     n, data_type, value, cVals)  _TlgCreateFixedArray(     &_TlgData[_TlgIdx++], (value), (cVals),  sizeof(data_type)),
#define _TlgDataDescCreate_TlgPF(     n, data_type, value, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++], (value), (cVals)),
#define _TlgDataDescCreate_TlgPM(     n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgPD(     n, data_type, value, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++], (value), (cVals)),
#define _TlgDataDescCreate_TlgCustom( n, data_type, value, cVals)  _TlgCreateBinary(         &_TlgData[_TlgIdx],   (value), (cVals)), _TlgIdx += 2,
#define _TlgDataDescCreate_TlgStruct( n, data_type, value, cVals)  _TlgStructSizeMustBeLessThan128<cVals>(),
#define _TlgDataDescCreate_TlgChannel(n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgLevel(  n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgOpcode( n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgKeyword(n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgEvtTag( n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgDesc(   n, data_type, value, cVals)
#define _TlgDataDescCreate_TlgCustAnn(n, data_type, value, cVals)

#else // __cplusplus

#define _TlgTempVars(n, args) _TlgapplyArgs(_TlgTempVars, n, args)
#define _TlgTempVars_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgTempVars##dim(n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgS(      n, data_type, in_type, value, cVals)    data_type const  _TlgTemp##n =  (value);
#define _TlgTempVars_TlgP(      n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = &(value);
#define _TlgTempVars_TlgSid(    n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgSz(     n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgWsz(    n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgString( n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgA(      n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value); UINT16 _TlgCnt##n = (cVals);
#define _TlgTempVars_TlgB(      n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value); UINT16 _TlgCnt##n = (cVals);
#define _TlgTempVars_TlgCS(     n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value); UINT16 _TlgCnt##n = sizeof(data_type)*(cVals);
#define _TlgTempVars_TlgFA(     n, data_type, in_type, value, cVals)    data_type const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgPF(     n, data_type, in_type, value, cVals)    void const* _TlgTemp##n = (value); _TLG_AssertValidPackedMetadataInType(in_type);
#define _TlgTempVars_TlgPM(     n, data_type, in_type, value, cVals)                                       _TLG_AssertValidPackedMetadataInType(in_type);
#define _TlgTempVars_TlgPD(     n, data_type, in_type, value, cVals)    void const* _TlgTemp##n = (value);
#define _TlgTempVars_TlgCustom( n, data_type, in_type, value, cVals)    void const* _TlgTemp##n = (value); UINT16 _TlgCnt##n = (cVals);
#define _TlgTempVars_TlgStruct( n, data_type, in_type, value, cVals)    _TLG_CASSERT(cVals<128,"Struct size must be less than 128");
#define _TlgTempVars_TlgChannel(n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgLevel(  n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgOpcode( n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgKeyword(n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgEvtTag( n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgDesc(   n, data_type, in_type, value, cVals)
#define _TlgTempVars_TlgCustAnn(n, data_type, in_type, value, cVals)

#define _TlgDataDescCreate(n, args) _TlgapplyArgs(_TlgDataDescCreate, n, args)
#define _TlgDataDescCreate_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgDataDescCreate##dim(n, data_type, cVals)
#define _TlgDataDescCreate_TlgS(      n, data_type, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++], &_TlgTemp##n, sizeof(data_type));
#define _TlgDataDescCreate_TlgP(      n, data_type, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++],  _TlgTemp##n, sizeof(data_type));
#define _TlgDataDescCreate_TlgSid(    n, data_type, cVals)  _TlgCreateSid(&_TlgData[_TlgIdx++], _TlgTemp##n);
#define _TlgDataDescCreate_TlgSz(     n, data_type, cVals)  _TlgCreateSz( &_TlgData[_TlgIdx++], _TlgTemp##n);
#define _TlgDataDescCreate_TlgWsz(    n, data_type, cVals)  _TlgCreateWsz(&_TlgData[_TlgIdx++], _TlgTemp##n);
#define _TlgDataDescCreate_TlgString( n, data_type, cVals)  _TlgCreateBinary(&_TlgData[_TlgIdx], _TlgTemp##n->Buffer, _TlgTemp##n->Length); _TlgIdx += 2;
#define _TlgDataDescCreate_TlgA(      n, data_type, cVals)  _TlgCreateArray(&_TlgData[_TlgIdx], _TlgTemp##n, &_TlgCnt##n, sizeof(data_type)); _TlgIdx += 2;
#define _TlgDataDescCreate_TlgB(      n, data_type, cVals)  _TlgCreateBinary(&_TlgData[_TlgIdx], _TlgTemp##n, _TlgCnt##n); _TlgIdx += 2;
#define _TlgDataDescCreate_TlgCS(     n, data_type, cVals)  _TlgCreateBinary(&_TlgData[_TlgIdx], _TlgTemp##n, _TlgCnt##n); _TlgIdx += 2;
#define _TlgDataDescCreate_TlgFA(     n, data_type, cVals)  _TlgCreateFixedArray(&_TlgData[_TlgIdx++], _TlgTemp##n, (cVals), sizeof(data_type));
#define _TlgDataDescCreate_TlgPF(     n, data_type, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++], _TlgTemp##n, (cVals));
#define _TlgDataDescCreate_TlgPM(     n, data_type, cVals)
#define _TlgDataDescCreate_TlgPD(     n, data_type, cVals)  EventDataDescCreate(&_TlgData[_TlgIdx++], _TlgTemp##n, (cVals));
#define _TlgDataDescCreate_TlgCustom( n, data_type, cVals)  _TlgCreateBinary(&_TlgData[_TlgIdx], _TlgTemp##n, _TlgCnt##n); _TlgIdx += 2;
#define _TlgDataDescCreate_TlgStruct( n, data_type, cVals)
#define _TlgDataDescCreate_TlgChannel(n, data_type, cVals)
#define _TlgDataDescCreate_TlgLevel(  n, data_type, cVals)
#define _TlgDataDescCreate_TlgOpcode( n, data_type, cVals)
#define _TlgDataDescCreate_TlgKeyword(n, data_type, cVals)
#define _TlgDataDescCreate_TlgEvtTag( n, data_type, cVals)
#define _TlgDataDescCreate_TlgDesc(   n, data_type, cVals)
#define _TlgDataDescCreate_TlgCustAnn(n, data_type, cVals)

#endif // __cplusplus

#define _TlgDataDescCount(n, args) _TlgapplyArgs(_TlgDataDescCount, n, args)
#define _TlgDataDescCount_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
    _TlgDataDescCount##dim()
#define _TlgDataDescCount_TlgAuto()    +1
#define _TlgDataDescCount_TlgS()       +1
#define _TlgDataDescCount_TlgP()       +1
#define _TlgDataDescCount_TlgSid()     +1
#define _TlgDataDescCount_TlgSz()      +1
#define _TlgDataDescCount_TlgWsz()     +1
#define _TlgDataDescCount_TlgString()  +2
#define _TlgDataDescCount_TlgA()       +2
#define _TlgDataDescCount_TlgB()       +2
#define _TlgDataDescCount_TlgCS()      +2
#define _TlgDataDescCount_TlgFA()      +1
#define _TlgDataDescCount_TlgPF()      +1
#define _TlgDataDescCount_TlgPM()
#define _TlgDataDescCount_TlgPD()      +1
#define _TlgDataDescCount_TlgCustom()  +2
#define _TlgDataDescCount_TlgStruct()
#define _TlgDataDescCount_TlgChannel()
#define _TlgDataDescCount_TlgLevel()
#define _TlgDataDescCount_TlgOpcode()
#define _TlgDataDescCount_TlgKeyword()
#define _TlgDataDescCount_TlgEvtTag()
#define _TlgDataDescCount_TlgDesc()
#define _TlgDataDescCount_TlgCustAnn()

#define _TlgChannelVal(n, args) _TlgapplyArgs(_TlgChannelVal, n, args)
#define _TlgChannelVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
                _TlgChannelVal##dim(value)
#define _TlgChannelVal_TlgAuto(   value)
#define _TlgChannelVal_TlgS(      value)
#define _TlgChannelVal_TlgP(      value)
#define _TlgChannelVal_TlgSid(    value)
#define _TlgChannelVal_TlgSz(     value)
#define _TlgChannelVal_TlgWsz(    value)
#define _TlgChannelVal_TlgString( value)
#define _TlgChannelVal_TlgA(      value)
#define _TlgChannelVal_TlgB(      value)
#define _TlgChannelVal_TlgCS(     value)
#define _TlgChannelVal_TlgFA(     value)
#define _TlgChannelVal_TlgPF(     value)
#define _TlgChannelVal_TlgPM(     value)
#define _TlgChannelVal_TlgPD(     value)
#define _TlgChannelVal_TlgCustom( value)
#define _TlgChannelVal_TlgStruct(...)
#define _TlgChannelVal_TlgChannel(value) &0|_TlgConst(Channel, value)
#define _TlgChannelVal_TlgLevel(  value)
#define _TlgChannelVal_TlgOpcode( value)
#define _TlgChannelVal_TlgKeyword(value)
#define _TlgChannelVal_TlgEvtTag( value)
#define _TlgChannelVal_TlgDesc(   value)
#define _TlgChannelVal_TlgCustAnn(value)

#define _TlgLevelVal(n, args) _TlgapplyArgs(_TlgLevelVal, n, args)
#define _TlgLevelVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
                _TlgLevelVal##dim(value)
#define _TlgLevelVal_TlgAuto(   value)
#define _TlgLevelVal_TlgS(      value)
#define _TlgLevelVal_TlgP(      value)
#define _TlgLevelVal_TlgSid(    value)
#define _TlgLevelVal_TlgSz(     value)
#define _TlgLevelVal_TlgWsz(    value)
#define _TlgLevelVal_TlgString( value)
#define _TlgLevelVal_TlgA(      value)
#define _TlgLevelVal_TlgB(      value)
#define _TlgLevelVal_TlgCS(     value)
#define _TlgLevelVal_TlgFA(     value)
#define _TlgLevelVal_TlgPF(     value)
#define _TlgLevelVal_TlgPM(     value)
#define _TlgLevelVal_TlgPD(     value)
#define _TlgLevelVal_TlgCustom( value)
#define _TlgLevelVal_TlgStruct(...)
#define _TlgLevelVal_TlgChannel(value)
#define _TlgLevelVal_TlgLevel(  value) &0|_TlgConst(Level, value)
#define _TlgLevelVal_TlgOpcode( value)
#define _TlgLevelVal_TlgKeyword(value)
#define _TlgLevelVal_TlgEvtTag( value)
#define _TlgLevelVal_TlgDesc(   value)
#define _TlgLevelVal_TlgCustAnn(value)

#define _TlgOpcodeVal(n, args) _TlgapplyArgs(_TlgOpcodeVal, n, args)
#define _TlgOpcodeVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
                _TlgOpcodeVal##dim(value)
#define _TlgOpcodeVal_TlgAuto(   value)
#define _TlgOpcodeVal_TlgS(      value)
#define _TlgOpcodeVal_TlgP(      value)
#define _TlgOpcodeVal_TlgSid(    value)
#define _TlgOpcodeVal_TlgSz(     value)
#define _TlgOpcodeVal_TlgWsz(    value)
#define _TlgOpcodeVal_TlgString( value)
#define _TlgOpcodeVal_TlgA(      value)
#define _TlgOpcodeVal_TlgB(      value)
#define _TlgOpcodeVal_TlgCS(     value)
#define _TlgOpcodeVal_TlgFA(     value)
#define _TlgOpcodeVal_TlgPF(     value)
#define _TlgOpcodeVal_TlgPM(     value)
#define _TlgOpcodeVal_TlgPD(     value)
#define _TlgOpcodeVal_TlgCustom( value)
#define _TlgOpcodeVal_TlgStruct(...)
#define _TlgOpcodeVal_TlgChannel(value)
#define _TlgOpcodeVal_TlgLevel(  value)
#define _TlgOpcodeVal_TlgOpcode( value) &0|_TlgConst(Opcode, value)
#define _TlgOpcodeVal_TlgKeyword(value)
#define _TlgOpcodeVal_TlgEvtTag( value)
#define _TlgOpcodeVal_TlgDesc(   value)
#define _TlgOpcodeVal_TlgCustAnn(value)

#define _TlgKeywordVal(n, args) _TlgapplyArgs(_TlgKeywordVal, n, args)
#define _TlgKeywordVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
              _TlgKeywordVal##dim(value)
#define _TlgKeywordVal_TlgAuto(   value)
#define _TlgKeywordVal_TlgS(      value)
#define _TlgKeywordVal_TlgP(      value)
#define _TlgKeywordVal_TlgSid(    value)
#define _TlgKeywordVal_TlgSz(     value)
#define _TlgKeywordVal_TlgWsz(    value)
#define _TlgKeywordVal_TlgString( value)
#define _TlgKeywordVal_TlgA(      value)
#define _TlgKeywordVal_TlgB(      value)
#define _TlgKeywordVal_TlgCS(     value)
#define _TlgKeywordVal_TlgFA(     value)
#define _TlgKeywordVal_TlgPF(     value)
#define _TlgKeywordVal_TlgPM(     value)
#define _TlgKeywordVal_TlgPD(     value)
#define _TlgKeywordVal_TlgCustom( value)
#define _TlgKeywordVal_TlgStruct(...)
#define _TlgKeywordVal_TlgChannel(value)
#define _TlgKeywordVal_TlgLevel(  value)
#define _TlgKeywordVal_TlgOpcode( value)
#define _TlgKeywordVal_TlgKeyword(value) |_TlgConst(Keyword, value)
#define _TlgKeywordVal_TlgEvtTag( value)
#define _TlgKeywordVal_TlgDesc(   value)
#define _TlgKeywordVal_TlgCustAnn(value)

#define _TlgEvtTagVal(n, args) _TlgapplyArgs(_TlgEvtTagVal, n, args)
#define _TlgEvtTagVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
              _TlgEvtTagVal##dim(value)
#define _TlgEvtTagVal_TlgAuto(   value)
#define _TlgEvtTagVal_TlgS(      value)
#define _TlgEvtTagVal_TlgP(      value)
#define _TlgEvtTagVal_TlgSid(    value)
#define _TlgEvtTagVal_TlgSz(     value)
#define _TlgEvtTagVal_TlgWsz(    value)
#define _TlgEvtTagVal_TlgString( value)
#define _TlgEvtTagVal_TlgA(      value)
#define _TlgEvtTagVal_TlgB(      value)
#define _TlgEvtTagVal_TlgCS(     value)
#define _TlgEvtTagVal_TlgFA(     value)
#define _TlgEvtTagVal_TlgPF(     value)
#define _TlgEvtTagVal_TlgPM(     value)
#define _TlgEvtTagVal_TlgPD(     value)
#define _TlgEvtTagVal_TlgCustom( value)
#define _TlgEvtTagVal_TlgStruct()
#define _TlgEvtTagVal_TlgChannel(value)
#define _TlgEvtTagVal_TlgLevel(  value)
#define _TlgEvtTagVal_TlgOpcode( value)
#define _TlgEvtTagVal_TlgKeyword(value)
#define _TlgEvtTagVal_TlgEvtTag( value) |value
#define _TlgEvtTagVal_TlgDesc(   value)
#define _TlgEvtTagVal_TlgCustAnn(value)

#define _TlgAnnotes(n, args) _TlgapplyArgs(_TlgAnnotes, n, args)
#define _TlgAnnotes_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
              _TlgAnnotes##dim(name, desc)
#define _TlgAnnotes_TlgAuto(   name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgS(      name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgP(      name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgSid(    name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgSz(     name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgWsz(    name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgString( name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgA(      name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgB(      name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgCS(     name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgFA(     name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgPF(     name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgPM(     name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgPD(     name, desc)
#define _TlgAnnotes_TlgCustom( name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgStruct( name, desc) L"|" L## #name L"=" desc
#define _TlgAnnotes_TlgChannel(name, desc)
#define _TlgAnnotes_TlgLevel(  name, desc)
#define _TlgAnnotes_TlgOpcode( name, desc)
#define _TlgAnnotes_TlgKeyword(name, desc)
#define _TlgAnnotes_TlgEvtTag( name, desc)
#define _TlgAnnotes_TlgDesc(   name, desc)
#define _TlgAnnotes_TlgCustAnn(name, desc) L"|" L## name L"=" desc

#define _TlgDescVal(n, args) _TlgapplyArgs(_TlgDescVal, n, args)
#define _TlgDescVal_imp(n, data_type, in_type, out_type, has_out, dim, value, cVals, name, desc, tags, has_tags) \
              _TlgDescVal##dim(name, desc)
#define _TlgDescVal_TlgAuto(   name, desc)
#define _TlgDescVal_TlgS(      name, desc)
#define _TlgDescVal_TlgP(      name, desc)
#define _TlgDescVal_TlgSid(    name, desc)
#define _TlgDescVal_TlgSz(     name, desc)
#define _TlgDescVal_TlgWsz(    name, desc)
#define _TlgDescVal_TlgString( name, desc)
#define _TlgDescVal_TlgA(      name, desc)
#define _TlgDescVal_TlgB(      name, desc)
#define _TlgDescVal_TlgCS(     name, desc)
#define _TlgDescVal_TlgFA(     name, desc)
#define _TlgDescVal_TlgPF(     name, desc)
#define _TlgDescVal_TlgPM(     name, desc)
#define _TlgDescVal_TlgPD(     name, desc)
#define _TlgDescVal_TlgCustom( name, desc)
#define _TlgDescVal_TlgStruct( name, desc)
#define _TlgDescVal_TlgChannel(name, desc)
#define _TlgDescVal_TlgLevel(  name, desc)
#define _TlgDescVal_TlgOpcode( name, desc)
#define _TlgDescVal_TlgKeyword(name, desc)
#define _TlgDescVal_TlgEvtTag( name, desc)
#define _TlgDescVal_TlgDesc(   name, desc) desc
#define _TlgDescVal_TlgCustAnn(name, desc)

#ifdef __cplusplus
template<class T, T n> struct _TlgIntegralConstant { static T const value = n; };
template<UCHAR n> struct _TraceLoggingChannel : _TlgIntegralConstant<UCHAR, n> { };
template<UCHAR n> struct _TraceLoggingLevel : _TlgIntegralConstant<UCHAR, n> { };
template<UCHAR n> struct _TraceLoggingOpcode : _TlgIntegralConstant<UCHAR, n> { };
template<ULONGLONG n> struct _TraceLoggingKeyword : _TlgIntegralConstant<ULONGLONG, n> { };
template<UINT32 n> struct _TraceLoggingEventTag : _TlgIntegralConstant<UINT32, n> { };
#define _TlgConst(name, n) _TraceLogging##name<n>::value
#define _TlgTempVarsDecl(...)
#define _TlgSeqStart (
#define _TlgSeqEnd )
#else
#define _TlgConst(name, n) (n)
#define _TlgTempVarsDecl(...) _TLG_FOREACH(_TlgTempVars, __VA_ARGS__)
#define _TlgSeqStart
#define _TlgSeqEnd
#endif

#define _TlgWrite_imp(tlgWriteFunc, hProvider, eventName, tlgWriteArgs, ...) \
    __pragma(warning(push)) \
    __pragma(warning(disable:4127 4132 6001)) \
    __pragma(warning(error:4047)) \
    _TlgPragmaUtf8Begin \
    __pragma(pack(push, 1)) \
    do { \
        _TlgEvtTagDecl(__VA_ARGS__) \
        enum { _TlgLevelConst = 5 _TLG_FOREACH(_TlgLevelVal, __VA_ARGS__) }; \
        static struct { \
            UCHAR _TlgBlobTyp; UCHAR _TlgChannel; UCHAR _TlgLevel; UCHAR _TlgOpcode; ULONGLONG _TlgKeyword; \
            UINT16 _TlgEvtMetaSize; \
            _TlgEvtTagType _TlgEvtTags; \
            char _TlgName[sizeof(eventName)]; \
            _TLG_FOREACH(_TlgInfoVars, __VA_ARGS__) \
        } __declspec(allocate(_TlgSegMetadataEvents)) __declspec(align(1)) const _TlgEvent = { \
            _TlgBlobEvent3, \
            11 _TLG_FOREACH(_TlgChannelVal, __VA_ARGS__), \
            _TlgLevelConst, \
            0 _TLG_FOREACH(_TlgOpcodeVal, __VA_ARGS__), \
            0 _TLG_FOREACH(_TlgKeywordVal, __VA_ARGS__), \
            sizeof(_TlgEvent)-_TLG_EVENT_METADATA_PREAMBLE-1, \
            _TlgEvtTagInit(__VA_ARGS__), \
            (eventName) \
            _TLG_FOREACH(_TlgInfoVals, __VA_ARGS__) \
        }; \
        TraceLoggingHProvider const _TlgProv = (hProvider); \
        if ((UCHAR)_TlgLevelConst < _TlgProv->LevelPlus1 && _TlgKeywordOn(_TlgProv, _TlgEvent._TlgKeyword)) { \
            _TlgTempVarsDecl(__VA_ARGS__) \
            EVENT_DATA_DESCRIPTOR _TlgData[_TlgSkipVal _TLG_FOREACH(_TlgDataDescCount, __VA_ARGS__)]; \
            UINT32 _TlgIdx = _TlgSkipVal; \
            _TlgSeqStart \
            _TLG_FOREACH(_TlgDataDescCreate, __VA_ARGS__) \
            __pragma(warning(disable:26000)) /* OACR false positive Esp:1466 */ \
            _TlgWrite_annotation(hProvider, _TLG_FLATTEN(eventName), __VA_ARGS__) \
            tlgWriteFunc(_TlgProv, &_TlgEvent._TlgChannel, _TLG_FLATTEN tlgWriteArgs, _TlgIdx, _TlgData) \
            _TlgSeqEnd; \
        } \
    } while (0) \
    __pragma(pack(pop)) \
    _TlgPragmaUtf8End \
    __pragma(warning(pop)) \

#define _TlgDefineProvider_annotation(hProvider, functionPostfix, requiresWrapper, providerName) \
    _TlgDefineProvider_functionWrapperBegin##requiresWrapper(functionPostfix) \
        __annotation( \
            L"_TlgDefineProvider:|" _TLG_PASTE(L, _TLG_STRINGIZE(__LINE__)) L"|" _TLG_PASTE(L, _TLG_STRINGIZE(hProvider)) L"|" \
            L##providerName \
        ); \
    _TlgDefineProvider_functionWrapperEnd##requiresWrapper
#define _TlgDefineProvider_functionWrapperBegin0(functionPostfix)
#define _TlgDefineProvider_functionWrapperBegin1(functionPostfix) static void __cdecl _TLG_PASTE(_TlgDefineProvider_annotation_, functionPostfix)(void) \
                                                {
#define _TlgDefineProvider_functionWrapperEnd0
#define _TlgDefineProvider_functionWrapperEnd1  }

#define _TlgWrite_annotation(hProvider, eventName, ...)  __annotation( \
    L"_TlgWrite:|" _TLG_PASTE(L, _TLG_STRINGIZE(__LINE__)) L"|" _TLG_PASTE(L, _TLG_STRINGIZE(hProvider)) L"|" \
    _TLG_PASTE(L, _TLG_STRINGIZE(eventName)) L"=" _TLG_FOREACH(_TlgDescVal, __VA_ARGS__) \
    _TLG_FOREACH(_TlgAnnotes, __VA_ARGS__) \
    ), \

#pragma endregion

#endif // _TRACELOGGINGPROVIDER_
