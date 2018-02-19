/* Header file automatically generated from windows.media.idl */
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
#ifndef __windows2Emedia_h__
#define __windows2Emedia_h__
#ifndef __windows2Emedia_p_h__
#define __windows2Emedia_p_h__


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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IAudioBuffer;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIAudioBuffer ABI::Windows::Media::IAudioBuffer

#endif // ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__

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

#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IAudioFrameFactory;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory ABI::Windows::Media::IAudioFrameFactory

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IAutoRepeatModeChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs ABI::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IImageDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties ABI::Windows::Media::IImageDisplayProperties

#endif // ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaControl;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaControl ABI::Windows::Media::IMediaControl

#endif // ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtension;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaExtension ABI::Windows::Media::IMediaExtension

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtensionManager;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager ABI::Windows::Media::IMediaExtensionManager

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtensionManager2;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 ABI::Windows::Media::IMediaExtensionManager2

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaFrame ABI::Windows::Media::IMediaFrame

#endif // ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaMarker;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaMarker ABI::Windows::Media::IMediaMarker

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaMarkerTypesStatics;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics ABI::Windows::Media::IMediaMarkerTypesStatics

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaMarkers;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaMarkers ABI::Windows::Media::IMediaMarkers

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaProcessingTriggerDetails;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails ABI::Windows::Media::IMediaProcessingTriggerDetails

#endif // ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaTimelineController;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaTimelineController ABI::Windows::Media::IMediaTimelineController

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaTimelineController2;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2 ABI::Windows::Media::IMediaTimelineController2

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaTimelineControllerFailedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs ABI::Windows::Media::IMediaTimelineControllerFailedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMusicDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties ABI::Windows::Media::IMusicDisplayProperties

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMusicDisplayProperties2;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 ABI::Windows::Media::IMusicDisplayProperties2

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMusicDisplayProperties3;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 ABI::Windows::Media::IMusicDisplayProperties3

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IPlaybackPositionChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs ABI::Windows::Media::IPlaybackPositionChangeRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IPlaybackRateChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs ABI::Windows::Media::IPlaybackRateChangeRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IShuffleEnabledChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs ABI::Windows::Media::IShuffleEnabledChangeRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControls;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls ABI::Windows::Media::ISystemMediaTransportControls

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControls2;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 ABI::Windows::Media::ISystemMediaTransportControls2

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControlsButtonPressedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs ABI::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControlsDisplayUpdater;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater ABI::Windows::Media::ISystemMediaTransportControlsDisplayUpdater

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControlsPropertyChangedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs ABI::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControlsStatics;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics ABI::Windows::Media::ISystemMediaTransportControlsStatics

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface ISystemMediaTransportControlsTimelineProperties;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties ABI::Windows::Media::ISystemMediaTransportControlsTimelineProperties

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties ABI::Windows::Media::IVideoDisplayProperties

#endif // ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoDisplayProperties2;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 ABI::Windows::Media::IVideoDisplayProperties2

#endif // ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoEffectsStatics;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics ABI::Windows::Media::IVideoEffectsStatics

#endif // ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoFrame ABI::Windows::Media::IVideoFrame

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoFrameFactory;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory ABI::Windows::Media::IVideoFrameFactory

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f464661e-88bc-5cea-93cd-0c123f17d258"))
IIterator<ABI::Windows::Media::IMediaMarker*> : IIterator_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::IMediaMarker*> __FIIterator_1_Windows__CMedia__CIMediaMarker_t;
#define __FIIterator_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::IMediaMarker*>
//#define __FIIterator_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CIMediaMarker_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a1c0a397-0364-5e4c-9dca-7cd7011bd114"))
IIterable<ABI::Windows::Media::IMediaMarker*> : IIterable_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::IMediaMarker*> __FIIterable_1_Windows__CMedia__CIMediaMarker_t;
#define __FIIterable_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::IMediaMarker*>
//#define __FIIterable_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CIMediaMarker_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            struct MediaTimeRange;
            
        } /* Windows */
    } /* Media */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CMedia__CMediaTimeRange_USE
#define DEF___FIIterator_1_Windows__CMedia__CMediaTimeRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("29b8d190-5e46-5873-afc0-8f2f40fbe8fd"))
IIterator<struct ABI::Windows::Media::MediaTimeRange> : IIterator_impl<struct ABI::Windows::Media::MediaTimeRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.MediaTimeRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Media::MediaTimeRange> __FIIterator_1_Windows__CMedia__CMediaTimeRange_t;
#define __FIIterator_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CMediaTimeRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaTimeRange>
//#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::MediaTimeRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CMediaTimeRange_USE */





#ifndef DEF___FIIterable_1_Windows__CMedia__CMediaTimeRange_USE
#define DEF___FIIterable_1_Windows__CMedia__CMediaTimeRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("268204e2-9d52-5e7b-a54b-869c63defc8e"))
IIterable<struct ABI::Windows::Media::MediaTimeRange> : IIterable_impl<struct ABI::Windows::Media::MediaTimeRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.MediaTimeRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Media::MediaTimeRange> __FIIterable_1_Windows__CMedia__CMediaTimeRange_t;
#define __FIIterable_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CMediaTimeRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaTimeRange>
//#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::MediaTimeRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CMediaTimeRange_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE
#define DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b543562c-02b1-5824-80a8-9854130cdadd"))
IVectorView<ABI::Windows::Media::IMediaMarker*> : IVectorView_impl<ABI::Windows::Media::IMediaMarker*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.IMediaMarker>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::IMediaMarker*> __FIVectorView_1_Windows__CMedia__CIMediaMarker_t;
#define __FIVectorView_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CIMediaMarker_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CIMediaMarker ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::IMediaMarker*>
//#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::IMediaMarker*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CIMediaMarker_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CMedia__CMediaTimeRange_USE
#define DEF___FIVectorView_1_Windows__CMedia__CMediaTimeRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628205b-a57a-5179-92e6-9b6e13cb8d0d"))
IVectorView<struct ABI::Windows::Media::MediaTimeRange> : IVectorView_impl<struct ABI::Windows::Media::MediaTimeRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.MediaTimeRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Media::MediaTimeRange> __FIVectorView_1_Windows__CMedia__CMediaTimeRange_t;
#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CMediaTimeRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaTimeRange>
//#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::MediaTimeRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CMediaTimeRange_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9c1b578e-fb7d-5bab-ba39-86387fe533b6"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::IMediaExtension*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Media::IMediaExtension*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.IMediaExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::IMediaExtension*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::IMediaExtension*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::IMediaExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f5cb3303-1c1f-5d30-b402-efa192e80c49"))
IAsyncOperation<ABI::Windows::Media::IMediaExtension*> : IAsyncOperation_impl<ABI::Windows::Media::IMediaExtension*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.IMediaExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::IMediaExtension*> __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_t;
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::IMediaExtension*>
//#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::IMediaExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            class VideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6086f2fb-4a29-54ca-b6a3-f2391a03bc3b"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::VideoFrame*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::VideoFrame*, ABI::Windows::Media::IVideoFrame*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.VideoFrame>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::VideoFrame*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::IVideoFrame*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::IVideoFrame*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CVideoFrame_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CVideoFrame_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f12e515d-ac45-5153-96b2-ce53ab594a57"))
IAsyncOperation<ABI::Windows::Media::VideoFrame*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::VideoFrame*, ABI::Windows::Media::IVideoFrame*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.VideoFrame>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::VideoFrame*> __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_t;
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CVideoFrame_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::IVideoFrame*>
//#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::IVideoFrame*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CVideoFrame_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            class MediaTimelineController;
        } /* Windows */
    } /* Media */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5c43e195-7d39-5d0d-a309-1991e68acdb7"))
