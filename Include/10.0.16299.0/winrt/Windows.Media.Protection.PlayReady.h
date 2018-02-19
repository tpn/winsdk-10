/* Header file automatically generated from windows.media.protection.playready.idl */
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
#ifndef __windows2Emedia2Eprotection2Eplayready_h__
#define __windows2Emedia2Eprotection2Eplayready_h__
#ifndef __windows2Emedia2Eprotection2Eplayready_p_h__
#define __windows2Emedia2Eprotection2Eplayready_p_h__


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
#include "Windows.Media.Protection.h"
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDClient;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient ABI::Windows::Media::Protection::PlayReady::INDClient

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDClientFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory ABI::Windows::Media::Protection::PlayReady::INDClientFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDClosedCaptionDataReceivedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDCustomData;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData ABI::Windows::Media::Protection::PlayReady::INDCustomData

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDCustomDataFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory ABI::Windows::Media::Protection::PlayReady::INDCustomDataFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDDownloadEngine;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine ABI::Windows::Media::Protection::PlayReady::INDDownloadEngine

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDDownloadEngineNotifier;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier ABI::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDLicenseFetchCompletedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDLicenseFetchDescriptor;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDLicenseFetchDescriptorFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptorFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDLicenseFetchResult;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDMessenger;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger ABI::Windows::Media::Protection::PlayReady::INDMessenger

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDProximityDetectionCompletedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDRegistrationCompletedEventArgs;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDSendResult;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult ABI::Windows::Media::Protection::PlayReady::INDSendResult

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDStartResult;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult ABI::Windows::Media::Protection::PlayReady::INDStartResult

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDStorageFileHelper;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper ABI::Windows::Media::Protection::PlayReady::INDStorageFileHelper

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDStreamParser;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser ABI::Windows::Media::Protection::PlayReady::INDStreamParser

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDStreamParserNotifier;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier ABI::Windows::Media::Protection::PlayReady::INDStreamParserNotifier

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDTCPMessengerFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory ABI::Windows::Media::Protection::PlayReady::INDTCPMessengerFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface INDTransmitterProperties;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties ABI::Windows::Media::Protection::PlayReady::INDTransmitterProperties

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyContentHeader;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyContentHeader2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyContentHeaderFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyContentHeaderFactory2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeaderFactory2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyContentResolver;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentResolver

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyDomain;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyDomainIterableFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainIterableFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyDomainJoinServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyDomainLeaveServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyITADataGenerator;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator ABI::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyIndividualizationServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicense;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicense2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseAcquisitionServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseAcquisitionServiceRequest2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseAcquisitionServiceRequest3;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseIterableFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseIterableFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseManagement;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseManagement

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseSession;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseSession2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyLicenseSessionFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSessionFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyMeteringReportServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyRevocationServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadySecureStopIterableFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopIterableFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadySecureStopServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadySecureStopServiceRequestFactory;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequestFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest ABI::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadySoapMessage;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage ABI::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyStatics;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyStatics2;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyStatics3;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics3

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    interface IPlayReadyStatics4;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 ABI::Windows::Media::Protection::PlayReady::IPlayReadyStatics4

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE
#define DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5c35e8a5-4ad7-5e70-bedf-91f5d5888d35"))
IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> : IIterator_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Protection.PlayReady.IPlayReadyDomain>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t;
#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*>
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE
#define DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("84e98f86-4bee-5f41-93a1-255887122d9f"))
IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> : IIterable_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Protection.PlayReady.IPlayReadyDomain>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*> __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t;
#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*>
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyDomain*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE
#define DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6a6d000a-ce26-541b-a158-8457409b2604"))
IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> : IIterator_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Protection.PlayReady.IPlayReadyLicense>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t;
#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*>
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE
#define DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9f28f6b7-b5ea-5073-ba3d-8cb2f07291a1"))
IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> : IIterable_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Protection.PlayReady.IPlayReadyLicense>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*> __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t;
#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*>
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicense*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE
#define DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("77b0419b-3f4b-5ef9-ae0b-881143b172c9"))
IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> : IIterator_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t;
#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*>
//#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE
#define DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8d8ac279-b07d-5308-9c78-1c5c996ca03c"))
IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> : IIterable_impl<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*> __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t;
#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*>
//#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f72fdf87-9055-58d8-96ab-2cc04d06ccd7"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Protection.PlayReady.INDLicenseFetchResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9b9d0c68-3ad2-5b01-8dc7-6f7fc1eed6f6"))
IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> : IAsyncOperation_impl<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Protection.PlayReady.INDLicenseFetchResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*> __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c6c485d0-fdab-5142-b079-97af0567f0b6"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Protection.PlayReady.INDSendResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDSendResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDSendResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6c3788a8-0e6d-5e29-9ad1-d88a65eb500b"))
IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> : IAsyncOperation_impl<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Protection.PlayReady.INDSendResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDSendResult*> __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDSendResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDSendResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e4e3760-b22b-5f0a-9058-475aff310db5"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Protection.PlayReady.INDStartResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDStartResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::PlayReady::INDStartResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("01fab63e-6aab-54a2-80f7-dbed22f58d56"))
IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> : IAsyncOperation_impl<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Protection.PlayReady.INDStartResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDStartResult*> __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDStartResult*>
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::PlayReady::INDStartResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDClient;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d20f3387-b3f5-5010-9b0b-e851ae84940d"))
ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::PlayReady::NDClient*, ABI::Windows::Media::Protection::PlayReady::INDClient*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.PlayReady.NDClient, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("36ec9e44-25f6-5d3d-87ee-8ad10a335c83"))
ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::PlayReady::NDClient*, ABI::Windows::Media::Protection::PlayReady::INDClient*>,ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.PlayReady.NDClient, Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDClosedCaptionDataReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a5401278-e2c1-5354-858f-6f32cbdfbea7"))
ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::PlayReady::NDClient*, ABI::Windows::Media::Protection::PlayReady::INDClient*>,ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.PlayReady.NDClient, Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b545268a-c7ce-51f8-bddc-029d2c66b66b"))
ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::PlayReady::NDClient*, ABI::Windows::Media::Protection::PlayReady::INDClient*>,ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.PlayReady.NDClient, Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDProximityDetectionCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("46b3f056-c1a0-51c0-8521-cde222157eff"))
ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::PlayReady::NDClient*, ABI::Windows::Media::Protection::PlayReady::INDClient*>,ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.PlayReady.NDClient, Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::NDClient*,ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::PlayReady::INDClient*,ABI::Windows::Media::Protection::PlayReady::INDRegistrationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class AudioStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IAudioStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor ABI::Windows::Media::Core::IAudioStreamDescriptor

#endif // ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a61a11cd-b32e-518b-a6a7-5472cbe00e83"))
IIterator<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a3e2c972-a171-5b94-8389-e983ebc3f3b9"))
IIterable<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("340f4fed-1288-5b89-be7c-c355fe1ce4d9"))
IVectorView<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#define DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("45afc129-988c-5f1e-9c17-6e34b917cd1b"))
IVector<ABI::Windows::Media::Core::AudioStreamDescriptor*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::AudioStreamDescriptor*, ABI::Windows::Media::Core::IAudioStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Core.AudioStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Core::AudioStreamDescriptor*> __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t;
#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
//#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IAudioStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class VideoStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IVideoStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor ABI::Windows::Media::Core::IVideoStreamDescriptor

#endif // ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("da51ab3c-3c64-545c-a3f4-f9b055aaf7d9"))
IIterator<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3acbf03c-0a79-5823-aaa9-d88bc3f8f594"))
IIterable<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e965c8af-d211-52f0-838b-4637469da7af"))
IVectorView<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#define DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1fb064b3-636c-5988-9c97-02a9b76150f6"))
IVector<ABI::Windows::Media::Core::VideoStreamDescriptor*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Core::VideoStreamDescriptor*, ABI::Windows::Media::Core::IVideoStreamDescriptor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Core.VideoStreamDescriptor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Core::VideoStreamDescriptor*> __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t;
#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
//#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Core::IVideoStreamDescriptor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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





#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaStreamDescriptor;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor ABI::Windows::Media::Core::IMediaStreamDescriptor

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class MediaStreamSample;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaStreamSample;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample ABI::Windows::Media::Core::IMediaStreamSample

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                class MediaStreamSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Core {
                interface IMediaStreamSource;
            } /* Windows */
        } /* Media */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource ABI::Windows::Media::Core::IMediaStreamSource

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionServiceRequest;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest ABI::Windows::Media::Protection::IMediaProtectionServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class MediaProtectionManager;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionManager;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager ABI::Windows::Media::Protection::IMediaProtectionManager

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__





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
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDCertificateFeature : int NDCertificateFeature;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDCertificatePlatformID : int NDCertificatePlatformID;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDCertificateType : int NDCertificateType;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDClosedCaptionFormat : int NDClosedCaptionFormat;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDContentIDType : int NDContentIDType;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDMediaStreamType : int NDMediaStreamType;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDProximityDetectionType : int NDProximityDetectionType;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum NDStartAsyncOptions : int NDStartAsyncOptions;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum PlayReadyDecryptorSetup : int PlayReadyDecryptorSetup;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum PlayReadyEncryptionAlgorithm : int PlayReadyEncryptionAlgorithm;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum PlayReadyHardwareDRMFeatures : int PlayReadyHardwareDRMFeatures;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    
                    typedef enum PlayReadyITADataFormat : int PlayReadyITADataFormat;
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */























































namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDCustomData;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDDownloadEngineNotifier;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDLicenseFetchDescriptor;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDStorageFileHelper;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDStreamParserNotifier;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class NDTCPMessenger;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyContentHeader;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyDomain;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyDomainIterable;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyDomainIterator;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyDomainJoinServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyDomainLeaveServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyITADataGenerator;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyIndividualizationServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyLicense;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyLicenseAcquisitionServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyLicenseIterable;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyLicenseIterator;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyLicenseSession;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyMeteringReportServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadyRevocationServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadySecureStopIterable;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadySecureStopIterator;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadySecureStopServiceRequest;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    class PlayReadySoapMessage;
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */













