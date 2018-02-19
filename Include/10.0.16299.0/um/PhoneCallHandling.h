//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#pragma once

/// <summary>
/// Call Handling Phone APIs.
///
/// The caller needs ID_CAP_PHONE_2ND_PARTY capability to be able to call these API.
/// </summary>

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// pimstore defines
#ifndef OLITEMID
typedef struct OLITEMID
{
    DWORD data[3];
} OLITEMID, *LPOLITEMID;
#endif

#ifndef CEOID
typedef DWORD CEOID;
typedef CEOID *PCEOID;
#endif

#ifndef CEPROPID
typedef DWORD CEPROPID;
typedef CEPROPID *PCEPROPID;
#endif

// error codes
#define E_ACTIONUNAVAILABLE __HRESULT_FROM_WIN32(ERROR_INVALID_OPERATION)

#ifndef E_NOTFOUND
#define E_NOTFOUND          __HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
#endif

#ifndef E_FILENOTFOUND
#define E_FILENOTFOUND          __HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND)
#endif

#if !defined(E_NOTREADY)
#define E_NOTREADY          __HRESULT_FROM_WIN32(ERROR_NOT_READY)         // The Phone Service has not yet been initialized
#endif

#if !defined(E_NOTSUPPORTED)
#define E_NOTSUPPORTED      __HRESULT_FROM_WIN32(ERROR_NOT_SUPPORTED)
#endif

DECLARE_HANDLE(HPHONELISTENER);

#define INVALID_HPHONELISTENER  ((HPHONELISTENER)-1)

/// <summary>
/// Defines a null-valued (invalid) PhoneCallId.
/// </summary>
#define NULL_PHONECALLID 0


/// <summary>
/// Defines a null-valued (invalid) PhoneLineId.
/// </summary>
#define NULL_PHONELINEID GUID_NULL


/// <summary>
/// Defines a null-valued (invalid) PhoneLineType.
/// </summary>
#define NULL_PHONELINETYPE GUID_NULL

#include <PhoneIdlTypes.h>

/// <topic name="Phone_Call_APIs" displayname="Phone Call Control APIs">
///   <topic_scope tref="Phone" />
///   <summary>
///       <para>
///         These are set of APIs that allow the clients to programmatically make
///         a new call , control an existing call or querying for the status of
///         the existing calls. Users of these APIs must call PhoneAPIInitialize in order to use the API set
///       </para>
///   </summary>
/// </topic>

/// <topic name="Terminology" displayname="Terminology">
///   <topic_scope tref="Phone_Call_APIs" />
///     <summary>
///         <list type="table">
///             <listheader>
///                 <term>Name</term>
///                 <term>Meaning</term>
///             </listheader>
///             <item>
///                 <term>Phone Service</term>
///                 <term>
///                     A singleton service in the device that handles
///                     making a phone call, manipulating existing phone calls.
///                 </term>
///             </item>
///             <item>
///                 <term>Phone System</term>
///                 <term>
///                     Same as Phone Service.
///                 </term>
///             </item>
///             <item>
///                 <term>Call State Provider</term>
///                 <term>
///                     These are drivers/software that actually makes technology specific
///                     calls, such as GSM calls, CDMA calls, VOIP calls etc.
///                 </term>
///             </item>
///             <item>
///                 <term>Active Call</term>
///                 <term>
///                     Any call that is not ended in the system is considered
///                     an active call. So all calls that don't have callstate
///                     PH_CALLSTATE_IDLE are active calls.
///                 </term>
///             </item>
///             <item>
///                 <term>Talking Call</term>
///                 <term>
///                     Any call that has callstate as PH_CALLSTATE_TALKING is considered a
///                     talking call. This is the call that the user is talking
///                     to.
///                 </term>
///             </item>
///             <item>
///                 <term>Held Call</term>
///                 <term>
///                     Any call that has callstate as PH_CALLSTATE_HOLD is considered a
///                     held call. This is the call that the user has put on hold.
///                 </term>
///             </item>
///             <item>
///                 <term>Transferring Call</term>
///                 <term>
///                     Any call that is currently undergoing a transfer is a
///                     transferring call. This category includes calls with callstate
///                     PH_CALLSTATE_TRANSFERRING.
///                 </term>
///             </item>
///             <item>
///                 <term>Ambiguous Call</term>
///                 <term>
///                     Any call that is in callstate PH_CALLSTATE_AMBIGUOUS is an
///                     ambiguous call. Generally this happens in a CDMA device
///                     when a call is flashed. The state of the call itself
///                     can't be predicted (such as whether the call is on hold etc)
///                     when in this state.
///                 </term>
///             </item>
///             <item>
///                 <term>Busy Call</term>
///                 <term>
///                     Any call that has callstate PH_CALLSTATE_BUSY is a busy call.
///                     These are technically ended calls, but will allow the user
///                     to explicitly end a call. So they are counted as an active
///                     call.
///                 </term>
///             </item>
///             <item>
///                 <term>Ended Call</term>
///                 <term>
///                     Any call that has callstate PH_CALLSTATE_IDLE is an ended call.
///                 </term>
///             </item>
///             <item>
///                 <term>Incoming Call</term>
///                 <term>
///                     Any call that has callstate PH_CALLSTATE_INCOMING is an incoming call.
///                     These are calls that are currently ringing in the system and
///                     are not yet accepted or rejected.
///                 </term>
///             </item>
///             <item>
///                 <term>Outgoing Call</term>
///                 <term>
///                     Any call that has callstate PH_CALLSTATE_CALLING is an outgoing call.
///                     These are calls that are in dialing state and not yet connected.
///                 </term>
///             </item>
///             <item>
///                 <term>Conference Call</term>
///                 <term>
///                     Conference calls are group of calls connected and act like a single
///                     entity. Each call in the conference can communicate with other calls
///                     in the conference. 
///                     The calls that make up the conference will have the same conferenceId value.
///                     A conferenceIdValue of NULL_PHONECALLID indicates that a call is not in a
///                     conference.
///                 </term>
///             </item>
///         </list>
///     </summary>
/// </topic>