ITypedEventHandler<ABI::Windows::Media::MediaTimelineController*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaTimelineController*, ABI::Windows::Media::IMediaTimelineController*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.MediaTimelineController, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::MediaTimelineController*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::IMediaTimelineController*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::IMediaTimelineController*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Media {
            class MediaTimelineControllerFailedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07cd62fb-578d-56a6-a8ef-e653eb005d1b"))
ITypedEventHandler<ABI::Windows::Media::MediaTimelineController*,ABI::Windows::Media::MediaTimelineControllerFailedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaTimelineController*, ABI::Windows::Media::IMediaTimelineController*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::MediaTimelineControllerFailedEventArgs*, ABI::Windows::Media::IMediaTimelineControllerFailedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.MediaTimelineController, Windows.Media.MediaTimelineControllerFailedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::MediaTimelineController*,ABI::Windows::Media::MediaTimelineControllerFailedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::IMediaTimelineController*,ABI::Windows::Media::IMediaTimelineControllerFailedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::IMediaTimelineController*,ABI::Windows::Media::IMediaTimelineControllerFailedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Media {
            class SystemMediaTransportControls;
        } /* Windows */
    } /* Media */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            class AutoRepeatModeChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a6214bde-02d5-55b3-ab0d-c6031be70da1"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::AutoRepeatModeChangeRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AutoRepeatModeChangeRequestedEventArgs*, ABI::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.AutoRepeatModeChangeRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::AutoRepeatModeChangeRequestedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IAutoRepeatModeChangeRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            class PlaybackPositionChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44e34f15-bdc0-50a7-ace4-39e91fb753f1"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::PlaybackPositionChangeRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::PlaybackPositionChangeRequestedEventArgs*, ABI::Windows::Media::IPlaybackPositionChangeRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.PlaybackPositionChangeRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::PlaybackPositionChangeRequestedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IPlaybackPositionChangeRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IPlaybackPositionChangeRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            class PlaybackRateChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("15eb0182-6366-5b9f-bd8c-8ab4fa9d7cd9"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::PlaybackRateChangeRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::PlaybackRateChangeRequestedEventArgs*, ABI::Windows::Media::IPlaybackRateChangeRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.PlaybackRateChangeRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::PlaybackRateChangeRequestedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IPlaybackRateChangeRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IPlaybackRateChangeRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            class ShuffleEnabledChangeRequestedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("17ecea80-27e4-5dae-abb4-c858ad1c5307"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::ShuffleEnabledChangeRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::ShuffleEnabledChangeRequestedEventArgs*, ABI::Windows::Media::IShuffleEnabledChangeRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.ShuffleEnabledChangeRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::ShuffleEnabledChangeRequestedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IShuffleEnabledChangeRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::IShuffleEnabledChangeRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            class SystemMediaTransportControlsButtonPressedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0557e996-7b23-5bae-aa81-ea0d671143a4"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs*, ABI::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::ISystemMediaTransportControlsButtonPressedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            class SystemMediaTransportControlsPropertyChangedEventArgs;
        } /* Windows */
    } /* Media */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9fd61dad-1746-5fa1-a908-ef7cb4603c85"))
ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControls*, ABI::Windows::Media::ISystemMediaTransportControls*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs*, ABI::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.SystemMediaTransportControls, Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::SystemMediaTransportControls*,ABI::Windows::Media::SystemMediaTransportControlsPropertyChangedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::ISystemMediaTransportControls*,ABI::Windows::Media::ISystemMediaTransportControlsPropertyChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */



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





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection ABI::Windows::ApplicationModel::AppService::IAppServiceConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


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


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IMemoryBuffer;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIMemoryBuffer ABI::Windows::Foundation::IMemoryBuffer

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace DirectX {
                namespace Direct3D11 {
                    interface IDirect3DSurface;
                } /* Windows */
            } /* Graphics */
        } /* DirectX */
    } /* Direct3D11 */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapAlphaMode : int BitmapAlphaMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapPixelFormat : int BitmapPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                class SoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap ABI::Windows::Graphics::Imaging::ISoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

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
            namespace Streams {
                class RandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference ABI::Windows::Storage::Streams::IRandomAccessStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum AudioBufferAccessMode : int AudioBufferAccessMode;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum AudioProcessing : int AudioProcessing;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum MediaPlaybackAutoRepeatMode : int MediaPlaybackAutoRepeatMode;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum MediaPlaybackStatus : int MediaPlaybackStatus;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum MediaPlaybackType : int MediaPlaybackType;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum MediaTimelineControllerState : int MediaTimelineControllerState;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum SoundLevel : int SoundLevel;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum SystemMediaTransportControlsButton : int SystemMediaTransportControlsButton;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum SystemMediaTransportControlsProperty : int SystemMediaTransportControlsProperty;
            
        } /* Windows */
    } /* Media */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef struct MediaTimeRange MediaTimeRange;
            
        } /* Windows */
    } /* Media */} /* ABI */




































namespace ABI {
    namespace Windows {
        namespace Media {
            class AudioBuffer;
        } /* Windows */
    } /* Media */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            class AudioFrame;
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            class ImageDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            class MediaExtensionManager;
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            class MediaProcessingTriggerDetails;
        } /* Windows */
    } /* Media */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            class MusicDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Media {
            class SystemMediaTransportControlsDisplayUpdater;
        } /* Windows */
    } /* Media */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            class SystemMediaTransportControlsTimelineProperties;
        } /* Windows */
    } /* Media */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            class VideoDisplayProperties;
        } /* Windows */
    } /* Media */} /* ABI */











