/* Header file automatically generated from windows.media.audio.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0206 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Emedia2Eaudio_h__
#define __windows2Emedia2Eaudio_h__
#ifndef __windows2Emedia2Eaudio_p_h__
#define __windows2Emedia2Eaudio_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#if !defined(_MSC_VER) || (_MSC_VER >= 1910)
#define MIDL_CONST_ID constexpr const
#else
#define MIDL_CONST_ID const __declspec(selectany)
#endif


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Render.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioDeviceInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode ABI::Windows::Media::Audio::IAudioDeviceInputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioDeviceOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode ABI::Windows::Media::Audio::IAudioDeviceOutputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioFileInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode ABI::Windows::Media::Audio::IAudioFileInputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioFileOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode ABI::Windows::Media::Audio::IAudioFileOutputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioFrameCompletedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs ABI::Windows::Media::Audio::IAudioFrameCompletedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioFrameInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode ABI::Windows::Media::Audio::IAudioFrameInputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioFrameOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode ABI::Windows::Media::Audio::IAudioFrameOutputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraph;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph ABI::Windows::Media::Audio::IAudioGraph

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraph2;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 ABI::Windows::Media::Audio::IAudioGraph2

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraphConnection;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection ABI::Windows::Media::Audio::IAudioGraphConnection

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraphSettings;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings ABI::Windows::Media::Audio::IAudioGraphSettings

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraphSettingsFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory ABI::Windows::Media::Audio::IAudioGraphSettingsFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraphStatics;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics ABI::Windows::Media::Audio::IAudioGraphStatics

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioGraphUnrecoverableErrorOccurredEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs ABI::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode ABI::Windows::Media::Audio::IAudioInputNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioInputNode2;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 ABI::Windows::Media::Audio::IAudioInputNode2

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode ABI::Windows::Media::Audio::IAudioNode

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitter;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter ABI::Windows::Media::Audio::IAudioNodeEmitter

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitter2;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 ABI::Windows::Media::Audio::IAudioNodeEmitter2

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterConeProperties;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties ABI::Windows::Media::Audio::IAudioNodeEmitterConeProperties

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterDecayModel;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterDecayModelStatics;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModelStatics

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory ABI::Windows::Media::Audio::IAudioNodeEmitterFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterNaturalDecayModelProperties;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties ABI::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterShape;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape ABI::Windows::Media::Audio::IAudioNodeEmitterShape

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeEmitterShapeStatics;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics ABI::Windows::Media::Audio::IAudioNodeEmitterShapeStatics

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeListener;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener ABI::Windows::Media::Audio::IAudioNodeListener

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IAudioNodeWithListener;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener ABI::Windows::Media::Audio::IAudioNodeWithListener

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ICreateAudioDeviceInputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ICreateAudioDeviceOutputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ICreateAudioFileInputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ICreateAudioFileOutputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ICreateAudioGraphResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult ABI::Windows::Media::Audio::ICreateAudioGraphResult

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IEchoEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition ABI::Windows::Media::Audio::IEchoEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IEchoEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory ABI::Windows::Media::Audio::IEchoEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IEqualizerBand;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand ABI::Windows::Media::Audio::IEqualizerBand

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IEqualizerEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition ABI::Windows::Media::Audio::IEqualizerEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IEqualizerEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory ABI::Windows::Media::Audio::IEqualizerEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IFrameInputNodeQuantumStartedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs ABI::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ILimiterEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition ABI::Windows::Media::Audio::ILimiterEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface ILimiterEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory ABI::Windows::Media::Audio::ILimiterEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IReverbEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition ABI::Windows::Media::Audio::IReverbEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                interface IReverbEffectDefinitionFactory;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory ABI::Windows::Media::Audio::IReverbEffectDefinitionFactory

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioGraphConnection;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#define DEF___FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4af6a8fc-e7fb-5957-91c1-2df9600b22eb"))
IIterator<ABI::Windows::Media::Audio::AudioGraphConnection*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraphConnection*, ABI::Windows::Media::Audio::IAudioGraphConnection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Audio.AudioGraphConnection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Audio::AudioGraphConnection*> __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_t;
#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Audio::IAudioGraphConnection*>
//#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Audio::IAudioGraphConnection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#define DEF___FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("96168d06-a51a-5480-9403-fbd7631e3b3c"))
IIterable<ABI::Windows::Media::Audio::AudioGraphConnection*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraphConnection*, ABI::Windows::Media::Audio::IAudioGraphConnection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Audio.AudioGraphConnection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Audio::AudioGraphConnection*> __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_t;
#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Audio::IAudioGraphConnection*>
//#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Audio::IAudioGraphConnection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class EqualizerBand;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#define DEF___FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb4f8b6a-7928-5f2f-b7f2-7b90c084356f"))
IIterator<ABI::Windows::Media::Audio::EqualizerBand*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::EqualizerBand*, ABI::Windows::Media::Audio::IEqualizerBand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Audio.EqualizerBand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Audio::EqualizerBand*> __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_t;
#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Audio::IEqualizerBand*>
//#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Audio::IEqualizerBand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#define DEF___FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6f76d148-023e-565a-9f09-4ad4a32ad74f"))
IIterable<ABI::Windows::Media::Audio::EqualizerBand*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::EqualizerBand*, ABI::Windows::Media::Audio::IEqualizerBand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Audio.EqualizerBand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Audio::EqualizerBand*> __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_t;
#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Audio::IEqualizerBand*>
//#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Audio::IEqualizerBand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#define DEF___FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8485aed1-9b0c-59d2-a206-699bf746c3ff"))
IVectorView<ABI::Windows::Media::Audio::AudioGraphConnection*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraphConnection*, ABI::Windows::Media::Audio::IAudioGraphConnection*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Audio.AudioGraphConnection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Audio::AudioGraphConnection*> __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_t;
#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Audio::IAudioGraphConnection*>
//#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Audio::IAudioGraphConnection*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#define DEF___FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("48f26053-ea7d-59e1-952b-fb78af42d2e2"))
IVectorView<ABI::Windows::Media::Audio::EqualizerBand*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::EqualizerBand*, ABI::Windows::Media::Audio::IEqualizerBand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Audio.EqualizerBand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Audio::EqualizerBand*> __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_t;
#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Audio::IEqualizerBand*>
//#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Audio::IEqualizerBand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class CreateAudioDeviceInputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6cc56450-e4e8-59c9-83d8-63e46eacb20b"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Audio.CreateAudioDeviceInputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("71ab4481-ec4a-5ee9-a342-3a31747829b8"))
IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Audio.CreateAudioDeviceInputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioDeviceInputNodeResult*> __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class CreateAudioDeviceOutputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("edbc9b59-7cae-513f-b0dc-17666d37ba77"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Audio.CreateAudioDeviceOutputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f810d730-de15-58e0-a5f4-c159f73669ed"))
IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Audio.CreateAudioDeviceOutputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioDeviceOutputNodeResult*> __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class CreateAudioFileInputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("504d1efd-c11c-506e-b8c9-af17c771efb5"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Audio.CreateAudioFileInputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("473b06bf-387b-56ca-bee1-527480272b0f"))
IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Audio.CreateAudioFileInputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioFileInputNodeResult*> __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioFileInputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class CreateAudioFileOutputNodeResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a7a95713-a08f-5fdf-89c6-9627bcf5d80a"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Audio.CreateAudioFileOutputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1164517d-e953-5415-a5b3-4249a969be7b"))
IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*, ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Audio.CreateAudioFileOutputNodeResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioFileOutputNodeResult*> __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioFileOutputNodeResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class CreateAudioGraphResult;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4e660bda-d438-5741-8b66-85fe72574aab"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioGraphResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioGraphResult*, ABI::Windows::Media::Audio::ICreateAudioGraphResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Audio.CreateAudioGraphResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::CreateAudioGraphResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioGraphResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Audio::ICreateAudioGraphResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e13b431-65ce-5bfb-b0aa-fac8df958b95"))
IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioGraphResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::CreateAudioGraphResult*, ABI::Windows::Media::Audio::ICreateAudioGraphResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Audio.CreateAudioGraphResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Audio::CreateAudioGraphResult*> __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioGraphResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Audio::ICreateAudioGraphResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioFileInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4481085b-8b8b-5520-9825-e9671da2a89f"))
ITypedEventHandler<ABI::Windows::Media::Audio::AudioFileInputNode*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioFileInputNode*, ABI::Windows::Media::Audio::IAudioFileInputNode*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Audio.AudioFileInputNode, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Audio::AudioFileInputNode*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFileInputNode*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFileInputNode*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioFrameInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioFrameCompletedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad59dcfe-71b0-5e16-99c2-cd90644d8ee8"))
ITypedEventHandler<ABI::Windows::Media::Audio::AudioFrameInputNode*,ABI::Windows::Media::Audio::AudioFrameCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioFrameInputNode*, ABI::Windows::Media::Audio::IAudioFrameInputNode*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioFrameCompletedEventArgs*, ABI::Windows::Media::Audio::IAudioFrameCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Audio.AudioFrameInputNode, Windows.Media.Audio.AudioFrameCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Audio::AudioFrameInputNode*,ABI::Windows::Media::Audio::AudioFrameCompletedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFrameInputNode*,ABI::Windows::Media::Audio::IAudioFrameCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFrameInputNode*,ABI::Windows::Media::Audio::IAudioFrameCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class FrameInputNodeQuantumStartedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4530d121-bb9a-57fe-922f-a98eeedf59af"))
ITypedEventHandler<ABI::Windows::Media::Audio::AudioFrameInputNode*,ABI::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioFrameInputNode*, ABI::Windows::Media::Audio::IAudioFrameInputNode*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs*, ABI::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Audio.AudioFrameInputNode, Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Audio::AudioFrameInputNode*,ABI::Windows::Media::Audio::FrameInputNodeQuantumStartedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFrameInputNode*,ABI::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioFrameInputNode*,ABI::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioGraph;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e1407134-09e7-53de-b54c-8a0659397b88"))
ITypedEventHandler<ABI::Windows::Media::Audio::AudioGraph*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraph*, ABI::Windows::Media::Audio::IAudioGraph*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Audio.AudioGraph, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Audio::AudioGraph*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioGraph*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioGraph*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioGraphUnrecoverableErrorOccurredEventArgs;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("899670c9-dd7f-5f12-98cb-8b17fe80a47f"))
ITypedEventHandler<ABI::Windows::Media::Audio::AudioGraph*,ABI::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraph*, ABI::Windows::Media::Audio::IAudioGraph*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs*, ABI::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Audio.AudioGraph, Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Audio::AudioGraph*,ABI::Windows::Media::Audio::AudioGraphUnrecoverableErrorOccurredEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioGraph*,ABI::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Audio::IAudioGraph*,ABI::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800"))
IReference<struct ABI::Windows::Foundation::TimeSpan> : IReference_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::TimeSpan> __FIReference_1_Windows__CFoundation__CTimeSpan_t;
#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
//#define __FIReference_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE */




