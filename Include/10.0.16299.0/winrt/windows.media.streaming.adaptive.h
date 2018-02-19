/* Header file automatically generated from windows.media.streaming.adaptive.idl */
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
#ifndef __windows2Emedia2Estreaming2Eadaptive_h__
#define __windows2Emedia2Estreaming2Eadaptive_h__
#ifndef __windows2Emedia2Estreaming2Eadaptive_p_h__
#define __windows2Emedia2Estreaming2Eadaptive_p_h__


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
#include "Windows.Media.Core.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.Http.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSource;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSource2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSource3;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceAdvancedSettings;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceCorrelatedTimes;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceCreationResult;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceCreationResult2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDiagnosticAvailableEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDiagnosticAvailableEventArgs2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDiagnostics;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadCompletedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadCompletedEventArgs2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadFailedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadFailedEventArgs2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadRequestedDeferral;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadRequestedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadRequestedEventArgs2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadResult;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadResult2;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceDownloadStatistics;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    interface IAdaptiveMediaSourceStatics;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceCreationResult;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bd68cc00-724c-5a76-a437-1464ebdda4ac"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("be0bcc1d-d606-59d2-b2f9-ff204543da12"))
IAsyncOperation<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult*> __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    enum AdaptiveMediaSourceResourceType : int;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_USE
#define DEF___FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("74c8c3aa-de03-5bf0-aae8-aa8b692066b3"))
IReference<enum ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> : IReference_impl<enum ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceResourceType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType> __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_t;
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType ABI::Windows::Foundation::__FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType ABI::Windows::Foundation::IReference<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>
//#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_t ABI::Windows::Foundation::IReference<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSource;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadBitrateChangedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad268caf-7da0-5ad4-8585-ceeb903dbd50"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSource, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadCompletedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cef775dd-25b2-5588-8d51-dacdea660a7d"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSource, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadFailedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6ee5cc44-49ad-5138-ab47-f5c075a2bc34"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSource, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadRequestedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d3b7dbf1-fd8e-589e-9c7f-ba67397e50cd"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSource, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("df4f4e89-6173-539b-94d8-69b7cb7578a7"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSource, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDiagnostics;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDiagnosticAvailableEventArgs;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fd4ce6b5-7c3b-58f4-9efc-1d9ee6a09d21"))
ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs*, ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics, Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnostics*,ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticAvailableEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics*,ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef DEF___FIIterator_1_UINT32_USE
#define DEF___FIIterator_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f06a2739-9443-5ef0-b284-dc5aff3e7d10"))
IIterator<UINT32> : IIterator_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<UINT32> __FIIterator_1_UINT32_t;
#define __FIIterator_1_UINT32 ABI::Windows::Foundation::Collections::__FIIterator_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_UINT32 ABI::Windows::Foundation::Collections::IIterator<UINT32>
//#define __FIIterator_1_UINT32_t ABI::Windows::Foundation::Collections::IIterator<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_UINT32_USE */




#ifndef DEF___FIIterable_1_UINT32_USE
#define DEF___FIIterable_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("421d4b91-b13b-5f37-ae54-b5249bd80539"))
IIterable<UINT32> : IIterable_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<UINT32> __FIIterable_1_UINT32_t;
#define __FIIterable_1_UINT32 ABI::Windows::Foundation::Collections::__FIIterable_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_UINT32 ABI::Windows::Foundation::Collections::IIterable<UINT32>
//#define __FIIterable_1_UINT32_t ABI::Windows::Foundation::Collections::IIterable<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_UINT32_USE */




#ifndef DEF___FIVectorView_1_UINT32_USE
#define DEF___FIVectorView_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5ce1a07-8d33-5007-ba64-7d2508ccf85c"))
IVectorView<UINT32> : IVectorView_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<UINT32> __FIVectorView_1_UINT32_t;
#define __FIVectorView_1_UINT32 ABI::Windows::Foundation::Collections::__FIVectorView_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_UINT32 ABI::Windows::Foundation::Collections::IVectorView<UINT32>
//#define __FIVectorView_1_UINT32_t ABI::Windows::Foundation::Collections::IVectorView<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_UINT32_USE */




#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */



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




#ifndef DEF___FIReference_1_double_USE
#define DEF___FIReference_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2"))
IReference<double> : IReference_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<double> __FIReference_1_double_t;
#define __FIReference_1_double ABI::Windows::Foundation::__FIReference_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_double ABI::Windows::Foundation::IReference<DOUBLE>
//#define __FIReference_1_double_t ABI::Windows::Foundation::IReference<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_double_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */




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




#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT64 ABI::Windows::Foundation::IReference<UINT64>
//#define __FIReference_1_UINT64_t ABI::Windows::Foundation::IReference<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT64_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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




#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaSource ABI::Windows::Media::Core::IMediaSource

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpClient;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpClient;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpClient ABI::Windows::Web::Http::IHttpClient

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                class HttpResponseMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */

#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Web {
            namespace Http {
                interface IHttpResponseMessage;
            } /* Windows */
        } /* Web */
    } /* Http */} /* ABI */
#define __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage ABI::Windows::Web::Http::IHttpResponseMessage

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    
                    typedef enum AdaptiveMediaSourceCreationStatus : int AdaptiveMediaSourceCreationStatus;
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    
                    typedef enum AdaptiveMediaSourceDiagnosticType : int AdaptiveMediaSourceDiagnosticType;
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    
                    typedef enum AdaptiveMediaSourceDownloadBitrateChangedReason : int AdaptiveMediaSourceDownloadBitrateChangedReason;
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    
                    typedef enum AdaptiveMediaSourceResourceType : int AdaptiveMediaSourceResourceType;
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceAdvancedSettings;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceCorrelatedTimes;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadRequestedDeferral;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadResult;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    class AdaptiveMediaSourceDownloadStatistics;
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */













/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [v1_enum, contract] */
                    enum AdaptiveMediaSourceCreationStatus : int
                    {
                        AdaptiveMediaSourceCreationStatus_Success = 0,
                        AdaptiveMediaSourceCreationStatus_ManifestDownloadFailure = 1,
                        AdaptiveMediaSourceCreationStatus_ManifestParseFailure = 2,
                        AdaptiveMediaSourceCreationStatus_UnsupportedManifestContentType = 3,
                        AdaptiveMediaSourceCreationStatus_UnsupportedManifestVersion = 4,
                        AdaptiveMediaSourceCreationStatus_UnsupportedManifestProfile = 5,
                        AdaptiveMediaSourceCreationStatus_UnknownFailure = 6,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [v1_enum, contract] */
                    enum AdaptiveMediaSourceDiagnosticType : int
                    {
                        AdaptiveMediaSourceDiagnosticType_ManifestUnchangedUponReload = 0,
                        AdaptiveMediaSourceDiagnosticType_ManifestMismatchUponReload = 1,
                        AdaptiveMediaSourceDiagnosticType_ManifestSignaledEndOfLiveEventUponReload = 2,
                        AdaptiveMediaSourceDiagnosticType_MediaSegmentSkipped = 3,
                        AdaptiveMediaSourceDiagnosticType_ResourceNotFound = 4,
                        AdaptiveMediaSourceDiagnosticType_ResourceTimedOut = 5,
                        AdaptiveMediaSourceDiagnosticType_ResourceParsingError = 6,
                        AdaptiveMediaSourceDiagnosticType_BitrateDisabled = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        AdaptiveMediaSourceDiagnosticType_FatalMediaSourceError = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [v1_enum, contract] */
                    enum AdaptiveMediaSourceDownloadBitrateChangedReason : int
                    {
                        AdaptiveMediaSourceDownloadBitrateChangedReason_SufficientInboundBitsPerSecond = 0,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_InsufficientInboundBitsPerSecond = 1,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_LowBufferLevel = 2,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_PositionChanged = 3,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_TrackSelectionChanged = 4,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_DesiredBitratesChanged = 5,
                        AdaptiveMediaSourceDownloadBitrateChangedReason_ErrorInPreviousBitrate = 6,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceResourceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [v1_enum, contract] */
                    enum AdaptiveMediaSourceResourceType : int
                    {
                        AdaptiveMediaSourceResourceType_Manifest = 0,
                        AdaptiveMediaSourceResourceType_InitializationSegment = 1,
                        AdaptiveMediaSourceResourceType_MediaSegment = 2,
                        AdaptiveMediaSourceResourceType_Key = 3,
                        AdaptiveMediaSourceResourceType_InitializationVector = 4,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Core.IMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("4C7332EF-D39F-4396-B4D9-043957A7C964"), exclusiveto, contract] */
                    MIDL_INTERFACE("4C7332EF-D39F-4396-B4D9-043957A7C964")
                    IAdaptiveMediaSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsLive(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredLiveOffset(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredLiveOffset(
                            /* [in] */ABI::Windows::Foundation::TimeSpan value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialBitrate(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InitialBitrate(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentDownloadBitrate(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPlaybackBitrate(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableBitrates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredMinBitrate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredMinBitrate(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredMaxBitrate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredMaxBitrate(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioOnlyPlayback(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboundBitsPerSecond(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InboundBitsPerSecondWindow(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InboundBitsPerSecondWindow(
                            /* [in] */ABI::Windows::Foundation::TimeSpan value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadBitrateChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadBitrateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PlaybackBitrateChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PlaybackBitrateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadFailed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadFailed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSource=_uuidof(IAdaptiveMediaSource);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("17890342-6760-4BB9-A58A-F7AA98B08C0E"), exclusiveto, contract] */
                    MIDL_INTERFACE("17890342-6760-4BB9-A58A-F7AA98B08C0E")
                    IAdaptiveMediaSource2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdvancedSettings(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSource2=_uuidof(IAdaptiveMediaSource2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("BA7023FD-C334-461B-A36E-C99F54F7174A"), exclusiveto, contract] */
                    MIDL_INTERFACE("BA7023FD-C334-461B-A36E-C99F54F7174A")
                    IAdaptiveMediaSource3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinLiveOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSeekableWindowSize(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredSeekableWindowSize(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredSeekableWindowSize(
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Diagnostics(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCorrelatedTimes(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSource3=_uuidof(IAdaptiveMediaSource3);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("55DB1680-1AEB-47DC-AA08-9A11610BA45A"), exclusiveto, contract] */
                    MIDL_INTERFACE("55DB1680-1AEB-47DC-AA08-9A11610BA45A")
                    IAdaptiveMediaSourceAdvancedSettings : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllSegmentsIndependent(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllSegmentsIndependent(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesiredBitrateHeadroomRatio(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DesiredBitrateHeadroomRatio(
                            /* [in] */__RPC__in_opt __FIReference_1_double * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BitrateDowngradeTriggerRatio(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BitrateDowngradeTriggerRatio(
                            /* [in] */__RPC__in_opt __FIReference_1_double * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceAdvancedSettings=_uuidof(IAdaptiveMediaSourceAdvancedSettings);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("05108787-E032-48E1-AB8D-002B0B3051DF"), exclusiveto, contract] */
                    MIDL_INTERFACE("05108787-E032-48E1-AB8D-002B0B3051DF")
                    IAdaptiveMediaSourceCorrelatedTimes : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PresentationTimeStamp(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProgramDateTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceCorrelatedTimes=_uuidof(IAdaptiveMediaSourceCorrelatedTimes);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("4686B6B2-800F-4E31-9093-76D4782013E7"), exclusiveto, contract] */
                    MIDL_INTERFACE("4686B6B2-800F-4E31-9093-76D4782013E7")
                    IAdaptiveMediaSourceCreationResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HttpResponseMessage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceCreationResult=_uuidof(IAdaptiveMediaSourceCreationResult);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("1C3243BF-1C44-404B-A201-DF45AC7898E8"), exclusiveto, contract] */
                    MIDL_INTERFACE("1C3243BF-1C44-404B-A201-DF45AC7898E8")
                    IAdaptiveMediaSourceCreationResult2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            /* [retval, out] */__RPC__out HRESULT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceCreationResult2=_uuidof(IAdaptiveMediaSourceCreationResult2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("3AF64F06-6D9C-494A-B7A9-B3A5DEE6AD68"), exclusiveto, contract] */
                    MIDL_INTERFACE("3AF64F06-6D9C-494A-B7A9-B3A5DEE6AD68")
                    IAdaptiveMediaSourceDiagnosticAvailableEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiagnosticType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDiagnosticType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestId(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SegmentId(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceType(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeLength(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bitrate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDiagnosticAvailableEventArgs=_uuidof(IAdaptiveMediaSourceDiagnosticAvailableEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("8C6DD857-16A5-4D9F-810E-00BD901B3EF9"), exclusiveto, contract] */
                    MIDL_INTERFACE("8C6DD857-16A5-4D9F-810E-00BD901B3EF9")
                    IAdaptiveMediaSourceDiagnosticAvailableEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            /* [retval, out] */__RPC__out HRESULT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDiagnosticAvailableEventArgs2=_uuidof(IAdaptiveMediaSourceDiagnosticAvailableEventArgs2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("9B24EE68-962E-448C-AEBF-B29B56098E23"), exclusiveto, contract] */
                    MIDL_INTERFACE("9B24EE68-962E-448C-AEBF-B29B56098E23")
                    IAdaptiveMediaSourceDiagnostics : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DiagnosticAvailable(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DiagnosticAvailable(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDiagnostics=_uuidof(IAdaptiveMediaSourceDiagnostics);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("670C0A44-E04E-4EFF-816A-17399F78F4BA"), exclusiveto, contract] */
                    MIDL_INTERFACE("670C0A44-E04E-4EFF-816A-17399F78F4BA")
                    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs=_uuidof(IAdaptiveMediaSourceDownloadBitrateChangedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("F3F1F444-96AE-4DE0-B540-2B3246E6968C"), exclusiveto, contract] */
                    MIDL_INTERFACE("F3F1F444-96AE-4DE0-B540-2B3246E6968C")
                    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedReason * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2=_uuidof(IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("19240DC3-5B37-4A1A-8970-D621CB6CA83B"), exclusiveto, contract] */
                    MIDL_INTERFACE("19240DC3-5B37-4A1A-8970-D621CB6CA83B")
                    IAdaptiveMediaSourceDownloadCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeLength(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HttpResponseMessage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadCompletedEventArgs=_uuidof(IAdaptiveMediaSourceDownloadCompletedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("704744C4-964A-40E4-AF95-9177DD6DFA00"), exclusiveto, contract] */
                    MIDL_INTERFACE("704744C4-964A-40E4-AF95-9177DD6DFA00")
                    IAdaptiveMediaSourceDownloadCompletedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Statistics(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadCompletedEventArgs2=_uuidof(IAdaptiveMediaSourceDownloadCompletedEventArgs2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("37739048-F4AB-40A4-B135-C6DFD8BD7FF1"), exclusiveto, contract] */
                    MIDL_INTERFACE("37739048-F4AB-40A4-B135-C6DFD8BD7FF1")
                    IAdaptiveMediaSourceDownloadFailedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeLength(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HttpResponseMessage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Web::Http::IHttpResponseMessage * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadFailedEventArgs=_uuidof(IAdaptiveMediaSourceDownloadFailedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("70919568-967C-4986-90C5-C6FC4B31E2D8"), exclusiveto, contract] */
                    MIDL_INTERFACE("70919568-967C-4986-90C5-C6FC4B31E2D8")
                    IAdaptiveMediaSourceDownloadFailedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                            /* [retval, out] */__RPC__out HRESULT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Statistics(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadFailedEventArgs2=_uuidof(IAdaptiveMediaSourceDownloadFailedEventArgs2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("05C68F64-FA20-4DBD-9821-4BF4C9BF77AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("05C68F64-FA20-4DBD-9821-4BF4C9BF77AB")
                    IAdaptiveMediaSourceDownloadRequestedDeferral : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadRequestedDeferral=_uuidof(IAdaptiveMediaSourceDownloadRequestedDeferral);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("C83FDFFD-44A9-47A2-BF96-03398B4BFAAF"), exclusiveto, contract] */
                    MIDL_INTERFACE("C83FDFFD-44A9-47A2-BF96-03398B4BFAAF")
                    IAdaptiveMediaSourceDownloadRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeLength(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral * * deferral
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadRequestedEventArgs=_uuidof(IAdaptiveMediaSourceDownloadRequestedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("B37D8BFE-AA44-4D82-825B-611DE3BCFECB"), exclusiveto, contract] */
                    MIDL_INTERFACE("B37D8BFE-AA44-4D82-825B-611DE3BCFECB")
                    IAdaptiveMediaSourceDownloadRequestedEventArgs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadRequestedEventArgs2=_uuidof(IAdaptiveMediaSourceDownloadRequestedEventArgs2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("F4AFDC73-BCEE-4A6A-9F0A-FEC41E2339B0"), exclusiveto, contract] */
                    MIDL_INTERFACE("F4AFDC73-BCEE-4A6A-9F0A-FEC41E2339B0")
                    IAdaptiveMediaSourceDownloadResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResourceUri(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputStream(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputStream(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Buffer(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Buffer(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentType(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentType(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedStatus(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExtendedStatus(
                            /* [in] */UINT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadResult=_uuidof(IAdaptiveMediaSourceDownloadResult);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("15552CB7-7B80-4AC4-8660-A4B97F7C70F0"), exclusiveto, contract] */
                    MIDL_INTERFACE("15552CB7-7B80-4AC4-8660-A4B97F7C70F0")
                    IAdaptiveMediaSourceDownloadResult2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeOffset(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResourceByteRangeOffset(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceByteRangeLength(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResourceByteRangeLength(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadResult2=_uuidof(IAdaptiveMediaSourceDownloadResult2);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("A306CEFB-E96A-4DFF-A9B8-1AE08C01AE98"), exclusiveto, contract] */
                    MIDL_INTERFACE("A306CEFB-E96A-4DFF-A9B8-1AE08C01AE98")
                    IAdaptiveMediaSourceDownloadStatistics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentBytesReceivedCount(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToHeadersReceived(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToFirstByteReceived(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToLastByteReceived(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceDownloadStatistics=_uuidof(IAdaptiveMediaSourceDownloadStatistics);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("23A29F6D-7DDA-4A51-87A9-6FA8C5B292BE"), exclusiveto, contract] */
                    MIDL_INTERFACE("23A29F6D-7DDA-4A51-87A9-6FA8C5B292BE")
                    IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewValue(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs=_uuidof(IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                namespace Adaptive {
                    /* [object, uuid("50A6BD5D-66EF-4CD3-9579-9E660507DC3F"), exclusiveto, contract] */
                    MIDL_INTERFACE("50A6BD5D-66EF-4CD3-9579-9E660507DC3F")
                    IAdaptiveMediaSourceStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE IsContentTypeSupported(
                            /* [in] */__RPC__in HSTRING contentType,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromUriAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromUriWithDownloaderAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpClient * httpClient,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromStreamAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * stream,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [in] */__RPC__in HSTRING contentType,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromStreamWithDownloaderAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * stream,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [in] */__RPC__in HSTRING contentType,
                            /* [in] */__RPC__in_opt ABI::Windows::Web::Http::IHttpClient * httpClient,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAdaptiveMediaSourceStatics=_uuidof(IAdaptiveMediaSourceStatics);
                    
                } /* Windows */
            } /* Media */
        } /* Streaming */
    } /* Adaptive */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource ** Default Interface **
 *    Windows.Media.Core.IMediaSource
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics;

#endif // ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType;
#if !defined(____FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType;

typedef struct __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl;

interface __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#if !defined(____FIIterator_1_UINT32_INTERFACE_DEFINED__)
#define ____FIIterator_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIIterator_1_UINT32 __FIIterator_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_UINT32;

typedef struct __FIIterator_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_UINT32 * This, /* [retval][out] */ __RPC__out int *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_UINT32 * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_UINT32 * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_UINT32 * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) int *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_UINT32Vtbl;

interface __FIIterator_1_UINT32
{
    CONST_VTBL struct __FIIterator_1_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_UINT32_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_UINT32_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_UINT32_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_UINT32_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_UINT32_INTERFACE_DEFINED__)
#define ____FIIterable_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIIterable_1_UINT32 __FIIterable_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_UINT32;

typedef  struct __FIIterable_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_UINT32 * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_UINT32 * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_UINT32 **first);

    END_INTERFACE
} __FIIterable_1_UINT32Vtbl;

interface __FIIterable_1_UINT32
{
    CONST_VTBL struct __FIIterable_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_UINT32_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_UINT32_INTERFACE_DEFINED__)
#define ____FIVectorView_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_UINT32 __FIVectorView_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_UINT32;

typedef struct __FIVectorView_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_UINT32 * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_UINT32 * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_UINT32 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_UINT32 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_UINT32 * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out int *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_UINT32 * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_UINT32 * This,
            /* [in] */ int item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_UINT32 * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) int *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_UINT32Vtbl;

interface __FIVectorView_1_UINT32
{
    CONST_VTBL struct __FIVectorView_1_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_UINT32_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_UINT32_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_UINT32_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_UINT32_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__


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


#if !defined(____FIReference_1_double_INTERFACE_DEFINED__)
#define ____FIReference_1_double_INTERFACE_DEFINED__

typedef interface __FIReference_1_double __FIReference_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_double;

typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, /* [retval][out] */ __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;

interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_double_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_double_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__


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


#if !defined(____FIReference_1_UINT64_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT64;

typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, /* [retval][out] */ __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;

interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT64_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT64_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaSource_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpClient __x_ABI_CWindows_CWeb_CHttp_CIHttpClient;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpClient_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;

#endif // ____x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus;


typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType;


typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason;


typedef enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType;

















































/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus
{
    AdaptiveMediaSourceCreationStatus_Success = 0,
    AdaptiveMediaSourceCreationStatus_ManifestDownloadFailure = 1,
    AdaptiveMediaSourceCreationStatus_ManifestParseFailure = 2,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestContentType = 3,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestVersion = 4,
    AdaptiveMediaSourceCreationStatus_UnsupportedManifestProfile = 5,
    AdaptiveMediaSourceCreationStatus_UnknownFailure = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType
{
    AdaptiveMediaSourceDiagnosticType_ManifestUnchangedUponReload = 0,
    AdaptiveMediaSourceDiagnosticType_ManifestMismatchUponReload = 1,
    AdaptiveMediaSourceDiagnosticType_ManifestSignaledEndOfLiveEventUponReload = 2,
    AdaptiveMediaSourceDiagnosticType_MediaSegmentSkipped = 3,
    AdaptiveMediaSourceDiagnosticType_ResourceNotFound = 4,
    AdaptiveMediaSourceDiagnosticType_ResourceTimedOut = 5,
    AdaptiveMediaSourceDiagnosticType_ResourceParsingError = 6,
    AdaptiveMediaSourceDiagnosticType_BitrateDisabled = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    AdaptiveMediaSourceDiagnosticType_FatalMediaSourceError = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason
{
    AdaptiveMediaSourceDownloadBitrateChangedReason_SufficientInboundBitsPerSecond = 0,
    AdaptiveMediaSourceDownloadBitrateChangedReason_InsufficientInboundBitsPerSecond = 1,
    AdaptiveMediaSourceDownloadBitrateChangedReason_LowBufferLevel = 2,
    AdaptiveMediaSourceDownloadBitrateChangedReason_PositionChanged = 3,
    AdaptiveMediaSourceDownloadBitrateChangedReason_TrackSelectionChanged = 4,
    AdaptiveMediaSourceDownloadBitrateChangedReason_DesiredBitratesChanged = 5,
    AdaptiveMediaSourceDownloadBitrateChangedReason_ErrorInPreviousBitrate = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceResourceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType
{
    AdaptiveMediaSourceResourceType_Manifest = 0,
    AdaptiveMediaSourceResourceType_InitializationSegment = 1,
    AdaptiveMediaSourceResourceType_MediaSegment = 2,
    AdaptiveMediaSourceResourceType_Key = 3,
    AdaptiveMediaSourceResourceType_InitializationVector = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Core.IMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource";
/* [object, uuid("4C7332EF-D39F-4396-B4D9-043957A7C964"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsLive )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InitialBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentDownloadBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPlaybackBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableBitrates )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredMinBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredMinBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredMaxBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredMaxBitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioOnlyPlayback )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecond )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InboundBitsPerSecondWindow )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InboundBitsPerSecondWindow )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadBitrateChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PlaybackBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PlaybackBitrateChanged )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadRequested )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadRequested )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadCompleted )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadCompleted )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadFailed )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSource_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDownloadFailedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadFailed )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_IsLive(This,value) \
    ( (This)->lpVtbl->get_IsLive(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_DesiredLiveOffset(This,value) \
    ( (This)->lpVtbl->get_DesiredLiveOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_put_DesiredLiveOffset(This,value) \
    ( (This)->lpVtbl->put_DesiredLiveOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_InitialBitrate(This,value) \
    ( (This)->lpVtbl->get_InitialBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_put_InitialBitrate(This,value) \
    ( (This)->lpVtbl->put_InitialBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_CurrentDownloadBitrate(This,value) \
    ( (This)->lpVtbl->get_CurrentDownloadBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_CurrentPlaybackBitrate(This,value) \
    ( (This)->lpVtbl->get_CurrentPlaybackBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_AvailableBitrates(This,value) \
    ( (This)->lpVtbl->get_AvailableBitrates(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_DesiredMinBitrate(This,value) \
    ( (This)->lpVtbl->get_DesiredMinBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_put_DesiredMinBitrate(This,value) \
    ( (This)->lpVtbl->put_DesiredMinBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_DesiredMaxBitrate(This,value) \
    ( (This)->lpVtbl->get_DesiredMaxBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_put_DesiredMaxBitrate(This,value) \
    ( (This)->lpVtbl->put_DesiredMaxBitrate(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_AudioOnlyPlayback(This,value) \
    ( (This)->lpVtbl->get_AudioOnlyPlayback(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_InboundBitsPerSecond(This,value) \
    ( (This)->lpVtbl->get_InboundBitsPerSecond(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_get_InboundBitsPerSecondWindow(This,value) \
    ( (This)->lpVtbl->get_InboundBitsPerSecondWindow(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_put_InboundBitsPerSecondWindow(This,value) \
    ( (This)->lpVtbl->put_InboundBitsPerSecondWindow(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_add_DownloadBitrateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadBitrateChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_remove_DownloadBitrateChanged(This,token) \
    ( (This)->lpVtbl->remove_DownloadBitrateChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_add_PlaybackBitrateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PlaybackBitrateChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_remove_PlaybackBitrateChanged(This,token) \
    ( (This)->lpVtbl->remove_PlaybackBitrateChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_add_DownloadRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadRequested(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_remove_DownloadRequested(This,token) \
    ( (This)->lpVtbl->remove_DownloadRequested(This,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_add_DownloadCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadCompleted(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_remove_DownloadCompleted(This,token) \
    ( (This)->lpVtbl->remove_DownloadCompleted(This,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_add_DownloadFailed(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadFailed(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_remove_DownloadFailed(This,token) \
    ( (This)->lpVtbl->remove_DownloadFailed(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2";
/* [object, uuid("17890342-6760-4BB9-A58A-F7AA98B08C0E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdvancedSettings )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_get_AdvancedSettings(This,value) \
    ( (This)->lpVtbl->get_AdvancedSettings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSource3[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3";
/* [object, uuid("BA7023FD-C334-461B-A36E-C99F54F7174A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinLiveOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredSeekableWindowSize )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Diagnostics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCorrelatedTimes )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_get_MinLiveOffset(This,value) \
    ( (This)->lpVtbl->get_MinLiveOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_get_MaxSeekableWindowSize(This,value) \
    ( (This)->lpVtbl->get_MaxSeekableWindowSize(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_get_DesiredSeekableWindowSize(This,value) \
    ( (This)->lpVtbl->get_DesiredSeekableWindowSize(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_put_DesiredSeekableWindowSize(This,value) \
    ( (This)->lpVtbl->put_DesiredSeekableWindowSize(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_get_Diagnostics(This,value) \
    ( (This)->lpVtbl->get_Diagnostics(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_GetCorrelatedTimes(This,value) \
    ( (This)->lpVtbl->GetCorrelatedTimes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings";
/* [object, uuid("55DB1680-1AEB-47DC-AA08-9A11610BA45A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllSegmentsIndependent )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllSegmentsIndependent )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesiredBitrateHeadroomRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DesiredBitrateHeadroomRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [in] */__RPC__in_opt __FIReference_1_double * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BitrateDowngradeTriggerRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BitrateDowngradeTriggerRatio )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings * This,
        /* [in] */__RPC__in_opt __FIReference_1_double * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_get_AllSegmentsIndependent(This,value) \
    ( (This)->lpVtbl->get_AllSegmentsIndependent(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_put_AllSegmentsIndependent(This,value) \
    ( (This)->lpVtbl->put_AllSegmentsIndependent(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_get_DesiredBitrateHeadroomRatio(This,value) \
    ( (This)->lpVtbl->get_DesiredBitrateHeadroomRatio(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_put_DesiredBitrateHeadroomRatio(This,value) \
    ( (This)->lpVtbl->put_DesiredBitrateHeadroomRatio(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_get_BitrateDowngradeTriggerRatio(This,value) \
    ( (This)->lpVtbl->get_BitrateDowngradeTriggerRatio(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_put_BitrateDowngradeTriggerRatio(This,value) \
    ( (This)->lpVtbl->put_BitrateDowngradeTriggerRatio(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceAdvancedSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes";
/* [object, uuid("05108787-E032-48E1-AB8D-002B0B3051DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PresentationTimeStamp )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProgramDateTime )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_get_PresentationTimeStamp(This,value) \
    ( (This)->lpVtbl->get_PresentationTimeStamp(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_get_ProgramDateTime(This,value) \
    ( (This)->lpVtbl->get_ProgramDateTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCorrelatedTimes_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult";
/* [object, uuid("4686B6B2-800F-4E31-9093-76D4782013E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceCreationStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaSource )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSource * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_get_MediaSource(This,value) \
    ( (This)->lpVtbl->get_MediaSource(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_get_HttpResponseMessage(This,value) \
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceCreationResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2";
/* [object, uuid("1C3243BF-1C44-404B-A201-DF45AC7898E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2 * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceCreationResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs";
/* [object, uuid("3AF64F06-6D9C-494A-B7A9-B3A5DEE6AD68"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiagnosticType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDiagnosticType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SegmentId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceResourceType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_DiagnosticType(This,value) \
    ( (This)->lpVtbl->get_DiagnosticType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_RequestId(This,value) \
    ( (This)->lpVtbl->get_RequestId(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_SegmentId(This,value) \
    ( (This)->lpVtbl->get_SegmentId(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_ResourceType(This,value) \
    ( (This)->lpVtbl->get_ResourceType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_get_Bitrate(This,value) \
    ( (This)->lpVtbl->get_Bitrate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnosticAvailableEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2";
/* [object, uuid("8C6DD857-16A5-4D9F-810E-00BD901B3EF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2 * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticAvailableEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics";
/* [object, uuid("9B24EE68-962E-448C-AEBF-B29B56098E23"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DiagnosticAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnostics_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceDiagnosticAvailableEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DiagnosticAvailable )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnosticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_add_DiagnosticAvailable(This,handler,token) \
    ( (This)->lpVtbl->add_DiagnosticAvailable(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_remove_DiagnosticAvailable(This,token) \
    ( (This)->lpVtbl->remove_DiagnosticAvailable(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDiagnostics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs";
/* [object, uuid("670C0A44-E04E-4EFF-816A-17399F78F4BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_get_OldValue(This,value) \
    ( (This)->lpVtbl->get_OldValue(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_get_NewValue(This,value) \
    ( (This)->lpVtbl->get_NewValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2";
/* [object, uuid("F3F1F444-96AE-4DE0-B540-2B3246E6968C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceDownloadBitrateChangedReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadBitrateChangedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs";
/* [object, uuid("19240DC3-5B37-4A1A-8970-D621CB6CA83B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_get_ResourceType(This,value) \
    ( (This)->lpVtbl->get_ResourceType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_get_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_get_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_get_HttpResponseMessage(This,value) \
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadCompletedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2";
/* [object, uuid("704744C4-964A-40E4-AF95-9177DD6DFA00"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Statistics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_get_RequestId(This,value) \
    ( (This)->lpVtbl->get_RequestId(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_get_Statistics(This,value) \
    ( (This)->lpVtbl->get_Statistics(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadCompletedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs";
/* [object, uuid("37739048-F4AB-40A4-B135-C6DFD8BD7FF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HttpResponseMessage )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_get_ResourceType(This,value) \
    ( (This)->lpVtbl->get_ResourceType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_get_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_get_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_get_HttpResponseMessage(This,value) \
    ( (This)->lpVtbl->get_HttpResponseMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadFailedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2";
/* [object, uuid("70919568-967C-4986-90C5-C6FC4B31E2D8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Statistics )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_get_RequestId(This,value) \
    ( (This)->lpVtbl->get_RequestId(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_get_Statistics(This,value) \
    ( (This)->lpVtbl->get_Statistics(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadFailedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral";
/* [object, uuid("05C68F64-FA20-4DBD-9821-4BF4C9BF77AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs";
/* [object, uuid("C83FDFFD-44A9-47A2-BF96-03398B4BFAAF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CAdaptiveMediaSourceResourceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedDeferral * * deferral
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_get_ResourceType(This,value) \
    ( (This)->lpVtbl->get_ResourceType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_get_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_get_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadRequestedEventArgs2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2";
/* [object, uuid("B37D8BFE-AA44-4D82-825B-611DE3BCFECB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_get_RequestId(This,value) \
    ( (This)->lpVtbl->get_RequestId(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadRequestedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult";
/* [object, uuid("F4AFDC73-BCEE-4A6A-9F0A-FEC41E2339B0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResourceUri )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputStream )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Buffer )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExtendedStatus )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_get_ResourceUri(This,value) \
    ( (This)->lpVtbl->get_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_put_ResourceUri(This,value) \
    ( (This)->lpVtbl->put_ResourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_get_InputStream(This,value) \
    ( (This)->lpVtbl->get_InputStream(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_put_InputStream(This,value) \
    ( (This)->lpVtbl->put_InputStream(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_get_Buffer(This,value) \
    ( (This)->lpVtbl->get_Buffer(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_put_Buffer(This,value) \
    ( (This)->lpVtbl->put_Buffer(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_get_ContentType(This,value) \
    ( (This)->lpVtbl->get_ContentType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_put_ContentType(This,value) \
    ( (This)->lpVtbl->put_ContentType(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_get_ExtendedStatus(This,value) \
    ( (This)->lpVtbl->get_ExtendedStatus(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_put_ExtendedStatus(This,value) \
    ( (This)->lpVtbl->put_ExtendedStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadResult2[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2";
/* [object, uuid("15552CB7-7B80-4AC4-8660-A4B97F7C70F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResourceByteRangeOffset )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResourceByteRangeLength )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_get_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_put_ResourceByteRangeOffset(This,value) \
    ( (This)->lpVtbl->put_ResourceByteRangeOffset(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_get_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->get_ResourceByteRangeLength(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_put_ResourceByteRangeLength(This,value) \
    ( (This)->lpVtbl->put_ResourceByteRangeLength(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics";
/* [object, uuid("A306CEFB-E96A-4DFF-A9B8-1AE08C01AE98"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentBytesReceivedCount )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToHeadersReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToFirstByteReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToLastByteReceived )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatisticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_get_ContentBytesReceivedCount(This,value) \
    ( (This)->lpVtbl->get_ContentBytesReceivedCount(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_get_TimeToHeadersReceived(This,value) \
    ( (This)->lpVtbl->get_TimeToHeadersReceived(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_get_TimeToFirstByteReceived(This,value) \
    ( (This)->lpVtbl->get_TimeToFirstByteReceived(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_get_TimeToLastByteReceived(This,value) \
    ( (This)->lpVtbl->get_TimeToLastByteReceived(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceDownloadStatistics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
/* [object, uuid("23A29F6D-7DDA-4A51-87A9-6FA8C5B292BE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewValue )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioOnly )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_get_OldValue(This,value) \
    ( (This)->lpVtbl->get_OldValue(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_get_NewValue(This,value) \
    ( (This)->lpVtbl->get_NewValue(This,value) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_get_AudioOnly(This,value) \
    ( (This)->lpVtbl->get_AudioOnly(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourcePlaybackBitrateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_Adaptive_IAdaptiveMediaSourceStatics[] = L"Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics";
/* [object, uuid("50A6BD5D-66EF-4CD3-9579-9E660507DC3F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsContentTypeSupported )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
        /* [in] */__RPC__in HSTRING contentType,
        /* [retval, out] */__RPC__out boolean * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromUriAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromUriWithDownloaderAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * httpClient,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING contentType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromStreamWithDownloaderAsync )(
        __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in HSTRING contentType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpClient * httpClient,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CStreaming__CAdaptive__CAdaptiveMediaSourceCreationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_IsContentTypeSupported(This,contentType,result) \
    ( (This)->lpVtbl->IsContentTypeSupported(This,contentType,result) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_CreateFromUriAsync(This,uri,result) \
    ( (This)->lpVtbl->CreateFromUriAsync(This,uri,result) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_CreateFromUriWithDownloaderAsync(This,uri,httpClient,result) \
    ( (This)->lpVtbl->CreateFromUriWithDownloaderAsync(This,uri,httpClient,result) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_CreateFromStreamAsync(This,stream,uri,contentType,result) \
    ( (This)->lpVtbl->CreateFromStreamAsync(This,stream,uri,contentType,result) )

#define __x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_CreateFromStreamWithDownloaderAsync(This,stream,uri,contentType,httpClient,result) \
    ( (This)->lpVtbl->CreateFromStreamWithDownloaderAsync(This,stream,uri,contentType,httpClient,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CAdaptive_CIAdaptiveMediaSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource ** Default Interface **
 *    Windows.Media.Core.IMediaSource
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource2
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSource3
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSource[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceAdvancedSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceAdvancedSettings[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCorrelatedTimes ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCorrelatedTimes[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCorrelatedTimes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceCreationResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceCreationResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnosticAvailableEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnosticAvailableEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnosticAvailableEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDiagnostics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDiagnostics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDiagnostics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadCompletedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadCompletedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadFailedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadFailedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedDeferral ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedDeferral[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadRequestedEventArgs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadRequestedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult ** Default Interface **
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadResult2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadResult[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourceDownloadStatistics ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourceDownloadStatistics[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadStatistics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Streaming.Adaptive.IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_Adaptive_AdaptiveMediaSourcePlaybackBitrateChangedEventArgs[] = L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs";
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
#endif // __windows2Emedia2Estreaming2Eadaptive_p_h__

#endif // __windows2Emedia2Estreaming2Eadaptive_h__
