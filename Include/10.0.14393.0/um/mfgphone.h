//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _MFGPHONE_
#define _MFGPHONE_

#include <winapifamily.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_ONECORE_APP)

#if (NTDDI_VERSION >= NTDDI_WIN10)

//
// Manufacturing Phone API
//

HRESULT
APIENTRY
MfgPhoneInitialize(
    VOID
    );

HRESULT
APIENTRY
MfgPhoneUninitialize(
    VOID
    );

//
// Get the number of available SIM slots
//

HRESULT
APIENTRY
MfgPhoneGetSimLineCount(
    _Out_ PUINT SimLineCount
    );

//
// Callback to receive SIM line change event notification
//

typedef enum _MFGPHONE_SIMLINEEVENT {
    MFGPHONE_SIMLINEEVENT_UNKNOWN = 0,
    MFGPHONE_SIMLINEEVENT_SIMSTATE,
    MFGPHONE_SIMLINEEVENT_REGISTRATIONSTATE,
    MFGPHONE_SIMLINEEVENT_NETWORKNAME,
    MFGPHONE_SIMLINEEVENT_LINESYSTEMTYPE,
    MFGPHONE_SIMLINEEVENT_SIGNALSTRENGTH,
    MFGPHONE_SIMLINEEVENT_CALLSTATUS,
} MFGPHONE_SIMLINEEVENT;

typedef VOID (CALLBACK *MFGPHONE_SIMLINEEVENT_NOTIFY_CALLBACK)(
    _In_ UINT SimSlot,
    _In_ MFGPHONE_SIMLINEEVENT SimLineEvent,
    _In_ PVOID Context
    );

HRESULT
APIENTRY
MfgPhoneSetSimLineEventNotifyCallback(
    _In_opt_ MFGPHONE_SIMLINEEVENT_NOTIFY_CALLBACK Callback,
    _In_opt_ PVOID Context
    );

//
// Detailed SIM slot line information
//

#define MFGPHONE_SIMSLOT_NONE ((UINT)-1)

typedef enum _MFGPHONE_SIMSTATE {
    MFGPHONE_SIMSTATE_UNKNOWN = 0,
    MFGPHONE_SIMSTATE_NONE,
    MFGPHONE_SIMSTATE_ACTIVE,
    MFGPHONE_SIMSTATE_INVALID,
    MFGPHONE_SIMSTATE_LOCKED,
    MFGPHONE_SIMSTATE_DISABLED,
} MFGPHONE_SIMSTATE;

typedef enum _MFGPHONE_REGISTRATIONSTATE {
    MFGPHONE_REGISTRATIONSTATE_UNKNOWN = 0,
    MFGPHONE_REGISTRATIONSTATE_NOSIGNAL,
    MFGPHONE_REGISTRATIONSTATE_UNREGISTERED,
    MFGPHONE_REGISTRATIONSTATE_REGISTERING,
    MFGPHONE_REGISTRATIONSTATE_REGISTERED,
    MFGPHONE_REGISTRATIONSTATE_DENIED,
} MFGPHONE_REGISTRATIONSTATE;

typedef enum _MFGPHONE_CALLSTATUS {
    MFGPHONE_CALLSTATUS_UNKNOWN = 0,
    MFGPHONE_CALLSTATUS_IDLE,
    MFGPHONE_CALLSTATUS_CALLING,
    MFGPHONE_CALLSTATUS_INCOMING,
    MFGPHONE_CALLSTATUS_ACTIVE,
} MFGPHONE_CALLSTATUS;

typedef enum _MFGPHONE_LINESYSTEMTYPE {
    MFGPHONE_LINESYSTEMTYPE_UNKNOWN = 0,
    MFGPHONE_LINESYSTEMTYPE_GSM,
    MFGPHONE_LINESYSTEMTYPE_CDMA,
    MFGPHONE_LINESYSTEMTYPE_IMS,
} MFGPHONE_LINESYSTEMTYPE;

typedef struct _MFGPHONE_SIMLINEDETAIL {
    UINT SimSlot;
    MFGPHONE_SIMSTATE SimState;
    MFGPHONE_REGISTRATIONSTATE RegistrationState;
    WCHAR NetworkName[64];
    MFGPHONE_LINESYSTEMTYPE LineSystemType;
    UINT SignalStrength;
    MFGPHONE_CALLSTATUS CallStatus;
} MFGPHONE_SIMLINEDETAIL, *PMFGPHONE_SIMLINEDETAIL;

HRESULT
APIENTRY
MfgPhoneGetSimLineDetail(
    _In_ UINT SimSlot,
    _Out_writes_bytes_to_opt_(SimLineDetailSize, *RequiredSize) PMFGPHONE_SIMLINEDETAIL SimLineDetail,
    _In_ ULONG SimLineDetailSize,
    _Out_opt_ _Out_range_(>=, sizeof(MFGPHONE_SIMLINEDETAIL)) PULONG RequiredSize
    );

//
// Dial, End call
//

HRESULT
APIENTRY
MfgPhoneDial(
    _In_ UINT SimSlot,
    _In_z_ PCWSTR DialNumber
    );

HRESULT
APIENTRY
MfgPhoneEndCall(
    _In_ UINT SimSlot
    );

//
// Speaker control while in a call
//

HRESULT
APIENTRY
MfgPhoneGetSpeaker(
    _Out_ PBOOL pbSpeakerOn
    );

HRESULT
APIENTRY
MfgPhoneSetSpeaker(
    _In_ BOOL bSpeakerOn
    );

#endif // End NTDDI_WIN10 and greater

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_ONECORE_APP) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _MFGPHONE_