/*
 *
 * Struct Windows.Media.AudioBufferAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum AudioBufferAccessMode : int
            {
                AudioBufferAccessMode_Read = 0,
                AudioBufferAccessMode_ReadWrite = 1,
                AudioBufferAccessMode_Write = 2,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.AudioProcessing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum AudioProcessing : int
            {
                AudioProcessing_Default = 0,
                AudioProcessing_Raw = 1,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackAutoRepeatMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum MediaPlaybackAutoRepeatMode : int
            {
                MediaPlaybackAutoRepeatMode_None = 0,
                MediaPlaybackAutoRepeatMode_Track = 1,
                MediaPlaybackAutoRepeatMode_List = 2,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum MediaPlaybackStatus : int
            {
                MediaPlaybackStatus_Closed = 0,
                MediaPlaybackStatus_Changing = 1,
                MediaPlaybackStatus_Stopped = 2,
                MediaPlaybackStatus_Playing = 3,
                MediaPlaybackStatus_Paused = 4,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum MediaPlaybackType : int
            {
                MediaPlaybackType_Unknown = 0,
                MediaPlaybackType_Music = 1,
                MediaPlaybackType_Video = 2,
                MediaPlaybackType_Image = 3,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaTimelineControllerState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum MediaTimelineControllerState : int
            {
                MediaTimelineControllerState_Paused = 0,
                MediaTimelineControllerState_Running = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                
                MediaTimelineControllerState_Stalled = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                
                MediaTimelineControllerState_Error = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.SoundLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum SoundLevel : int
            {
                SoundLevel_Muted = 0,
                SoundLevel_Low = 1,
                SoundLevel_Full = 2,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.SystemMediaTransportControlsButton
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum SystemMediaTransportControlsButton : int
            {
                SystemMediaTransportControlsButton_Play = 0,
                SystemMediaTransportControlsButton_Pause = 1,
                SystemMediaTransportControlsButton_Stop = 2,
                SystemMediaTransportControlsButton_Record = 3,
                SystemMediaTransportControlsButton_FastForward = 4,
                SystemMediaTransportControlsButton_Rewind = 5,
                SystemMediaTransportControlsButton_Next = 6,
                SystemMediaTransportControlsButton_Previous = 7,
                SystemMediaTransportControlsButton_ChannelUp = 8,
                SystemMediaTransportControlsButton_ChannelDown = 9,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.SystemMediaTransportControlsProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [v1_enum, contract] */
            enum SystemMediaTransportControlsProperty : int
            {
                SystemMediaTransportControlsProperty_SoundLevel = 0,
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaTimeRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Media {
            /* [contract] */
            struct MediaTimeRange
            {
                ABI::Windows::Foundation::TimeSpan Start;
                ABI::Windows::Foundation::TimeSpan End;
            };
            
        } /* Windows */
    } /* Media */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IAudioBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioBuffer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IMemoryBuffer
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioBuffer[] = L"Windows.Media.IAudioBuffer";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("35175827-724B-4C6A-B130-F6537F9AE0D0"), exclusiveto, contract] */
            MIDL_INTERFACE("35175827-724B-4C6A-B130-F6537F9AE0D0")
            IAudioBuffer : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capacity(
                    /* [retval, out] */__RPC__out UINT32 * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                    /* [retval, out] */__RPC__out UINT32 * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Length(
                    /* [in] */UINT32 value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAudioBuffer=_uuidof(IAudioBuffer);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioBuffer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAudioFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaFrame
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrame[] = L"Windows.Media.IAudioFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("E36AC304-AAB2-4277-9ED0-43CEDF8E29C6"), exclusiveto, contract] */
            MIDL_INTERFACE("E36AC304-AAB2-4277-9ED0-43CEDF8E29C6")
            IAudioFrame : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE LockBuffer(
                    /* [in] */ABI::Windows::Media::AudioBufferAccessMode mode,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioBuffer * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAudioFrame=_uuidof(IAudioFrame);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAudioFrameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrameFactory[] = L"Windows.Media.IAudioFrameFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("91A90ADE-2422-40A6-B9AD-30D02404317D"), exclusiveto, contract] */
            MIDL_INTERFACE("91A90ADE-2422-40A6-B9AD-30D02404317D")
            IAudioFrameFactory : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Create(
                    /* [range(0, 2147483647), in] */__RPC__in_range(0,0x7fffffff) UINT32 capacity,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IAudioFrame * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAudioFrameFactory=_uuidof(IAudioFrameFactory);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrameFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAutoRepeatModeChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AutoRepeatModeChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("EA137EFA-D852-438E-882B-C990109A78F4"), exclusiveto, contract] */
            MIDL_INTERFACE("EA137EFA-D852-438E-882B-C990109A78F4")
            IAutoRepeatModeChangeRequestedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedAutoRepeatMode(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::MediaPlaybackAutoRepeatMode * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAutoRepeatModeChangeRequestedEventArgs=_uuidof(IAutoRepeatModeChangeRequestedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IImageDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ImageDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IImageDisplayProperties[] = L"Windows.Media.IImageDisplayProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("CD0BC7EF-54E7-411F-9933-F0E98B0A96D2"), exclusiveto, contract] */
            MIDL_INTERFACE("CD0BC7EF-54E7-411F-9933-F0E98B0A96D2")
            IImageDisplayProperties : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subtitle(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subtitle(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IImageDisplayProperties=_uuidof(IImageDisplayProperties);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIImageDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaControl
 *
 * Introduced to Windows.Media.MediaControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaControl
 *
 *
 */
#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaControl[] = L"Windows.Media.IMediaControl";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("98F1FBE1-7A8D-42CB-B6FE-8FE698264F13"), exclusiveto, deprecated, contract] */
            MIDL_INTERFACE("98F1FBE1-7A8D-42CB-B6FE-8FE698264F13")
            
            #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
            DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
            #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
            IMediaControl : IInspectable
            {
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_SoundLevelChanged(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_SoundLevelChanged(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_PlayPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_PlayPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_PausePressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_PausePressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_StopPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_StopPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_PlayPauseTogglePressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_PlayPauseTogglePressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_RecordPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_RecordPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_NextTrackPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_NextTrackPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_PreviousTrackPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_PreviousTrackPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_FastForwardPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_FastForwardPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_RewindPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_RewindPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ChannelUpPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ChannelUpPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ChannelDownPressed(
                    /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ChannelDownPressed(
                    /* [in] */EventRegistrationToken cookie
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SoundLevel(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::SoundLevel * value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TrackName(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TrackName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_ArtistName(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ArtistName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_IsPlaying(
                    /* [in] */boolean value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_IsPlaying(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_AlbumArt(
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                    ) = 0;
                
                #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
                /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_AlbumArt(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaControl=_uuidof(IMediaControl);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtension[] = L"Windows.Media.IMediaExtension";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("07915118-45DF-442B-8A3F-F7826A6370AB"), contract] */
            MIDL_INTERFACE("07915118-45DF-442B-8A3F-F7826A6370AB")
            IMediaExtension : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE SetProperties(
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaExtension=_uuidof(IMediaExtension);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtension;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtensionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaExtensionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager[] = L"Windows.Media.IMediaExtensionManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("4A25EAF5-242D-4DFB-97F4-69B7C42576FF"), exclusiveto, contract] */
            MIDL_INTERFACE("4A25EAF5-242D-4DFB-97F4-69B7C42576FF")
            IMediaExtensionManager : IInspectable
            {
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterSchemeHandler(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */__RPC__in HSTRING scheme
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterSchemeHandlerWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */__RPC__in HSTRING scheme,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterByteStreamHandler(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */__RPC__in HSTRING fileExtension,
                    /* [in] */__RPC__in HSTRING mimeType
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterByteStreamHandlerWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */__RPC__in HSTRING fileExtension,
                    /* [in] */__RPC__in HSTRING mimeType,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterAudioDecoder(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterAudioDecoderWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterAudioEncoder(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterAudioEncoderWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterVideoDecoder(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterVideoDecoderWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterVideoEncoder(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterVideoEncoderWithSettings(
                    /* [in] */__RPC__in HSTRING activatableClassId,
                    /* [in] */GUID inputSubtype,
                    /* [in] */GUID outputSubtype,
                    /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaExtensionManager=_uuidof(IMediaExtensionManager);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtensionManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaExtensionManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtensionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager2[] = L"Windows.Media.IMediaExtensionManager2";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("5BCEBF47-4043-4FED-ACAF-54EC29DFB1F7"), exclusiveto, contract] */
            MIDL_INTERFACE("5BCEBF47-4043-4FED-ACAF-54EC29DFB1F7")
            IMediaExtensionManager2 : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE RegisterMediaExtensionForAppService(
                    /* [in] */__RPC__in_opt ABI::Windows::Media::IMediaExtension * extension,
                    /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::AppService::IAppServiceConnection * connection
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaExtensionManager2=_uuidof(IMediaExtensionManager2);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMediaFrame
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
#if !defined(____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaFrame[] = L"Windows.Media.IMediaFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("BFB52F8C-5943-47D8-8E10-05308AA5FBD0"), contract] */
            MIDL_INTERFACE("BFB52F8C-5943-47D8-8E10-05308AA5FBD0")
            IMediaFrame : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RelativeTime(
                    /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelativeTime(
                    /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SystemRelativeTime(
                    /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemRelativeTime(
                    /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Duration(
                    /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                    /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsDiscontinuous(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDiscontinuous(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedProperties(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaFrame=_uuidof(IMediaFrame);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarker[] = L"Windows.Media.IMediaMarker";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("1803DEF8-DCA5-4B6F-9C20-E3D3C0643625"), contract] */
            MIDL_INTERFACE("1803DEF8-DCA5-4B6F-9C20-E3D3C0643625")
            IMediaMarker : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Time(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaMarkerType(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaMarker=_uuidof(IMediaMarker);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarker;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarkerTypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaMarkerTypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkerTypesStatics[] = L"Windows.Media.IMediaMarkerTypesStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("BB198040-482F-4743-8832-45853821ECE0"), exclusiveto, contract] */
            MIDL_INTERFACE("BB198040-482F-4743-8832-45853821ECE0")
            IMediaMarkerTypesStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bookmark(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaMarkerTypesStatics=_uuidof(IMediaMarkerTypesStatics);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarkers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkers[] = L"Windows.Media.IMediaMarkers";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("AFEAB189-F8DD-466E-AA10-920B52353FDF"), contract] */
            MIDL_INTERFACE("AFEAB189-F8DD-466E-AA10-920B52353FDF")
            IMediaMarkers : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Markers(
                    /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaMarkers=_uuidof(IMediaMarkers);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkers;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaProcessingTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProcessingTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaProcessingTriggerDetails[] = L"Windows.Media.IMediaProcessingTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("EB8564AC-A351-4F4E-B4F0-9BF2408993DB"), exclusiveto, contract] */
            MIDL_INTERFACE("EB8564AC-A351-4F4E-B4F0-9BF2408993DB")
            IMediaProcessingTriggerDetails : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Arguments(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaProcessingTriggerDetails=_uuidof(IMediaProcessingTriggerDetails);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaTimelineController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController[] = L"Windows.Media.IMediaTimelineController";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("8ED361F3-0B78-4360-BF71-0C841999EA1B"), exclusiveto, contract] */
            MIDL_INTERFACE("8ED361F3-0B78-4360-BF71-0C841999EA1B")
            IMediaTimelineController : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                virtual HRESULT STDMETHODCALLTYPE Resume(void) = 0;
                virtual HRESULT STDMETHODCALLTYPE Pause(void) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ClockRate(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ClockRate(
                    /* [in] */DOUBLE value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::MediaTimelineControllerState * value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PositionChanged(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * positionChangedEventHandler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PositionChanged(
                    /* [in] */EventRegistrationToken eventCookie
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StateChanged(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * stateChangedEventHandler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StateChanged(
                    /* [in] */EventRegistrationToken eventCookie
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaTimelineController=_uuidof(IMediaTimelineController);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.IMediaTimelineController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController2[] = L"Windows.Media.IMediaTimelineController2";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("EF74EA38-9E72-4DF9-8355-6E90C81BBADD"), exclusiveto, contract] */
            MIDL_INTERFACE("EF74EA38-9E72-4DF9-8355-6E90C81BBADD")
            IMediaTimelineController2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                    /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Duration(
                    /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLoopingEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsLoopingEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Failed(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * eventHandler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Failed(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Ended(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * eventHandler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Ended(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaTimelineController2=_uuidof(IMediaTimelineController2);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMediaTimelineControllerFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineControllerFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineControllerFailedEventArgs[] = L"Windows.Media.IMediaTimelineControllerFailedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("8821F81D-3E77-43FB-BE26-4FC87A044834"), exclusiveto, contract] */
            MIDL_INTERFACE("8821F81D-3E77-43FB-BE26-4FC87A044834")
            IMediaTimelineControllerFailedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMediaTimelineControllerFailedEventArgs=_uuidof(IMediaTimelineControllerFailedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties[] = L"Windows.Media.IMusicDisplayProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("6BBF0C59-D0A0-4D26-92A0-F978E1D18E7B"), exclusiveto, contract] */
            MIDL_INTERFACE("6BBF0C59-D0A0-4D26-92A0-F978E1D18E7B")
            IMusicDisplayProperties : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlbumArtist(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlbumArtist(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Artist(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Artist(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMusicDisplayProperties=_uuidof(IMusicDisplayProperties);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties2[] = L"Windows.Media.IMusicDisplayProperties2";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("00368462-97D3-44B9-B00F-008AFCEFAF18"), exclusiveto, contract] */
            MIDL_INTERFACE("00368462-97D3-44B9-B00F-008AFCEFAF18")
            IMusicDisplayProperties2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlbumTitle(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlbumTitle(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrackNumber(
                    /* [retval, out] */__RPC__out UINT32 * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TrackNumber(
                    /* [in] */UINT32 value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Genres(
                    /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMusicDisplayProperties2=_uuidof(IMusicDisplayProperties2);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties3[] = L"Windows.Media.IMusicDisplayProperties3";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("4DB51AC1-0681-4E8C-9401-B8159D9EEFC7"), exclusiveto, contract] */
            MIDL_INTERFACE("4DB51AC1-0681-4E8C-9401-B8159D9EEFC7")
            IMusicDisplayProperties3 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlbumTrackCount(
                    /* [retval, out] */__RPC__out UINT32 * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlbumTrackCount(
                    /* [in] */UINT32 value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMusicDisplayProperties3=_uuidof(IMusicDisplayProperties3);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.IPlaybackPositionChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.PlaybackPositionChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("B4493F88-EB28-4961-9C14-335E44F3E125"), exclusiveto, contract] */
            MIDL_INTERFACE("B4493F88-EB28-4961-9C14-335E44F3E125")
            IPlaybackPositionChangeRequestedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedPlaybackPosition(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPlaybackPositionChangeRequestedEventArgs=_uuidof(IPlaybackPositionChangeRequestedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IPlaybackRateChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.PlaybackRateChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackRateChangeRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("2CE2C41F-3CD6-4F77-9BA7-EB27C26A2140"), exclusiveto, contract] */
            MIDL_INTERFACE("2CE2C41F-3CD6-4F77-9BA7-EB27C26A2140")
            IPlaybackRateChangeRequestedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedPlaybackRate(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPlaybackRateChangeRequestedEventArgs=_uuidof(IPlaybackRateChangeRequestedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IShuffleEnabledChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ShuffleEnabledChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("49B593FE-4FD0-4666-A314-C0E01940D302"), exclusiveto, contract] */
            MIDL_INTERFACE("49B593FE-4FD0-4666-A314-C0E01940D302")
            IShuffleEnabledChangeRequestedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedShuffleEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IShuffleEnabledChangeRequestedEventArgs=_uuidof(IShuffleEnabledChangeRequestedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControls
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls[] = L"Windows.Media.ISystemMediaTransportControls";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("99FA3FF4-1742-42A6-902E-087D41F965EC"), exclusiveto, contract] */
            MIDL_INTERFACE("99FA3FF4-1742-42A6-902E-087D41F965EC")
            ISystemMediaTransportControls : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaybackStatus(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::MediaPlaybackStatus * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlaybackStatus(
                    /* [in] */ABI::Windows::Media::MediaPlaybackStatus value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayUpdater(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::ISystemMediaTransportControlsDisplayUpdater * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoundLevel(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::SoundLevel * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPlayEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPlayEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStopEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsStopEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPauseEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPauseEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRecordEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRecordEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFastForwardEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsFastForwardEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRewindEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRewindEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPreviousEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsPreviousEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsNextEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsNextEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsChannelUpEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsChannelUpEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsChannelDownEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsChannelDownEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ButtonPressed(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ButtonPressed(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PropertyChanged(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PropertyChanged(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControls=_uuidof(ISystemMediaTransportControls);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControls2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls2[] = L"Windows.Media.ISystemMediaTransportControls2";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("EA98D2F6-7F3C-4AF2-A586-72889808EFB1"), exclusiveto, contract] */
            MIDL_INTERFACE("EA98D2F6-7F3C-4AF2-A586-72889808EFB1")
            ISystemMediaTransportControls2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoRepeatMode(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::MediaPlaybackAutoRepeatMode * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoRepeatMode(
                    /* [in] */ABI::Windows::Media::MediaPlaybackAutoRepeatMode value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShuffleEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShuffleEnabled(
                    /* [in] */boolean value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlaybackRate(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PlaybackRate(
                    /* [in] */DOUBLE value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE UpdateTimelineProperties(
                    /* [in] */__RPC__in_opt ABI::Windows::Media::ISystemMediaTransportControlsTimelineProperties * timelineProperties
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PlaybackPositionChangeRequested(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PlaybackPositionChangeRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PlaybackRateChangeRequested(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PlaybackRateChangeRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ShuffleEnabledChangeRequested(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ShuffleEnabledChangeRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AutoRepeatModeChangeRequested(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AutoRepeatModeChangeRequested(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControls2=_uuidof(ISystemMediaTransportControls2);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("B7F47116-A56F-4DC8-9E11-92031F4A87C2"), exclusiveto, contract] */
            MIDL_INTERFACE("B7F47116-A56F-4DC8-9E11-92031F4A87C2")
            ISystemMediaTransportControlsButtonPressedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Button(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::SystemMediaTransportControlsButton * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControlsButtonPressedEventArgs=_uuidof(ISystemMediaTransportControlsButtonPressedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsDisplayUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsDisplayUpdater
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("8ABBC53E-FA55-4ECF-AD8E-C984E5DD1550"), exclusiveto, contract] */
            MIDL_INTERFACE("8ABBC53E-FA55-4ECF-AD8E-C984E5DD1550")
            ISystemMediaTransportControlsDisplayUpdater : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::MediaPlaybackType * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                    /* [in] */ABI::Windows::Media::MediaPlaybackType value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppMediaId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppMediaId(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Thumbnail(
                    /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MusicProperties(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IMusicDisplayProperties * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoProperties(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoDisplayProperties * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageProperties(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IImageDisplayProperties * * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE CopyFromFileAsync(
                    /* [in] */ABI::Windows::Media::MediaPlaybackType type,
                    /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * source,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE ClearAll(void) = 0;
                virtual HRESULT STDMETHODCALLTYPE Update(void) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControlsDisplayUpdater=_uuidof(ISystemMediaTransportControlsDisplayUpdater);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("D0CA0936-339B-4CB3-8EEB-737607F56E08"), exclusiveto, contract] */
            MIDL_INTERFACE("D0CA0936-339B-4CB3-8EEB-737607F56E08")
            ISystemMediaTransportControlsPropertyChangedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Property(
                    /* [retval, out] */__RPC__out ABI::Windows::Media::SystemMediaTransportControlsProperty * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControlsPropertyChangedEventArgs=_uuidof(ISystemMediaTransportControlsPropertyChangedEventArgs);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsStatics[] = L"Windows.Media.ISystemMediaTransportControlsStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("43BA380A-ECA4-4832-91AB-D415FAE484C6"), exclusiveto, contract] */
            MIDL_INTERFACE("43BA380A-ECA4-4832-91AB-D415FAE484C6")
            ISystemMediaTransportControlsStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::ISystemMediaTransportControls * * mediaControl
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControlsStatics=_uuidof(ISystemMediaTransportControlsStatics);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsTimelineProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsTimelineProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.ISystemMediaTransportControlsTimelineProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("5125316A-C3A2-475B-8507-93534DC88F15"), exclusiveto, contract] */
            MIDL_INTERFACE("5125316A-C3A2-475B-8507-93534DC88F15")
            ISystemMediaTransportControlsTimelineProperties : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StartTime(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndTime(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EndTime(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinSeekTime(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MinSeekTime(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSeekTime(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxSeekTime(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                    /* [in] */ABI::Windows::Foundation::TimeSpan value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISystemMediaTransportControlsTimelineProperties=_uuidof(ISystemMediaTransportControlsTimelineProperties);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties[] = L"Windows.Media.IVideoDisplayProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("5609FDB1-5D2D-4872-8170-45DEE5BC2F5C"), exclusiveto, contract] */
            MIDL_INTERFACE("5609FDB1-5D2D-4872-8170-45DEE5BC2F5C")
            IVideoDisplayProperties : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subtitle(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subtitle(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IVideoDisplayProperties=_uuidof(IVideoDisplayProperties);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoDisplayProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties2[] = L"Windows.Media.IVideoDisplayProperties2";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("B410E1CE-AB52-41AB-A486-CC10FAB152F9"), exclusiveto, contract] */
            MIDL_INTERFACE("B410E1CE-AB52-41AB-A486-CC10FAB152F9")
            IVideoDisplayProperties2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Genres(
                    /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IVideoDisplayProperties2=_uuidof(IVideoDisplayProperties2);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoEffectsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoEffects
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoEffectsStatics[] = L"Windows.Media.IVideoEffectsStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("1FCDA5E8-BAF1-4521-980C-3BCEBB44CF38"), exclusiveto, contract] */
            MIDL_INTERFACE("1FCDA5E8-BAF1-4521-980C-3BCEBB44CF38")
            IVideoEffectsStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VideoStabilization(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IVideoEffectsStatics=_uuidof(IVideoEffectsStatics);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoEffectsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaFrame
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrame[] = L"Windows.Media.IVideoFrame";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("0CC06625-90FC-4C92-BD95-7DED21819D1C"), exclusiveto, contract] */
            MIDL_INTERFACE("0CC06625-90FC-4C92-BD95-7DED21819D1C")
            IVideoFrame : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareBitmap(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE CopyToAsync(
                    /* [in] */__RPC__in_opt ABI::Windows::Media::IVideoFrame * frame,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Direct3DSurface(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IVideoFrame=_uuidof(IVideoFrame);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoFrameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrameFactory[] = L"Windows.Media.IVideoFrameFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            /* [object, uuid("014B6D69-2228-4C92-92FF-50C380D3E776"), exclusiveto, contract] */
            MIDL_INTERFACE("014B6D69-2228-4C92-92FF-50C380D3E776")
            IVideoFrameFactory : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Create(
                    /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                    /* [in] */INT32 width,
                    /* [in] */INT32 height,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE CreateWithAlpha(
                    /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                    /* [in] */INT32 width,
                    /* [in] */INT32 height,
                    /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::IVideoFrame * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IVideoFrameFactory=_uuidof(IVideoFrameFactory);
            
        } /* Windows */
    } /* Media */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrameFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AudioBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAudioBuffer ** Default Interface **
 *    Windows.Foundation.IMemoryBuffer
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AudioBuffer_DEFINED
#define RUNTIMECLASS_Windows_Media_AudioBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioBuffer[] = L"Windows.Media.AudioBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AudioFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.IAudioFrameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAudioFrame ** Default Interface **
 *    Windows.Media.IMediaFrame
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AudioFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_AudioFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioFrame[] = L"Windows.Media.AudioFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AutoRepeatModeChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAutoRepeatModeChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AutoRepeatModeChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_AutoRepeatModeChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ImageDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IImageDisplayProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ImageDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_ImageDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ImageDisplayProperties[] = L"Windows.Media.ImageDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaControl
 *
 * Introduced to Windows.Media.MediaControlContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IMediaControl interface starting with version 1.0 of the Windows.Media.MediaControlContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaControl_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaControl_DEFINED

#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaControl[] = L"Windows.Media.MediaControl";
#endif
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaExtensionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaExtensionManager ** Default Interface **
 *    Windows.Media.IMediaExtensionManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaExtensionManager[] = L"Windows.Media.MediaExtensionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaMarkerTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IMediaMarkerTypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaMarkerTypes_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaMarkerTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaMarkerTypes[] = L"Windows.Media.MediaMarkerTypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProcessingTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaProcessingTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProcessingTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProcessingTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProcessingTriggerDetails[] = L"Windows.Media.MediaProcessingTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaTimelineController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaTimelineController ** Default Interface **
 *    Windows.Media.IMediaTimelineController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_MediaTimelineController_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaTimelineController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineController[] = L"Windows.Media.MediaTimelineController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.MediaTimelineControllerFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaTimelineControllerFailedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_MediaTimelineControllerFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaTimelineControllerFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineControllerFailedEventArgs[] = L"Windows.Media.MediaTimelineControllerFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.MusicDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMusicDisplayProperties ** Default Interface **
 *    Windows.Media.IMusicDisplayProperties2
 *    Windows.Media.IMusicDisplayProperties3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MusicDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MusicDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MusicDisplayProperties[] = L"Windows.Media.MusicDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.PlaybackPositionChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IPlaybackPositionChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_PlaybackPositionChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_PlaybackPositionChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.PlaybackPositionChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.PlaybackRateChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IPlaybackRateChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_PlaybackRateChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_PlaybackRateChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.PlaybackRateChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ShuffleEnabledChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IShuffleEnabledChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ShuffleEnabledChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_ShuffleEnabledChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControls
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.ISystemMediaTransportControlsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControls ** Default Interface **
 *    Windows.Media.ISystemMediaTransportControls2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControls_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControls_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControls[] = L"Windows.Media.SystemMediaTransportControls";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsDisplayUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsDisplayUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsDisplayUpdater_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsDisplayUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.SystemMediaTransportControlsDisplayUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsTimelineProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsTimelineProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsTimelineProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsTimelineProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.SystemMediaTransportControlsTimelineProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IVideoDisplayProperties ** Default Interface **
 *    Windows.Media.IVideoDisplayProperties2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_VideoDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoDisplayProperties[] = L"Windows.Media.VideoDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoEffects
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IVideoEffectsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoEffects[] = L"Windows.Media.VideoEffects";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.IVideoFrameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IVideoFrame ** Default Interface **
 *    Windows.Media.IMediaFrame
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_VideoFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoFrame[] = L"Windows.Media.VideoFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAudioBuffer __x_ABI_CWindows_CMedia_CIAudioBuffer;

#endif // ____x_ABI_CWindows_CMedia_CIAudioBuffer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrameFactory __x_ABI_CWindows_CMedia_CIAudioFrameFactory;

#endif // ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIImageDisplayProperties __x_ABI_CWindows_CMedia_CIImageDisplayProperties;

#endif // ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaControl __x_ABI_CWindows_CMedia_CIMediaControl;

#endif // ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager __x_ABI_CWindows_CMedia_CIMediaExtensionManager;

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 __x_ABI_CWindows_CMedia_CIMediaExtensionManager2;

#endif // ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaFrame __x_ABI_CWindows_CMedia_CIMediaFrame;

#endif // ____x_ABI_CWindows_CMedia_CIMediaFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarker __x_ABI_CWindows_CMedia_CIMediaMarker;

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics;

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarkers __x_ABI_CWindows_CMedia_CIMediaMarkers;

#endif // ____x_ABI_CWindows_CMedia_CIMediaMarkers_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails;

#endif // ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineController __x_ABI_CWindows_CMedia_CIMediaTimelineController;

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineController_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineController2 __x_ABI_CWindows_CMedia_CIMediaTimelineController2;

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties __x_ABI_CWindows_CMedia_CIMusicDisplayProperties;

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2;

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3;

#endif // ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls __x_ABI_CWindows_CMedia_CISystemMediaTransportControls;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties;

#endif // ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties __x_ABI_CWindows_CMedia_CIVideoDisplayProperties;

#endif // ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2;

#endif // ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics __x_ABI_CWindows_CMedia_CIVideoEffectsStatics;

#endif // ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrameFactory __x_ABI_CWindows_CMedia_CIVideoFrameFactory;

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CIMediaMarker __FIIterator_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CIMediaMarker;

typedef struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIIterator_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CIMediaMarker_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CIMediaMarker_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CIMediaMarker __FIIterable_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CIMediaMarker;

typedef  struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CIMediaMarker **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIIterable_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CIMediaMarker_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CMedia_CMediaTimeRange;

#if !defined(____FIIterator_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CMediaTimeRange __FIIterator_1_Windows__CMedia__CMediaTimeRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaTimeRange;

typedef struct __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CMedia_CMediaTimeRange *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CMediaTimeRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl;

interface __FIIterator_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CMediaTimeRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CMediaTimeRange __FIIterable_1_Windows__CMedia__CMediaTimeRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaTimeRange;

typedef  struct __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaTimeRange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl;

interface __FIIterable_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CMediaTimeRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CIMediaMarker __FIVectorView_1_Windows__CMedia__CIMediaMarker;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CIMediaMarker;

typedef struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CIMediaMarker * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl;

interface __FIVectorView_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CIMediaMarker_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CIMediaMarker_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CMediaTimeRange __FIVectorView_1_Windows__CMedia__CMediaTimeRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaTimeRange;

typedef struct __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CMedia_CMediaTimeRange *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
            /* [in] */ struct __x_ABI_CWindows_CMedia_CMediaTimeRange item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CMediaTimeRange *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl;

interface __FIVectorView_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CMediaTimeRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CMediaTimeRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIMediaExtension * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CIMediaExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CVideoFrame *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CVideoFrame;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CIVideoFrame * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CVideoFrame_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CVideoFrame_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__


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



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;

#endif // ____x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CMedia_CAudioBufferAccessMode __x_ABI_CWindows_CMedia_CAudioBufferAccessMode;


typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;


typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;


typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackStatus __x_ABI_CWindows_CMedia_CMediaPlaybackStatus;


typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackType __x_ABI_CWindows_CMedia_CMediaPlaybackType;


typedef enum __x_ABI_CWindows_CMedia_CMediaTimelineControllerState __x_ABI_CWindows_CMedia_CMediaTimelineControllerState;


typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;


typedef enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton;


typedef enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty;


typedef struct __x_ABI_CWindows_CMedia_CMediaTimeRange __x_ABI_CWindows_CMedia_CMediaTimeRange;

































































/*
 *
 * Struct Windows.Media.AudioBufferAccessMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudioBufferAccessMode
{
    AudioBufferAccessMode_Read = 0,
    AudioBufferAccessMode_ReadWrite = 1,
    AudioBufferAccessMode_Write = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.AudioProcessing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CAudioProcessing
{
    AudioProcessing_Default = 0,
    AudioProcessing_Raw = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackAutoRepeatMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode
{
    MediaPlaybackAutoRepeatMode_None = 0,
    MediaPlaybackAutoRepeatMode_Track = 1,
    MediaPlaybackAutoRepeatMode_List = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaPlaybackStatus
{
    MediaPlaybackStatus_Closed = 0,
    MediaPlaybackStatus_Changing = 1,
    MediaPlaybackStatus_Stopped = 2,
    MediaPlaybackStatus_Playing = 3,
    MediaPlaybackStatus_Paused = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaPlaybackType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaPlaybackType
{
    MediaPlaybackType_Unknown = 0,
    MediaPlaybackType_Music = 1,
    MediaPlaybackType_Video = 2,
    MediaPlaybackType_Image = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaTimelineControllerState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CMediaTimelineControllerState
{
    MediaTimelineControllerState_Paused = 0,
    MediaTimelineControllerState_Running = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    MediaTimelineControllerState_Stalled = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    MediaTimelineControllerState_Error = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.SoundLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CSoundLevel
{
    SoundLevel_Muted = 0,
    SoundLevel_Low = 1,
    SoundLevel_Full = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.SystemMediaTransportControlsButton
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton
{
    SystemMediaTransportControlsButton_Play = 0,
    SystemMediaTransportControlsButton_Pause = 1,
    SystemMediaTransportControlsButton_Stop = 2,
    SystemMediaTransportControlsButton_Record = 3,
    SystemMediaTransportControlsButton_FastForward = 4,
    SystemMediaTransportControlsButton_Rewind = 5,
    SystemMediaTransportControlsButton_Next = 6,
    SystemMediaTransportControlsButton_Previous = 7,
    SystemMediaTransportControlsButton_ChannelUp = 8,
    SystemMediaTransportControlsButton_ChannelDown = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.SystemMediaTransportControlsProperty
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty
{
    SystemMediaTransportControlsProperty_SoundLevel = 0,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.MediaTimeRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

/* [contract] */
struct __x_ABI_CWindows_CMedia_CMediaTimeRange
{
    __x_ABI_CWindows_CFoundation_CTimeSpan Start;
    __x_ABI_CWindows_CFoundation_CTimeSpan End;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IAudioBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioBuffer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IMemoryBuffer
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioBuffer[] = L"Windows.Media.IAudioBuffer";
/* [object, uuid("35175827-724B-4C6A-B130-F6537F9AE0D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIAudioBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capacity )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIAudioBufferVtbl;

interface __x_ABI_CWindows_CMedia_CIAudioBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIAudioBuffer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_get_Capacity(This,value) \
    ( (This)->lpVtbl->get_Capacity(This,value) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CMedia_CIAudioBuffer_put_Length(This,value) \
    ( (This)->lpVtbl->put_Length(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioBuffer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioBuffer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAudioFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaFrame
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrame[] = L"Windows.Media.IAudioFrame";
/* [object, uuid("E36AC304-AAB2-4277-9ED0-43CEDF8E29C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIAudioFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LockBuffer )(
        __x_ABI_CWindows_CMedia_CIAudioFrame * This,
        /* [in] */__x_ABI_CWindows_CMedia_CAudioBufferAccessMode mode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIAudioFrameVtbl;

interface __x_ABI_CWindows_CMedia_CIAudioFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIAudioFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIAudioFrame_LockBuffer(This,mode,value) \
    ( (This)->lpVtbl->LockBuffer(This,mode,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAudioFrameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AudioFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrameFactory[] = L"Windows.Media.IAudioFrameFactory";
/* [object, uuid("91A90ADE-2422-40A6-B9AD-30D02404317D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
        /* [range(0, 2147483647), in] */__RPC__in_range(0,0x7fffffff) UINT32 capacity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CIAudioFrameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIAudioFrameFactory_Create(This,capacity,value) \
    ( (This)->lpVtbl->Create(This,capacity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrameFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAudioFrameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IAutoRepeatModeChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AutoRepeatModeChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs";
/* [object, uuid("EA137EFA-D852-438E-882B-C990109A78F4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedAutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_get_RequestedAutoRepeatMode(This,value) \
    ( (This)->lpVtbl->get_RequestedAutoRepeatMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IImageDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ImageDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IImageDisplayProperties[] = L"Windows.Media.IImageDisplayProperties";
/* [object, uuid("CD0BC7EF-54E7-411F-9933-F0E98B0A96D2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CIImageDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_get_Subtitle(This,value) \
    ( (This)->lpVtbl->get_Subtitle(This,value) )

#define __x_ABI_CWindows_CMedia_CIImageDisplayProperties_put_Subtitle(This,value) \
    ( (This)->lpVtbl->put_Subtitle(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIImageDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIImageDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaControl
 *
 * Introduced to Windows.Media.MediaControlContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaControl
 *
 *
 */
#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaControl[] = L"Windows.Media.IMediaControl";
/* [object, uuid("98F1FBE1-7A8D-42CB-B6FE-8FE698264F13"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CMedia_CIMediaControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_PlayPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_PlayPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_PausePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_PausePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_StopPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_StopPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_PlayPauseTogglePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_PlayPauseTogglePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_RecordPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_RecordPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_NextTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_NextTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_PreviousTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_PreviousTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_FastForwardPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_FastForwardPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_RewindPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_RewindPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ChannelUpPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ChannelUpPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ChannelDownPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ChannelDownPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */EventRegistrationToken cookie
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TrackName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TrackName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_ArtistName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ArtistName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_IsPlaying )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */boolean value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_IsPlaying )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_AlbumArt )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    #endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_AlbumArt )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaControlVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaControlVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaControl_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaControl_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaControl_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaControl_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaControl_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaControl_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_SoundLevelChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_SoundLevelChanged(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_SoundLevelChanged(This,cookie) \
    ( (This)->lpVtbl->remove_SoundLevelChanged(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PlayPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PlayPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PlayPressed(This,cookie) \
    ( (This)->lpVtbl->remove_PlayPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PausePressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PausePressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PausePressed(This,cookie) \
    ( (This)->lpVtbl->remove_PausePressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_StopPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_StopPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_StopPressed(This,cookie) \
    ( (This)->lpVtbl->remove_StopPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PlayPauseTogglePressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PlayPauseTogglePressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PlayPauseTogglePressed(This,cookie) \
    ( (This)->lpVtbl->remove_PlayPauseTogglePressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_RecordPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_RecordPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_RecordPressed(This,cookie) \
    ( (This)->lpVtbl->remove_RecordPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_NextTrackPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_NextTrackPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_NextTrackPressed(This,cookie) \
    ( (This)->lpVtbl->remove_NextTrackPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PreviousTrackPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PreviousTrackPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PreviousTrackPressed(This,cookie) \
    ( (This)->lpVtbl->remove_PreviousTrackPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_FastForwardPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_FastForwardPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_FastForwardPressed(This,cookie) \
    ( (This)->lpVtbl->remove_FastForwardPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_RewindPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_RewindPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_RewindPressed(This,cookie) \
    ( (This)->lpVtbl->remove_RewindPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_ChannelUpPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_ChannelUpPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_ChannelUpPressed(This,cookie) \
    ( (This)->lpVtbl->remove_ChannelUpPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_add_ChannelDownPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_ChannelDownPressed(This,handler,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_ChannelDownPressed(This,cookie) \
    ( (This)->lpVtbl->remove_ChannelDownPressed(This,cookie) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_get_SoundLevel(This,value) \
    ( (This)->lpVtbl->get_SoundLevel(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_put_TrackName(This,value) \
    ( (This)->lpVtbl->put_TrackName(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_get_TrackName(This,value) \
    ( (This)->lpVtbl->get_TrackName(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_put_ArtistName(This,value) \
    ( (This)->lpVtbl->put_ArtistName(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_get_ArtistName(This,value) \
    ( (This)->lpVtbl->get_ArtistName(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_put_IsPlaying(This,value) \
    ( (This)->lpVtbl->put_IsPlaying(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_get_IsPlaying(This,value) \
    ( (This)->lpVtbl->get_IsPlaying(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_put_AlbumArt(This,value) \
    ( (This)->lpVtbl->put_AlbumArt(This,value) )


#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CMedia_CIMediaControl_get_AlbumArt(This,value) \
    ( (This)->lpVtbl->get_AlbumArt(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaControl;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtension[] = L"Windows.Media.IMediaExtension";
/* [object, uuid("07915118-45DF-442B-8A3F-F7826A6370AB"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetProperties )(
        __x_ABI_CWindows_CMedia_CIMediaExtension * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaExtension_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaExtension_SetProperties(This,configuration) \
    ( (This)->lpVtbl->SetProperties(This,configuration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtension;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtensionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaExtensionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager[] = L"Windows.Media.IMediaExtensionManager";
/* [object, uuid("4A25EAF5-242D-4DFB-97F4-69B7C42576FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandler )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in HSTRING scheme
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandlerWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in HSTRING scheme,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandler )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in HSTRING fileExtension,
        /* [in] */__RPC__in HSTRING mimeType
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandlerWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */__RPC__in HSTRING fileExtension,
        /* [in] */__RPC__in HSTRING mimeType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
        /* [in] */__RPC__in HSTRING activatableClassId,
        /* [in] */GUID inputSubtype,
        /* [in] */GUID outputSubtype,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterSchemeHandler(This,activatableClassId,scheme) \
    ( (This)->lpVtbl->RegisterSchemeHandler(This,activatableClassId,scheme) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterSchemeHandlerWithSettings(This,activatableClassId,scheme,configuration) \
    ( (This)->lpVtbl->RegisterSchemeHandlerWithSettings(This,activatableClassId,scheme,configuration) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterByteStreamHandler(This,activatableClassId,fileExtension,mimeType) \
    ( (This)->lpVtbl->RegisterByteStreamHandler(This,activatableClassId,fileExtension,mimeType) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterByteStreamHandlerWithSettings(This,activatableClassId,fileExtension,mimeType,configuration) \
    ( (This)->lpVtbl->RegisterByteStreamHandlerWithSettings(This,activatableClassId,fileExtension,mimeType,configuration) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioDecoder(This,activatableClassId,inputSubtype,outputSubtype) \
    ( (This)->lpVtbl->RegisterAudioDecoder(This,activatableClassId,inputSubtype,outputSubtype) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) \
    ( (This)->lpVtbl->RegisterAudioDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioEncoder(This,activatableClassId,inputSubtype,outputSubtype) \
    ( (This)->lpVtbl->RegisterAudioEncoder(This,activatableClassId,inputSubtype,outputSubtype) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) \
    ( (This)->lpVtbl->RegisterAudioEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoDecoder(This,activatableClassId,inputSubtype,outputSubtype) \
    ( (This)->lpVtbl->RegisterVideoDecoder(This,activatableClassId,inputSubtype,outputSubtype) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) \
    ( (This)->lpVtbl->RegisterVideoDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoEncoder(This,activatableClassId,inputSubtype,outputSubtype) \
    ( (This)->lpVtbl->RegisterVideoEncoder(This,activatableClassId,inputSubtype,outputSubtype) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) \
    ( (This)->lpVtbl->RegisterVideoEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaExtensionManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaExtensionManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaExtensionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager2[] = L"Windows.Media.IMediaExtensionManager2";
/* [object, uuid("5BCEBF47-4043-4FED-ACAF-54EC29DFB1F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterMediaExtensionForAppService )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * extension,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * connection
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl;

interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager2_RegisterMediaExtensionForAppService(This,extension,connection) \
    ( (This)->lpVtbl->RegisterMediaExtensionForAppService(This,extension,connection) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMediaFrame
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
#if !defined(____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaFrame[] = L"Windows.Media.IMediaFrame";
/* [object, uuid("BFB52F8C-5943-47D8-8E10-05308AA5FBD0"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsDiscontinuous )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDiscontinuous )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaFrameVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_put_RelativeTime(This,value) \
    ( (This)->lpVtbl->put_RelativeTime(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_RelativeTime(This,value) \
    ( (This)->lpVtbl->get_RelativeTime(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_put_SystemRelativeTime(This,value) \
    ( (This)->lpVtbl->put_SystemRelativeTime(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_SystemRelativeTime(This,value) \
    ( (This)->lpVtbl->get_SystemRelativeTime(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_put_Duration(This,value) \
    ( (This)->lpVtbl->put_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_put_IsDiscontinuous(This,value) \
    ( (This)->lpVtbl->put_IsDiscontinuous(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_IsDiscontinuous(This,value) \
    ( (This)->lpVtbl->get_IsDiscontinuous(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaFrame_get_ExtendedProperties(This,value) \
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarker[] = L"Windows.Media.IMediaMarker";
/* [object, uuid("1803DEF8-DCA5-4B6F-9C20-E3D3C0643625"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaMarkerType )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaMarker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaMarker_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_get_Time(This,value) \
    ( (This)->lpVtbl->get_Time(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_get_MediaMarkerType(This,value) \
    ( (This)->lpVtbl->get_MediaMarkerType(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaMarker_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarker;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarkerTypesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaMarkerTypes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkerTypesStatics[] = L"Windows.Media.IMediaMarkerTypesStatics";
/* [object, uuid("BB198040-482F-4743-8832-45853821ECE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
        __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_get_Bookmark(This,value) \
    ( (This)->lpVtbl->get_Bookmark(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaMarkers
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkers[] = L"Windows.Media.IMediaMarkers";
/* [object, uuid("AFEAB189-F8DD-466E-AA10-920B52353FDF"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Markers )(
        __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaMarkers
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaMarkers_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaMarkers_get_Markers(This,value) \
    ( (This)->lpVtbl->get_Markers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkers;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaMarkers_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaProcessingTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaProcessingTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaProcessingTriggerDetails[] = L"Windows.Media.IMediaProcessingTriggerDetails";
/* [object, uuid("EB8564AC-A351-4F4E-B4F0-9BF2408993DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_get_Arguments(This,value) \
    ( (This)->lpVtbl->get_Arguments(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMediaTimelineController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController[] = L"Windows.Media.IMediaTimelineController";
/* [object, uuid("8ED361F3-0B78-4360-BF71-0C841999EA1B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ClockRate )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ClockRate )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaTimelineControllerState * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * positionChangedEventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * stateChangedEventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaTimelineController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_Resume(This) \
    ( (This)->lpVtbl->Resume(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_Pause(This) \
    ( (This)->lpVtbl->Pause(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_get_ClockRate(This,value) \
    ( (This)->lpVtbl->get_ClockRate(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_put_ClockRate(This,value) \
    ( (This)->lpVtbl->put_ClockRate(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_add_PositionChanged(This,positionChangedEventHandler,eventCookie) \
    ( (This)->lpVtbl->add_PositionChanged(This,positionChangedEventHandler,eventCookie) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_remove_PositionChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_PositionChanged(This,eventCookie) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_add_StateChanged(This,stateChangedEventHandler,eventCookie) \
    ( (This)->lpVtbl->add_StateChanged(This,stateChangedEventHandler,eventCookie) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController_remove_StateChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_StateChanged(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.IMediaTimelineController2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineController
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController2[] = L"Windows.Media.IMediaTimelineController2";
/* [object, uuid("EF74EA38-9E72-4DF9-8355-6E90C81BBADD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */boolean value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Failed )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Failed )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Ended )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Ended )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl;

interface __x_ABI_CWindows_CMedia_CIMediaTimelineController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_put_Duration(This,value) \
    ( (This)->lpVtbl->put_Duration(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_get_IsLoopingEnabled(This,value) \
    ( (This)->lpVtbl->get_IsLoopingEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_put_IsLoopingEnabled(This,value) \
    ( (This)->lpVtbl->put_IsLoopingEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_add_Failed(This,eventHandler,token) \
    ( (This)->lpVtbl->add_Failed(This,eventHandler,token) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_remove_Failed(This,token) \
    ( (This)->lpVtbl->remove_Failed(This,token) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_add_Ended(This,eventHandler,token) \
    ( (This)->lpVtbl->add_Ended(This,eventHandler,token) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineController2_remove_Ended(This,token) \
    ( (This)->lpVtbl->remove_Ended(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineController2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMediaTimelineControllerFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MediaTimelineControllerFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineControllerFailedEventArgs[] = L"Windows.Media.IMediaTimelineControllerFailedEventArgs";
/* [object, uuid("8821F81D-3E77-43FB-BE26-4FC87A044834"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties[] = L"Windows.Media.IMusicDisplayProperties";
/* [object, uuid("6BBF0C59-D0A0-4D26-92A0-F978E1D18E7B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlbumArtist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlbumArtist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Artist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Artist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_get_AlbumArtist(This,value) \
    ( (This)->lpVtbl->get_AlbumArtist(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_put_AlbumArtist(This,value) \
    ( (This)->lpVtbl->put_AlbumArtist(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_get_Artist(This,value) \
    ( (This)->lpVtbl->get_Artist(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties_put_Artist(This,value) \
    ( (This)->lpVtbl->put_Artist(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties2[] = L"Windows.Media.IMusicDisplayProperties2";
/* [object, uuid("00368462-97D3-44B9-B00F-008AFCEFAF18"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlbumTitle )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlbumTitle )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TrackNumber )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Genres )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl;

interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_get_AlbumTitle(This,value) \
    ( (This)->lpVtbl->get_AlbumTitle(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_put_AlbumTitle(This,value) \
    ( (This)->lpVtbl->put_AlbumTitle(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_get_TrackNumber(This,value) \
    ( (This)->lpVtbl->get_TrackNumber(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_put_TrackNumber(This,value) \
    ( (This)->lpVtbl->put_TrackNumber(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_get_Genres(This,value) \
    ( (This)->lpVtbl->get_Genres(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IMusicDisplayProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.MusicDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties3[] = L"Windows.Media.IMusicDisplayProperties3";
/* [object, uuid("4DB51AC1-0681-4E8C-9401-B8159D9EEFC7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlbumTrackCount )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlbumTrackCount )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl;

interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_get_AlbumTrackCount(This,value) \
    ( (This)->lpVtbl->get_AlbumTrackCount(This,value) )

#define __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_put_AlbumTrackCount(This,value) \
    ( (This)->lpVtbl->put_AlbumTrackCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMusicDisplayProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.IPlaybackPositionChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.PlaybackPositionChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs";
/* [object, uuid("B4493F88-EB28-4961-9C14-335E44F3E125"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedPlaybackPosition )(
        __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_get_RequestedPlaybackPosition(This,value) \
    ( (This)->lpVtbl->get_RequestedPlaybackPosition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IPlaybackRateChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.PlaybackRateChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackRateChangeRequestedEventArgs";
/* [object, uuid("2CE2C41F-3CD6-4F77-9BA7-EB27C26A2140"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedPlaybackRate )(
        __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_get_RequestedPlaybackRate(This,value) \
    ( (This)->lpVtbl->get_RequestedPlaybackRate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IShuffleEnabledChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ShuffleEnabledChangeRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs";
/* [object, uuid("49B593FE-4FD0-4666-A314-C0E01940D302"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_get_RequestedShuffleEnabled(This,value) \
    ( (This)->lpVtbl->get_RequestedShuffleEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControls
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls[] = L"Windows.Media.ISystemMediaTransportControls";
/* [object, uuid("99FA3FF4-1742-42A6-902E-087D41F965EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlaybackStatus )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackStatus * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlaybackStatus )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaPlaybackStatus value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayUpdater )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPlayEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPlayEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStopEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsStopEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPauseEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPauseEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRecordEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRecordEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFastForwardEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsFastForwardEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRewindEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRewindEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPreviousEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsPreviousEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsNextEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsNextEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsChannelUpEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsChannelUpEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsChannelDownEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsChannelDownEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */boolean value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ButtonPressed )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ButtonPressed )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PropertyChanged )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PropertyChanged )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_PlaybackStatus(This,value) \
    ( (This)->lpVtbl->get_PlaybackStatus(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_PlaybackStatus(This,value) \
    ( (This)->lpVtbl->put_PlaybackStatus(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_DisplayUpdater(This,value) \
    ( (This)->lpVtbl->get_DisplayUpdater(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_SoundLevel(This,value) \
    ( (This)->lpVtbl->get_SoundLevel(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsPlayEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPlayEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsPlayEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPlayEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsStopEnabled(This,value) \
    ( (This)->lpVtbl->get_IsStopEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsStopEnabled(This,value) \
    ( (This)->lpVtbl->put_IsStopEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsPauseEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPauseEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsPauseEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPauseEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsRecordEnabled(This,value) \
    ( (This)->lpVtbl->get_IsRecordEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsRecordEnabled(This,value) \
    ( (This)->lpVtbl->put_IsRecordEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsFastForwardEnabled(This,value) \
    ( (This)->lpVtbl->get_IsFastForwardEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsFastForwardEnabled(This,value) \
    ( (This)->lpVtbl->put_IsFastForwardEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsRewindEnabled(This,value) \
    ( (This)->lpVtbl->get_IsRewindEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsRewindEnabled(This,value) \
    ( (This)->lpVtbl->put_IsRewindEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsPreviousEnabled(This,value) \
    ( (This)->lpVtbl->get_IsPreviousEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsPreviousEnabled(This,value) \
    ( (This)->lpVtbl->put_IsPreviousEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsNextEnabled(This,value) \
    ( (This)->lpVtbl->get_IsNextEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsNextEnabled(This,value) \
    ( (This)->lpVtbl->put_IsNextEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsChannelUpEnabled(This,value) \
    ( (This)->lpVtbl->get_IsChannelUpEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsChannelUpEnabled(This,value) \
    ( (This)->lpVtbl->put_IsChannelUpEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_get_IsChannelDownEnabled(This,value) \
    ( (This)->lpVtbl->get_IsChannelDownEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_put_IsChannelDownEnabled(This,value) \
    ( (This)->lpVtbl->put_IsChannelDownEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_add_ButtonPressed(This,handler,token) \
    ( (This)->lpVtbl->add_ButtonPressed(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_remove_ButtonPressed(This,token) \
    ( (This)->lpVtbl->remove_ButtonPressed(This,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_add_PropertyChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PropertyChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls_remove_PropertyChanged(This,token) \
    ( (This)->lpVtbl->remove_PropertyChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControls2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls2[] = L"Windows.Media.ISystemMediaTransportControls2";
/* [object, uuid("EA98D2F6-7F3C-4AF2-A586-72889808EFB1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateTimelineProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * timelineProperties
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PlaybackPositionChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PlaybackPositionChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ShuffleEnabledChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ShuffleEnabledChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AutoRepeatModeChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AutoRepeatModeChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_get_AutoRepeatMode(This,value) \
    ( (This)->lpVtbl->get_AutoRepeatMode(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_put_AutoRepeatMode(This,value) \
    ( (This)->lpVtbl->put_AutoRepeatMode(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_get_ShuffleEnabled(This,value) \
    ( (This)->lpVtbl->get_ShuffleEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_put_ShuffleEnabled(This,value) \
    ( (This)->lpVtbl->put_ShuffleEnabled(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_get_PlaybackRate(This,value) \
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_put_PlaybackRate(This,value) \
    ( (This)->lpVtbl->put_PlaybackRate(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_UpdateTimelineProperties(This,timelineProperties) \
    ( (This)->lpVtbl->UpdateTimelineProperties(This,timelineProperties) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_add_PlaybackPositionChangeRequested(This,handler,token) \
    ( (This)->lpVtbl->add_PlaybackPositionChangeRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_remove_PlaybackPositionChangeRequested(This,token) \
    ( (This)->lpVtbl->remove_PlaybackPositionChangeRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_add_PlaybackRateChangeRequested(This,handler,token) \
    ( (This)->lpVtbl->add_PlaybackRateChangeRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_remove_PlaybackRateChangeRequested(This,token) \
    ( (This)->lpVtbl->remove_PlaybackRateChangeRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_add_ShuffleEnabledChangeRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ShuffleEnabledChangeRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_remove_ShuffleEnabledChangeRequested(This,token) \
    ( (This)->lpVtbl->remove_ShuffleEnabledChangeRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_add_AutoRepeatModeChangeRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AutoRepeatModeChangeRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_remove_AutoRepeatModeChangeRequested(This,token) \
    ( (This)->lpVtbl->remove_AutoRepeatModeChangeRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControls2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs";
/* [object, uuid("B7F47116-A56F-4DC8-9E11-92031F4A87C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Button )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_get_Button(This,value) \
    ( (This)->lpVtbl->get_Button(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsDisplayUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsDisplayUpdater
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater";
/* [object, uuid("8ABBC53E-FA55-4ECF-AD8E-C984E5DD1550"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaPlaybackType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppMediaId )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppMediaId )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MusicProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIImageDisplayProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyFromFileAsync )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
        /* [in] */__x_ABI_CWindows_CMedia_CMediaPlaybackType type,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * source,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAll )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_AppMediaId(This,value) \
    ( (This)->lpVtbl->get_AppMediaId(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_put_AppMediaId(This,value) \
    ( (This)->lpVtbl->put_AppMediaId(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_put_Thumbnail(This,value) \
    ( (This)->lpVtbl->put_Thumbnail(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_MusicProperties(This,value) \
    ( (This)->lpVtbl->get_MusicProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_VideoProperties(This,value) \
    ( (This)->lpVtbl->get_VideoProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_get_ImageProperties(This,value) \
    ( (This)->lpVtbl->get_ImageProperties(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_CopyFromFileAsync(This,type,source,operation) \
    ( (This)->lpVtbl->CopyFromFileAsync(This,type,source,operation) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_ClearAll(This) \
    ( (This)->lpVtbl->ClearAll(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_Update(This) \
    ( (This)->lpVtbl->Update(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs";
/* [object, uuid("D0CA0936-339B-4CB3-8EEB-737607F56E08"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Property )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_get_Property(This,value) \
    ( (This)->lpVtbl->get_Property(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControls
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsStatics[] = L"Windows.Media.ISystemMediaTransportControlsStatics";
/* [object, uuid("43BA380A-ECA4-4832-91AB-D415FAE484C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * * mediaControl
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_GetForCurrentView(This,mediaControl) \
    ( (This)->lpVtbl->GetForCurrentView(This,mediaControl) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ISystemMediaTransportControlsTimelineProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.SystemMediaTransportControlsTimelineProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.ISystemMediaTransportControlsTimelineProperties";
/* [object, uuid("5125316A-C3A2-475B-8507-93534DC88F15"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MinSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_put_StartTime(This,value) \
    ( (This)->lpVtbl->put_StartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_get_EndTime(This,value) \
    ( (This)->lpVtbl->get_EndTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_put_EndTime(This,value) \
    ( (This)->lpVtbl->put_EndTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_get_MinSeekTime(This,value) \
    ( (This)->lpVtbl->get_MinSeekTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_put_MinSeekTime(This,value) \
    ( (This)->lpVtbl->put_MinSeekTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_get_MaxSeekTime(This,value) \
    ( (This)->lpVtbl->get_MaxSeekTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_put_MaxSeekTime(This,value) \
    ( (This)->lpVtbl->put_MaxSeekTime(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties[] = L"Windows.Media.IVideoDisplayProperties";
/* [object, uuid("5609FDB1-5D2D-4872-8170-45DEE5BC2F5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_get_Subtitle(This,value) \
    ( (This)->lpVtbl->get_Subtitle(This,value) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties_put_Subtitle(This,value) \
    ( (This)->lpVtbl->put_Subtitle(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoDisplayProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties2[] = L"Windows.Media.IVideoDisplayProperties2";
/* [object, uuid("B410E1CE-AB52-41AB-A486-CC10FAB152F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Genres )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl;

interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_get_Genres(This,value) \
    ( (This)->lpVtbl->get_Genres(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoDisplayProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoEffectsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoEffects
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoEffectsStatics[] = L"Windows.Media.IVideoEffectsStatics";
/* [object, uuid("1FCDA5E8-BAF1-4521-980C-3BCEBB44CF38"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VideoStabilization )(
        __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_get_VideoStabilization(This,value) \
    ( (This)->lpVtbl->get_VideoStabilization(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoEffectsStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoFrame
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.IMediaFrame
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrame[] = L"Windows.Media.IVideoFrame";
/* [object, uuid("0CC06625-90FC-4C92-BD95-7DED21819D1C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyToAsync )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * frame,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Direct3DSurface )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIVideoFrameVtbl;

interface __x_ABI_CWindows_CMedia_CIVideoFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIVideoFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_get_SoftwareBitmap(This,value) \
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_CopyToAsync(This,frame,value) \
    ( (This)->lpVtbl->CopyToAsync(This,frame,value) )

#define __x_ABI_CWindows_CMedia_CIVideoFrame_get_Direct3DSurface(This,value) \
    ( (This)->lpVtbl->get_Direct3DSurface(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrame;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.IVideoFrameFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.VideoFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrameFactory[] = L"Windows.Media.IVideoFrameFactory";
/* [object, uuid("014B6D69-2228-4C92-92FF-50C380D3E776"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAlpha )(
        __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CIVideoFrameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_Create(This,format,width,height,value) \
    ( (This)->lpVtbl->Create(This,format,width,height,value) )

#define __x_ABI_CWindows_CMedia_CIVideoFrameFactory_CreateWithAlpha(This,format,width,height,alpha,value) \
    ( (This)->lpVtbl->CreateWithAlpha(This,format,width,height,alpha,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrameFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoFrameFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AudioBuffer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAudioBuffer ** Default Interface **
 *    Windows.Foundation.IMemoryBuffer
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AudioBuffer_DEFINED
#define RUNTIMECLASS_Windows_Media_AudioBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioBuffer[] = L"Windows.Media.AudioBuffer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AudioFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.IAudioFrameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAudioFrame ** Default Interface **
 *    Windows.Media.IMediaFrame
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AudioFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_AudioFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioFrame[] = L"Windows.Media.AudioFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AutoRepeatModeChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IAutoRepeatModeChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AutoRepeatModeChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_AutoRepeatModeChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ImageDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IImageDisplayProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ImageDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_ImageDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ImageDisplayProperties[] = L"Windows.Media.ImageDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaControl
 *
 * Introduced to Windows.Media.MediaControlContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IMediaControl interface starting with version 1.0 of the Windows.Media.MediaControlContract API contract
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaControl_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaControl_DEFINED

#if WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaControl[] = L"Windows.Media.MediaControl";
#endif
#endif // WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaExtensionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaExtensionManager ** Default Interface **
 *    Windows.Media.IMediaExtensionManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaExtensionManager[] = L"Windows.Media.MediaExtensionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaMarkerTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IMediaMarkerTypesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_MediaMarkerTypes_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaMarkerTypes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaMarkerTypes[] = L"Windows.Media.MediaMarkerTypes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaProcessingTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaProcessingTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MediaProcessingTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaProcessingTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProcessingTriggerDetails[] = L"Windows.Media.MediaProcessingTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.MediaTimelineController
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaTimelineController ** Default Interface **
 *    Windows.Media.IMediaTimelineController2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_MediaTimelineController_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaTimelineController_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineController[] = L"Windows.Media.MediaTimelineController";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.MediaTimelineControllerFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMediaTimelineControllerFailedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_MediaTimelineControllerFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaTimelineControllerFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineControllerFailedEventArgs[] = L"Windows.Media.MediaTimelineControllerFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.MusicDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IMusicDisplayProperties ** Default Interface **
 *    Windows.Media.IMusicDisplayProperties2
 *    Windows.Media.IMusicDisplayProperties3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_MusicDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_MusicDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MusicDisplayProperties[] = L"Windows.Media.MusicDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.PlaybackPositionChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IPlaybackPositionChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_PlaybackPositionChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_PlaybackPositionChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.PlaybackPositionChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.PlaybackRateChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IPlaybackRateChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_PlaybackRateChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_PlaybackRateChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.PlaybackRateChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ShuffleEnabledChangeRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IShuffleEnabledChangeRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ShuffleEnabledChangeRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_ShuffleEnabledChangeRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControls
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.ISystemMediaTransportControlsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControls ** Default Interface **
 *    Windows.Media.ISystemMediaTransportControls2
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControls_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControls_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControls[] = L"Windows.Media.SystemMediaTransportControls";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsDisplayUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsDisplayUpdater ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsDisplayUpdater_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsDisplayUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.SystemMediaTransportControlsDisplayUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.SystemMediaTransportControlsTimelineProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ISystemMediaTransportControlsTimelineProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsTimelineProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_SystemMediaTransportControlsTimelineProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.SystemMediaTransportControlsTimelineProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.IVideoDisplayProperties ** Default Interface **
 *    Windows.Media.IVideoDisplayProperties2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_VideoDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoDisplayProperties[] = L"Windows.Media.VideoDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoEffects
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.IVideoEffectsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoEffects[] = L"Windows.Media.VideoEffects";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.VideoFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.IVideoFrameFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.IVideoFrame ** Default Interface **
 *    Windows.Media.IMediaFrame
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_VideoFrame_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoFrame_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoFrame[] = L"Windows.Media.VideoFrame";
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
#endif // __windows2Emedia_p_h__

#endif // __windows2Emedia_h__