/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificateFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDCertificateFeature is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDCertificateFeature : int
                    {
                        NDCertificateFeature_Transmitter = 1,
                        NDCertificateFeature_Receiver = 2,
                        NDCertificateFeature_SharedCertificate = 3,
                        NDCertificateFeature_SecureClock = 4,
                        NDCertificateFeature_AntiRollBackClock = 5,
                        NDCertificateFeature_CRLS = 9,
                        NDCertificateFeature_PlayReady3Features = 13,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificatePlatformID
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDCertificatePlatformID is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDCertificatePlatformID : int
                    {
                        NDCertificatePlatformID_Windows = 0,
                        NDCertificatePlatformID_OSX = 1,
                        NDCertificatePlatformID_WindowsOnARM = 2,
                        NDCertificatePlatformID_WindowsMobile7 = 5,
                        NDCertificatePlatformID_iOSOnARM = 6,
                        NDCertificatePlatformID_XBoxOnPPC = 7,
                        NDCertificatePlatformID_WindowsPhone8OnARM = 8,
                        NDCertificatePlatformID_WindowsPhone8OnX86 = 9,
                        NDCertificatePlatformID_XboxOne = 10,
                        NDCertificatePlatformID_AndroidOnARM = 11,
                        NDCertificatePlatformID_WindowsPhone81OnARM = 12,
                        NDCertificatePlatformID_WindowsPhone81OnX86 = 13,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificateType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDCertificateType is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDCertificateType : int
                    {
                        NDCertificateType_Unknown = 0,
                        NDCertificateType_PC = 1,
                        NDCertificateType_Device = 2,
                        NDCertificateType_Domain = 3,
                        NDCertificateType_Issuer = 4,
                        NDCertificateType_CrlSigner = 5,
                        NDCertificateType_Service = 6,
                        NDCertificateType_Silverlight = 7,
                        NDCertificateType_Application = 8,
                        NDCertificateType_Metering = 9,
                        NDCertificateType_KeyFileSigner = 10,
                        NDCertificateType_Server = 11,
                        NDCertificateType_LicenseSigner = 12,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDClosedCaptionFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDClosedCaptionFormat is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDClosedCaptionFormat : int
                    {
                        NDClosedCaptionFormat_ATSC = 0,
                        NDClosedCaptionFormat_SCTE20 = 1,
                        NDClosedCaptionFormat_Unknown = 2,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDContentIDType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDContentIDType is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDContentIDType : int
                    {
                        NDContentIDType_KeyID = 1,
                        NDContentIDType_PlayReadyObject = 2,
                        NDContentIDType_Custom = 3,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDMediaStreamType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDMediaStreamType is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDMediaStreamType : int
                    {
                        NDMediaStreamType_Audio = 1,
                        NDMediaStreamType_Video = 2,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDProximityDetectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDProximityDetectionType is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDProximityDetectionType : int
                    {
                        NDProximityDetectionType_UDP = 1,
                        NDProximityDetectionType_TCP = 2,
                        NDProximityDetectionType_TransportAgnostic = 4,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDStartAsyncOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, deprecated, contract] */
                    enum 
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("NDStartAsyncOptions is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    NDStartAsyncOptions : int
                    {
                        NDStartAsyncOptions_MutualAuthentication = 1,
                        NDStartAsyncOptions_WaitForLicenseDescriptor = 2,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyDecryptorSetup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, contract] */
                    enum PlayReadyDecryptorSetup : int
                    {
                        PlayReadyDecryptorSetup_Uninitialized = 0,
                        PlayReadyDecryptorSetup_OnDemand = 1,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyEncryptionAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, contract] */
                    enum PlayReadyEncryptionAlgorithm : int
                    {
                        PlayReadyEncryptionAlgorithm_Unprotected = 0,
                        PlayReadyEncryptionAlgorithm_Aes128Ctr = 1,
                        PlayReadyEncryptionAlgorithm_Cocktail = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        PlayReadyEncryptionAlgorithm_Aes128Cbc = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        PlayReadyEncryptionAlgorithm_Unspecified = 65535,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        PlayReadyEncryptionAlgorithm_Uninitialized = 2147483647,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyHardwareDRMFeatures
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, contract] */
                    enum PlayReadyHardwareDRMFeatures : int
                    {
                        PlayReadyHardwareDRMFeatures_HardwareDRM = 1,
                        PlayReadyHardwareDRMFeatures_HEVC = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        PlayReadyHardwareDRMFeatures_Aes128Cbc = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyITADataFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [v1_enum, contract] */
                    enum PlayReadyITADataFormat : int
                    {
                        PlayReadyITADataFormat_SerializedProperties = 0,
                        PlayReadyITADataFormat_SerializedProperties_WithContentProtectionWrapper = 1,
                    };
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClient[] = L"Windows.Media.Protection.PlayReady.INDClient";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("3BD6781B-61B8-46E2-99A5-8ABCB6B9F7D6"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("3BD6781B-61B8-46E2-99A5-8ABCB6B9F7D6")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDClient : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_RegistrationCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_RegistrationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ProximityDetectionCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ProximityDetectionCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_LicenseFetchCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_LicenseFetchCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ReRegistrationNeeded(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ReRegistrationNeeded(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventadd, deprecated] */virtual HRESULT STDMETHODCALLTYPE add_ClosedCaptionDataReceived(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [eventremove, deprecated] */virtual HRESULT STDMETHODCALLTYPE remove_ClosedCaptionDataReceived(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE StartAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * contentUrl,
                            /* [in] */UINT32 startAsyncOptions,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * registrationCustomData,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE LicenseFetchAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ReRegistrationAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * registrationCustomData,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDClient=_uuidof(INDClient);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClientFactory[] = L"Windows.Media.Protection.PlayReady.INDClientFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("3E53DD62-FEE8-451F-B0D4-F706CCA3E037"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("3E53DD62-FEE8-451F-B0D4-F706CCA3E037")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDClientFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDDownloadEngine * downloadEngine,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDStreamParser * streamParser,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDMessenger * pMessenger,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDClient * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDClientFactory=_uuidof(INDClientFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("4738D29F-C345-4649-8468-B8C5FC357190"), deprecated, contract] */
                    MIDL_INTERFACE("4738D29F-C345-4649-8468-B8C5FC357190")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDClosedCaptionDataReceivedEventArgs : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ClosedCaptionDataFormat(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::NDClosedCaptionFormat * ccForamt
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_PresentationTimestamp(
                            /* [retval, out] */__RPC__out INT64 * presentationTimestamp
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ClosedCaptionData(
                            /* [out] */__RPC__out UINT32 * __ccDataBytesSize,
                            /* [size_is(, *(__ccDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__ccDataBytesSize)) BYTE * * ccDataBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDClosedCaptionDataReceivedEventArgs=_uuidof(INDClosedCaptionDataReceivedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDCustomData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomData[] = L"Windows.Media.Protection.PlayReady.INDCustomData";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("F5CB0FDC-2D09-4F19-B5E1-76A0B3EE9267"), deprecated, contract] */
                    MIDL_INTERFACE("F5CB0FDC-2D09-4F19-B5E1-76A0B3EE9267")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDCustomData : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_CustomDataTypeID(
                            /* [out] */__RPC__out UINT32 * __customDataTypeIDBytesSize,
                            /* [size_is(, *(__customDataTypeIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__customDataTypeIDBytesSize)) BYTE * * customDataTypeIDBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_CustomData(
                            /* [out] */__RPC__out UINT32 * __customDataBytesSize,
                            /* [size_is(, *(__customDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__customDataBytesSize)) BYTE * * customDataBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDCustomData=_uuidof(INDCustomData);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDCustomDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDCustomData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomDataFactory[] = L"Windows.Media.Protection.PlayReady.INDCustomDataFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D65405AB-3424-4833-8C9A-AF5FDEB22872"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("D65405AB-3424-4833-8C9A-AF5FDEB22872")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDCustomDataFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */UINT32 __customDataTypeIDBytesSize,
                            /* [size_is(__customDataTypeIDBytesSize), in] */__RPC__in_ecount_full(__customDataTypeIDBytesSize) BYTE * customDataTypeIDBytes,
                            /* [in] */UINT32 __customDataBytesSize,
                            /* [size_is(__customDataBytesSize), in] */__RPC__in_ecount_full(__customDataBytesSize) BYTE * customDataBytes,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDCustomDataFactory=_uuidof(INDCustomDataFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDDownloadEngine
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngine[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngine";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("2D223D65-C4B6-4438-8D46-B96E6D0FB21F"), deprecated, contract] */
                    MIDL_INTERFACE("2D223D65-C4B6-4438-8D46-B96E6D0FB21F")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDDownloadEngine : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Open(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [in] */UINT32 __sessionIDBytesSize,
                            /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Pause(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Resume(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Close(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Seek(
                            /* [in] */ABI::Windows::Foundation::TimeSpan startPosition
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_CanSeek(
                            /* [retval, out] */__RPC__out boolean * canSeek
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BufferFullMinThresholdInSamples(
                            /* [retval, out] */__RPC__out UINT32 * bufferFullMinThreshold
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BufferFullMaxThresholdInSamples(
                            /* [retval, out] */__RPC__out UINT32 * bufferFullMaxThreshold
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Notifier(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDDownloadEngine=_uuidof(INDDownloadEngine);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D720B4D4-F4B8-4530-A809-9193A571E7FC"), deprecated, contract] */
                    MIDL_INTERFACE("D720B4D4-F4B8-4530-A809-9193A571E7FC")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDDownloadEngineNotifier : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnStreamOpened(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnPlayReadyObjectReceived(
                            /* [in] */UINT32 __dataBytesSize,
                            /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnContentIDReceived(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnDataReceived(
                            /* [in] */UINT32 __dataBytesSize,
                            /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes,
                            /* [in] */UINT32 bytesReceived
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnEndOfStream(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnNetworkError(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDDownloadEngineNotifier=_uuidof(INDDownloadEngineNotifier);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("1EE30A1A-11B2-4558-8865-E3A516922517"), deprecated, contract] */
                    MIDL_INTERFACE("1EE30A1A-11B2-4558-8865-E3A516922517")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDLicenseFetchCompletedEventArgs : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCustomData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * * customData
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDLicenseFetchCompletedEventArgs=_uuidof(INDLicenseFetchCompletedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("5498D33A-E686-4935-A567-7CA77AD20FA4"), deprecated, contract] */
                    MIDL_INTERFACE("5498D33A-E686-4935-A567-7CA77AD20FA4")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDLicenseFetchDescriptor : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ContentIDType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::NDContentIDType * contentIDType
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ContentID(
                            /* [out] */__RPC__out UINT32 * __contentIDBytesSize,
                            /* [size_is(, *(__contentIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentIDBytesSize)) BYTE * * contentIDBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_LicenseFetchChallengeCustomData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * * licenseFetchChallengeCustomData
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_LicenseFetchChallengeCustomData(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * licenseFetchChallengeCustomData
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDLicenseFetchDescriptor=_uuidof(INDLicenseFetchDescriptor);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D0031202-CFAC-4F00-AE6A-97AF80B848F2"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("D0031202-CFAC-4F00-AE6A-97AF80B848F2")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDLicenseFetchDescriptorFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::NDContentIDType contentIDType,
                            /* [in] */UINT32 __contentIDBytesSize,
                            /* [size_is(__contentIDBytesSize), in] */__RPC__in_ecount_full(__contentIDBytesSize) BYTE * contentIDBytes,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * licenseFetchChallengeCustomData,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDLicenseFetchDescriptorFactory=_uuidof(INDLicenseFetchDescriptorFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchResult[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("21D39698-AA62-45FF-A5FF-8037E5433825"), deprecated, contract] */
                    MIDL_INTERFACE("21D39698-AA62-45FF-A5FF-8037E5433825")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDLicenseFetchResult : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCustomData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * * customData
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDLicenseFetchResult=_uuidof(INDLicenseFetchResult);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDMessenger
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDMessenger[] = L"Windows.Media.Protection.PlayReady.INDMessenger";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D42DF95D-A75B-47BF-8249-BC83820DA38A"), deprecated, contract] */
                    MIDL_INTERFACE("D42DF95D-A75B-47BF-8249-BC83820DA38A")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDMessenger : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SendRegistrationRequestAsync(
                            /* [in] */UINT32 __sessionIDBytesSize,
                            /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                            /* [in] */UINT32 __challengeDataBytesSize,
                            /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SendProximityDetectionStartAsync(
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType,
                            /* [in] */UINT32 __transmitterChannelBytesSize,
                            /* [size_is(__transmitterChannelBytesSize), in] */__RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
                            /* [in] */UINT32 __sessionIDBytesSize,
                            /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                            /* [in] */UINT32 __challengeDataBytesSize,
                            /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SendProximityDetectionResponseAsync(
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::NDProximityDetectionType pdType,
                            /* [in] */UINT32 __transmitterChannelBytesSize,
                            /* [size_is(__transmitterChannelBytesSize), in] */__RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
                            /* [in] */UINT32 __sessionIDBytesSize,
                            /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                            /* [in] */UINT32 __responseDataBytesSize,
                            /* [size_is(__responseDataBytesSize), in] */__RPC__in_ecount_full(__responseDataBytesSize) BYTE * responseDataBytes,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SendLicenseFetchRequestAsync(
                            /* [in] */UINT32 __sessionIDBytesSize,
                            /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
                            /* [in] */UINT32 __challengeDataBytesSize,
                            /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDMessenger=_uuidof(INDMessenger);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("2A706328-DA25-4F8C-9EB7-5D0FC3658BCA"), deprecated, contract] */
                    MIDL_INTERFACE("2A706328-DA25-4F8C-9EB7-5D0FC3658BCA")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDProximityDetectionCompletedEventArgs : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ProximityDetectionRetryCount(
                            /* [retval, out] */__RPC__out UINT32 * retryCount
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDProximityDetectionCompletedEventArgs=_uuidof(INDProximityDetectionCompletedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("9E39B64D-AB5B-4905-ACDC-787A77C6374D"), deprecated, contract] */
                    MIDL_INTERFACE("9E39B64D-AB5B-4905-ACDC-787A77C6374D")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDRegistrationCompletedEventArgs : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCustomData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDCustomData * * customData
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TransmitterProperties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDTransmitterProperties * * transmitterProperties
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TransmitterCertificateAccepted(
                            /* [retval, out] */__RPC__out boolean * acceptpt
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TransmitterCertificateAccepted(
                            /* [in] */boolean accept
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDRegistrationCompletedEventArgs=_uuidof(INDRegistrationCompletedEventArgs);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDSendResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDSendResult[] = L"Windows.Media.Protection.PlayReady.INDSendResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("E3685517-A584-479D-90B7-D689C7BF7C80"), deprecated, contract] */
                    MIDL_INTERFACE("E3685517-A584-479D-90B7-D689C7BF7C80")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDSendResult : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                            /* [out] */__RPC__out UINT32 * __responseDataBytesSize,
                            /* [size_is(, *(__responseDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__responseDataBytesSize)) BYTE * * responseDataBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDSendResult=_uuidof(INDSendResult);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStartResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStartResult[] = L"Windows.Media.Protection.PlayReady.INDStartResult";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("79F6E96E-F50F-4015-8BA4-C2BC344EBD4E"), deprecated, contract] */
                    MIDL_INTERFACE("79F6E96E-F50F-4015-8BA4-C2BC344EBD4E")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDStartResult : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_MediaStreamSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Core::IMediaStreamSource * * mediaStreamSource
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDStartResult=_uuidof(INDStartResult);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStorageFileHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.INDStorageFileHelper";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D8F0BEF8-91D2-4D47-A3F9-EAFF4EDB729F"), deprecated, contract] */
                    MIDL_INTERFACE("D8F0BEF8-91D2-4D47-A3F9-EAFF4EDB729F")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDStorageFileHelper : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetFileURLs(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * fileURLs
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDStorageFileHelper=_uuidof(INDStorageFileHelper);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStreamParser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParser[] = L"Windows.Media.Protection.PlayReady.INDStreamParser";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("E0BAA198-9796-41C9-8695-59437E67E66A"), deprecated, contract] */
                    MIDL_INTERFACE("E0BAA198-9796-41C9-8695-59437E67E66A")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDStreamParser : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ParseData(
                            /* [in] */UINT32 __dataBytesSize,
                            /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetStreamInformation(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Core::IMediaStreamDescriptor * descriptor,
                            /* [out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::NDMediaStreamType * streamType,
                            /* [retval, out] */__RPC__out UINT32 * streamID
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE BeginOfStream(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE EndOfStream(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Notifier(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDStreamParserNotifier * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDStreamParser=_uuidof(INDStreamParser);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStreamParserNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.INDStreamParserNotifier";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("C167ACD0-2CE6-426C-ACE5-5E9275FEA715"), deprecated, contract] */
                    MIDL_INTERFACE("C167ACD0-2CE6-426C-ACE5-5E9275FEA715")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDStreamParserNotifier : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnContentIDReceived(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor * licenseFetchDescriptor
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnMediaStreamDescriptorCreated(
                            /* [in] */__RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * audioStreamDescriptors,
                            /* [in] */__RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * videoStreamDescriptors
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnSampleParsed(
                            /* [in] */UINT32 streamID,
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::NDMediaStreamType streamType,
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Core::IMediaStreamSample * streamSample,
                            /* [in] */INT64 pts,
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::NDClosedCaptionFormat ccFormat,
                            /* [in] */UINT32 __ccDataBytesSize,
                            /* [size_is(__ccDataBytesSize), in] */__RPC__in_ecount_full(__ccDataBytesSize) BYTE * ccDataBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE OnBeginSetupDecryptor(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Core::IMediaStreamDescriptor * descriptor,
                            /* [in] */GUID keyID,
                            /* [in] */UINT32 __proBytesSize,
                            /* [size_is(__proBytesSize), in] */__RPC__in_ecount_full(__proBytesSize) BYTE * proBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDStreamParserNotifier=_uuidof(INDStreamParserNotifier);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDTCPMessengerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDTCPMessenger
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory[] = L"Windows.Media.Protection.PlayReady.INDTCPMessengerFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("7DD85CFE-1B99-4F68-8F82-8177F7CEDF2B"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("7DD85CFE-1B99-4F68-8F82-8177F7CEDF2B")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDTCPMessengerFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in HSTRING remoteHostName,
                            /* [in] */UINT32 remoteHostPort,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::INDMessenger * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDTCPMessengerFactory=_uuidof(INDTCPMessengerFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDTransmitterProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTransmitterProperties[] = L"Windows.Media.Protection.PlayReady.INDTransmitterProperties";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("E536AF23-AC4F-4ADC-8C66-4FF7C2702DD6"), deprecated, contract] */
                    MIDL_INTERFACE("E536AF23-AC4F-4ADC-8C66-4FF7C2702DD6")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    INDTransmitterProperties : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_CertificateType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::NDCertificateType * type
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_PlatformIdentifier(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::NDCertificatePlatformID * identifier
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SupportedFeatures(
                            /* [out] */__RPC__out UINT32 * __featureSetsSize,
                            /* [size_is(, *(__featureSetsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__featureSetsSize)) ABI::Windows::Media::Protection::PlayReady::NDCertificateFeature * * featureSets
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SecurityLevel(
                            /* [retval, out] */__RPC__out UINT32 * level
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SecurityVersion(
                            /* [retval, out] */__RPC__out UINT32 * securityVersion
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationDate(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * expirationDate
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ClientID(
                            /* [out] */__RPC__out UINT32 * __clientIDBytesSize,
                            /* [size_is(, *(__clientIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__clientIDBytesSize)) BYTE * * clientIDBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ModelDigest(
                            /* [out] */__RPC__out UINT32 * __modelDigestBytesSize,
                            /* [size_is(, *(__modelDigestBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__modelDigestBytesSize)) BYTE * * modelDigestBytes
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ModelManufacturerName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * modelManufacturerName
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ModelName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * modelName
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ModelNumber(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * modelNumber
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INDTransmitterProperties=_uuidof(INDTransmitterProperties);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("9A438A6A-7F4C-452E-88BD-0148C6387A2C"), exclusiveto, contract] */
                    MIDL_INTERFACE("9A438A6A-7F4C-452E-88BD-0148C6387A2C")
                    IPlayReadyContentHeader : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyIdString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseAcquisitionUrl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseAcquisitionUserInterfaceUrl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainServiceId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncryptionType(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomAttributes(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecryptorSetup(
                            /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::PlayReady::PlayReadyDecryptorSetup * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSerializedHeader(
                            /* [out] */__RPC__out UINT32 * __headerBytesSize,
                            /* [size_is(, *(__headerBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__headerBytesSize)) BYTE * * headerBytes
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderWithEmbeddedUpdates(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyContentHeader=_uuidof(IPlayReadyContentHeader);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("359C79F4-2180-498C-965B-E754D875EAB2"), exclusiveto, contract] */
                    MIDL_INTERFACE("359C79F4-2180-498C-965B-E754D875EAB2")
                    IPlayReadyContentHeader2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyIds(
                            /* [out] */__RPC__out UINT32 * __contentKeyIdsSize,
                            /* [size_is(, *(__contentKeyIdsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentKeyIdsSize)) GUID * * contentKeyIds
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyIdStrings(
                            /* [out] */__RPC__out UINT32 * __contentKeyIdStringsSize,
                            /* [size_is(, *(__contentKeyIdStringsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentKeyIdStringsSize)) HSTRING * * contentKeyIdStrings
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyContentHeader2=_uuidof(IPlayReadyContentHeader2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("CB97C8FF-B758-4776-BF01-217A8B510B2C"), exclusiveto, contract] */
                    MIDL_INTERFACE("CB97C8FF-B758-4776-BF01-217A8B510B2C")
                    IPlayReadyContentHeaderFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromWindowsMediaDrmHeader(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
                            /* [size_is(__headerBytesSize), in] */__RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                            /* [in] */__RPC__in HSTRING customAttributes,
                            /* [in] */GUID domainServiceId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromComponents(
                            /* [in] */GUID contentKeyId,
                            /* [in] */__RPC__in HSTRING contentKeyIdString,
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                            /* [in] */__RPC__in HSTRING customAttributes,
                            /* [in] */GUID domainServiceId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromPlayReadyHeader(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
                            /* [size_is(__headerBytesSize), in] */__RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyContentHeaderFactory=_uuidof(IPlayReadyContentHeaderFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D1239CF5-AE6D-4778-97FD-6E3A2EEADBEB"), exclusiveto, contract] */
                    MIDL_INTERFACE("D1239CF5-AE6D-4778-97FD-6E3A2EEADBEB")
                    IPlayReadyContentHeaderFactory2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromComponents2(
                            /* [in] */UINT32 dwFlags,
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdsSize,
                            /* [size_is(__contentKeyIdsSize), in] */__RPC__in_ecount_full(__contentKeyIdsSize) GUID * contentKeyIds,
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdStringsSize,
                            /* [size_is(__contentKeyIdStringsSize), in] */__RPC__in_ecount_full(__contentKeyIdStringsSize) HSTRING * contentKeyIdStrings,
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUrl,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
                            /* [in] */__RPC__in HSTRING customAttributes,
                            /* [in] */GUID domainServiceId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyContentHeaderFactory2=_uuidof(IPlayReadyContentHeaderFactory2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentResolver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentResolver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentResolver";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("FBFD2523-906D-4982-A6B8-6849565A7CE8"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBFD2523-906D-4982-A6B8-6849565A7CE8")
                    IPlayReadyContentResolver : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE ServiceRequest(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest * * serviceRequest
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyContentResolver=_uuidof(IPlayReadyContentResolver);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomain";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("ADCC93AC-97E6-43EF-95E4-D7868F3B16A9"), contract] */
                    MIDL_INTERFACE("ADCC93AC-97E6-43EF-95E4-D7868F3B16A9")
                    IPlayReadyDomain : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccountId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Revision(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainJoinUrl(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyDomain=_uuidof(IPlayReadyDomain);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("4DF384EE-3121-4DF3-A5E8-D0C24C0500FC"), exclusiveto, contract] */
                    MIDL_INTERFACE("4DF384EE-3121-4DF3-A5E8-D0C24C0500FC")
                    IPlayReadyDomainIterableFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */GUID domainAccountId,
                            /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * * domainIterable
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyDomainIterableFactory=_uuidof(IPlayReadyDomainIterableFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("171B4A5A-405F-4739-B040-67B9F0C38758"), exclusiveto, contract] */
                    MIDL_INTERFACE("171B4A5A-405F-4739-B040-67B9F0C38758")
                    IPlayReadyDomainJoinServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainAccountId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainAccountId(
                            /* [in] */GUID value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainFriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainFriendlyName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainServiceId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainServiceId(
                            /* [in] */GUID value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyDomainJoinServiceRequest=_uuidof(IPlayReadyDomainJoinServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("062D58BE-97AD-4917-AA03-46D4C252D464"), exclusiveto, contract] */
                    MIDL_INTERFACE("062D58BE-97AD-4917-AA03-46D4C252D464")
                    IPlayReadyDomainLeaveServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainAccountId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainAccountId(
                            /* [in] */GUID value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainServiceId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainServiceId(
                            /* [in] */GUID value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyDomainLeaveServiceRequest=_uuidof(IPlayReadyDomainLeaveServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("24446B8E-10B9-4530-B25B-901A8029A9B2"), exclusiveto, contract] */
                    MIDL_INTERFACE("24446B8E-10B9-4530-B25B-901A8029A9B2")
                    IPlayReadyITADataGenerator : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GenerateData(
                            /* [in] */GUID guidCPSystemId,
                            /* [in] */UINT32 countOfStreams,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration,
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::PlayReadyITADataFormat format,
                            /* [out] */__RPC__out UINT32 * __dataBytesSize,
                            /* [size_is(, *(__dataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__dataBytesSize)) BYTE * * dataBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyITADataGenerator=_uuidof(IPlayReadyITADataGenerator);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("21F5A86B-008C-4611-AB2F-AAA6C69F0E24"), exclusiveto, contract] */
                    MIDL_INTERFACE("21F5A86B-008C-4611-AB2F-AAA6C69F0E24")
                    IPlayReadyIndividualizationServiceRequest : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyIndividualizationServiceRequest=_uuidof(IPlayReadyIndividualizationServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("EE474C4E-FA3C-414D-A9F2-3FFC1EF832D4"), contract] */
                    MIDL_INTERFACE("EE474C4E-FA3C-414D-A9F2-3FFC1EF832D4")
                    IPlayReadyLicense : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullyEvaluated(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UsableForPlay(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationDate(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpireAfterFirstPlay(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainAccountID(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChainDepth(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetKIDAtChainDepth(
                            /* [in] */UINT32 chainDepth,
                            /* [retval, out] */__RPC__out GUID * kid
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicense=_uuidof(IPlayReadyLicense);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicense2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicense
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("30F4E7A7-D8E3-48A0-BCDA-FF9F40530436"), exclusiveto, contract] */
                    MIDL_INTERFACE("30F4E7A7-D8E3-48A0-BCDA-FF9F40530436")
                    IPlayReadyLicense2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecureStopId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecurityLevel(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InMemoryOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpiresInRealTime(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicense2=_uuidof(IPlayReadyLicense2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("5D85FF45-3E9F-4F48-93E1-9530C8D58C3E"), contract] */
                    MIDL_INTERFACE("5D85FF45-3E9F-4F48-93E1-9530C8D58C3E")
                    IPlayReadyLicenseAcquisitionServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentHeader(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentHeader(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainServiceId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DomainServiceId(
                            /* [in] */GUID value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseAcquisitionServiceRequest=_uuidof(IPlayReadyLicenseAcquisitionServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("B7FA5EB5-FE0C-B225-BC60-5A9EDD32CEB5"), exclusiveto, contract] */
                    MIDL_INTERFACE("B7FA5EB5-FE0C-B225-BC60-5A9EDD32CEB5")
                    IPlayReadyLicenseAcquisitionServiceRequest2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseAcquisitionServiceRequest2=_uuidof(IPlayReadyLicenseAcquisitionServiceRequest2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("394E5F4D-7F75-430D-B2E7-7F75F34B2D75"), exclusiveto, contract] */
                    MIDL_INTERFACE("394E5F4D-7F75-430D-B2E7-7F75F34B2D75")
                    IPlayReadyLicenseAcquisitionServiceRequest3 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateLicenseIterable(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader,
                            /* [in] */boolean fullyEvaluated,
                            /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseAcquisitionServiceRequest3=_uuidof(IPlayReadyLicenseAcquisitionServiceRequest3);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("D4179F08-0837-4978-8E68-BE4293C8D7A6"), exclusiveto, contract] */
                    MIDL_INTERFACE("D4179F08-0837-4978-8E68-BE4293C8D7A6")
                    IPlayReadyLicenseIterableFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader,
                            /* [in] */boolean fullyEvaluated,
                            /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseIterableFactory=_uuidof(IPlayReadyLicenseIterableFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("AAEB2141-0957-4405-B892-8BF3EC5DADD9"), exclusiveto, contract] */
                    MIDL_INTERFACE("AAEB2141-0957-4405-B892-8BF3EC5DADD9")
                    IPlayReadyLicenseManagement : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE DeleteLicenses(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseManagement=_uuidof(IPlayReadyLicenseManagement);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("A1723A39-87FA-4FDD-ABBB-A9720E845259"), contract] */
                    MIDL_INTERFACE("A1723A39-87FA-4FDD-ABBB-A9720E845259")
                    IPlayReadyLicenseSession : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateLAServiceRequest(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest * * serviceRequest
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ConfigureMediaProtectionManager(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IMediaProtectionManager * mpm
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseSession=_uuidof(IPlayReadyLicenseSession);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("4909BE3A-3AED-4656-8AD7-EE0FD7799510"), contract] */
                    MIDL_INTERFACE("4909BE3A-3AED-4656-8AD7-EE0FD7799510")
                    IPlayReadyLicenseSession2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateLicenseIterable(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader * contentHeader,
                            /* [in] */boolean fullyEvaluated,
                            /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * licenseIterable
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseSession2=_uuidof(IPlayReadyLicenseSession2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("62492699-6527-429E-98BE-48D798AC2739"), exclusiveto, contract] */
                    MIDL_INTERFACE("62492699-6527-429E-98BE-48D798AC2739")
                    IPlayReadyLicenseSessionFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * configuration,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyLicenseSessionFactory=_uuidof(IPlayReadyLicenseSessionFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("C12B231C-0ECD-4F11-A185-1E24A4A67FB7"), exclusiveto, contract] */
                    MIDL_INTERFACE("C12B231C-0ECD-4F11-A185-1E24A4A67FB7")
                    IPlayReadyMeteringReportServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MeteringCertificate(
                            /* [out] */__RPC__out UINT32 * __meteringCertBytesSize,
                            /* [size_is(, *(__meteringCertBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__meteringCertBytesSize)) BYTE * * meteringCertBytes
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MeteringCertificate(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __meteringCertBytesSize,
                            /* [size_is(__meteringCertBytesSize), in] */__RPC__in_ecount_full(__meteringCertBytesSize) BYTE * meteringCertBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyMeteringReportServiceRequest=_uuidof(IPlayReadyMeteringReportServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("543D66AC-FAF0-4560-84A5-0E4ACEC939E4"), exclusiveto, contract] */
                    MIDL_INTERFACE("543D66AC-FAF0-4560-84A5-0E4ACEC939E4")
                    IPlayReadyRevocationServiceRequest : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyRevocationServiceRequest=_uuidof(IPlayReadyRevocationServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("5F1F0165-4214-4D9E-81EB-E89F9D294AEE"), exclusiveto, contract] */
                    MIDL_INTERFACE("5F1F0165-4214-4D9E-81EB-E89F9D294AEE")
                    IPlayReadySecureStopIterableFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                            /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                            /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadySecureStopIterableFactory=_uuidof(IPlayReadySecureStopIterableFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("B5501EE5-01BF-4401-9677-05630A6A4CC8"), contract] */
                    MIDL_INTERFACE("B5501EE5-01BF-4401-9677-05630A6A4CC8")
                    IPlayReadySecureStopServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionID(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdateTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stopped(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublisherCertificate(
                            /* [out] */__RPC__out UINT32 * __publisherCertBytesSize,
                            /* [size_is(, *(__publisherCertBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__publisherCertBytesSize)) BYTE * * publisherCertBytes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadySecureStopServiceRequest=_uuidof(IPlayReadySecureStopServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("0E448AC9-E67E-494E-9F49-6285438C76CF"), exclusiveto, contract] */
                    MIDL_INTERFACE("0E448AC9-E67E-494E-9F49-6285438C76CF")
                    IPlayReadySecureStopServiceRequestFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                            /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest * * instance
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromSessionID(
                            /* [in] */GUID sessionID,
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
                            /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadySecureStopServiceRequestFactory=_uuidof(IPlayReadySecureStopServiceRequestFactory);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("8BAD2836-A703-45A6-A180-76F3565AA725"), contract] */
                    MIDL_INTERFACE("8BAD2836-A703-45A6-A180-76F3565AA725")
                    IPlayReadyServiceRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Uri(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResponseCustomData(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChallengeCustomData(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChallengeCustomData(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BeginServiceRequest(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NextServiceRequest(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadyServiceRequest * * serviceRequest
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GenerateManualEnablingChallenge(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage * * challengeMessage
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessManualEnablingResponse(
                            /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __responseBytesSize,
                            /* [size_is(__responseBytesSize), in] */__RPC__in_ecount_full(__responseBytesSize) BYTE * responseBytes,
                            /* [retval, out] */__RPC__out HRESULT * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyServiceRequest=_uuidof(IPlayReadyServiceRequest);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySoapMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySoapMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.IPlayReadySoapMessage";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("B659FCB5-CE41-41BA-8A0D-61DF5FFFA139"), exclusiveto, contract] */
                    MIDL_INTERFACE("B659FCB5-CE41-41BA-8A0D-61DF5FFFA139")
                    IPlayReadySoapMessage : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetMessageBody(
                            /* [out] */__RPC__out UINT32 * __messageBodyBytesSize,
                            /* [size_is(, *(__messageBodyBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__messageBodyBytesSize)) BYTE * * messageBodyBytes
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MessageHeaders(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * messageUri
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadySoapMessage=_uuidof(IPlayReadySoapMessage);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("5E69C00D-247C-469A-8F31-5C1A1571D9C6"), exclusiveto, contract] */
                    MIDL_INTERFACE("5E69C00D-247C-469A-8F31-5C1A1571D9C6")
                    IPlayReadyStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainJoinServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DomainLeaveServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndividualizationServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseAcquirerServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MeteringReportServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RevocationServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaProtectionSystemId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlayReadySecurityVersion(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyStatics=_uuidof(IPlayReadyStatics);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("1F8D6A92-5F9A-423E-9466-B33969AF7A3D"), exclusiveto, contract] */
                    MIDL_INTERFACE("1F8D6A92-5F9A-423E-9466-B33969AF7A3D")
                    IPlayReadyStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlayReadyCertificateSecurityLevel(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyStatics2=_uuidof(IPlayReadyStatics2);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics3";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("3FA33F71-2DD3-4BED-AE49-F7148E63E710"), exclusiveto, contract] */
                    MIDL_INTERFACE("3FA33F71-2DD3-4BED-AE49-F7148E63E710")
                    IPlayReadyStatics3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecureStopServiceRequestType(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CheckSupportedHardware(
                            /* [in] */ABI::Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures hwdrmFeature,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyStatics3=_uuidof(IPlayReadyStatics3);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics3
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics4[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics4";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                namespace PlayReady {
                    /* [object, uuid("50A91300-D824-4231-9D5E-78EF8844C7D7"), exclusiveto, contract] */
                    MIDL_INTERFACE("50A91300-D824-4231-9D5E-78EF8844C7D7")
                    IPlayReadyStatics4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputTrustAuthorityToCreate(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionSystemId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlayReadyStatics4=_uuidof(IPlayReadyStatics4);
                    
                } /* Windows */
            } /* Media */
        } /* Protection */
    } /* PlayReady */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDClient ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDClient_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDClient_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDClient[] = L"Windows.Media.Protection.PlayReady.NDClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDCustomData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDCustomDataFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDCustomData ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDCustomData_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDCustomData_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDCustomData[] = L"Windows.Media.Protection.PlayReady.NDCustomData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDStorageFileHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDStorageFileHelper ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStorageFileHelper_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStorageFileHelper_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.NDStorageFileHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDStreamParserNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDStreamParserNotifier ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStreamParserNotifier_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStreamParserNotifier_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.NDStreamParserNotifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDTCPMessenger
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDTCPMessengerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDMessenger ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDTCPMessenger_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDTCPMessenger_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDTCPMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDTCPMessenger[] = L"Windows.Media.Protection.PlayReady.NDTCPMessenger";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyContentHeader ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentHeader_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentHeader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentHeader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyContentResolver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyContentResolver interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentResolver_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentResolver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentResolver";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomain_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomain";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicense2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicense_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicense_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicense";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySoapMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadySoapMessage ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySoapMessage_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySoapMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.PlayReadySoapMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics4 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyStatics_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyStatics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.PlayReadyStatics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;

typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl;

interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain;

typedef  struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl;

interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomainVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;

typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl;

interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense;

typedef  struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl;

interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;

typedef struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl;

interface __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest;

typedef  struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl;

interface __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef  struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;

typedef struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;

interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef  struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;

typedef struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;

interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;

#endif // ____x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat;





























































































/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificateFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDCertificateFeature is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature
{
    NDCertificateFeature_Transmitter = 1,
    NDCertificateFeature_Receiver = 2,
    NDCertificateFeature_SharedCertificate = 3,
    NDCertificateFeature_SecureClock = 4,
    NDCertificateFeature_AntiRollBackClock = 5,
    NDCertificateFeature_CRLS = 9,
    NDCertificateFeature_PlayReady3Features = 13,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificatePlatformID
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDCertificatePlatformID is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID
{
    NDCertificatePlatformID_Windows = 0,
    NDCertificatePlatformID_OSX = 1,
    NDCertificatePlatformID_WindowsOnARM = 2,
    NDCertificatePlatformID_WindowsMobile7 = 5,
    NDCertificatePlatformID_iOSOnARM = 6,
    NDCertificatePlatformID_XBoxOnPPC = 7,
    NDCertificatePlatformID_WindowsPhone8OnARM = 8,
    NDCertificatePlatformID_WindowsPhone8OnX86 = 9,
    NDCertificatePlatformID_XboxOne = 10,
    NDCertificatePlatformID_AndroidOnARM = 11,
    NDCertificatePlatformID_WindowsPhone81OnARM = 12,
    NDCertificatePlatformID_WindowsPhone81OnX86 = 13,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDCertificateType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDCertificateType is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType
{
    NDCertificateType_Unknown = 0,
    NDCertificateType_PC = 1,
    NDCertificateType_Device = 2,
    NDCertificateType_Domain = 3,
    NDCertificateType_Issuer = 4,
    NDCertificateType_CrlSigner = 5,
    NDCertificateType_Service = 6,
    NDCertificateType_Silverlight = 7,
    NDCertificateType_Application = 8,
    NDCertificateType_Metering = 9,
    NDCertificateType_KeyFileSigner = 10,
    NDCertificateType_Server = 11,
    NDCertificateType_LicenseSigner = 12,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDClosedCaptionFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDClosedCaptionFormat is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat
{
    NDClosedCaptionFormat_ATSC = 0,
    NDClosedCaptionFormat_SCTE20 = 1,
    NDClosedCaptionFormat_Unknown = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDContentIDType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDContentIDType is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType
{
    NDContentIDType_KeyID = 1,
    NDContentIDType_PlayReadyObject = 2,
    NDContentIDType_Custom = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDMediaStreamType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDMediaStreamType is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType
{
    NDMediaStreamType_Audio = 1,
    NDMediaStreamType_Video = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDProximityDetectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDProximityDetectionType is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType
{
    NDProximityDetectionType_UDP = 1,
    NDProximityDetectionType_TCP = 2,
    NDProximityDetectionType_TransportAgnostic = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.NDStartAsyncOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDStartAsyncOptions is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDStartAsyncOptions
{
    NDStartAsyncOptions_MutualAuthentication = 1,
    NDStartAsyncOptions_WaitForLicenseDescriptor = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyDecryptorSetup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup
{
    PlayReadyDecryptorSetup_Uninitialized = 0,
    PlayReadyDecryptorSetup_OnDemand = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyEncryptionAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm
{
    PlayReadyEncryptionAlgorithm_Unprotected = 0,
    PlayReadyEncryptionAlgorithm_Aes128Ctr = 1,
    PlayReadyEncryptionAlgorithm_Cocktail = 4,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    PlayReadyEncryptionAlgorithm_Aes128Cbc = 5,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    PlayReadyEncryptionAlgorithm_Unspecified = 65535,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    PlayReadyEncryptionAlgorithm_Uninitialized = 2147483647,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyHardwareDRMFeatures
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures
{
    PlayReadyHardwareDRMFeatures_HardwareDRM = 1,
    PlayReadyHardwareDRMFeatures_HEVC = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    PlayReadyHardwareDRMFeatures_Aes128Cbc = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.PlayReady.PlayReadyITADataFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat
{
    PlayReadyITADataFormat_SerializedProperties = 0,
    PlayReadyITADataFormat_SerializedProperties_WithContentProtectionWrapper = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClient[] = L"Windows.Media.Protection.PlayReady.INDClient";
/* [object, uuid("3BD6781B-61B8-46E2-99A5-8ABCB6B9F7D6"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_RegistrationCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDRegistrationCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_RegistrationCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ProximityDetectionCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDProximityDetectionCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ProximityDetectionCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_LicenseFetchCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_LicenseFetchCompleted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ReRegistrationNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ReRegistrationNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventadd, deprecated] */HRESULT ( STDMETHODCALLTYPE *add_ClosedCaptionDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CPlayReady__CNDClient_Windows__CMedia__CProtection__CPlayReady__CINDClosedCaptionDataReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [eventremove, deprecated] */HRESULT ( STDMETHODCALLTYPE *remove_ClosedCaptionDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */EventRegistrationToken token
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contentUrl,
        /* [in] */UINT32 startAsyncOptions,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * registrationCustomData,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDStartResult * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *LicenseFetchAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDLicenseFetchResult * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ReRegistrationAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * registrationCustomData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_add_RegistrationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_RegistrationCompleted(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_remove_RegistrationCompleted(This,token) \
    ( (This)->lpVtbl->remove_RegistrationCompleted(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_add_ProximityDetectionCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ProximityDetectionCompleted(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_remove_ProximityDetectionCompleted(This,token) \
    ( (This)->lpVtbl->remove_ProximityDetectionCompleted(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_add_LicenseFetchCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_LicenseFetchCompleted(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_remove_LicenseFetchCompleted(This,token) \
    ( (This)->lpVtbl->remove_LicenseFetchCompleted(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_add_ReRegistrationNeeded(This,handler,token) \
    ( (This)->lpVtbl->add_ReRegistrationNeeded(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_remove_ReRegistrationNeeded(This,token) \
    ( (This)->lpVtbl->remove_ReRegistrationNeeded(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_add_ClosedCaptionDataReceived(This,handler,token) \
    ( (This)->lpVtbl->add_ClosedCaptionDataReceived(This,handler,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_remove_ClosedCaptionDataReceived(This,token) \
    ( (This)->lpVtbl->remove_ClosedCaptionDataReceived(This,token) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_StartAsync(This,contentUrl,startAsyncOptions,registrationCustomData,licenseFetchDescriptor,result) \
    ( (This)->lpVtbl->StartAsync(This,contentUrl,startAsyncOptions,registrationCustomData,licenseFetchDescriptor,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_LicenseFetchAsync(This,licenseFetchDescriptor,result) \
    ( (This)->lpVtbl->LicenseFetchAsync(This,licenseFetchDescriptor,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_ReRegistrationAsync(This,registrationCustomData,result) \
    ( (This)->lpVtbl->ReRegistrationAsync(This,registrationCustomData,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_Close(This) \
    ( (This)->lpVtbl->Close(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClientFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClientFactory[] = L"Windows.Media.Protection.PlayReady.INDClientFactory";
/* [object, uuid("3E53DD62-FEE8-451F-B0D4-F706CCA3E037"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * downloadEngine,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * streamParser,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * pMessenger,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClient * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClientFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_CreateInstance(This,downloadEngine,streamParser,pMessenger,instance) \
    ( (This)->lpVtbl->CreateInstance(This,downloadEngine,streamParser,pMessenger,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClientFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDClosedCaptionDataReceivedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDClosedCaptionDataReceivedEventArgs";
/* [object, uuid("4738D29F-C345-4649-8468-B8C5FC357190"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ClosedCaptionDataFormat )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat * ccForamt
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_PresentationTimestamp )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
        /* [retval, out] */__RPC__out INT64 * presentationTimestamp
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ClosedCaptionData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs * This,
        /* [out] */__RPC__out UINT32 * __ccDataBytesSize,
        /* [size_is(, *(__ccDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__ccDataBytesSize)) BYTE * * ccDataBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_get_ClosedCaptionDataFormat(This,ccForamt) \
    ( (This)->lpVtbl->get_ClosedCaptionDataFormat(This,ccForamt) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_get_PresentationTimestamp(This,presentationTimestamp) \
    ( (This)->lpVtbl->get_PresentationTimestamp(This,presentationTimestamp) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDClosedCaptionDataReceivedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_get_ClosedCaptionData(This,__ccDataBytesSize,ccDataBytes) \
    ( (This)->lpVtbl->get_ClosedCaptionData(This,__ccDataBytesSize,ccDataBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDClosedCaptionDataReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDCustomData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomData[] = L"Windows.Media.Protection.PlayReady.INDCustomData";
/* [object, uuid("F5CB0FDC-2D09-4F19-B5E1-76A0B3EE9267"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_CustomDataTypeID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
        /* [out] */__RPC__out UINT32 * __customDataTypeIDBytesSize,
        /* [size_is(, *(__customDataTypeIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__customDataTypeIDBytesSize)) BYTE * * customDataTypeIDBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_CustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * This,
        /* [out] */__RPC__out UINT32 * __customDataBytesSize,
        /* [size_is(, *(__customDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__customDataBytesSize)) BYTE * * customDataBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_get_CustomDataTypeID(This,__customDataTypeIDBytesSize,customDataTypeIDBytes) \
    ( (This)->lpVtbl->get_CustomDataTypeID(This,__customDataTypeIDBytesSize,customDataTypeIDBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_get_CustomData(This,__customDataBytesSize,customDataBytes) \
    ( (This)->lpVtbl->get_CustomData(This,__customDataBytesSize,customDataBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDCustomDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDCustomData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDCustomDataFactory[] = L"Windows.Media.Protection.PlayReady.INDCustomDataFactory";
/* [object, uuid("D65405AB-3424-4833-8C9A-AF5FDEB22872"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory * This,
        /* [in] */UINT32 __customDataTypeIDBytesSize,
        /* [size_is(__customDataTypeIDBytesSize), in] */__RPC__in_ecount_full(__customDataTypeIDBytesSize) BYTE * customDataTypeIDBytes,
        /* [in] */UINT32 __customDataBytesSize,
        /* [size_is(__customDataBytesSize), in] */__RPC__in_ecount_full(__customDataBytesSize) BYTE * customDataBytes,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDCustomDataFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_CreateInstance(This,__customDataTypeIDBytesSize,customDataTypeIDBytes,__customDataBytesSize,customDataBytes,instance) \
    ( (This)->lpVtbl->CreateInstance(This,__customDataTypeIDBytesSize,customDataTypeIDBytes,__customDataBytesSize,customDataBytes,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDDownloadEngine
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngine[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngine";
/* [object, uuid("2D223D65-C4B6-4438-8D46-B96E6D0FB21F"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Open )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */UINT32 __sessionIDBytesSize,
        /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Seek )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan startPosition
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_CanSeek )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [retval, out] */__RPC__out boolean * canSeek
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BufferFullMinThresholdInSamples )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [retval, out] */__RPC__out UINT32 * bufferFullMinThreshold
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BufferFullMaxThresholdInSamples )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [retval, out] */__RPC__out UINT32 * bufferFullMaxThreshold
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Notifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Open(This,uri,__sessionIDBytesSize,sessionIDBytes) \
    ( (This)->lpVtbl->Open(This,uri,__sessionIDBytesSize,sessionIDBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Pause(This) \
    ( (This)->lpVtbl->Pause(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Resume(This) \
    ( (This)->lpVtbl->Resume(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Close(This) \
    ( (This)->lpVtbl->Close(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_Seek(This,startPosition) \
    ( (This)->lpVtbl->Seek(This,startPosition) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_get_CanSeek(This,canSeek) \
    ( (This)->lpVtbl->get_CanSeek(This,canSeek) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_get_BufferFullMinThresholdInSamples(This,bufferFullMinThreshold) \
    ( (This)->lpVtbl->get_BufferFullMinThresholdInSamples(This,bufferFullMinThreshold) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_get_BufferFullMaxThresholdInSamples(This,bufferFullMaxThreshold) \
    ( (This)->lpVtbl->get_BufferFullMaxThresholdInSamples(This,bufferFullMaxThreshold) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngine is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_get_Notifier(This,instance) \
    ( (This)->lpVtbl->get_Notifier(This,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngine_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier";
/* [object, uuid("D720B4D4-F4B8-4530-A809-9193A571E7FC"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnStreamOpened )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnPlayReadyObjectReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
        /* [in] */UINT32 __dataBytesSize,
        /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnContentIDReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnDataReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This,
        /* [in] */UINT32 __dataBytesSize,
        /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes,
        /* [in] */UINT32 bytesReceived
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnEndOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnNetworkError )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnStreamOpened(This) \
    ( (This)->lpVtbl->OnStreamOpened(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnPlayReadyObjectReceived(This,__dataBytesSize,dataBytes) \
    ( (This)->lpVtbl->OnPlayReadyObjectReceived(This,__dataBytesSize,dataBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnContentIDReceived(This,licenseFetchDescriptor) \
    ( (This)->lpVtbl->OnContentIDReceived(This,licenseFetchDescriptor) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnDataReceived(This,__dataBytesSize,dataBytes,bytesReceived) \
    ( (This)->lpVtbl->OnDataReceived(This,__dataBytesSize,dataBytes,bytesReceived) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnEndOfStream(This) \
    ( (This)->lpVtbl->OnEndOfStream(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_OnNetworkError(This) \
    ( (This)->lpVtbl->OnNetworkError(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDDownloadEngineNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchCompletedEventArgs";
/* [object, uuid("1EE30A1A-11B2-4558-8865-E3A516922517"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_get_ResponseCustomData(This,customData) \
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor";
/* [object, uuid("5498D33A-E686-4935-A567-7CA77AD20FA4"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ContentIDType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType * contentIDType
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ContentID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
        /* [out] */__RPC__out UINT32 * __contentIDBytesSize,
        /* [size_is(, *(__contentIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentIDBytesSize)) BYTE * * contentIDBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_LicenseFetchChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * licenseFetchChallengeCustomData
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_LicenseFetchChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * licenseFetchChallengeCustomData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_get_ContentIDType(This,contentIDType) \
    ( (This)->lpVtbl->get_ContentIDType(This,contentIDType) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_get_ContentID(This,__contentIDBytesSize,contentIDBytes) \
    ( (This)->lpVtbl->get_ContentID(This,__contentIDBytesSize,contentIDBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_get_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) \
    ( (This)->lpVtbl->get_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_put_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) \
    ( (This)->lpVtbl->put_LicenseFetchChallengeCustomData(This,licenseFetchChallengeCustomData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchDescriptorFactory[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory";
/* [object, uuid("D0031202-CFAC-4F00-AE6A-97AF80B848F2"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDContentIDType contentIDType,
        /* [in] */UINT32 __contentIDBytesSize,
        /* [size_is(__contentIDBytesSize), in] */__RPC__in_ecount_full(__contentIDBytesSize) BYTE * contentIDBytes,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * licenseFetchChallengeCustomData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchDescriptorFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_CreateInstance(This,contentIDType,__contentIDBytesSize,contentIDBytes,licenseFetchChallengeCustomData,instance) \
    ( (This)->lpVtbl->CreateInstance(This,contentIDType,__contentIDBytesSize,contentIDBytes,licenseFetchChallengeCustomData,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDLicenseFetchResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDLicenseFetchResult[] = L"Windows.Media.Protection.PlayReady.INDLicenseFetchResult";
/* [object, uuid("21D39698-AA62-45FF-A5FF-8037E5433825"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDLicenseFetchResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_get_ResponseCustomData(This,customData) \
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDMessenger
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDMessenger[] = L"Windows.Media.Protection.PlayReady.INDMessenger";
/* [object, uuid("D42DF95D-A75B-47BF-8249-BC83820DA38A"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SendRegistrationRequestAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
        /* [in] */UINT32 __sessionIDBytesSize,
        /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
        /* [in] */UINT32 __challengeDataBytesSize,
        /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SendProximityDetectionStartAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType pdType,
        /* [in] */UINT32 __transmitterChannelBytesSize,
        /* [size_is(__transmitterChannelBytesSize), in] */__RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
        /* [in] */UINT32 __sessionIDBytesSize,
        /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
        /* [in] */UINT32 __challengeDataBytesSize,
        /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SendProximityDetectionResponseAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDProximityDetectionType pdType,
        /* [in] */UINT32 __transmitterChannelBytesSize,
        /* [size_is(__transmitterChannelBytesSize), in] */__RPC__in_ecount_full(__transmitterChannelBytesSize) BYTE * transmitterChannelBytes,
        /* [in] */UINT32 __sessionIDBytesSize,
        /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
        /* [in] */UINT32 __responseDataBytesSize,
        /* [size_is(__responseDataBytesSize), in] */__RPC__in_ecount_full(__responseDataBytesSize) BYTE * responseDataBytes,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SendLicenseFetchRequestAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * This,
        /* [in] */UINT32 __sessionIDBytesSize,
        /* [size_is(__sessionIDBytesSize), in] */__RPC__in_ecount_full(__sessionIDBytesSize) BYTE * sessionIDBytes,
        /* [in] */UINT32 __challengeDataBytesSize,
        /* [size_is(__challengeDataBytesSize), in] */__RPC__in_ecount_full(__challengeDataBytesSize) BYTE * challengeDataBytes,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CPlayReady__CINDSendResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessengerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_SendRegistrationRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) \
    ( (This)->lpVtbl->SendRegistrationRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_SendProximityDetectionStartAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) \
    ( (This)->lpVtbl->SendProximityDetectionStartAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_SendProximityDetectionResponseAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__responseDataBytesSize,responseDataBytes,result) \
    ( (This)->lpVtbl->SendProximityDetectionResponseAsync(This,pdType,__transmitterChannelBytesSize,transmitterChannelBytes,__sessionIDBytesSize,sessionIDBytes,__responseDataBytesSize,responseDataBytes,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_SendLicenseFetchRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) \
    ( (This)->lpVtbl->SendLicenseFetchRequestAsync(This,__sessionIDBytesSize,sessionIDBytes,__challengeDataBytesSize,challengeDataBytes,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDProximityDetectionCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDProximityDetectionCompletedEventArgs";
/* [object, uuid("2A706328-DA25-4F8C-9EB7-5D0FC3658BCA"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ProximityDetectionRetryCount )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * retryCount
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDProximityDetectionCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_get_ProximityDetectionRetryCount(This,retryCount) \
    ( (This)->lpVtbl->get_ProximityDetectionRetryCount(This,retryCount) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDProximityDetectionCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDRegistrationCompletedEventArgs[] = L"Windows.Media.Protection.PlayReady.INDRegistrationCompletedEventArgs";
/* [object, uuid("9E39B64D-AB5B-4905-ACDC-787A77C6374D"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDCustomData * * customData
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TransmitterProperties )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * * transmitterProperties
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TransmitterCertificateAccepted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * acceptpt
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TransmitterCertificateAccepted )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs * This,
        /* [in] */boolean accept
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_get_ResponseCustomData(This,customData) \
    ( (This)->lpVtbl->get_ResponseCustomData(This,customData) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_get_TransmitterProperties(This,transmitterProperties) \
    ( (This)->lpVtbl->get_TransmitterProperties(This,transmitterProperties) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_get_TransmitterCertificateAccepted(This,acceptpt) \
    ( (This)->lpVtbl->get_TransmitterCertificateAccepted(This,acceptpt) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDRegistrationCompletedEventArgs is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_put_TransmitterCertificateAccepted(This,accept) \
    ( (This)->lpVtbl->put_TransmitterCertificateAccepted(This,accept) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDRegistrationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDSendResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDSendResult[] = L"Windows.Media.Protection.PlayReady.INDSendResult";
/* [object, uuid("E3685517-A584-479D-90B7-D689C7BF7C80"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult * This,
        /* [out] */__RPC__out UINT32 * __responseDataBytesSize,
        /* [size_is(, *(__responseDataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__responseDataBytesSize)) BYTE * * responseDataBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDSendResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_get_Response(This,__responseDataBytesSize,responseDataBytes) \
    ( (This)->lpVtbl->get_Response(This,__responseDataBytesSize,responseDataBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDSendResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStartResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStartResult[] = L"Windows.Media.Protection.PlayReady.INDStartResult";
/* [object, uuid("79F6E96E-F50F-4015-8BA4-C2BC344EBD4E"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_MediaStreamSource )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * mediaStreamSource
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStartResult is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_get_MediaStreamSource(This,mediaStreamSource) \
    ( (This)->lpVtbl->get_MediaStreamSource(This,mediaStreamSource) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStartResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStorageFileHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.INDStorageFileHelper";
/* [object, uuid("D8F0BEF8-91D2-4D47-A3F9-EAFF4EDB729F"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetFileURLs )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * fileURLs
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_GetFileURLs(This,file,fileURLs) \
    ( (This)->lpVtbl->GetFileURLs(This,file,fileURLs) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStorageFileHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStreamParser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParser[] = L"Windows.Media.Protection.PlayReady.INDStreamParser";
/* [object, uuid("E0BAA198-9796-41C9-8695-59437E67E66A"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ParseData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
        /* [in] */UINT32 __dataBytesSize,
        /* [size_is(__dataBytesSize), in] */__RPC__in_ecount_full(__dataBytesSize) BYTE * dataBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetStreamInformation )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
        /* [out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType * streamType,
        /* [retval, out] */__RPC__out UINT32 * streamID
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *BeginOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *EndOfStream )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Notifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_ParseData(This,__dataBytesSize,dataBytes) \
    ( (This)->lpVtbl->ParseData(This,__dataBytesSize,dataBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_GetStreamInformation(This,descriptor,streamType,streamID) \
    ( (This)->lpVtbl->GetStreamInformation(This,descriptor,streamType,streamID) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_BeginOfStream(This) \
    ( (This)->lpVtbl->BeginOfStream(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_EndOfStream(This) \
    ( (This)->lpVtbl->EndOfStream(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParser is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_get_Notifier(This,instance) \
    ( (This)->lpVtbl->get_Notifier(This,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDStreamParserNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.INDStreamParserNotifier";
/* [object, uuid("C167ACD0-2CE6-426C-ACE5-5E9275FEA715"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnContentIDReceived )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDLicenseFetchDescriptor * licenseFetchDescriptor
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnMediaStreamDescriptorCreated )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * audioStreamDescriptors,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * videoStreamDescriptors
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnSampleParsed )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
        /* [in] */UINT32 streamID,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDMediaStreamType streamType,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSample * streamSample,
        /* [in] */INT64 pts,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDClosedCaptionFormat ccFormat,
        /* [in] */UINT32 __ccDataBytesSize,
        /* [size_is(__ccDataBytesSize), in] */__RPC__in_ecount_full(__ccDataBytesSize) BYTE * ccDataBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *OnBeginSetupDecryptor )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * descriptor,
        /* [in] */GUID keyID,
        /* [in] */UINT32 __proBytesSize,
        /* [size_is(__proBytesSize), in] */__RPC__in_ecount_full(__proBytesSize) BYTE * proBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_OnContentIDReceived(This,licenseFetchDescriptor) \
    ( (This)->lpVtbl->OnContentIDReceived(This,licenseFetchDescriptor) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_OnMediaStreamDescriptorCreated(This,audioStreamDescriptors,videoStreamDescriptors) \
    ( (This)->lpVtbl->OnMediaStreamDescriptorCreated(This,audioStreamDescriptors,videoStreamDescriptors) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_OnSampleParsed(This,streamID,streamType,streamSample,pts,ccFormat,__ccDataBytesSize,ccDataBytes) \
    ( (This)->lpVtbl->OnSampleParsed(This,streamID,streamType,streamSample,pts,ccFormat,__ccDataBytesSize,ccDataBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_OnBeginSetupDecryptor(This,descriptor,keyID,__proBytesSize,proBytes) \
    ( (This)->lpVtbl->OnBeginSetupDecryptor(This,descriptor,keyID,__proBytesSize,proBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDStreamParserNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDTCPMessengerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.NDTCPMessenger
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTCPMessengerFactory[] = L"Windows.Media.Protection.PlayReady.INDTCPMessengerFactory";
/* [object, uuid("7DD85CFE-1B99-4F68-8F82-8177F7CEDF2B"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory * This,
        /* [in] */__RPC__in HSTRING remoteHostName,
        /* [in] */UINT32 remoteHostPort,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDMessenger * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTCPMessengerFactory is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_CreateInstance(This,remoteHostName,remoteHostPort,instance) \
    ( (This)->lpVtbl->CreateInstance(This,remoteHostName,remoteHostPort,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTCPMessengerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.INDTransmitterProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_INDTransmitterProperties[] = L"Windows.Media.Protection.PlayReady.INDTransmitterProperties";
/* [object, uuid("E536AF23-AC4F-4ADC-8C66-4FF7C2702DD6"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_CertificateType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateType * type
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_PlatformIdentifier )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificatePlatformID * identifier
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SupportedFeatures )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [out] */__RPC__out UINT32 * __featureSetsSize,
        /* [size_is(, *(__featureSetsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__featureSetsSize)) __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CNDCertificateFeature * * featureSets
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__out UINT32 * level
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SecurityVersion )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__out UINT32 * securityVersion
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * expirationDate
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ClientID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [out] */__RPC__out UINT32 * __clientIDBytesSize,
        /* [size_is(, *(__clientIDBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__clientIDBytesSize)) BYTE * * clientIDBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ModelDigest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [out] */__RPC__out UINT32 * __modelDigestBytesSize,
        /* [size_is(, *(__modelDigestBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__modelDigestBytesSize)) BYTE * * modelDigestBytes
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ModelManufacturerName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * modelManufacturerName
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * modelName
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * modelNumber
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_CertificateType(This,type) \
    ( (This)->lpVtbl->get_CertificateType(This,type) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_PlatformIdentifier(This,identifier) \
    ( (This)->lpVtbl->get_PlatformIdentifier(This,identifier) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_SupportedFeatures(This,__featureSetsSize,featureSets) \
    ( (This)->lpVtbl->get_SupportedFeatures(This,__featureSetsSize,featureSets) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_SecurityLevel(This,level) \
    ( (This)->lpVtbl->get_SecurityLevel(This,level) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_SecurityVersion(This,securityVersion) \
    ( (This)->lpVtbl->get_SecurityVersion(This,securityVersion) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ExpirationDate(This,expirationDate) \
    ( (This)->lpVtbl->get_ExpirationDate(This,expirationDate) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ClientID(This,__clientIDBytesSize,clientIDBytes) \
    ( (This)->lpVtbl->get_ClientID(This,__clientIDBytesSize,clientIDBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ModelDigest(This,__modelDigestBytesSize,modelDigestBytes) \
    ( (This)->lpVtbl->get_ModelDigest(This,__modelDigestBytesSize,modelDigestBytes) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ModelManufacturerName(This,modelManufacturerName) \
    ( (This)->lpVtbl->get_ModelManufacturerName(This,modelManufacturerName) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ModelName(This,modelName) \
    ( (This)->lpVtbl->get_ModelName(This,modelName) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("INDTransmitterProperties is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_get_ModelNumber(This,modelNumber) \
    ( (This)->lpVtbl->get_ModelNumber(This,modelNumber) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CINDTransmitterProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader";
/* [object, uuid("9A438A6A-7F4C-452E-88BD-0148C6387A2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyIdString )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquisitionUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquisitionUserInterfaceUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncryptionType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomAttributes )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecryptorSetup )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyDecryptorSetup * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSerializedHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [out] */__RPC__out UINT32 * __headerBytesSize,
        /* [size_is(, *(__headerBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__headerBytesSize)) BYTE * * headerBytes
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderWithEmbeddedUpdates )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_KeyId(This,value) \
    ( (This)->lpVtbl->get_KeyId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_KeyIdString(This,value) \
    ( (This)->lpVtbl->get_KeyIdString(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_LicenseAcquisitionUrl(This,value) \
    ( (This)->lpVtbl->get_LicenseAcquisitionUrl(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_LicenseAcquisitionUserInterfaceUrl(This,value) \
    ( (This)->lpVtbl->get_LicenseAcquisitionUserInterfaceUrl(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_DomainServiceId(This,value) \
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_EncryptionType(This,value) \
    ( (This)->lpVtbl->get_EncryptionType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_CustomAttributes(This,value) \
    ( (This)->lpVtbl->get_CustomAttributes(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_DecryptorSetup(This,value) \
    ( (This)->lpVtbl->get_DecryptorSetup(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_GetSerializedHeader(This,__headerBytesSize,headerBytes) \
    ( (This)->lpVtbl->GetSerializedHeader(This,__headerBytesSize,headerBytes) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_get_HeaderWithEmbeddedUpdates(This,value) \
    ( (This)->lpVtbl->get_HeaderWithEmbeddedUpdates(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeader2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2";
/* [object, uuid("359C79F4-2180-498C-965B-E754D875EAB2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyIds )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
        /* [out] */__RPC__out UINT32 * __contentKeyIdsSize,
        /* [size_is(, *(__contentKeyIdsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentKeyIdsSize)) GUID * * contentKeyIds
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyIdStrings )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2 * This,
        /* [out] */__RPC__out UINT32 * __contentKeyIdStringsSize,
        /* [size_is(, *(__contentKeyIdStringsSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__contentKeyIdStringsSize)) HSTRING * * contentKeyIdStrings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_get_KeyIds(This,__contentKeyIdsSize,contentKeyIds) \
    ( (This)->lpVtbl->get_KeyIds(This,__contentKeyIdsSize,contentKeyIds) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_get_KeyIdStrings(This,__contentKeyIdStringsSize,contentKeyIdStrings) \
    ( (This)->lpVtbl->get_KeyIdStrings(This,__contentKeyIdStringsSize,contentKeyIdStrings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory";
/* [object, uuid("CB97C8FF-B758-4776-BF01-217A8B510B2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromWindowsMediaDrmHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
        /* [size_is(__headerBytesSize), in] */__RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
        /* [in] */__RPC__in HSTRING customAttributes,
        /* [in] */GUID domainServiceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromComponents )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
        /* [in] */GUID contentKeyId,
        /* [in] */__RPC__in HSTRING contentKeyIdString,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
        /* [in] */__RPC__in HSTRING customAttributes,
        /* [in] */GUID domainServiceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromPlayReadyHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __headerBytesSize,
        /* [size_is(__headerBytesSize), in] */__RPC__in_ecount_full(__headerBytesSize) BYTE * headerBytes,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_CreateInstanceFromWindowsMediaDrmHeader(This,__headerBytesSize,headerBytes,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) \
    ( (This)->lpVtbl->CreateInstanceFromWindowsMediaDrmHeader(This,__headerBytesSize,headerBytes,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_CreateInstanceFromComponents(This,contentKeyId,contentKeyIdString,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) \
    ( (This)->lpVtbl->CreateInstanceFromComponents(This,contentKeyId,contentKeyIdString,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_CreateInstanceFromPlayReadyHeader(This,__headerBytesSize,headerBytes,instance) \
    ( (This)->lpVtbl->CreateInstanceFromPlayReadyHeader(This,__headerBytesSize,headerBytes,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentHeaderFactory2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2";
/* [object, uuid("D1239CF5-AE6D-4778-97FD-6E3A2EEADBEB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromComponents2 )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2 * This,
        /* [in] */UINT32 dwFlags,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdsSize,
        /* [size_is(__contentKeyIdsSize), in] */__RPC__in_ecount_full(__contentKeyIdsSize) GUID * contentKeyIds,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __contentKeyIdStringsSize,
        /* [size_is(__contentKeyIdStringsSize), in] */__RPC__in_ecount_full(__contentKeyIdStringsSize) HSTRING * contentKeyIdStrings,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyEncryptionAlgorithm contentEncryptionAlgorithm,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUrl,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * licenseAcquisitionUserInterfaceUrl,
        /* [in] */__RPC__in HSTRING customAttributes,
        /* [in] */GUID domainServiceId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_CreateInstanceFromComponents2(This,dwFlags,__contentKeyIdsSize,contentKeyIds,__contentKeyIdStringsSize,contentKeyIdStrings,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) \
    ( (This)->lpVtbl->CreateInstanceFromComponents2(This,dwFlags,__contentKeyIdsSize,contentKeyIds,__contentKeyIdStringsSize,contentKeyIdStrings,contentEncryptionAlgorithm,licenseAcquisitionUrl,licenseAcquisitionUserInterfaceUrl,customAttributes,domainServiceId,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeaderFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyContentResolver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyContentResolver
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.IPlayReadyContentResolver";
/* [object, uuid("FBFD2523-906D-4982-A6B8-6849565A7CE8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * * serviceRequest
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolverVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_ServiceRequest(This,contentHeader,serviceRequest) \
    ( (This)->lpVtbl->ServiceRequest(This,contentHeader,serviceRequest) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentResolver_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomain";
/* [object, uuid("ADCC93AC-97E6-43EF-95E4-D7868F3B16A9"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainJoinUrl )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_get_AccountId(This,value) \
    ( (This)->lpVtbl->get_AccountId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_get_ServiceId(This,value) \
    ( (This)->lpVtbl->get_ServiceId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_get_Revision(This,value) \
    ( (This)->lpVtbl->get_Revision(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_get_DomainJoinUrl(This,value) \
    ( (This)->lpVtbl->get_DomainJoinUrl(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomain_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory";
/* [object, uuid("4DF384EE-3121-4DF3-A5E8-D0C24C0500FC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory * This,
        /* [in] */GUID domainAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyDomain * * domainIterable
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_CreateInstance(This,domainAccountId,domainIterable) \
    ( (This)->lpVtbl->CreateInstance(This,domainAccountId,domainIterable) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest";
/* [object, uuid("171B4A5A-405F-4739-B040-67B9F0C38758"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [in] */GUID value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainFriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainFriendlyName )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_get_DomainAccountId(This,value) \
    ( (This)->lpVtbl->get_DomainAccountId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_put_DomainAccountId(This,value) \
    ( (This)->lpVtbl->put_DomainAccountId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_get_DomainFriendlyName(This,value) \
    ( (This)->lpVtbl->get_DomainFriendlyName(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_put_DomainFriendlyName(This,value) \
    ( (This)->lpVtbl->put_DomainFriendlyName(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_get_DomainServiceId(This,value) \
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_put_DomainServiceId(This,value) \
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainJoinServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest";
/* [object, uuid("062D58BE-97AD-4917-AA03-46D4C252D464"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainAccountId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
        /* [in] */GUID value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_get_DomainAccountId(This,value) \
    ( (This)->lpVtbl->get_DomainAccountId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_put_DomainAccountId(This,value) \
    ( (This)->lpVtbl->put_DomainAccountId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_get_DomainServiceId(This,value) \
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_put_DomainServiceId(This,value) \
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyDomainLeaveServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator";
/* [object, uuid("24446B8E-10B9-4530-B25B-901A8029A9B2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator * This,
        /* [in] */GUID guidCPSystemId,
        /* [in] */UINT32 countOfStreams,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyITADataFormat format,
        /* [out] */__RPC__out UINT32 * __dataBytesSize,
        /* [size_is(, *(__dataBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__dataBytesSize)) BYTE * * dataBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGeneratorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_GenerateData(This,guidCPSystemId,countOfStreams,configuration,format,__dataBytesSize,dataBytes) \
    ( (This)->lpVtbl->GenerateData(This,guidCPSystemId,countOfStreams,configuration,format,__dataBytesSize,dataBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyITADataGenerator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest";
/* [object, uuid("21F5A86B-008C-4611-AB2F-AAA6C69F0E24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyIndividualizationServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense";
/* [object, uuid("EE474C4E-FA3C-414D-A9F2-3FFC1EF832D4"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullyEvaluated )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UsableForPlay )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpireAfterFirstPlay )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainAccountID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChainDepth )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetKIDAtChainDepth )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense * This,
        /* [in] */UINT32 chainDepth,
        /* [retval, out] */__RPC__out GUID * kid
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_FullyEvaluated(This,value) \
    ( (This)->lpVtbl->get_FullyEvaluated(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_UsableForPlay(This,value) \
    ( (This)->lpVtbl->get_UsableForPlay(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_ExpirationDate(This,value) \
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_ExpireAfterFirstPlay(This,value) \
    ( (This)->lpVtbl->get_ExpireAfterFirstPlay(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_DomainAccountID(This,value) \
    ( (This)->lpVtbl->get_DomainAccountID(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_get_ChainDepth(This,value) \
    ( (This)->lpVtbl->get_ChainDepth(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_GetKIDAtChainDepth(This,chainDepth,kid) \
    ( (This)->lpVtbl->GetKIDAtChainDepth(This,chainDepth,kid) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicense2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicense
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicense2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicense2";
/* [object, uuid("30F4E7A7-D8E3-48A0-BCDA-FF9F40530436"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecureStopId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InMemoryOnly )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpiresInRealTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_get_SecureStopId(This,value) \
    ( (This)->lpVtbl->get_SecureStopId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_get_SecurityLevel(This,value) \
    ( (This)->lpVtbl->get_SecurityLevel(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_get_InMemoryOnly(This,value) \
    ( (This)->lpVtbl->get_InMemoryOnly(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_get_ExpiresInRealTime(This,value) \
    ( (This)->lpVtbl->get_ExpiresInRealTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicense2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest";
/* [object, uuid("5D85FF45-3E9F-4F48-93E1-9530C8D58C3E"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentHeader )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DomainServiceId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_get_ContentHeader(This,value) \
    ( (This)->lpVtbl->get_ContentHeader(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_put_ContentHeader(This,value) \
    ( (This)->lpVtbl->put_ContentHeader(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_get_DomainServiceId(This,value) \
    ( (This)->lpVtbl->get_DomainServiceId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_put_DomainServiceId(This,value) \
    ( (This)->lpVtbl->put_DomainServiceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2";
/* [object, uuid("B7FA5EB5-FE0C-B225-BC60-5A9EDD32CEB5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2 * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseAcquisitionServiceRequest3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3";
/* [object, uuid("394E5F4D-7F75-430D-B2E7-7F75F34B2D75"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLicenseIterable )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
        /* [in] */boolean fullyEvaluated,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_CreateLicenseIterable(This,contentHeader,fullyEvaluated,result) \
    ( (This)->lpVtbl->CreateLicenseIterable(This,contentHeader,fullyEvaluated,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory";
/* [object, uuid("D4179F08-0837-4978-8E68-BE4293C8D7A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
        /* [in] */boolean fullyEvaluated,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_CreateInstance(This,contentHeader,fullyEvaluated,instance) \
    ( (This)->lpVtbl->CreateInstance(This,contentHeader,fullyEvaluated,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement";
/* [object, uuid("AAEB2141-0957-4405-B892-8BF3EC5DADD9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DeleteLicenses )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_DeleteLicenses(This,contentHeader,operation) \
    ( (This)->lpVtbl->DeleteLicenses(This,contentHeader,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseManagement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession";
/* [object, uuid("A1723A39-87FA-4FDD-ABBB-A9720E845259"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLAServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseAcquisitionServiceRequest * * serviceRequest
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureMediaProtectionManager )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * mpm
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_CreateLAServiceRequest(This,serviceRequest) \
    ( (This)->lpVtbl->CreateLAServiceRequest(This,serviceRequest) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_ConfigureMediaProtectionManager(This,mpm) \
    ( (This)->lpVtbl->ConfigureMediaProtectionManager(This,mpm) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSession2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2";
/* [object, uuid("4909BE3A-3AED-4656-8AD7-EE0FD7799510"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLicenseIterable )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyContentHeader * contentHeader,
        /* [in] */boolean fullyEvaluated,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadyLicense * * licenseIterable
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_CreateLicenseIterable(This,contentHeader,fullyEvaluated,licenseIterable) \
    ( (This)->lpVtbl->CreateLicenseIterable(This,contentHeader,fullyEvaluated,licenseIterable) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyLicenseSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyLicenseSessionFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory";
/* [object, uuid("62492699-6527-429E-98BE-48D798AC2739"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSession * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_CreateInstance(This,configuration,instance) \
    ( (This)->lpVtbl->CreateInstance(This,configuration,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyLicenseSessionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest";
/* [object, uuid("C12B231C-0ECD-4F11-A185-1E24A4A67FB7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MeteringCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
        /* [out] */__RPC__out UINT32 * __meteringCertBytesSize,
        /* [size_is(, *(__meteringCertBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__meteringCertBytesSize)) BYTE * * meteringCertBytes
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MeteringCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __meteringCertBytesSize,
        /* [size_is(__meteringCertBytesSize), in] */__RPC__in_ecount_full(__meteringCertBytesSize) BYTE * meteringCertBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_get_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) \
    ( (This)->lpVtbl->get_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_put_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) \
    ( (This)->lpVtbl->put_MeteringCertificate(This,__meteringCertBytesSize,meteringCertBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyMeteringReportServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest";
/* [object, uuid("543D66AC-FAF0-4560-84A5-0E4ACEC939E4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyRevocationServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopIterableFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory";
/* [object, uuid("5F1F0165-4214-4D9E-81EB-E89F9D294AEE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
        /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CMedia__CProtection__CPlayReady__CIPlayReadySecureStopServiceRequest * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) \
    ( (This)->lpVtbl->CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopIterableFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest";
/* [object, uuid("B5501EE5-01BF-4401-9677-05630A6A4CC8"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdateTime )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stopped )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublisherCertificate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * This,
        /* [out] */__RPC__out UINT32 * __publisherCertBytesSize,
        /* [size_is(, *(__publisherCertBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__publisherCertBytesSize)) BYTE * * publisherCertBytes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_get_SessionID(This,value) \
    ( (This)->lpVtbl->get_SessionID(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_get_UpdateTime(This,value) \
    ( (This)->lpVtbl->get_UpdateTime(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_get_Stopped(This,value) \
    ( (This)->lpVtbl->get_Stopped(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_get_PublisherCertificate(This,__publisherCertBytesSize,publisherCertBytes) \
    ( (This)->lpVtbl->get_PublisherCertificate(This,__publisherCertBytesSize,publisherCertBytes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySecureStopServiceRequestFactory[] = L"Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory";
/* [object, uuid("0E448AC9-E67E-494E-9F49-6285438C76CF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
        /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromSessionID )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory * This,
        /* [in] */GUID sessionID,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __publisherCertBytesSize,
        /* [size_is(__publisherCertBytesSize), in] */__RPC__in_ecount_full(__publisherCertBytesSize) BYTE * publisherCertBytes,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequest * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) \
    ( (This)->lpVtbl->CreateInstance(This,__publisherCertBytesSize,publisherCertBytes,instance) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_CreateInstanceFromSessionID(This,sessionID,__publisherCertBytesSize,publisherCertBytes,instance) \
    ( (This)->lpVtbl->CreateInstanceFromSessionID(This,sessionID,__publisherCertBytesSize,publisherCertBytes,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySecureStopServiceRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyServiceRequest[] = L"Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest";
/* [object, uuid("8BAD2836-A703-45A6-A180-76F3565AA725"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResponseCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChallengeCustomData )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *BeginServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *NextServiceRequest )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * * serviceRequest
        );
    HRESULT ( STDMETHODCALLTYPE *GenerateManualEnablingChallenge )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * * challengeMessage
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessManualEnablingResponse )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest * This,
        /* [in, range(0, 2147483647)] */__RPC__in_range(0,0x7fffffff) UINT32 __responseBytesSize,
        /* [size_is(__responseBytesSize), in] */__RPC__in_ecount_full(__responseBytesSize) BYTE * responseBytes,
        /* [retval, out] */__RPC__out HRESULT * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_put_Uri(This,value) \
    ( (This)->lpVtbl->put_Uri(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_get_ResponseCustomData(This,value) \
    ( (This)->lpVtbl->get_ResponseCustomData(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_get_ChallengeCustomData(This,value) \
    ( (This)->lpVtbl->get_ChallengeCustomData(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_put_ChallengeCustomData(This,value) \
    ( (This)->lpVtbl->put_ChallengeCustomData(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_BeginServiceRequest(This,action) \
    ( (This)->lpVtbl->BeginServiceRequest(This,action) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_NextServiceRequest(This,serviceRequest) \
    ( (This)->lpVtbl->NextServiceRequest(This,serviceRequest) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_GenerateManualEnablingChallenge(This,challengeMessage) \
    ( (This)->lpVtbl->GenerateManualEnablingChallenge(This,challengeMessage) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_ProcessManualEnablingResponse(This,__responseBytesSize,responseBytes,result) \
    ( (This)->lpVtbl->ProcessManualEnablingResponse(This,__responseBytesSize,responseBytes,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadySoapMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadySoapMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.IPlayReadySoapMessage";
/* [object, uuid("B659FCB5-CE41-41BA-8A0D-61DF5FFFA139"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMessageBody )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
        /* [out] */__RPC__out UINT32 * __messageBodyBytesSize,
        /* [size_is(, *(__messageBodyBytesSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__messageBodyBytesSize)) BYTE * * messageBodyBytes
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MessageHeaders )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * messageUri
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_GetMessageBody(This,__messageBodyBytesSize,messageBodyBytes) \
    ( (This)->lpVtbl->GetMessageBody(This,__messageBodyBytesSize,messageBodyBytes) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_get_MessageHeaders(This,value) \
    ( (This)->lpVtbl->get_MessageHeaders(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_get_Uri(This,messageUri) \
    ( (This)->lpVtbl->get_Uri(This,messageUri) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadySoapMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics";
/* [object, uuid("5E69C00D-247C-469A-8F31-5C1A1571D9C6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainJoinServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DomainLeaveServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndividualizationServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseAcquirerServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MeteringReportServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RevocationServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaProtectionSystemId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlayReadySecurityVersion )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_DomainJoinServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_DomainJoinServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_DomainLeaveServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_DomainLeaveServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_IndividualizationServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_IndividualizationServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_LicenseAcquirerServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_LicenseAcquirerServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_MeteringReportServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_MeteringReportServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_RevocationServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_RevocationServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_MediaProtectionSystemId(This,value) \
    ( (This)->lpVtbl->get_MediaProtectionSystemId(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_get_PlayReadySecurityVersion(This,value) \
    ( (This)->lpVtbl->get_PlayReadySecurityVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics2[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics2";
/* [object, uuid("1F8D6A92-5F9A-423E-9466-B33969AF7A3D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlayReadyCertificateSecurityLevel )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_get_PlayReadyCertificateSecurityLevel(This,value) \
    ( (This)->lpVtbl->get_PlayReadyCertificateSecurityLevel(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics3[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics3";
/* [object, uuid("3FA33F71-2DD3-4BED-AE49-F7148E63E710"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecureStopServiceRequestType )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckSupportedHardware )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3 * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CPlayReady_CPlayReadyHardwareDRMFeatures hwdrmFeature,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_get_SecureStopServiceRequestType(This,value) \
    ( (This)->lpVtbl->get_SecureStopServiceRequestType(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_CheckSupportedHardware(This,hwdrmFeature,value) \
    ( (This)->lpVtbl->CheckSupportedHardware(This,hwdrmFeature,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.PlayReady.IPlayReadyStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics3
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics2
 *     Windows.Media.Protection.PlayReady.IPlayReadyStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_PlayReady_IPlayReadyStatics4[] = L"Windows.Media.Protection.PlayReady.IPlayReadyStatics4";
/* [object, uuid("50A91300-D824-4231-9D5E-78EF8844C7D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputTrustAuthorityToCreate )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionSystemId )(
        __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4 * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_get_InputTrustAuthorityToCreate(This,value) \
    ( (This)->lpVtbl->get_InputTrustAuthorityToCreate(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_get_ProtectionSystemId(This,value) \
    ( (This)->lpVtbl->get_ProtectionSystemId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CPlayReady_CIPlayReadyStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDClientFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDClient ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDClient_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDClient_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDClient is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDClient[] = L"Windows.Media.Protection.PlayReady.NDClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDCustomData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDCustomDataFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDCustomData ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDCustomData_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDCustomData_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDCustomData is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDCustomData[] = L"Windows.Media.Protection.PlayReady.NDCustomData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDDownloadEngineNotifier ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDDownloadEngineNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDDownloadEngineNotifier[] = L"Windows.Media.Protection.PlayReady.NDDownloadEngineNotifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDLicenseFetchDescriptor ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDLicenseFetchDescriptor is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDLicenseFetchDescriptor[] = L"Windows.Media.Protection.PlayReady.NDLicenseFetchDescriptor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDStorageFileHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDStorageFileHelper ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStorageFileHelper_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStorageFileHelper_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDStorageFileHelper is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStorageFileHelper[] = L"Windows.Media.Protection.PlayReady.NDStorageFileHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDStreamParserNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDStreamParserNotifier ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStreamParserNotifier_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDStreamParserNotifier_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDStreamParserNotifier is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDStreamParserNotifier[] = L"Windows.Media.Protection.PlayReady.NDStreamParserNotifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.NDTCPMessenger
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.INDTCPMessengerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.INDMessenger ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDTCPMessenger_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_NDTCPMessenger_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("NDTCPMessenger is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_NDTCPMessenger[] = L"Windows.Media.Protection.PlayReady.NDTCPMessenger";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyContentHeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyContentHeaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyContentHeader ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyContentHeader2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentHeader_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentHeader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentHeader[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentHeader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyContentResolver
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyContentResolver interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentResolver_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyContentResolver_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyContentResolver[] = L"Windows.Media.Protection.PlayReady.PlayReadyContentResolver";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomain_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomain[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomain";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyDomainIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadyDomain ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomainJoinServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainJoinServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainJoinServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyDomainLeaveServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyDomainLeaveServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyDomainLeaveServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyITADataGenerator ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyITADataGenerator[] = L"Windows.Media.Protection.PlayReady.PlayReadyITADataGenerator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyIndividualizationServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyIndividualizationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyIndividualizationServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicense2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicense_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicense_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicense[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicense";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest2
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseAcquisitionServiceRequest3
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseAcquisitionServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseAcquisitionServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyLicenseIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadyLicense ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyLicenseManagement interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseManagement[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseManagement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyLicenseSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadyLicenseSessionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyLicenseSession2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyLicenseSession[] = L"Windows.Media.Protection.PlayReady.PlayReadyLicenseSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyMeteringReportServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyMeteringReportServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyMeteringReportServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadyRevocationServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyRevocationServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadyRevocationServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadySecureStopIterableFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterable_1_Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterable[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IIterator_1_Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopIterator[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopIterator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequestFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadySecureStopServiceRequest ** Default Interface **
 *    Windows.Media.Protection.PlayReady.IPlayReadyServiceRequest
 *    Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySecureStopServiceRequest[] = L"Windows.Media.Protection.PlayReady.PlayReadySecureStopServiceRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadySoapMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.PlayReady.IPlayReadySoapMessage ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySoapMessage_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadySoapMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadySoapMessage[] = L"Windows.Media.Protection.PlayReady.PlayReadySoapMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.PlayReady.PlayReadyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics4 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Media.Protection.PlayReady.IPlayReadyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyStatics_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_PlayReady_PlayReadyStatics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_PlayReady_PlayReadyStatics[] = L"Windows.Media.Protection.PlayReady.PlayReadyStatics";
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
#endif // __windows2Emedia2Eprotection2Eplayready_p_h__

#endif // __windows2Emedia2Eprotection2Eplayready_h__