/// <topic name="API_Categories" displayname="API Categories">
///   <topic_scope tref="Phone_Call_APIs" />
/// <summary>
///  There are three categories of phone call APIs. They are the following:
///  <list type="bullet">
///    <item>
///     <description>Call Control APIs: These are the set of APIs that allow the clients
///                  to either make a new call or modify/control an existing call.
///     </description>
///    </item>
///    <item>
///     <description>Status APIs: These are the set of APIs that allow the clients to
///                  query for various info about the calls in the phone system.
///     </description>
///    </item>
///    <item>
///     <description>Notification APIs: These are the set of APIs that allow the
///                  clients to register for various notifications that represent
///                  a state change.
///     </description>
///    </item>
/// </list>
/// </summary>
/// </topic>

/// <topic name="Using_Call_Control_APis" displayname="General Usage">
/// <topic_scope tref="Call_Control_APIs" />
/// <summary>
///  Call control APIs allow the clients to either make a new call or
///  perform actions on an existing call. Most of the control apis
///  take an optional call ID as a parameter. Clients can also ahead of time 
///  determine whether a particular action is valid to be performed
///  by calling <see cref="PhoneGetAvailableActions" /> API.
///  Clients need to call <see cref="PhoneAPIInitialize" /> API to use this set of APIs.
/// </summary>
/// </topic>

/// <topic name="Call_Service_Provider_Info_APIs" displayname="Call Service Providers Information APIs">
/// <topic_scope tref="API_Categories" />
/// <summary>
///  The Call Service Provider Information APIs are a set of read-only APIs that allow clients to get
///  information about the state of the call service providers installed on the device.
/// </summary>
/// </topic>


/// <summary>
/// Callback function to be used with PhoneAddListener.
/// </summary>
typedef UINT (CALLBACK *PH_CHANGE_EVENT_NOTIFY_FUNCTION)(HPHONELISTENER hListener,
                                                DWORD_PTR dwUserData,
                                                const PhoneNotifyData& data);


/// <summary>
/// Blocks until the phone service is loaded and ready for Phone API requests.
/// </summary>
HRESULT WINAPI PhoneWaitForAPIReady(void);


/// <summary>
/// Initialize the Phone API set. Clients of the Phone Call Control APIs must call this API before
/// calling any of the other Phone Call Control APIs.
/// </summary>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_FAIL - Failure
/// </para>
/// </returns>
/// <seealso cref="PhoneAPIUninitialize" />
HRESULT WINAPI PhoneAPIInitialize(void);


/// <summary>
/// Uninitialize the Phone API set. Clients of the Phone Call Control APIs should call this to clean up.
/// </summary>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_FAIL - Failure
/// </para>
/// </returns>
/// <seealso cref="PhoneAPIInitialize" />
HRESULT WINAPI PhoneAPIUninitialize();


