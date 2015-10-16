//
// AudioSessionTypes.h -- Copyright Microsoft Corporation, All Rights Reserved.
//
// Description: Type definitions used by the audio session manager RPC/COM interfaces
//
#pragma once
#include <winapifamily.h>
#ifndef __AUDIOSESSIONTYPES__                                                               
#define __AUDIOSESSIONTYPES__

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#if defined(__midl)
#define MIDL_SIZE_IS(x) [size_is(x)]
#define MIDL_STRING [string]
#define MIDL_ANYSIZE_ARRAY
#else   // !defined(__midl)
#define MIDL_SIZE_IS(x)
#define MIDL_STRING
#define MIDL_ANYSIZE_ARRAY ANYSIZE_ARRAY
#endif  // defined(__midl)

//-------------------------------------------------------------------------
// Description: AudioClient share mode
//                                   
//     AUDCLNT_SHAREMODE_SHARED -    The device will be opened in shared mode and use the 
//                                   WAS format.
//     AUDCLNT_SHAREMODE_EXCLUSIVE - The device will be opened in exclusive mode and use the 
//                                   application specified format.
//
typedef enum _AUDCLNT_SHAREMODE
{ 
    AUDCLNT_SHAREMODE_SHARED, 
    AUDCLNT_SHAREMODE_EXCLUSIVE 
} AUDCLNT_SHAREMODE;

//-------------------------------------------------------------------------
// Description: Audio stream categories
//
// ForegroundOnlyMedia     - (deprecated for Win10) Music, Streaming audio
// BackgroundCapableMedia  - (deprecated for Win10) Video with audio
// Communications          - VOIP, chat, phone call
// Alerts                  - Alarm, Ring tones
// SoundEffects            - Sound effects, clicks, dings
// GameEffects             - Game sound effects
// GameMedia               - Background audio for games
// GameChat                - In game player chat
// Speech                  - Speech recognition
// Media                   - Music, Streaming audio
// Movie                   - Video with audio
// Other                   - All other streams (default)
//
typedef enum _AUDIO_STREAM_CATEGORY
{
    AudioCategory_Other = 0,
    AudioCategory_ForegroundOnlyMedia = 1,
#if NTDDI_VERSION < NTDDI_WINTHRESHOLD
    AudioCategory_BackgroundCapableMedia = 2,
#endif
    AudioCategory_Communications = 3,
    AudioCategory_Alerts = 4,
    AudioCategory_SoundEffects = 5,
    AudioCategory_GameEffects = 6,
    AudioCategory_GameMedia = 7,
    AudioCategory_GameChat = 8,
    AudioCategory_Speech = 9,
    AudioCategory_Movie = 10,
    AudioCategory_Media = 11,
} AUDIO_STREAM_CATEGORY;


//-------------------------------------------------------------------------
// Description: AudioClient stream flags
//
// Can be a combination of AUDCLNT_STREAMFLAGS and AUDCLNT_SYSFXFLAGS:
//
// AUDCLNT_STREAMFLAGS (this group of flags uses the high word,
// w/exception of high-bit which is reserved, 0x7FFF0000):
//
//                                  
//     AUDCLNT_STREAMFLAGS_CROSSPROCESS -    Audio policy control for this stream will be shared with 
//                                           with other process sessions that use the same audio session 
//                                           GUID.
//     AUDCLNT_STREAMFLAGS_LOOPBACK -        Initializes a renderer endpoint for a loopback audio application. 
//                                           In this mode, a capture stream will be opened on the specified 
//                                           renderer endpoint. Shared mode and a renderer endpoint is required.
//                                           Otherwise the IAudioClient::Initialize call will fail. If the 
//                                           initialize is successful, a capture stream will be available 
//                                           from the IAudioClient object.
//
//     AUDCLNT_STREAMFLAGS_EVENTCALLBACK -   An exclusive mode client will supply an event handle that will be
//                                           signaled when an IRP completes (or a waveRT buffer completes) telling
//                                           it to fill the next buffer
//
//     AUDCLNT_STREAMFLAGS_NOPERSIST -       Session state will not be persisted
//
//     AUDCLNT_STREAMFLAGS_KEYWORDDETECTOR - Initializes a capture endpoint for keyword detector streaming.
//
//     AUDCLNT_SESSIONFLAGS_EXPIREWHENUNOWNED -       Session expires when there are no streams and no owning
//                                                    session controls.
//
//     AUDCLNT_SESSIONFLAGS_DISPLAY_HIDE -            Don't show volume control in the Volume Mixer.
//
//     AUDCLNT_SESSIONFLAGS_DISPLAY_HIDEWHENEXPIRED - Don't show volume control in the Volume Mixer after the
//                                                    session expires.
//
// AUDCLNT_SYSFXFLAGS (these flags use low word 0x0000FFFF):
//
//     none defined currently
//
#define AUDCLNT_STREAMFLAGS_CROSSPROCESS             0x00010000
#define AUDCLNT_STREAMFLAGS_LOOPBACK                 0x00020000
#define AUDCLNT_STREAMFLAGS_EVENTCALLBACK            0x00040000
#define AUDCLNT_STREAMFLAGS_NOPERSIST                0x00080000
#define AUDCLNT_STREAMFLAGS_RATEADJUST               0x00100000
#define AUDCLNT_SESSIONFLAGS_EXPIREWHENUNOWNED       0x10000000
#define AUDCLNT_SESSIONFLAGS_DISPLAY_HIDE            0x20000000
#define AUDCLNT_SESSIONFLAGS_DISPLAY_HIDEWHENEXPIRED 0x40000000

//-------------------------------------------------------------------------
// Description: AudioSession State.
//
//      AudioSessionStateInactive - The session has no active audio streams.
//      AudioSessionStateActive - The session has active audio streams.
//      AudioSessionStateExpired - The session is dormant.
typedef enum _AudioSessionState
{
    AudioSessionStateInactive = 0,
    AudioSessionStateActive = 1,
    AudioSessionStateExpired = 2
} AudioSessionState;
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
#endif