#ifndef DEF___FIReference_1_int_USE
#define DEF___FIReference_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4"))
IReference<int> : IReference_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<int> __FIReference_1_int_t;
#define __FIReference_1_int ABI::Windows::Foundation::__FIReference_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_int ABI::Windows::Foundation::IReference<INT32>
//#define __FIReference_1_int_t ABI::Windows::Foundation::IReference<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_int_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                enum TranscodeFailureReason : int;
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c42ae2bf-e194-5179-b8ad-03b51c04e1da"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Transcoding.TranscodeFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02132510-3899-5257-bed9-a43e5149d28c"))
IAsyncOperation<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> : IAsyncOperation_impl<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Transcoding.TranscodeFailureReason>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Transcoding::TranscodeFailureReason> __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t;
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
//#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Transcoding::TranscodeFailureReason>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_USE */



#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Effects {
                interface IAudioEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Effects */} /* ABI */
#define __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition ABI::Windows::Media::Effects::IAudioEffectDefinition

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ec0f39fc-6959-5423-9e1a-f7cb8e845ca1"))
IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IIterator_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("607a20bf-32b4-5b8e-a793-3024f8d3582a"))
IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IIterable_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de9e6a7f-d28e-5ef1-916a-efa880b489d1"))
IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IVectorView_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#define DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2828a982-d849-5fc9-84ce-f9a4b3b4d341"))
IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*> : IVector_impl<ABI::Windows::Media::Effects::IAudioEffectDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Effects.IAudioEffectDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*> __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t;
#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
//#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Effects::IAudioEffectDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            class AudioFrame;
        } /* Windows */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IAudioFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIAudioFrame ABI::Windows::Media::IAudioFrame

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum AudioProcessing : int AudioProcessing;
            
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Capture {
                
                typedef enum MediaCategory : int MediaCategory;
                
            } /* Windows */
        } /* Media */
    } /* Capture */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class AudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IAudioEncodingProperties;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties ABI::Windows::Media::MediaProperties::IAudioEncodingProperties

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                class MediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace MediaProperties {
                interface IMediaEncodingProfile;
            } /* Windows */
        } /* Media */
    } /* MediaProperties */} /* ABI */
#define __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile ABI::Windows::Media::MediaProperties::IMediaEncodingProfile

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Render {
                
                typedef enum AudioRenderCategory : int AudioRenderCategory;
                
            } /* Windows */
        } /* Media */
    } /* Render */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Transcoding {
                
                typedef enum TranscodeFailureReason : int TranscodeFailureReason;
                
            } /* Windows */
        } /* Media */
    } /* Transcoding */} /* ABI */




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioDeviceNodeCreationStatus : int AudioDeviceNodeCreationStatus;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioFileNodeCreationStatus : int AudioFileNodeCreationStatus;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioGraphCreationStatus : int AudioGraphCreationStatus;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioGraphUnrecoverableError : int AudioGraphUnrecoverableError;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioNodeEmitterDecayKind : int AudioNodeEmitterDecayKind;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioNodeEmitterSettings : unsigned int AudioNodeEmitterSettings;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum AudioNodeEmitterShapeKind : int AudioNodeEmitterShapeKind;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum QuantumSizeSelectionMode : int QuantumSizeSelectionMode;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                
                typedef enum SpatialAudioModel : int SpatialAudioModel;
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */












































namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioDeviceInputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioDeviceOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioFileOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioFrameOutputNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioGraphBatchUpdater;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioGraphSettings;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeEmitter;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeEmitterConeProperties;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeEmitterDecayModel;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeEmitterNaturalDecayModelProperties;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeEmitterShape;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioNodeListener;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class AudioSubmixNode;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class EchoEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class EqualizerEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class LimiterEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                class ReverbEffectDefinition;
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */










/*
 *
 * Struct Windows.Media.Audio.AudioDeviceNodeCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioDeviceNodeCreationStatus : int
                {
                    AudioDeviceNodeCreationStatus_Success = 0,
                    AudioDeviceNodeCreationStatus_DeviceNotAvailable = 1,
                    AudioDeviceNodeCreationStatus_FormatNotSupported = 2,
                    AudioDeviceNodeCreationStatus_UnknownFailure = 3,
                    AudioDeviceNodeCreationStatus_AccessDenied = 4,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioFileNodeCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioFileNodeCreationStatus : int
                {
                    AudioFileNodeCreationStatus_Success = 0,
                    AudioFileNodeCreationStatus_FileNotFound = 1,
                    AudioFileNodeCreationStatus_InvalidFileType = 2,
                    AudioFileNodeCreationStatus_FormatNotSupported = 3,
                    AudioFileNodeCreationStatus_UnknownFailure = 4,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioGraphCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioGraphCreationStatus : int
                {
                    AudioGraphCreationStatus_Success = 0,
                    AudioGraphCreationStatus_DeviceNotAvailable = 1,
                    AudioGraphCreationStatus_FormatNotSupported = 2,
                    AudioGraphCreationStatus_UnknownFailure = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioGraphUnrecoverableError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioGraphUnrecoverableError : int
                {
                    AudioGraphUnrecoverableError_None = 0,
                    AudioGraphUnrecoverableError_AudioDeviceLost = 1,
                    AudioGraphUnrecoverableError_AudioSessionDisconnected = 2,
                    AudioGraphUnrecoverableError_UnknownFailure = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterDecayKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioNodeEmitterDecayKind : int
                {
                    AudioNodeEmitterDecayKind_Natural = 0,
                    AudioNodeEmitterDecayKind_Custom = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, flags, contract] */
                enum AudioNodeEmitterSettings : unsigned int
                {
                    AudioNodeEmitterSettings_None = 0,
                    AudioNodeEmitterSettings_DisableDoppler = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(AudioNodeEmitterSettings)
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterShapeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum AudioNodeEmitterShapeKind : int
                {
                    AudioNodeEmitterShapeKind_Omnidirectional = 0,
                    AudioNodeEmitterShapeKind_Cone = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.QuantumSizeSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum QuantumSizeSelectionMode : int
                {
                    QuantumSizeSelectionMode_SystemDefault = 0,
                    QuantumSizeSelectionMode_LowestLatency = 1,
                    QuantumSizeSelectionMode_ClosestToDesired = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.SpatialAudioModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [v1_enum, contract] */
                enum SpatialAudioModel : int
                {
                    SpatialAudioModel_ObjectBased = 0,
                    SpatialAudioModel_FoldDown = 1,
                };
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioDeviceInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioDeviceInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceInputNode[] = L"Windows.Media.Audio.IAudioDeviceInputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("B01B6BE1-6F4E-49E2-AC01-559D62BEB3A9"), exclusiveto, contract] */
                MIDL_INTERFACE("B01B6BE1-6F4E-49E2-AC01-559D62BEB3A9")
                IAudioDeviceInputNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Device(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceInputNode=_uuidof(IAudioDeviceInputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioDeviceOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioDeviceOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceOutputNode[] = L"Windows.Media.Audio.IAudioDeviceOutputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("362EDBFF-FF1C-4434-9E0F-BD2EF522AC82"), exclusiveto, contract] */
                MIDL_INTERFACE("362EDBFF-FF1C-4434-9E0F-BD2EF522AC82")
                IAudioDeviceOutputNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Device(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioDeviceOutputNode=_uuidof(IAudioDeviceOutputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFileInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFileInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileInputNode[] = L"Windows.Media.Audio.IAudioFileInputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("905B67C8-6F65-4CD4-8890-4694843C276D"), exclusiveto, contract] */
                MIDL_INTERFACE("905B67C8-6F65-4CD4-8890-4694843C276D")
                IAudioFileInputNode : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlaybackSpeedFactor(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaybackSpeedFactor(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Seek(
                        /* [in] */ABI::Windows::Foundation::TimeSpan position
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StartTime(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EndTime(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LoopCount(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LoopCount(
                        /* [in] */__RPC__in_opt __FIReference_1_int * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceFile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FileCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FileCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioFileInputNode=_uuidof(IAudioFileInputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFileOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFileOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileOutputNode[] = L"Windows.Media.Audio.IAudioFileOutputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("50E01980-5166-4093-80F8-ADA00089E9CF"), exclusiveto, contract] */
                MIDL_INTERFACE("50E01980-5166-4093-80F8-ADA00089E9CF")
                IAudioFileOutputNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileEncodingProfile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FinalizeAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioFileOutputNode=_uuidof(IAudioFileOutputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.IAudioFrameCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("DC7C829E-0208-4504-A5A8-F0F268920A65"), exclusiveto, contract] */
                MIDL_INTERFACE("DC7C829E-0208-4504-A5A8-F0F268920A65")
                IAudioFrameCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Frame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioFrame * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioFrameCompletedEventArgs=_uuidof(IAudioFrameCompletedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameInputNode[] = L"Windows.Media.Audio.IAudioFrameInputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("01B266C7-FD96-4FF5-A3C5-D27A9BF44237"), exclusiveto, contract] */
                MIDL_INTERFACE("01B266C7-FD96-4FF5-A3C5-D27A9BF44237")
                IAudioFrameInputNode : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlaybackSpeedFactor(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaybackSpeedFactor(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddFrame(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::IAudioFrame * frame
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DiscardQueuedFrames(void) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QueuedSampleCount(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AudioFrameCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AudioFrameCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_QuantumStarted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_QuantumStarted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioFrameInputNode=_uuidof(IAudioFrameInputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameOutputNode[] = L"Windows.Media.Audio.IAudioFrameOutputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("B847371B-3299-45F5-88B3-C9D12A3F1CC8"), exclusiveto, contract] */
                MIDL_INTERFACE("B847371B-3299-45F5-88B3-C9D12A3F1CC8")
                IAudioFrameOutputNode : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetFrame(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioFrame * * audioFrame
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioFrameOutputNode=_uuidof(IAudioFrameOutputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph[] = L"Windows.Media.Audio.IAudioGraph";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("1AD46EED-E48C-4E14-9660-2C4F83E9CDD8"), exclusiveto, contract] */
                MIDL_INTERFACE("1AD46EED-E48C-4E14-9660-2C4F83E9CDD8")
                IAudioGraph : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFrameInputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFrameInputNode * * frameInputNode
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFrameInputNodeWithFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFrameInputNode * * frameInputNode
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDeviceInputNodeAsync(
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDeviceInputNodeWithFormatAsync(
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDeviceInputNodeWithFormatOnDeviceAsync(
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * device,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFrameOutputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFrameOutputNode * * frameOutputNode
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFrameOutputNodeWithFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFrameOutputNode * * frameOutputNode
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDeviceOutputNodeAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFileInputNodeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFileOutputNodeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFileOutputNodeWithFileProfileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IMediaEncodingProfile * fileEncodingProfile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateSubmixNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioInputNode * * submixNode
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateSubmixNodeWithFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioInputNode * * submixNode
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ResetAllNodes(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_QuantumStarted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_QuantumStarted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_QuantumProcessed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_QuantumProcessed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UnrecoverableErrorOccurred(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UnrecoverableErrorOccurred(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompletedQuantumCount(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LatencyInSamples(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryRenderDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RenderDeviceAudioProcessing(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::AudioProcessing * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SamplesPerQuantum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraph=_uuidof(IAudioGraph);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraph2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioGraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph2[] = L"Windows.Media.Audio.IAudioGraph2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("4E4C3BD5-4FC1-45F6-A947-3CD38F4FD839"), exclusiveto, contract] */
                MIDL_INTERFACE("4E4C3BD5-4FC1-45F6-A947-3CD38F4FD839")
                IAudioGraph2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFrameInputNodeWithFormatAndEmitter(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * emitter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFrameInputNode * * frameInputNode
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(
                        /* [in] */ABI::Windows::Media::Capture::MediaCategory category,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * device,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * emitter,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFileInputNodeWithEmitterAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * emitter,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateSubmixNodeWithFormatAndEmitter(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * encodingProperties,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * emitter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioInputNode * * submixNode
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateBatchUpdater(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IClosable * * updater
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraph2=_uuidof(IAudioGraph2);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphConnection[] = L"Windows.Media.Audio.IAudioGraphConnection";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("763070ED-D04E-4FAC-B233-600B42EDD469"), exclusiveto, contract] */
                MIDL_INTERFACE("763070ED-D04E-4FAC-B233-600B42EDD469")
                IAudioGraphConnection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Destination(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNode * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Gain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraphConnection=_uuidof(IAudioGraphConnection);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettings[] = L"Windows.Media.Audio.IAudioGraphSettings";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("1D59647F-E6FE-4628-84F8-9D8BDBA25785"), exclusiveto, contract] */
                MIDL_INTERFACE("1D59647F-E6FE-4628-84F8-9D8BDBA25785")
                IAudioGraphSettings : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EncodingProperties(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryRenderDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PrimaryRenderDevice(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QuantumSizeSelectionMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::QuantumSizeSelectionMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_QuantumSizeSelectionMode(
                        /* [in] */ABI::Windows::Media::Audio::QuantumSizeSelectionMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredSamplesPerQuantum(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredSamplesPerQuantum(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioRenderCategory(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Render::AudioRenderCategory * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AudioRenderCategory(
                        /* [in] */ABI::Windows::Media::Render::AudioRenderCategory value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredRenderDeviceAudioProcessing(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::AudioProcessing * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredRenderDeviceAudioProcessing(
                        /* [in] */ABI::Windows::Media::AudioProcessing value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraphSettings=_uuidof(IAudioGraphSettings);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphSettingsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettingsFactory[] = L"Windows.Media.Audio.IAudioGraphSettingsFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("A5D91CC6-C2EB-4A61-A214-1D66D75F83DA"), exclusiveto, contract] */
                MIDL_INTERFACE("A5D91CC6-C2EB-4A61-A214-1D66D75F83DA")
                IAudioGraphSettingsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Media::Render::AudioRenderCategory audioRenderCategory,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioGraphSettings * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraphSettingsFactory=_uuidof(IAudioGraphSettingsFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphStatics[] = L"Windows.Media.Audio.IAudioGraphStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("76EC3132-E159-4AB7-A82A-17BEB4B31E94"), exclusiveto, contract] */
                MIDL_INTERFACE("76EC3132-E159-4AB7-A82A-17BEB4B31E94")
                IAudioGraphStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioGraphSettings * settings,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraphStatics=_uuidof(IAudioGraphStatics);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("C3D9CBE0-3FF6-4FB3-B262-50D435C55423"), exclusiveto, contract] */
                MIDL_INTERFACE("C3D9CBE0-3FF6-4FB3-B262-50D435C55423")
                IAudioGraphUnrecoverableErrorOccurredEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Error(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioGraphUnrecoverableError * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioGraphUnrecoverableErrorOccurredEventArgs=_uuidof(IAudioGraphUnrecoverableErrorOccurredEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode[] = L"Windows.Media.Audio.IAudioInputNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("D148005C-8428-4784-B7FD-A99D468C5D20"), contract] */
                MIDL_INTERFACE("D148005C-8428-4784-B7FD-A99D468C5D20")
                IAudioInputNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingConnections(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOutgoingConnection(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNode * destination
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOutgoingConnectionWithGain(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNode * destination,
                        /* [in] */DOUBLE gain
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveOutgoingConnection(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNode * destination
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioInputNode=_uuidof(IAudioInputNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioInputNode2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioInputNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode2[] = L"Windows.Media.Audio.IAudioInputNode2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("905156B7-CA68-4C6D-A8BC-E3EE17FE3FD2"), contract] */
                MIDL_INTERFACE("905156B7-CA68-4C6D-A8BC-E3EE17FE3FD2")
                IAudioInputNode2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Emitter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioInputNode2=_uuidof(IAudioInputNode2);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNode[] = L"Windows.Media.Audio.IAudioNode";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("15389D7F-DBD8-4819-BF03-668E9357CD6D"), contract] */
                MIDL_INTERFACE("15389D7F-DBD8-4819-BF03-668E9357CD6D")
                IAudioNode : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EffectDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OutgoingGain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OutgoingGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncodingProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::MediaProperties::IAudioEncodingProperties * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConsumeInput(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ConsumeInput(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Reset(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DisableEffectsByDefinition(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::IAudioEffectDefinition * definition
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EnableEffectsByDefinition(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Effects::IAudioEffectDefinition * definition
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNode=_uuidof(IAudioNode);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter[] = L"Windows.Media.Audio.IAudioNodeEmitter";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("3676971D-880A-47B8-ADF7-1323A9D965BE"), exclusiveto, contract] */
                MIDL_INTERFACE("3676971D-880A-47B8-ADF7-1323A9D965BE")
                IAudioNodeEmitter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direction(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Direction(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Shape(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterShape * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecayModel(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Gain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistanceScale(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DistanceScale(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DopplerScale(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DopplerScale(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DopplerVelocity(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DopplerVelocity(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDopplerDisabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitter=_uuidof(IAudioNodeEmitter);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter2[] = L"Windows.Media.Audio.IAudioNodeEmitter2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("4AB6EECB-EC29-47F8-818C-B6B660A5AEB1"), exclusiveto, contract] */
                MIDL_INTERFACE("4AB6EECB-EC29-47F8-818C-B6B660A5AEB1")
                IAudioNodeEmitter2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpatialAudioModel(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::SpatialAudioModel * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpatialAudioModel(
                        /* [in] */ABI::Windows::Media::Audio::SpatialAudioModel value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitter2=_uuidof(IAudioNodeEmitter2);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterConeProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterConeProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterConeProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("E99B2CEE-02CA-4375-9326-0C6AE4BCDFB5"), exclusiveto, contract] */
                MIDL_INTERFACE("E99B2CEE-02CA-4375-9326-0C6AE4BCDFB5")
                IAudioNodeEmitterConeProperties : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InnerAngle(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OuterAngle(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OuterAngleGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterConeProperties=_uuidof(IAudioNodeEmitterConeProperties);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterDecayModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModel";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("1D1D5AF7-0D53-4FA9-BD84-D5816A86F3FF"), exclusiveto, contract] */
                MIDL_INTERFACE("1D1D5AF7-0D53-4FA9-BD84-D5816A86F3FF")
                IAudioNodeEmitterDecayModel : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioNodeEmitterDecayKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NaturalProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterDecayModel=_uuidof(IAudioNodeEmitterDecayModel);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("C7787CA8-F178-462F-BC81-8DD5CBE5DAE8"), exclusiveto, contract] */
                MIDL_INTERFACE("C7787CA8-F178-462F-BC81-8DD5CBE5DAE8")
                IAudioNodeEmitterDecayModelStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateNatural(
                        /* [in] */DOUBLE minGain,
                        /* [in] */DOUBLE maxGain,
                        /* [in] */DOUBLE unityGainDistance,
                        /* [in] */DOUBLE cutoffDistance,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel * * decayModel
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCustom(
                        /* [in] */DOUBLE minGain,
                        /* [in] */DOUBLE maxGain,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel * * decayModel
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterDecayModelStatics=_uuidof(IAudioNodeEmitterDecayModelStatics);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterFactory[] = L"Windows.Media.Audio.IAudioNodeEmitterFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("FDC8489A-6AD6-4CE4-B7F7-A99370DF7EE9"), exclusiveto, contract] */
                MIDL_INTERFACE("FDC8489A-6AD6-4CE4-B7F7-A99370DF7EE9")
                IAudioNodeEmitterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateAudioNodeEmitter(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitterShape * shape,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeEmitterDecayModel * decayModel,
                        /* [in] */ABI::Windows::Media::Audio::AudioNodeEmitterSettings settings,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitter * * emitter
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterFactory=_uuidof(IAudioNodeEmitterFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("48934BCF-CF2C-4EFC-9331-75BD22DF1F0C"), exclusiveto, contract] */
                MIDL_INTERFACE("48934BCF-CF2C-4EFC-9331-75BD22DF1F0C")
                IAudioNodeEmitterNaturalDecayModelProperties : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnityGainDistance(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CutoffDistance(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterNaturalDecayModelProperties=_uuidof(IAudioNodeEmitterNaturalDecayModelProperties);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterShape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShape[] = L"Windows.Media.Audio.IAudioNodeEmitterShape";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("EA0311C5-E73D-44BC-859C-45553BBC4828"), exclusiveto, contract] */
                MIDL_INTERFACE("EA0311C5-E73D-44BC-859C-45553BBC4828")
                IAudioNodeEmitterShape : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioNodeEmitterShapeKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConeProperties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterConeProperties * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterShape=_uuidof(IAudioNodeEmitterShape);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterShapeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterShape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShapeStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterShapeStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("57BB2771-FFA5-4B86-A779-E264AEB9145F"), exclusiveto, contract] */
                MIDL_INTERFACE("57BB2771-FFA5-4B86-A779-E264AEB9145F")
                IAudioNodeEmitterShapeStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCone(
                        /* [in] */DOUBLE innerAngle,
                        /* [in] */DOUBLE outerAngle,
                        /* [in] */DOUBLE outerAngleGain,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterShape * * shape
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateOmnidirectional(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeEmitterShape * * shape
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeEmitterShapeStatics=_uuidof(IAudioNodeEmitterShapeStatics);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeListener[] = L"Windows.Media.Audio.IAudioNodeListener";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("D9722E16-0C0A-41DA-B755-6C77835FB1EB"), exclusiveto, contract] */
                MIDL_INTERFACE("D9722E16-0C0A-41DA-B755-6C77835FB1EB")
                IAudioNodeListener : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                        /* [in] */ABI::Windows::Foundation::Numerics::Quaternion value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpeedOfSound(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpeedOfSound(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DopplerVelocity(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DopplerVelocity(
                        /* [in] */ABI::Windows::Foundation::Numerics::Vector3 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeListener=_uuidof(IAudioNodeListener);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeWithListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeWithListener[] = L"Windows.Media.Audio.IAudioNodeWithListener";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("0E0F907C-79FF-4544-9EEB-01257B15105A"), contract] */
                MIDL_INTERFACE("0E0F907C-79FF-4544-9EEB-01257B15105A")
                IAudioNodeWithListener : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Listener(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioNodeListener * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Listener(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioNodeListener * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAudioNodeWithListener=_uuidof(IAudioNodeWithListener);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioDeviceInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioDeviceInputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("16EEC7A8-1CA7-40EF-91A4-D346E0AA1BBA"), exclusiveto, contract] */
                MIDL_INTERFACE("16EEC7A8-1CA7-40EF-91A4-D346E0AA1BBA")
                ICreateAudioDeviceInputNodeResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioDeviceNodeCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceInputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioDeviceInputNode * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICreateAudioDeviceInputNodeResult=_uuidof(ICreateAudioDeviceInputNodeResult);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioDeviceOutputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("F7776D27-1D9A-47F7-9CD4-2859CC1B7BFF"), exclusiveto, contract] */
                MIDL_INTERFACE("F7776D27-1D9A-47F7-9CD4-2859CC1B7BFF")
                ICreateAudioDeviceOutputNodeResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioDeviceNodeCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceOutputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioDeviceOutputNode * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICreateAudioDeviceOutputNodeResult=_uuidof(ICreateAudioDeviceOutputNodeResult);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioFileInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioFileInputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("CE83D61C-E297-4C50-9CE7-1C7A69D6BD09"), exclusiveto, contract] */
                MIDL_INTERFACE("CE83D61C-E297-4C50-9CE7-1C7A69D6BD09")
                ICreateAudioFileInputNodeResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioFileNodeCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileInputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFileInputNode * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICreateAudioFileInputNodeResult=_uuidof(ICreateAudioFileInputNodeResult);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioFileOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioFileOutputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("47D6BA7B-E909-453F-866E-5540CDA734FF"), exclusiveto, contract] */
                MIDL_INTERFACE("47D6BA7B-E909-453F-866E-5540CDA734FF")
                ICreateAudioFileOutputNodeResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioFileNodeCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileOutputNode(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioFileOutputNode * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICreateAudioFileOutputNodeResult=_uuidof(ICreateAudioFileOutputNodeResult);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioGraphResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioGraphResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioGraphResult[] = L"Windows.Media.Audio.ICreateAudioGraphResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("5453EF7E-7BDE-4B76-BB5D-48F79CFC8C0B"), exclusiveto, contract] */
                MIDL_INTERFACE("5453EF7E-7BDE-4B76-BB5D-48F79CFC8C0B")
                ICreateAudioGraphResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Audio::AudioGraphCreationStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Graph(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IAudioGraph * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICreateAudioGraphResult=_uuidof(ICreateAudioGraphResult);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEchoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EchoEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinition[] = L"Windows.Media.Audio.IEchoEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("0E4D3FAA-36B8-4C91-B9DA-11F44A8A6610"), exclusiveto, contract] */
                MIDL_INTERFACE("0E4D3FAA-36B8-4C91-B9DA-11F44A8A6610")
                IEchoEffectDefinition : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WetDryMix(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WetDryMix(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Feedback(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Feedback(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Delay(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delay(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEchoEffectDefinition=_uuidof(IEchoEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEchoEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EchoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinitionFactory[] = L"Windows.Media.Audio.IEchoEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("0D4E2257-AAF2-4E86-A54C-FB79DB8F6C12"), exclusiveto, contract] */
                MIDL_INTERFACE("0D4E2257-AAF2-4E86-A54C-FB79DB8F6C12")
                IEchoEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioGraph * audioGraph,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IEchoEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEchoEffectDefinitionFactory=_uuidof(IEchoEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerBand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerBand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerBand[] = L"Windows.Media.Audio.IEqualizerBand";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("C00A5A6A-262D-4B85-9BB7-43280B62ED0C"), exclusiveto, contract] */
                MIDL_INTERFACE("C00A5A6A-262D-4B85-9BB7-43280B62ED0C")
                IEqualizerBand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bandwidth(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bandwidth(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrequencyCenter(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FrequencyCenter(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Gain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEqualizerBand=_uuidof(IEqualizerBand);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinition[] = L"Windows.Media.Audio.IEqualizerEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("023F6F1F-83FE-449A-A822-C696442D16B0"), exclusiveto, contract] */
                MIDL_INTERFACE("023F6F1F-83FE-449A-A822-C696442D16B0")
                IEqualizerEffectDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEqualizerEffectDefinition=_uuidof(IEqualizerEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinitionFactory[] = L"Windows.Media.Audio.IEqualizerEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("D2876FC4-D410-4EB5-9E69-C9AA1277EAF0"), exclusiveto, contract] */
                MIDL_INTERFACE("D2876FC4-D410-4EB5-9E69-C9AA1277EAF0")
                IEqualizerEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioGraph * audioGraph,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IEqualizerEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEqualizerEffectDefinitionFactory=_uuidof(IEqualizerEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("3D9BD498-A306-4F06-BD9F-E9EFC8226304"), exclusiveto, contract] */
                MIDL_INTERFACE("3D9BD498-A306-4F06-BD9F-E9EFC8226304")
                IFrameInputNodeQuantumStartedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequiredSamples(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFrameInputNodeQuantumStartedEventArgs=_uuidof(IFrameInputNodeQuantumStartedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ILimiterEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.LimiterEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinition[] = L"Windows.Media.Audio.ILimiterEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("6B755D19-2603-47BA-BDEB-39055E3486DC"), exclusiveto, contract] */
                MIDL_INTERFACE("6B755D19-2603-47BA-BDEB-39055E3486DC")
                ILimiterEffectDefinition : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Release(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Release(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Loudness(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Loudness(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILimiterEffectDefinition=_uuidof(ILimiterEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ILimiterEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.LimiterEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinitionFactory[] = L"Windows.Media.Audio.ILimiterEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("ECBAE6F1-61FF-45EF-B8F5-48659A57C72D"), exclusiveto, contract] */
                MIDL_INTERFACE("ECBAE6F1-61FF-45EF-B8F5-48659A57C72D")
                ILimiterEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioGraph * audioGraph,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::ILimiterEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILimiterEffectDefinitionFactory=_uuidof(ILimiterEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IReverbEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.ReverbEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinition[] = L"Windows.Media.Audio.IReverbEffectDefinition";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("4606AA89-F563-4D0A-8F6E-F0CDDFF35D84"), exclusiveto, contract] */
                MIDL_INTERFACE("4606AA89-F563-4D0A-8F6E-F0CDDFF35D84")
                IReverbEffectDefinition : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WetDryMix(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WetDryMix(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReflectionsDelay(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReflectionsDelay(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReverbDelay(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReverbDelay(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RearDelay(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RearDelay(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PositionLeft(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionLeft(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PositionRight(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionRight(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PositionMatrixLeft(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionMatrixLeft(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PositionMatrixRight(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PositionMatrixRight(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EarlyDiffusion(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EarlyDiffusion(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LateDiffusion(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LateDiffusion(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LowEQGain(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowEQGain(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LowEQCutoff(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowEQCutoff(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HighEQGain(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HighEQGain(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HighEQCutoff(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HighEQCutoff(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoomFilterFreq(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoomFilterFreq(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoomFilterMain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoomFilterMain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoomFilterHF(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoomFilterHF(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReflectionsGain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReflectionsGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReverbGain(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReverbGain(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DecayTime(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecayTime(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Density(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Density(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoomSize(
                        /* [in] */DOUBLE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoomSize(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisableLateField(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisableLateField(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IReverbEffectDefinition=_uuidof(IReverbEffectDefinition);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IReverbEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.ReverbEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinitionFactory[] = L"Windows.Media.Audio.IReverbEffectDefinitionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Audio {
                /* [object, uuid("A7D5CBFE-100B-4FF0-9DA6-DC4E05A759F0"), exclusiveto, contract] */
                MIDL_INTERFACE("A7D5CBFE-100B-4FF0-9DA6-DC4E05A759F0")
                IReverbEffectDefinitionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Audio::IAudioGraph * audioGraph,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Audio::IReverbEffectDefinition * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IReverbEffectDefinitionFactory=_uuidof(IReverbEffectDefinitionFactory);
                
            } /* Windows */
        } /* Media */
    } /* Audio */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioDeviceInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioDeviceInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioDeviceInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioDeviceInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceInputNode[] = L"Windows.Media.Audio.AudioDeviceInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioDeviceOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioDeviceOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioNodeWithListener
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioDeviceOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioDeviceOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceOutputNode[] = L"Windows.Media.Audio.AudioDeviceOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFileInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFileInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFileInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFileInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileInputNode[] = L"Windows.Media.Audio.AudioFileInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFileOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFileOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFileOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFileOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileOutputNode[] = L"Windows.Media.Audio.AudioFileOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.AudioFrameCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameInputNode[] = L"Windows.Media.Audio.AudioFrameInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameOutputNode[] = L"Windows.Media.Audio.AudioFrameOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioGraphStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraph ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioGraph2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraph_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraph_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraph[] = L"Windows.Media.Audio.AudioGraph";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphBatchUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphBatchUpdater_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphBatchUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphBatchUpdater[] = L"Windows.Media.Audio.AudioGraphBatchUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioGraphConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphConnection_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphConnection[] = L"Windows.Media.Audio.AudioGraphConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IAudioGraphSettingsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphSettings[] = L"Windows.Media.Audio.AudioGraphSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IAudioNodeEmitterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitter ** Default Interface **
 *    Windows.Media.Audio.IAudioNodeEmitter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitter_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitter[] = L"Windows.Media.Audio.AudioNodeEmitter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterConeProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterConeProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterConeProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterConeProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.AudioNodeEmitterConeProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterDecayModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterDecayModel_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterDecayModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.AudioNodeEmitterDecayModel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioNodeEmitterShapeStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterShape ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterShape_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterShape_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterShape[] = L"Windows.Media.Audio.AudioNodeEmitterShape";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeListener_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeListener[] = L"Windows.Media.Audio.AudioNodeListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioSubmixNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioSubmixNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioSubmixNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioSubmixNode[] = L"Windows.Media.Audio.AudioSubmixNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioDeviceInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioDeviceInputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceInputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceInputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioDeviceOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioFileInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioFileInputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileInputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileInputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileInputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioFileOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioFileOutputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileOutputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileOutputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileOutputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioGraphResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioGraphResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioGraphResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioGraphResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioGraphResult[] = L"Windows.Media.Audio.CreateAudioGraphResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EchoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IEchoEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEchoEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EchoEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EchoEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EchoEffectDefinition[] = L"Windows.Media.Audio.EchoEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EqualizerBand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEqualizerBand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EqualizerBand_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EqualizerBand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerBand[] = L"Windows.Media.Audio.EqualizerBand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EqualizerEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IEqualizerEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEqualizerEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EqualizerEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EqualizerEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerEffectDefinition[] = L"Windows.Media.Audio.EqualizerEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.LimiterEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.ILimiterEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ILimiterEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_LimiterEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_LimiterEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_LimiterEffectDefinition[] = L"Windows.Media.Audio.LimiterEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.ReverbEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IReverbEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IReverbEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_ReverbEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_ReverbEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_ReverbEffectDefinition[] = L"Windows.Media.Audio.ReverbEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNode __x_ABI_CWindows_CMedia_CAudio_CIAudioNode;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory;

#endif // ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection;

typedef struct __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;

interface __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection;

typedef  struct __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAudio__CAudioGraphConnection **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;

interface __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand;

typedef struct __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;

interface __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand;

typedef  struct __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CAudio__CEqualizerBand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;

interface __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection;

typedef struct __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl;

interface __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnectionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand;

typedef struct __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl;

interface __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CAudio__CCreateAudioGraphResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__


#if !defined(____FIReference_1_int_INTERFACE_DEFINED__)
#define ____FIReference_1_int_INTERFACE_DEFINED__

typedef interface __FIReference_1_int __FIReference_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_int;

typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;

interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_int_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_int_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReasonVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;

#endif // ____x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef  struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;

typedef struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;

interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;





typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;




typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory __x_ABI_CWindows_CMedia_CCapture_CMediaCategory;








#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;

#endif // ____x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;





typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode;


typedef enum __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel;


















































































/*
 *
 * Struct Windows.Media.Audio.AudioDeviceNodeCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus
{
    AudioDeviceNodeCreationStatus_Success = 0,
    AudioDeviceNodeCreationStatus_DeviceNotAvailable = 1,
    AudioDeviceNodeCreationStatus_FormatNotSupported = 2,
    AudioDeviceNodeCreationStatus_UnknownFailure = 3,
    AudioDeviceNodeCreationStatus_AccessDenied = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioFileNodeCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus
{
    AudioFileNodeCreationStatus_Success = 0,
    AudioFileNodeCreationStatus_FileNotFound = 1,
    AudioFileNodeCreationStatus_InvalidFileType = 2,
    AudioFileNodeCreationStatus_FormatNotSupported = 3,
    AudioFileNodeCreationStatus_UnknownFailure = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioGraphCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus
{
    AudioGraphCreationStatus_Success = 0,
    AudioGraphCreationStatus_DeviceNotAvailable = 1,
    AudioGraphCreationStatus_FormatNotSupported = 2,
    AudioGraphCreationStatus_UnknownFailure = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioGraphUnrecoverableError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError
{
    AudioGraphUnrecoverableError_None = 0,
    AudioGraphUnrecoverableError_AudioDeviceLost = 1,
    AudioGraphUnrecoverableError_AudioSessionDisconnected = 2,
    AudioGraphUnrecoverableError_UnknownFailure = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterDecayKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind
{
    AudioNodeEmitterDecayKind_Natural = 0,
    AudioNodeEmitterDecayKind_Custom = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings
{
    AudioNodeEmitterSettings_None = 0,
    AudioNodeEmitterSettings_DisableDoppler = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.AudioNodeEmitterShapeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind
{
    AudioNodeEmitterShapeKind_Omnidirectional = 0,
    AudioNodeEmitterShapeKind_Cone = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Audio.QuantumSizeSelectionMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode
{
    QuantumSizeSelectionMode_SystemDefault = 0,
    QuantumSizeSelectionMode_LowestLatency = 1,
    QuantumSizeSelectionMode_ClosestToDesired = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Audio.SpatialAudioModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel
{
    SpatialAudioModel_ObjectBased = 0,
    SpatialAudioModel_FoldDown = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioDeviceInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioDeviceInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceInputNode[] = L"Windows.Media.Audio.IAudioDeviceInputNode";
/* [object, uuid("B01B6BE1-6F4E-49E2-AC01-559D62BEB3A9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_get_Device(This,value) \
    ( (This)->lpVtbl->get_Device(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioDeviceOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioDeviceOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioDeviceOutputNode[] = L"Windows.Media.Audio.IAudioDeviceOutputNode";
/* [object, uuid("362EDBFF-FF1C-4434-9E0F-BD2EF522AC82"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_get_Device(This,value) \
    ( (This)->lpVtbl->get_Device(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFileInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFileInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileInputNode[] = L"Windows.Media.Audio.IAudioFileInputNode";
/* [object, uuid("905B67C8-6F65-4CD4-8890-4694843C276D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan position
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LoopCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceFile )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FileCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFileInputNode_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FileCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_put_PlaybackSpeedFactor(This,value) \
    ( (This)->lpVtbl->put_PlaybackSpeedFactor(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_PlaybackSpeedFactor(This,value) \
    ( (This)->lpVtbl->get_PlaybackSpeedFactor(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_Seek(This,position) \
    ( (This)->lpVtbl->Seek(This,position) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_put_StartTime(This,value) \
    ( (This)->lpVtbl->put_StartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_EndTime(This,value) \
    ( (This)->lpVtbl->get_EndTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_put_EndTime(This,value) \
    ( (This)->lpVtbl->put_EndTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_LoopCount(This,value) \
    ( (This)->lpVtbl->get_LoopCount(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_put_LoopCount(This,value) \
    ( (This)->lpVtbl->put_LoopCount(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_get_SourceFile(This,value) \
    ( (This)->lpVtbl->get_SourceFile(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_add_FileCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_FileCompleted(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_remove_FileCompleted(This,token) \
    ( (This)->lpVtbl->remove_FileCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFileOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFileOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFileOutputNode[] = L"Windows.Media.Audio.IAudioFileOutputNode";
/* [object, uuid("50E01980-5166-4093-80F8-ADA00089E9CF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileEncodingProfile )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FinalizeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CTranscoding__CTranscodeFailureReason * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_get_FileEncodingProfile(This,value) \
    ( (This)->lpVtbl->get_FileEncodingProfile(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_FinalizeAsync(This,result) \
    ( (This)->lpVtbl->FinalizeAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.IAudioFrameCompletedEventArgs";
/* [object, uuid("DC7C829E-0208-4504-A5A8-F0F268920A65"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Frame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_get_Frame(This,value) \
    ( (This)->lpVtbl->get_Frame(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameInputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioInputNode
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameInputNode[] = L"Windows.Media.Audio.IAudioFrameInputNode";
/* [object, uuid("01B266C7-FD96-4FF5-A3C5-D27A9BF44237"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlaybackSpeedFactor )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddFrame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CIAudioFrame * frame
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QueuedSampleCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AudioFrameCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CAudioFrameCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AudioFrameCompleted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioFrameInputNode_Windows__CMedia__CAudio__CFrameInputNodeQuantumStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_put_PlaybackSpeedFactor(This,value) \
    ( (This)->lpVtbl->put_PlaybackSpeedFactor(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_get_PlaybackSpeedFactor(This,value) \
    ( (This)->lpVtbl->get_PlaybackSpeedFactor(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_AddFrame(This,frame) \
    ( (This)->lpVtbl->AddFrame(This,frame) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_DiscardQueuedFrames(This) \
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_get_QueuedSampleCount(This,value) \
    ( (This)->lpVtbl->get_QueuedSampleCount(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_add_AudioFrameCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_AudioFrameCompleted(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_remove_AudioFrameCompleted(This,token) \
    ( (This)->lpVtbl->remove_AudioFrameCompleted(This,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_add_QuantumStarted(This,handler,token) \
    ( (This)->lpVtbl->add_QuantumStarted(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_remove_QuantumStarted(This,token) \
    ( (This)->lpVtbl->remove_QuantumStarted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioFrameOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioFrameOutputNode
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioFrameOutputNode[] = L"Windows.Media.Audio.IAudioFrameOutputNode";
/* [object, uuid("B847371B-3299-45F5-88B3-C9D12A3F1CC8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFrame )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * audioFrame
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_GetFrame(This,audioFrame) \
    ( (This)->lpVtbl->GetFrame(This,audioFrame) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph[] = L"Windows.Media.Audio.IAudioGraph";
/* [object, uuid("1AD46EED-E48C-4E14-9660-2C4F83E9CDD8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatOnDeviceAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFrameOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * * frameOutputNode
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFrameOutputNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameOutputNode * * frameOutputNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDeviceOutputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceOutputNodeResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFileInputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFileOutputNodeAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFileOutputNodeWithFileProfileAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * fileEncodingProfile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileOutputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateSubmixNode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateSubmixNodeWithFormat )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResetAllNodes )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_QuantumStarted )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_QuantumProcessed )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_QuantumProcessed )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UnrecoverableErrorOccurred )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAudio__CAudioGraph_Windows__CMedia__CAudio__CAudioGraphUnrecoverableErrorOccurredEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UnrecoverableErrorOccurred )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompletedQuantumCount )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LatencyInSamples )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFrameInputNode(This,frameInputNode) \
    ( (This)->lpVtbl->CreateFrameInputNode(This,frameInputNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFrameInputNodeWithFormat(This,encodingProperties,frameInputNode) \
    ( (This)->lpVtbl->CreateFrameInputNodeWithFormat(This,encodingProperties,frameInputNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateDeviceInputNodeAsync(This,category,result) \
    ( (This)->lpVtbl->CreateDeviceInputNodeAsync(This,category,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateDeviceInputNodeWithFormatAsync(This,category,encodingProperties,result) \
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatAsync(This,category,encodingProperties,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateDeviceInputNodeWithFormatOnDeviceAsync(This,category,encodingProperties,device,result) \
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatOnDeviceAsync(This,category,encodingProperties,device,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFrameOutputNode(This,frameOutputNode) \
    ( (This)->lpVtbl->CreateFrameOutputNode(This,frameOutputNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFrameOutputNodeWithFormat(This,encodingProperties,frameOutputNode) \
    ( (This)->lpVtbl->CreateFrameOutputNodeWithFormat(This,encodingProperties,frameOutputNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateDeviceOutputNodeAsync(This,result) \
    ( (This)->lpVtbl->CreateDeviceOutputNodeAsync(This,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFileInputNodeAsync(This,file,result) \
    ( (This)->lpVtbl->CreateFileInputNodeAsync(This,file,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFileOutputNodeAsync(This,file,result) \
    ( (This)->lpVtbl->CreateFileOutputNodeAsync(This,file,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateFileOutputNodeWithFileProfileAsync(This,file,fileEncodingProfile,result) \
    ( (This)->lpVtbl->CreateFileOutputNodeWithFileProfileAsync(This,file,fileEncodingProfile,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateSubmixNode(This,submixNode) \
    ( (This)->lpVtbl->CreateSubmixNode(This,submixNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_CreateSubmixNodeWithFormat(This,encodingProperties,submixNode) \
    ( (This)->lpVtbl->CreateSubmixNodeWithFormat(This,encodingProperties,submixNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_ResetAllNodes(This) \
    ( (This)->lpVtbl->ResetAllNodes(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_add_QuantumStarted(This,handler,token) \
    ( (This)->lpVtbl->add_QuantumStarted(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_remove_QuantumStarted(This,token) \
    ( (This)->lpVtbl->remove_QuantumStarted(This,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_add_QuantumProcessed(This,handler,token) \
    ( (This)->lpVtbl->add_QuantumProcessed(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_remove_QuantumProcessed(This,token) \
    ( (This)->lpVtbl->remove_QuantumProcessed(This,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_add_UnrecoverableErrorOccurred(This,handler,token) \
    ( (This)->lpVtbl->add_UnrecoverableErrorOccurred(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_remove_UnrecoverableErrorOccurred(This,token) \
    ( (This)->lpVtbl->remove_UnrecoverableErrorOccurred(This,token) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_CompletedQuantumCount(This,value) \
    ( (This)->lpVtbl->get_CompletedQuantumCount(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_EncodingProperties(This,value) \
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_LatencyInSamples(This,value) \
    ( (This)->lpVtbl->get_LatencyInSamples(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_PrimaryRenderDevice(This,value) \
    ( (This)->lpVtbl->get_PrimaryRenderDevice(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_RenderDeviceAudioProcessing(This,value) \
    ( (This)->lpVtbl->get_RenderDeviceAudioProcessing(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_get_SamplesPerQuantum(This,value) \
    ( (This)->lpVtbl->get_SamplesPerQuantum(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraph2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioGraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraph2[] = L"Windows.Media.Audio.IAudioGraph2";
/* [object, uuid("4E4C3BD5-4FC1-45F6-A947-3CD38F4FD839"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFrameInputNodeWithFormatAndEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFrameInputNode * * frameInputNode
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioDeviceInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFileInputNodeWithEmitterAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioFileInputNodeResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateSubmixNodeWithFormatAndEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * emitter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * * submixNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBatchUpdater )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIClosable * * updater
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_CreateFrameInputNodeWithFormatAndEmitter(This,encodingProperties,emitter,frameInputNode) \
    ( (This)->lpVtbl->CreateFrameInputNodeWithFormatAndEmitter(This,encodingProperties,emitter,frameInputNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(This,category,encodingProperties,device,emitter,result) \
    ( (This)->lpVtbl->CreateDeviceInputNodeWithFormatAndEmitterOnDeviceAsync(This,category,encodingProperties,device,emitter,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_CreateFileInputNodeWithEmitterAsync(This,file,emitter,result) \
    ( (This)->lpVtbl->CreateFileInputNodeWithEmitterAsync(This,file,emitter,result) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_CreateSubmixNodeWithFormatAndEmitter(This,encodingProperties,emitter,submixNode) \
    ( (This)->lpVtbl->CreateSubmixNodeWithFormatAndEmitter(This,encodingProperties,emitter,submixNode) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_CreateBatchUpdater(This,updater) \
    ( (This)->lpVtbl->CreateBatchUpdater(This,updater) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraph2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphConnection[] = L"Windows.Media.Audio.IAudioGraphConnection";
/* [object, uuid("763070ED-D04E-4FAC-B233-600B42EDD469"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Destination )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_get_Destination(This,value) \
    ( (This)->lpVtbl->get_Destination(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_put_Gain(This,value) \
    ( (This)->lpVtbl->put_Gain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_get_Gain(This,value) \
    ( (This)->lpVtbl->get_Gain(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettings[] = L"Windows.Media.Audio.IAudioGraphSettings";
/* [object, uuid("1D59647F-E6FE-4628-84F8-9D8BDBA25785"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PrimaryRenderDevice )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QuantumSizeSelectionMode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_QuantumSizeSelectionMode )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CAudio_CQuantumSizeSelectionMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredSamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredSamplesPerQuantum )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioRenderCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AudioRenderCategory )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredRenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudioProcessing * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredRenderDeviceAudioProcessing )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * This,
        /* [in] */__x_ABI_CWindows_CMedia_CAudioProcessing value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_EncodingProperties(This,value) \
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_EncodingProperties(This,value) \
    ( (This)->lpVtbl->put_EncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_PrimaryRenderDevice(This,value) \
    ( (This)->lpVtbl->get_PrimaryRenderDevice(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_PrimaryRenderDevice(This,value) \
    ( (This)->lpVtbl->put_PrimaryRenderDevice(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_QuantumSizeSelectionMode(This,value) \
    ( (This)->lpVtbl->get_QuantumSizeSelectionMode(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_QuantumSizeSelectionMode(This,value) \
    ( (This)->lpVtbl->put_QuantumSizeSelectionMode(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_DesiredSamplesPerQuantum(This,value) \
    ( (This)->lpVtbl->get_DesiredSamplesPerQuantum(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_DesiredSamplesPerQuantum(This,value) \
    ( (This)->lpVtbl->put_DesiredSamplesPerQuantum(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_AudioRenderCategory(This,value) \
    ( (This)->lpVtbl->get_AudioRenderCategory(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_AudioRenderCategory(This,value) \
    ( (This)->lpVtbl->put_AudioRenderCategory(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_get_DesiredRenderDeviceAudioProcessing(This,value) \
    ( (This)->lpVtbl->get_DesiredRenderDeviceAudioProcessing(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_put_DesiredRenderDeviceAudioProcessing(This,value) \
    ( (This)->lpVtbl->put_DesiredRenderDeviceAudioProcessing(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphSettingsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphSettingsFactory[] = L"Windows.Media.Audio.IAudioGraphSettingsFactory";
/* [object, uuid("A5D91CC6-C2EB-4A61-A214-1D66D75F83DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory * This,
        /* [in] */__x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory audioRenderCategory,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_Create(This,audioRenderCategory,value) \
    ( (This)->lpVtbl->Create(This,audioRenderCategory,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettingsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphStatics[] = L"Windows.Media.Audio.IAudioGraphStatics";
/* [object, uuid("76EC3132-E159-4AB7-A82A-17BEB4B31E94"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CAudio__CCreateAudioGraphResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_CreateAsync(This,settings,result) \
    ( (This)->lpVtbl->CreateAsync(This,settings,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs";
/* [object, uuid("C3D9CBE0-3FF6-4FB3-B262-50D435C55423"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioGraphUnrecoverableError * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_get_Error(This,value) \
    ( (This)->lpVtbl->get_Error(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioGraphUnrecoverableErrorOccurredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode[] = L"Windows.Media.Audio.IAudioInputNode";
/* [object, uuid("D148005C-8428-4784-B7FD-A99D468C5D20"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingConnections )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CAudioGraphConnection * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOutgoingConnection )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOutgoingConnectionWithGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination,
        /* [in] */DOUBLE gain
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveOutgoingConnection )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * destination
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_get_OutgoingConnections(This,value) \
    ( (This)->lpVtbl->get_OutgoingConnections(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_AddOutgoingConnection(This,destination) \
    ( (This)->lpVtbl->AddOutgoingConnection(This,destination) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_AddOutgoingConnectionWithGain(This,destination,gain) \
    ( (This)->lpVtbl->AddOutgoingConnectionWithGain(This,destination,gain) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_RemoveOutgoingConnection(This,destination) \
    ( (This)->lpVtbl->RemoveOutgoingConnection(This,destination) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioInputNode2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Audio.IAudioNode
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioInputNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioInputNode2[] = L"Windows.Media.Audio.IAudioInputNode2";
/* [object, uuid("905156B7-CA68-4C6D-A8BC-E3EE17FE3FD2"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Emitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_get_Emitter(This,value) \
    ( (This)->lpVtbl->get_Emitter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioInputNode2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNode[] = L"Windows.Media.Audio.IAudioNode";
/* [object, uuid("15389D7F-DBD8-4819-BF03-668E9357CD6D"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EffectDefinitions )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OutgoingGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OutgoingGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncodingProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConsumeInput )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ConsumeInput )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *Reset )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This
        );
    HRESULT ( STDMETHODCALLTYPE *DisableEffectsByDefinition )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * definition
        );
    HRESULT ( STDMETHODCALLTYPE *EnableEffectsByDefinition )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * definition
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNode
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_get_EffectDefinitions(This,value) \
    ( (This)->lpVtbl->get_EffectDefinitions(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_put_OutgoingGain(This,value) \
    ( (This)->lpVtbl->put_OutgoingGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_get_OutgoingGain(This,value) \
    ( (This)->lpVtbl->get_OutgoingGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_get_EncodingProperties(This,value) \
    ( (This)->lpVtbl->get_EncodingProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_get_ConsumeInput(This,value) \
    ( (This)->lpVtbl->get_ConsumeInput(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_put_ConsumeInput(This,value) \
    ( (This)->lpVtbl->put_ConsumeInput(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_Reset(This) \
    ( (This)->lpVtbl->Reset(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_DisableEffectsByDefinition(This,definition) \
    ( (This)->lpVtbl->DisableEffectsByDefinition(This,definition) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNode_EnableEffectsByDefinition(This,definition) \
    ( (This)->lpVtbl->EnableEffectsByDefinition(This,definition) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNode;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter[] = L"Windows.Media.Audio.IAudioNodeEmitter";
/* [object, uuid("3676971D-880A-47B8-ADF7-1323A9D965BE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Direction )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecayModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistanceScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DistanceScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DopplerScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DopplerScale )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDopplerDisabled )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_Direction(This,value) \
    ( (This)->lpVtbl->get_Direction(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_Direction(This,value) \
    ( (This)->lpVtbl->put_Direction(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_Shape(This,value) \
    ( (This)->lpVtbl->get_Shape(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_DecayModel(This,value) \
    ( (This)->lpVtbl->get_DecayModel(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_Gain(This,value) \
    ( (This)->lpVtbl->get_Gain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_Gain(This,value) \
    ( (This)->lpVtbl->put_Gain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_DistanceScale(This,value) \
    ( (This)->lpVtbl->get_DistanceScale(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_DistanceScale(This,value) \
    ( (This)->lpVtbl->put_DistanceScale(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_DopplerScale(This,value) \
    ( (This)->lpVtbl->get_DopplerScale(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_DopplerScale(This,value) \
    ( (This)->lpVtbl->put_DopplerScale(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_DopplerVelocity(This,value) \
    ( (This)->lpVtbl->get_DopplerVelocity(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_put_DopplerVelocity(This,value) \
    ( (This)->lpVtbl->put_DopplerVelocity(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_get_IsDopplerDisabled(This,value) \
    ( (This)->lpVtbl->get_IsDopplerDisabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitter2[] = L"Windows.Media.Audio.IAudioNodeEmitter2";
/* [object, uuid("4AB6EECB-EC29-47F8-818C-B6B660A5AEB1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpatialAudioModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpatialAudioModel )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CAudio_CSpatialAudioModel value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_get_SpatialAudioModel(This,value) \
    ( (This)->lpVtbl->get_SpatialAudioModel(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_put_SpatialAudioModel(This,value) \
    ( (This)->lpVtbl->put_SpatialAudioModel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterConeProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterConeProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterConeProperties";
/* [object, uuid("E99B2CEE-02CA-4375-9326-0C6AE4BCDFB5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InnerAngle )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OuterAngle )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OuterAngleGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConePropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_get_InnerAngle(This,value) \
    ( (This)->lpVtbl->get_InnerAngle(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_get_OuterAngle(This,value) \
    ( (This)->lpVtbl->get_OuterAngle(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_get_OuterAngleGain(This,value) \
    ( (This)->lpVtbl->get_OuterAngleGain(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterDecayModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModel";
/* [object, uuid("1D1D5AF7-0D53-4FA9-BD84-D5816A86F3FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterDecayKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NaturalProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_get_MinGain(This,value) \
    ( (This)->lpVtbl->get_MinGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_get_MaxGain(This,value) \
    ( (This)->lpVtbl->get_MaxGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_get_NaturalProperties(This,value) \
    ( (This)->lpVtbl->get_NaturalProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterDecayModelStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics";
/* [object, uuid("C7787CA8-F178-462F-BC81-8DD5CBE5DAE8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateNatural )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
        /* [in] */DOUBLE minGain,
        /* [in] */DOUBLE maxGain,
        /* [in] */DOUBLE unityGainDistance,
        /* [in] */DOUBLE cutoffDistance,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * decayModel
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCustom )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics * This,
        /* [in] */DOUBLE minGain,
        /* [in] */DOUBLE maxGain,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * * decayModel
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_CreateNatural(This,minGain,maxGain,unityGainDistance,cutoffDistance,decayModel) \
    ( (This)->lpVtbl->CreateNatural(This,minGain,maxGain,unityGainDistance,cutoffDistance,decayModel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_CreateCustom(This,minGain,maxGain,decayModel) \
    ( (This)->lpVtbl->CreateCustom(This,minGain,maxGain,decayModel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModelStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterFactory[] = L"Windows.Media.Audio.IAudioNodeEmitterFactory";
/* [object, uuid("FDC8489A-6AD6-4CE4-B7F7-A99370DF7EE9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAudioNodeEmitter )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * shape,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterDecayModel * decayModel,
        /* [in] */__x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterSettings settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitter * * emitter
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_CreateAudioNodeEmitter(This,shape,decayModel,settings,emitter) \
    ( (This)->lpVtbl->CreateAudioNodeEmitter(This,shape,decayModel,settings,emitter) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties";
/* [object, uuid("48934BCF-CF2C-4EFC-9331-75BD22DF1F0C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnityGainDistance )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CutoffDistance )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_get_UnityGainDistance(This,value) \
    ( (This)->lpVtbl->get_UnityGainDistance(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_get_CutoffDistance(This,value) \
    ( (This)->lpVtbl->get_CutoffDistance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterNaturalDecayModelProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterShape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShape[] = L"Windows.Media.Audio.IAudioNodeEmitterShape";
/* [object, uuid("EA0311C5-E73D-44BC-859C-45553BBC4828"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioNodeEmitterShapeKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConeProperties )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterConeProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_get_ConeProperties(This,value) \
    ( (This)->lpVtbl->get_ConeProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeEmitterShapeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeEmitterShape
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeEmitterShapeStatics[] = L"Windows.Media.Audio.IAudioNodeEmitterShapeStatics";
/* [object, uuid("57BB2771-FFA5-4B86-A779-E264AEB9145F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCone )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
        /* [in] */DOUBLE innerAngle,
        /* [in] */DOUBLE outerAngle,
        /* [in] */DOUBLE outerAngleGain,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * shape
        );
    HRESULT ( STDMETHODCALLTYPE *CreateOmnidirectional )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShape * * shape
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_CreateCone(This,innerAngle,outerAngle,outerAngleGain,shape) \
    ( (This)->lpVtbl->CreateCone(This,innerAngle,outerAngle,outerAngleGain,shape) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_CreateOmnidirectional(This,shape) \
    ( (This)->lpVtbl->CreateOmnidirectional(This,shape) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeEmitterShapeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.AudioNodeListener
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeListener[] = L"Windows.Media.Audio.IAudioNodeListener";
/* [object, uuid("D9722E16-0C0A-41DA-B755-6C77835FB1EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpeedOfSound )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpeedOfSound )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DopplerVelocity )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_get_SpeedOfSound(This,value) \
    ( (This)->lpVtbl->get_SpeedOfSound(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_put_SpeedOfSound(This,value) \
    ( (This)->lpVtbl->put_SpeedOfSound(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_get_DopplerVelocity(This,value) \
    ( (This)->lpVtbl->get_DopplerVelocity(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_put_DopplerVelocity(This,value) \
    ( (This)->lpVtbl->put_DopplerVelocity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.IAudioNodeWithListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *     Windows.Media.Audio.IAudioNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IAudioNodeWithListener[] = L"Windows.Media.Audio.IAudioNodeWithListener";
/* [object, uuid("0E0F907C-79FF-4544-9EEB-01257B15105A"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Listener )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Listener )(
        __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeListener * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListenerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_put_Listener(This,value) \
    ( (This)->lpVtbl->put_Listener(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_get_Listener(This,value) \
    ( (This)->lpVtbl->get_Listener(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIAudioNodeWithListener_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioDeviceInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioDeviceInputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceInputNodeResult";
/* [object, uuid("16EEC7A8-1CA7-40EF-91A4-D346E0AA1BBA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceInputNode * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_get_DeviceInputNode(This,value) \
    ( (This)->lpVtbl->get_DeviceInputNode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceInputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioDeviceOutputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult";
/* [object, uuid("F7776D27-1D9A-47F7-9CD4-2859CC1B7BFF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioDeviceNodeCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioDeviceOutputNode * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_get_DeviceOutputNode(This,value) \
    ( (This)->lpVtbl->get_DeviceOutputNode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioDeviceOutputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioFileInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioFileInputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileInputNodeResult";
/* [object, uuid("CE83D61C-E297-4C50-9CE7-1C7A69D6BD09"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileInputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileInputNode * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_get_FileInputNode(This,value) \
    ( (This)->lpVtbl->get_FileInputNode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileInputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioFileOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioFileOutputNodeResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.ICreateAudioFileOutputNodeResult";
/* [object, uuid("47D6BA7B-E909-453F-866E-5540CDA734FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioFileNodeCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileOutputNode )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioFileOutputNode * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_get_FileOutputNode(This,value) \
    ( (This)->lpVtbl->get_FileOutputNode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioFileOutputNodeResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ICreateAudioGraphResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.CreateAudioGraphResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ICreateAudioGraphResult[] = L"Windows.Media.Audio.ICreateAudioGraphResult";
/* [object, uuid("5453EF7E-7BDE-4B76-BB5D-48F79CFC8C0B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CAudio_CAudioGraphCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Graph )(
        __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_get_Graph(This,value) \
    ( (This)->lpVtbl->get_Graph(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CICreateAudioGraphResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEchoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EchoEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinition[] = L"Windows.Media.Audio.IEchoEffectDefinition";
/* [object, uuid("0E4D3FAA-36B8-4C91-B9DA-11F44A8A6610"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Feedback )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Feedback )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_put_WetDryMix(This,value) \
    ( (This)->lpVtbl->put_WetDryMix(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_get_WetDryMix(This,value) \
    ( (This)->lpVtbl->get_WetDryMix(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_put_Feedback(This,value) \
    ( (This)->lpVtbl->put_Feedback(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_get_Feedback(This,value) \
    ( (This)->lpVtbl->get_Feedback(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_put_Delay(This,value) \
    ( (This)->lpVtbl->put_Delay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_get_Delay(This,value) \
    ( (This)->lpVtbl->get_Delay(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEchoEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EchoEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEchoEffectDefinitionFactory[] = L"Windows.Media.Audio.IEchoEffectDefinitionFactory";
/* [object, uuid("0D4E2257-AAF2-4E86-A54C-FB79DB8F6C12"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_Create(This,audioGraph,value) \
    ( (This)->lpVtbl->Create(This,audioGraph,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEchoEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerBand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerBand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerBand[] = L"Windows.Media.Audio.IEqualizerBand";
/* [object, uuid("C00A5A6A-262D-4B85-9BB7-43280B62ED0C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrequencyCenter )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FrequencyCenter )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_get_Bandwidth(This,value) \
    ( (This)->lpVtbl->get_Bandwidth(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_put_Bandwidth(This,value) \
    ( (This)->lpVtbl->put_Bandwidth(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_get_FrequencyCenter(This,value) \
    ( (This)->lpVtbl->get_FrequencyCenter(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_put_FrequencyCenter(This,value) \
    ( (This)->lpVtbl->put_FrequencyCenter(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_get_Gain(This,value) \
    ( (This)->lpVtbl->get_Gain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_put_Gain(This,value) \
    ( (This)->lpVtbl->put_Gain(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerBand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinition[] = L"Windows.Media.Audio.IEqualizerEffectDefinition";
/* [object, uuid("023F6F1F-83FE-449A-A822-C696442D16B0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bands )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CAudio__CEqualizerBand * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_get_Bands(This,value) \
    ( (This)->lpVtbl->get_Bands(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IEqualizerEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.EqualizerEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IEqualizerEffectDefinitionFactory[] = L"Windows.Media.Audio.IEqualizerEffectDefinitionFactory";
/* [object, uuid("D2876FC4-D410-4EB5-9E69-C9AA1277EAF0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_Create(This,audioGraph,value) \
    ( (This)->lpVtbl->Create(This,audioGraph,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIEqualizerEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IFrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs";
/* [object, uuid("3D9BD498-A306-4F06-BD9F-E9EFC8226304"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequiredSamples )(
        __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_get_RequiredSamples(This,value) \
    ( (This)->lpVtbl->get_RequiredSamples(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIFrameInputNodeQuantumStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ILimiterEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.LimiterEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinition[] = L"Windows.Media.Audio.ILimiterEffectDefinition";
/* [object, uuid("6B755D19-2603-47BA-BDEB-39055E3486DC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Release )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Release )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Loudness )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Loudness )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_put_Release(This,value) \
    ( (This)->lpVtbl->put_Release(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_get_Release(This,value) \
    ( (This)->lpVtbl->get_Release(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_put_Loudness(This,value) \
    ( (This)->lpVtbl->put_Loudness(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_get_Loudness(This,value) \
    ( (This)->lpVtbl->get_Loudness(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.ILimiterEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.LimiterEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_ILimiterEffectDefinitionFactory[] = L"Windows.Media.Audio.ILimiterEffectDefinitionFactory";
/* [object, uuid("ECBAE6F1-61FF-45EF-B8F5-48659A57C72D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_Create(This,audioGraph,value) \
    ( (This)->lpVtbl->Create(This,audioGraph,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CILimiterEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IReverbEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.ReverbEffectDefinition
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Effects.IAudioEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinition[] = L"Windows.Media.Audio.IReverbEffectDefinition";
/* [object, uuid("4606AA89-F563-4D0A-8F6E-F0CDDFF35D84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WetDryMix )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReflectionsDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReflectionsDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReverbDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReverbDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RearDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RearDelay )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PositionLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PositionRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PositionMatrixLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionMatrixLeft )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PositionMatrixRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PositionMatrixRight )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EarlyDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EarlyDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LateDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LateDiffusion )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LowEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LowEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HighEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HighEQGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HighEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HighEQCutoff )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoomFilterFreq )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoomFilterFreq )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoomFilterMain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoomFilterMain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoomFilterHF )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoomFilterHF )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReflectionsGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReflectionsGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReverbGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReverbGain )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DecayTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecayTime )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Density )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Density )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoomSize )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoomSize )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisableLateField )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisableLateField )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_WetDryMix(This,value) \
    ( (This)->lpVtbl->put_WetDryMix(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_WetDryMix(This,value) \
    ( (This)->lpVtbl->get_WetDryMix(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_ReflectionsDelay(This,value) \
    ( (This)->lpVtbl->put_ReflectionsDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_ReflectionsDelay(This,value) \
    ( (This)->lpVtbl->get_ReflectionsDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_ReverbDelay(This,value) \
    ( (This)->lpVtbl->put_ReverbDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_ReverbDelay(This,value) \
    ( (This)->lpVtbl->get_ReverbDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_RearDelay(This,value) \
    ( (This)->lpVtbl->put_RearDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_RearDelay(This,value) \
    ( (This)->lpVtbl->get_RearDelay(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_PositionLeft(This,value) \
    ( (This)->lpVtbl->put_PositionLeft(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_PositionLeft(This,value) \
    ( (This)->lpVtbl->get_PositionLeft(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_PositionRight(This,value) \
    ( (This)->lpVtbl->put_PositionRight(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_PositionRight(This,value) \
    ( (This)->lpVtbl->get_PositionRight(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_PositionMatrixLeft(This,value) \
    ( (This)->lpVtbl->put_PositionMatrixLeft(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_PositionMatrixLeft(This,value) \
    ( (This)->lpVtbl->get_PositionMatrixLeft(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_PositionMatrixRight(This,value) \
    ( (This)->lpVtbl->put_PositionMatrixRight(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_PositionMatrixRight(This,value) \
    ( (This)->lpVtbl->get_PositionMatrixRight(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_EarlyDiffusion(This,value) \
    ( (This)->lpVtbl->put_EarlyDiffusion(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_EarlyDiffusion(This,value) \
    ( (This)->lpVtbl->get_EarlyDiffusion(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_LateDiffusion(This,value) \
    ( (This)->lpVtbl->put_LateDiffusion(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_LateDiffusion(This,value) \
    ( (This)->lpVtbl->get_LateDiffusion(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_LowEQGain(This,value) \
    ( (This)->lpVtbl->put_LowEQGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_LowEQGain(This,value) \
    ( (This)->lpVtbl->get_LowEQGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_LowEQCutoff(This,value) \
    ( (This)->lpVtbl->put_LowEQCutoff(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_LowEQCutoff(This,value) \
    ( (This)->lpVtbl->get_LowEQCutoff(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_HighEQGain(This,value) \
    ( (This)->lpVtbl->put_HighEQGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_HighEQGain(This,value) \
    ( (This)->lpVtbl->get_HighEQGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_HighEQCutoff(This,value) \
    ( (This)->lpVtbl->put_HighEQCutoff(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_HighEQCutoff(This,value) \
    ( (This)->lpVtbl->get_HighEQCutoff(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_RoomFilterFreq(This,value) \
    ( (This)->lpVtbl->put_RoomFilterFreq(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_RoomFilterFreq(This,value) \
    ( (This)->lpVtbl->get_RoomFilterFreq(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_RoomFilterMain(This,value) \
    ( (This)->lpVtbl->put_RoomFilterMain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_RoomFilterMain(This,value) \
    ( (This)->lpVtbl->get_RoomFilterMain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_RoomFilterHF(This,value) \
    ( (This)->lpVtbl->put_RoomFilterHF(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_RoomFilterHF(This,value) \
    ( (This)->lpVtbl->get_RoomFilterHF(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_ReflectionsGain(This,value) \
    ( (This)->lpVtbl->put_ReflectionsGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_ReflectionsGain(This,value) \
    ( (This)->lpVtbl->get_ReflectionsGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_ReverbGain(This,value) \
    ( (This)->lpVtbl->put_ReverbGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_ReverbGain(This,value) \
    ( (This)->lpVtbl->get_ReverbGain(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_DecayTime(This,value) \
    ( (This)->lpVtbl->put_DecayTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_DecayTime(This,value) \
    ( (This)->lpVtbl->get_DecayTime(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_Density(This,value) \
    ( (This)->lpVtbl->put_Density(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_Density(This,value) \
    ( (This)->lpVtbl->get_Density(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_RoomSize(This,value) \
    ( (This)->lpVtbl->put_RoomSize(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_RoomSize(This,value) \
    ( (This)->lpVtbl->get_RoomSize(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_put_DisableLateField(This,value) \
    ( (This)->lpVtbl->put_DisableLateField(This,value) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_get_DisableLateField(This,value) \
    ( (This)->lpVtbl->get_DisableLateField(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Audio.IReverbEffectDefinitionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Audio.ReverbEffectDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Audio_IReverbEffectDefinitionFactory[] = L"Windows.Media.Audio.IReverbEffectDefinitionFactory";
/* [object, uuid("A7D5CBFE-100B-4FF0-9DA6-DC4E05A759F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioGraph * audioGraph,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinition * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_Create(This,audioGraph,value) \
    ( (This)->lpVtbl->Create(This,audioGraph,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAudio_CIReverbEffectDefinitionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioDeviceInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioDeviceInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioDeviceInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioDeviceInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceInputNode[] = L"Windows.Media.Audio.AudioDeviceInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioDeviceOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioDeviceOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioNodeWithListener
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioDeviceOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioDeviceOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioDeviceOutputNode[] = L"Windows.Media.Audio.AudioDeviceOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFileInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFileInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFileInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFileInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileInputNode[] = L"Windows.Media.Audio.AudioFileInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFileOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFileOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFileOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFileOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFileOutputNode[] = L"Windows.Media.Audio.AudioFileOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameCompletedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameCompletedEventArgs[] = L"Windows.Media.Audio.AudioFrameCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameInputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioInputNode
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameInputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameInputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameInputNode[] = L"Windows.Media.Audio.AudioFrameInputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioFrameOutputNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioFrameOutputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioFrameOutputNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioFrameOutputNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioFrameOutputNode[] = L"Windows.Media.Audio.AudioFrameOutputNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioGraphStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraph ** Default Interface **
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioGraph2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraph_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraph_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraph[] = L"Windows.Media.Audio.AudioGraph";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphBatchUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.IClosable ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphBatchUpdater_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphBatchUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphBatchUpdater[] = L"Windows.Media.Audio.AudioGraphBatchUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioGraphConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphConnection_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphConnection[] = L"Windows.Media.Audio.AudioGraphConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IAudioGraphSettingsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphSettings[] = L"Windows.Media.Audio.AudioGraphSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioGraphUnrecoverableErrorOccurredEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioGraphUnrecoverableErrorOccurredEventArgs[] = L"Windows.Media.Audio.AudioGraphUnrecoverableErrorOccurredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IAudioNodeEmitterFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitter ** Default Interface **
 *    Windows.Media.Audio.IAudioNodeEmitter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitter_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitter[] = L"Windows.Media.Audio.AudioNodeEmitter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterConeProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterConeProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterConeProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterConeProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterConeProperties[] = L"Windows.Media.Audio.AudioNodeEmitterConeProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterDecayModel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioNodeEmitterDecayModelStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterDecayModel ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterDecayModel_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterDecayModel_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterDecayModel[] = L"Windows.Media.Audio.AudioNodeEmitterDecayModel";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterNaturalDecayModelProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterNaturalDecayModelProperties[] = L"Windows.Media.Audio.AudioNodeEmitterNaturalDecayModelProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeEmitterShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Audio.IAudioNodeEmitterShapeStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeEmitterShape ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterShape_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeEmitterShape_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeEmitterShape[] = L"Windows.Media.Audio.AudioNodeEmitterShape";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioNodeListener
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioNodeListener ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioNodeListener_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioNodeListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioNodeListener[] = L"Windows.Media.Audio.AudioNodeListener";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Audio.AudioSubmixNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IAudioInputNode ** Default Interface **
 *    Windows.Media.Audio.IAudioNode
 *    Windows.Foundation.IClosable
 *    Windows.Media.Audio.IAudioInputNode2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_AudioSubmixNode_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_AudioSubmixNode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_AudioSubmixNode[] = L"Windows.Media.Audio.AudioSubmixNode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioDeviceInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioDeviceInputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceInputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceInputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceInputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceInputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioDeviceOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioDeviceOutputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioDeviceOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioDeviceOutputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioFileInputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioFileInputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileInputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileInputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileInputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileInputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioFileOutputNodeResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioFileOutputNodeResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileOutputNodeResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioFileOutputNodeResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioFileOutputNodeResult[] = L"Windows.Media.Audio.CreateAudioFileOutputNodeResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.CreateAudioGraphResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ICreateAudioGraphResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_CreateAudioGraphResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_CreateAudioGraphResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_CreateAudioGraphResult[] = L"Windows.Media.Audio.CreateAudioGraphResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EchoEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IEchoEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEchoEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EchoEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EchoEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EchoEffectDefinition[] = L"Windows.Media.Audio.EchoEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EqualizerBand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEqualizerBand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EqualizerBand_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EqualizerBand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerBand[] = L"Windows.Media.Audio.EqualizerBand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.EqualizerEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IEqualizerEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IEqualizerEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_EqualizerEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_EqualizerEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_EqualizerEffectDefinition[] = L"Windows.Media.Audio.EqualizerEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IFrameInputNodeQuantumStartedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_FrameInputNodeQuantumStartedEventArgs[] = L"Windows.Media.Audio.FrameInputNodeQuantumStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.LimiterEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.ILimiterEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.ILimiterEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_LimiterEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_LimiterEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_LimiterEffectDefinition[] = L"Windows.Media.Audio.LimiterEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Audio.ReverbEffectDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Audio.IReverbEffectDefinitionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Audio.IReverbEffectDefinition ** Default Interface **
 *    Windows.Media.Effects.IAudioEffectDefinition
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Audio_ReverbEffectDefinition_DEFINED
#define RUNTIMECLASS_Windows_Media_Audio_ReverbEffectDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Audio_ReverbEffectDefinition[] = L"Windows.Media.Audio.ReverbEffectDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emedia2Eaudio_p_h__

#endif // __windows2Emedia2Eaudio_h__