/// <summary>
/// Returns the state of all phone calls.
/// </summary>
/// <param name="ppCallInfo">
/// Returns a pointer to an array of PH_CALL_INFO, which must be freed with LocalFree
/// when the caller is finished. This array is allocated and returned even if there are
/// no calls (the value returned in <paramref name="pCallInfoCount"/> is 0).
/// Conference calls are treated as a single entity, and calls within conferences
/// are not returned by this API. Use <see cref="PhoneGetCallsInConference" /> to get
/// a conference's member calls.
/// </param>
/// <param name="pCallInfoCount">
/// Returns the number of calls in <paramref name="ppCallInfo" />.
/// </param>
/// <param name="pCallCounts">If supplied, returns PH_PHONE_CALL_COUNTS.</param>
/// <returns>
/// E_POINTER - A pointer is nullptr.
/// E_NOTREADY - Phone System is not ready.
/// Standard HRESULT otherwise.
/// </returns>
/// <seealso cref="PH_CALL_INFO" />
/// <seealso cref="PH_PHONE_CALL_COUNTS" />
/// <example>
/// <code>
/// void SomeFunction()
/// {
///     HRESULT hr = S_OK;
///     PH_PHONE_CALL_COUNTS callCounts;
///     PH_CALL_INFO *pCallInfo = nullptr;
///     UINT callInfoCount = 0;
///     hr = PhoneGetState(&pCallInfo, &callInfoCount, &callCounts);
///     if (SUCCEEDED(hr))
///     {
///         // Do something with the calls (note: callInfoCount might be 0).
///         PhoneFreeCallInfo(pCallInfo);
///     }
/// }
/// </code>
/// </example>
HRESULT WINAPI PhoneGetState(_Outptr_result_buffer_(*pCallInfoCount) PH_CALL_INFO **ppCallInfo,
                      _Out_ UINT *pCallInfoCount,
                      _Out_opt_ PH_PHONE_CALL_COUNTS *pCallCounts);


/// <summary>
/// Releases memory allocated for PH_CALL_INFO
/// </summary>
/// <param name="pCallInfos">[IN] Pointer to PH_CALL_INFO</param>
void WINAPI PhoneFreeCallInfo(_In_opt_ _Post_invalid_ PH_CALL_INFO * pCallInfos);


/// <summary>
/// Returns whether an action is available or not
/// based on the current phone system state.
/// E.g. PH_ACTION_SWAP is an available action if
/// there are two calls in the phone system.
/// </summary>
/// <param name="callId">[In,Optional] ID of the phone call.</param>
/// <param name="action">[In] one of PH_ACTION values</param>
/// <returns>
/// <para>
/// TRUE - available
/// </para>
/// <para>
/// FALSE - not available
/// </para>
/// </returns>
/// <remarks>
/// If <paramref name="callId"/> is nullptr, then
/// this API returns TRUE, if <paramref name="action"/> is available 
/// on the phone system.
/// Otherwise this API returns TRUE if <paramref name="action"/> can be
/// performed on <paramref name="callId"/> or on the phone system.
/// </remarks>
/// <seealso cref="PH_ACTION">PH_ACTION </seealso>
BOOL WINAPI PhoneIsActionAvailable(_In_ RefPhoneCallId callId, 
                            _In_ PH_ACTION action);


/// <summary>
/// Accept an incoming call, with additional parameters to control aspects of the call being
/// accepted.
/// </summary>
/// <param name="parameters">
/// Parameters that dictate which call is accepted, and additional aspects of the call
/// being accepted.
/// </param>
/// <returns> 
/// <para>
/// E_INVALIDARG - Invalid <paramref name="callId"/>
/// </para>
/// <para>
/// E_NOTREADY - Phone system is not ready.
/// </para>
/// <para>
/// E_ACTIONUNAVAILABLE - If the given action is not allowed on the phone system.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
/// <remarks>This only succeeds if the input <paramref name="callId"/> is
/// of direction incoming
/// </remarks>
HRESULT WINAPI PhoneAcceptIncomingEx(_In_ const PhoneAcceptCallParameters &parameters);


/// <summary>
/// End a given call in the system
/// </summary>
/// <param name="callId">[In,Optional] ID of the phone call.</param>
/// <returns> 
/// <para>
/// E_INVALIDARG - Invalid inputs
/// </para>
/// <para>
/// E_NOTREADY - Phone system is not ready.
/// </para>
/// <para>
/// E_ACTIONUNAVAILABLE - If the given action is not allowed on the phone system.
///                         (e.g) No calls.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneEnd(_In_ RefPhoneCallId callId);


/// <summary>
/// Returns the current mute state of the system
/// </summary>
/// <param name="pfMute">[Out] Mute state</param>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_POINTER - Null <paramref name="pfMute"/>.
/// </para>
/// <para>
/// E_NOTREADY - Phone System is not ready.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneGetMute(_Out_ BOOL * pfMute);


/// <summary>
/// Mute phone system
/// </summary>
/// <param name="fMute">[In] whether to mute or unmute</param>
/// <returns>
/// <para>
/// E_NOTREADY - Phone system is not ready.
/// </para>
/// <para>
/// E_ACTIONUNAVAILABLE - If the given action is not allowed on the phone system.
///                       (e.g) The phone is already muted and API is called with
///                       TRUE.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneSetMute(_In_ BOOL fMute);


/// <summary>
/// Returns the speakerphone state of the system
/// </summary>
/// <param name="pfSpeakerOn">[Out] SpeakerPhone state.</param>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_POINTER - Null <paramref name="pfSpeakerOn"/>.
/// </para>
/// <para>
/// E_NOTREADY - Phone System is not ready.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneGetSpeaker(_Out_ BOOL * pfSpeakerOn);


/// <summary>
/// Turn on/off speakerphone.
/// </summary>
/// <param name="fSpeakerOn">[In] whether to turn
/// on/off the speakerphone</param>
/// <returns>
/// <para>
/// E_NOTREADY - Phone system is not ready.
/// </para>
/// <para>
/// E_ACTIONUNAVAILABLE - If the given action is not allowed on the phone system.
///                       (e.g) The phone is already on speaker and API is called with
///                       TRUE.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneSetSpeaker(_In_ BOOL fSpeakerOn);


/// <summary>
/// Allows the caller to specify a callback function ptr that
/// will get called when the state of phone data changes or
/// when an error occurs.
/// </summary>
/// <param name="pfnChangeEventNotify">[In] callback function pointer</param>
/// <param name="prgchangeevent">[In] Pointer to an array of PH_EVENTs</param>
/// <param name="cEvents">[In] number of elements in <paramref name="prgchangeevent" />
/// array.</param>
/// <param name="dwUserData">[In,Optional] Any caller specific data that
/// is sent to the callback notification function.</param>
/// <param name="phListener">[Out] Pointer to the listener handle</param>
/// <example>
/// Following snippet of code registers for PH_CHANGEEVENT_PHONESTATE ,
/// PH_CHANGEEVENT_ERROR and does something with it in
/// the notification.
/// <code>
///  UINT NotifyCallback(HPHONELISTENER hListener,
///                      DWORD_PTR dwUserData,
///                      PH_CHANGEEVENT changeevent,
///                      PH_ERROR error)
///  {
///      HRESULT hr = S_OK;
///      PH_PHONE_CALL_COUNTS cntCalls;
///      PH_CALL_INFO *rgci = nullptr;
///      UINT cCalls = 0;
///      if (changeevent == PH_CHANGEEVENT_PHONESTATE)
///      {
///         hr = PhoneGetState(&rgci, &cCalls, &cntCalls);
///         if (SUCCEEDED (hr) && (cCalls != 0))
///         {
///             // Do something with the calls.
///             LocalFree(rgci);
///         }
///      }
///      else if (changeevent == PH_ERROR)
///      {
///          // There was some error.
///          // Log it.
///          //LogError(error);
///      }
///  }
///  SomeOtherFunction()
///  {
///      HLISTENER hListener = nullptr;
///      PH_CHANGEEVENT rgchangeevent[2] = {PH_CHANGEEVENT_PHONESTATE, PH_CHANGEEVENT_ERROR};
///      // Please validate the return value.
///      PhoneAddListener(NotifyCallback, rgchangeevent, 2, nullptr, &hListener);
///
///      // Later when there is no need for Notifications anymore
///      // Unregister the listener as such
///      PhoneRemoveListener(hListener);
///  }
///
/// </code>
/// </example>
/// <remarks>
/// The callback function will be called on a different thread. All listeners
/// in the same process share this thread. So do not block this thread, if there
/// are more than 1 listener in the process.
/// </remarks>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_INVALIDARG - Invalid <paramref name="prgchangeevent"/> or <paramref name="cEvents"/>
/// </para>
/// <para>
/// E_POINTER - Null <paramref name="prgchangeevent"/> or <paramref name="phListener"/> or
/// <paramref name="pfnChangeEventNotify"/>.
/// </para>
/// <para>
/// E_NOTREADY - Phone System is not ready.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneAddListener(_In_ PH_CHANGE_EVENT_NOTIFY_FUNCTION pfnChangeEventNotify, 
                         _In_reads_(cEvents) const PH_CHANGEEVENT * prgchangeevent, 
                         UINT cEvents, 
                         DWORD_PTR dwUserData,
                         _Out_ HPHONELISTENER * phListener);


/// <summary>
/// Removes a given listener.
/// </summary>
/// <param name="hListener">[In] The HPHONELISTENER returned by
/// PhoneAddListener in phListener</param>
/// <returns>
/// <para>
/// S_OK - Success.
/// </para>
/// <para>
/// E_INVALIDARG - Invalid <paramref name="hListener" />.
/// </para>
/// <para>
/// E_NOTREADY - Phone System is not ready.
/// </para>
/// <para>
/// E_FAIL - Otherwise.
/// </para>
/// </returns>
HRESULT WINAPI PhoneRemoveListener(_In_ HPHONELISTENER hListener);

#ifdef __cplusplus
}
#endif
