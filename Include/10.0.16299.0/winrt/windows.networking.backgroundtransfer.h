/* Header file automatically generated from windows.networking.backgroundtransfer.idl */
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
#ifndef __windows2Enetworking2Ebackgroundtransfer_h__
#define __windows2Enetworking2Ebackgroundtransfer_h__
#ifndef __windows2Enetworking2Ebackgroundtransfer_p_h__
#define __windows2Enetworking2Ebackgroundtransfer_p_h__


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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Notifications.h"
#include "Windows.Web.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloader;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloader2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloader3;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader3

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloaderFactory;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderFactory

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloaderStaticMethods;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloaderStaticMethods2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderStaticMethods2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundDownloaderUserConsent;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloaderUserConsent

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferBase;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferBase

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferCompletionGroup;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferCompletionGroupTriggerDetails;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroupTriggerDetails

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferContentPart;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferContentPartFactory;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPartFactory

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferErrorStaticMethods;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferErrorStaticMethods

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferGroup;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferGroupStatics;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroupStatics

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferOperation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperation

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferOperationPriority;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferOperationPriority

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundTransferRangesDownloadedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploader;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploader2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploader3;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader3

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploaderFactory;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderFactory

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploaderStaticMethods;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploaderStaticMethods2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderStaticMethods2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IBackgroundUploaderUserConsent;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploaderUserConsent

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IContentPrefetcher;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher ABI::Windows::Networking::BackgroundTransfer::IContentPrefetcher

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IContentPrefetcherTime;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime ABI::Windows::Networking::BackgroundTransfer::IContentPrefetcherTime

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IDownloadOperation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IDownloadOperation2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IDownloadOperation3;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation3

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IResponseInformation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation ABI::Windows::Networking::BackgroundTransfer::IResponseInformation

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IUnconstrainedTransferRequestResult;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IUploadOperation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation ABI::Windows::Networking::BackgroundTransfer::IUploadOperation

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                interface IUploadOperation2;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 ABI::Windows::Networking::BackgroundTransfer::IUploadOperation2

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundTransferContentPart;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE
#define DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("07fbc351-781d-52c7-9558-a453e5703f29"))
IIterator<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*, ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*> __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t;
#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE
#define DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cf303199-de3b-5dac-a703-6c57d80821c4"))
IIterable<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*, ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferContentPart*> __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t;
#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                struct BackgroundTransferFileRange;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#define DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a753d778-8cbb-524a-b8c4-70c515a42782"))
IIterator<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> : IIterator_impl<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t;
#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE */





#ifndef DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#define DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2cc2d499-974c-5078-89ae-2d4ee1139721"))
IIterable<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> : IIterable_impl<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t;
#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class DownloadOperation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2ab61055-2d0a-59cb-8cbd-056f2d7fb454"))
IIterator<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6fd69cb-e6e7-56d5-9be6-e0dc4683fa80"))
IIterable<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class UploadOperation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("caa85133-73d7-5f96-ab2d-fbb4fa00f715"))
IIterator<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("79778799-38cc-5b67-9cd0-043fc47a9ef7"))
IIterable<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5be7934b-d9fc-540a-8ffe-5fb9c88c6558"))
IVectorView<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> : IVectorView_impl<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t;
#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f87d9755-2a7d-59fc-bc92-b48636f4d955"))
IVectorView<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8e96d4b0-f0ae-51cb-b7c4-024251bd16d8"))
IVectorView<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#define DEF___FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c73ceef0-854a-5947-9e7c-527e3915d335"))
IVector<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> : IVector_impl<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<struct ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange> __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t;
#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
//#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferFileRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_USE */





#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b2ff13f1-c743-54f4-bccc-f08e16a87890"))
IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Networking.BackgroundTransfer.DownloadOperation, Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("781b479c-0207-5d15-a4e5-7837d13bf93d"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Networking.BackgroundTransfer.DownloadOperation, Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e86a4f5d-743a-5f18-9d4c-bc8ed5942659"))
IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Networking.BackgroundTransfer.DownloadOperation, Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ccd13730-fed3-54e8-8471-096e4b64cadd"))
IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Networking.BackgroundTransfer.UploadOperation, Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("79fcae93-53ec-5f66-ab34-826af78ec11a"))
IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Networking.BackgroundTransfer.UploadOperation, Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("35ddaefa-db6a-5d0d-ba54-a0728401171e"))
IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Networking.BackgroundTransfer.UploadOperation, Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*,ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*,ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1986b372-0ddb-520c-b72d-fb2577e99ff5"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.DownloadOperation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ae42cddf-3042-5d92-a01e-643c252b8050"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.DownloadOperation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("608a29a8-bbc5-5ea3-b3f7-87edc4e7bbbc"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.UploadOperation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e4c6a3c-48a4-5e22-b29a-3e429469462f"))
IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Networking.BackgroundTransfer.UploadOperation>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation*> __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2aa63857-ffaf-5cf6-9b2c-0dc597b60a60"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("43ef3a5f-cc7d-566d-a92a-4caa76b92a1f"))
IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.BackgroundTransfer.DownloadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*> __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class UnconstrainedTransferRequestResult;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4f52bfe8-9b0e-5b22-916b-834425b4ab97"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*, ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8dc2a04-3f44-5046-8182-cd0ec147e17d"))
IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*, ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::UnconstrainedTransferRequestResult*> __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IUnconstrainedTransferRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ead68818-0c38-5cde-aec1-c6a7618711f7"))
IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#define DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("44212ea1-b524-5aee-a320-7199225381d1"))
IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*, ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Networking.BackgroundTransfer.UploadOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::UploadOperation*> __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t;
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
//#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Networking::BackgroundTransfer::IUploadOperation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundTransferRangesDownloadedEventArgs;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("93a20d85-bdfc-5195-90d9-8cb56cbcb3d8"))
ITypedEventHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*, ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs*, ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Networking.BackgroundTransfer.DownloadOperation, Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Networking::BackgroundTransfer::DownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferRangesDownloadedEventArgs*> __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation*,ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferRangesDownloadedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterator_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1c157d0f-5efe-5cec-bbd6-0c6ce9af07a5"))
IIterator<ABI::Windows::Foundation::Uri*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Foundation::Uri*> __FIIterator_1_Windows__CFoundation__CUri_t;
#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterator_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#define DEF___FIIterable_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b0d63b78-78ad-5e31-b6d8-e32a0e16c447"))
IIterable<ABI::Windows::Foundation::Uri*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Foundation::Uri*> __FIIterable_1_Windows__CFoundation__CUri_t;
#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIIterable_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CFoundation__CUri_USE
#define DEF___FIVectorView_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4b8385bd-a2cd-5ff1-bf74-7ea580423e50"))
IVectorView<ABI::Windows::Foundation::Uri*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Foundation::Uri*> __FIVectorView_1_Windows__CFoundation__CUri_t;
#define __FIVectorView_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIVectorView_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CFoundation__CUri_USE
#define DEF___FIVector_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0d82bd8d-fe62-5d67-a7b9-7886dd75bc4e"))
IVector<ABI::Windows::Foundation::Uri*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Foundation::Uri*> __FIVector_1_Windows__CFoundation__CUri_t;
#define __FIVector_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CFoundation__CUri ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIVector_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CFoundation__CUri_USE */


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



namespace ABI {
    namespace Windows {
        namespace Web {
            enum WebErrorStatus : int;
        } /* Windows */
    } /* Web */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CWeb__CWebErrorStatus_USE
#define DEF___FIIterator_1_Windows__CWeb__CWebErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fa704929-0761-5dd6-9675-052a8c61e2c2"))
IIterator<enum ABI::Windows::Web::WebErrorStatus> : IIterator_impl<enum ABI::Windows::Web::WebErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Web.WebErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Web::WebErrorStatus> __FIIterator_1_Windows__CWeb__CWebErrorStatus_t;
#define __FIIterator_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CWeb__CWebErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::WebErrorStatus>
//#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Web::WebErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CWeb__CWebErrorStatus_USE */





#ifndef DEF___FIIterable_1_Windows__CWeb__CWebErrorStatus_USE
#define DEF___FIIterable_1_Windows__CWeb__CWebErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7b7f182e-a6ce-556b-9a2e-ef97662f2aee"))
IIterable<enum ABI::Windows::Web::WebErrorStatus> : IIterable_impl<enum ABI::Windows::Web::WebErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Web.WebErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Web::WebErrorStatus> __FIIterable_1_Windows__CWeb__CWebErrorStatus_t;
#define __FIIterable_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CWeb__CWebErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::WebErrorStatus>
//#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Web::WebErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CWeb__CWebErrorStatus_USE */





#ifndef DEF___FIVectorView_1_Windows__CWeb__CWebErrorStatus_USE
#define DEF___FIVectorView_1_Windows__CWeb__CWebErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f5d10d42-a776-533a-8f4b-2e1c6e5bbf24"))
IVectorView<enum ABI::Windows::Web::WebErrorStatus> : IVectorView_impl<enum ABI::Windows::Web::WebErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Web.WebErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Web::WebErrorStatus> __FIVectorView_1_Windows__CWeb__CWebErrorStatus_t;
#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CWeb__CWebErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::WebErrorStatus>
//#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Web::WebErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CWeb__CWebErrorStatus_USE */





#ifndef DEF___FIVector_1_Windows__CWeb__CWebErrorStatus_USE
#define DEF___FIVector_1_Windows__CWeb__CWebErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("61bc06e3-b752-5b56-8374-3b45a214693f"))
IVector<enum ABI::Windows::Web::WebErrorStatus> : IVector_impl<enum ABI::Windows::Web::WebErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Web.WebErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Web::WebErrorStatus> __FIVector_1_Windows__CWeb__CWebErrorStatus_t;
#define __FIVector_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CWeb__CWebErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::WebErrorStatus>
//#define __FIVector_1_Windows__CWeb__CWebErrorStatus_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Web::WebErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CWeb__CWebErrorStatus_USE */





#ifndef DEF___FIReference_1_Windows__CWeb__CWebErrorStatus_USE
#define DEF___FIReference_1_Windows__CWeb__CWebErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f2b26336-6a9d-54de-8eca-00d6c871e469"))
IReference<enum ABI::Windows::Web::WebErrorStatus> : IReference_impl<enum ABI::Windows::Web::WebErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Web.WebErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Web::WebErrorStatus> __FIReference_1_Windows__CWeb__CWebErrorStatus_t;
#define __FIReference_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::__FIReference_1_Windows__CWeb__CWebErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CWeb__CWebErrorStatus ABI::Windows::Foundation::IReference<ABI::Windows::Web::WebErrorStatus>
//#define __FIReference_1_Windows__CWeb__CWebErrorStatus_t ABI::Windows::Foundation::IReference<ABI::Windows::Web::WebErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CWeb__CWebErrorStatus_USE */




#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */





#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTrigger;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger ABI::Windows::ApplicationModel::Background::IBackgroundTrigger

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class PasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IPasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential ABI::Windows::Security::Credentials::IPasswordCredential

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





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
        namespace UI {
            namespace Notifications {
                class TileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface ITileNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CITileNotification ABI::Windows::UI::Notifications::ITileNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                class ToastNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                interface IToastNotification;
            } /* Windows */
        } /* UI */
    } /* Notifications */} /* ABI */
#define __x_ABI_CWindows_CUI_CNotifications_CIToastNotification ABI::Windows::UI::Notifications::IToastNotification

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Web {
            
            typedef enum WebErrorStatus : int WebErrorStatus;
            
        } /* Windows */
    } /* Web */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef enum BackgroundTransferBehavior : int BackgroundTransferBehavior;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef enum BackgroundTransferCostPolicy : int BackgroundTransferCostPolicy;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef enum BackgroundTransferPriority : int BackgroundTransferPriority;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef enum BackgroundTransferStatus : int BackgroundTransferStatus;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef struct BackgroundDownloadProgress BackgroundDownloadProgress;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef struct BackgroundTransferFileRange BackgroundTransferFileRange;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                
                typedef struct BackgroundUploadProgress BackgroundUploadProgress;
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */



































namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundDownloader;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundTransferCompletionGroup;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundTransferCompletionGroupTriggerDetails;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundTransferGroup;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class BackgroundUploader;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                class ResponseInformation;
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */












/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [v1_enum, contract] */
                enum BackgroundTransferBehavior : int
                {
                    BackgroundTransferBehavior_Parallel = 0,
                    BackgroundTransferBehavior_Serialized = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferCostPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [v1_enum, contract] */
                enum BackgroundTransferCostPolicy : int
                {
                    BackgroundTransferCostPolicy_Default = 0,
                    BackgroundTransferCostPolicy_UnrestrictedOnly = 1,
                    BackgroundTransferCostPolicy_Always = 2,
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [v1_enum, contract] */
                enum BackgroundTransferPriority : int
                {
                    BackgroundTransferPriority_Default = 0,
                    BackgroundTransferPriority_High = 1,
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [v1_enum, contract] */
                enum BackgroundTransferStatus : int
                {
                    BackgroundTransferStatus_Idle = 0,
                    BackgroundTransferStatus_Running = 1,
                    BackgroundTransferStatus_PausedByApplication = 2,
                    BackgroundTransferStatus_PausedCostedNetwork = 3,
                    BackgroundTransferStatus_PausedNoNetwork = 4,
                    BackgroundTransferStatus_Completed = 5,
                    BackgroundTransferStatus_Canceled = 6,
                    BackgroundTransferStatus_Error = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    BackgroundTransferStatus_PausedRecoverableWebErrorStatus = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                    BackgroundTransferStatus_PausedSystemPolicy = 32,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundDownloadProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [contract] */
                struct BackgroundDownloadProgress
                {
                    UINT64 BytesReceived;
                    UINT64 TotalBytesToReceive;
                    ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
                    boolean HasResponseChanged;
                    boolean HasRestarted;
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [contract] */
                struct BackgroundTransferFileRange
                {
                    UINT64 Offset;
                    UINT64 Length;
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundUploadProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [contract] */
                struct BackgroundUploadProgress
                {
                    UINT64 BytesReceived;
                    UINT64 BytesSent;
                    UINT64 TotalBytesToReceive;
                    UINT64 TotalBytesToSend;
                    ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferStatus Status;
                    boolean HasResponseChanged;
                    boolean HasRestarted;
                };
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("C1C79333-6649-4B1D-A826-A4B3DD234D0B"), exclusiveto, contract] */
                MIDL_INTERFACE("C1C79333-6649-4B1D-A826-A4B3DD234D0B")
                IBackgroundDownloader : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDownload(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * resultFile,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateDownloadFromFile(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * resultFile,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * requestBodyFile,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IDownloadOperation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDownloadAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * resultFile,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * requestBodyStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloader=_uuidof(IBackgroundDownloader);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("A94A5847-348D-4A35-890E-8A1EF3798479"), exclusiveto, contract] */
                MIDL_INTERFACE("A94A5847-348D-4A35-890E-8A1EF3798479")
                IBackgroundDownloader2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransferGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransferGroup(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuccessToastNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IToastNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SuccessToastNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::IToastNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FailureToastNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IToastNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FailureToastNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::IToastNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuccessTileNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::ITileNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SuccessTileNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::ITileNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FailureTileNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::ITileNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FailureTileNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::ITileNotification * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloader2=_uuidof(IBackgroundDownloader2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("D11A8C48-86E8-48E2-B615-6976AABF861D"), exclusiveto, contract] */
                MIDL_INTERFACE("D11A8C48-86E8-48E2-B615-6976AABF861D")
                IBackgroundDownloader3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompletionGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloader3=_uuidof(IBackgroundDownloader3);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("26836C24-D89E-46F4-A29A-4F4D4F144155"), exclusiveto, contract] */
                MIDL_INTERFACE("26836C24-D89E-46F4-A29A-4F4D4F144155")
                IBackgroundDownloaderFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithCompletionGroup(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * completionGroup,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundDownloader * * backgroundDownloader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloaderFactory=_uuidof(IBackgroundDownloaderFactory);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("52A65A35-C64E-426C-9919-540D0D21A650"), exclusiveto, contract] */
                MIDL_INTERFACE("52A65A35-C64E-426C-9919-540D0D21A650")
                IBackgroundDownloaderStaticMethods : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetCurrentDownloadsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE GetCurrentDownloadsForGroupAsync(
                        /* [in] */__RPC__in HSTRING group,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloaderStaticMethods=_uuidof(IBackgroundDownloaderStaticMethods);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("2FAA1327-1AD4-4CA5-B2CD-08DBF0746AFE"), exclusiveto, contract] */
                MIDL_INTERFACE("2FAA1327-1AD4-4CA5-B2CD-08DBF0746AFE")
                IBackgroundDownloaderStaticMethods2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentDownloadsForTransferGroupAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * group,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloaderStaticMethods2=_uuidof(IBackgroundDownloaderStaticMethods2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("5D14E906-9266-4808-BD71-5925F2A3130A"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("5D14E906-9266-4808-BD71-5925F2A3130A")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                DEPRECATED("IBackgroundDownloaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                IBackgroundDownloaderUserConsent : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RequestUnconstrainedDownloadsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * operations,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundDownloaderUserConsent=_uuidof(IBackgroundDownloaderUserConsent);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferBase";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("2A9DA250-C769-458C-AFE8-FEB8D4D3B2EF"), contract] */
                MIDL_INTERFACE("2A9DA250-C769-458C-AFE8-FEB8D4D3B2EF")
                IBackgroundTransferBase : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetRequestHeader(
                        /* [in] */__RPC__in HSTRING headerName,
                        /* [in] */__RPC__in HSTRING headerValue
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * credential
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerCredential(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * credential
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProxyCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * credential
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProxyCredential(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * credential
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Method(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Method(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Group(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Group(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CostPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CostPolicy(
                        /* [in] */ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferBase=_uuidof(IBackgroundTransferBase);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("2D930225-986B-574D-7950-0ADD47F5D706"), exclusiveto, contract] */
                MIDL_INTERFACE("2D930225-986B-574D-7950-0ADD47F5D706")
                IBackgroundTransferCompletionGroup : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Trigger(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Background::IBackgroundTrigger * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Enable(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferCompletionGroup=_uuidof(IBackgroundTransferCompletionGroup);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("7B6BE286-6E47-5136-7FCB-FA4389F46F5B"), exclusiveto, contract] */
                MIDL_INTERFACE("7B6BE286-6E47-5136-7FCB-FA4389F46F5B")
                IBackgroundTransferCompletionGroupTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Downloads(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uploads(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferCompletionGroupTriggerDetails=_uuidof(IBackgroundTransferCompletionGroupTriggerDetails);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("E8E15657-D7D1-4ED8-838E-674AC217ACE6"), exclusiveto, contract] */
                MIDL_INTERFACE("E8E15657-D7D1-4ED8-838E-674AC217ACE6")
                IBackgroundTransferContentPart : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetHeader(
                        /* [in] */__RPC__in HSTRING headerName,
                        /* [in] */__RPC__in HSTRING headerValue
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetFile(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferContentPart=_uuidof(IBackgroundTransferContentPart);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("90EF98A9-7A01-4A0B-9F80-A0B0BB370F8D"), contract] */
                MIDL_INTERFACE("90EF98A9-7A01-4A0B-9F80-A0B0BB370F8D")
                IBackgroundTransferContentPartFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithName(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithNameAndFileName(
                        /* [in] */__RPC__in HSTRING name,
                        /* [in] */__RPC__in HSTRING fileName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferContentPart * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferContentPartFactory=_uuidof(IBackgroundTransferContentPartFactory);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("AAD33B04-1192-4BF4-8B68-39C5ADD244E2"), exclusiveto, contract] */
                MIDL_INTERFACE("AAD33B04-1192-4BF4-8B68-39C5ADD244E2")
                IBackgroundTransferErrorStaticMethods : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [in] */INT32 hresult,
                        /* [retval, out] */__RPC__out ABI::Windows::Web::WebErrorStatus * status
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferErrorStaticMethods=_uuidof(IBackgroundTransferErrorStaticMethods);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("D8C3E3E4-6459-4540-85EB-AAA1C8903677"), exclusiveto, contract] */
                MIDL_INTERFACE("D8C3E3E4-6459-4540-85EB-AAA1C8903677")
                IBackgroundTransferGroup : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransferBehavior(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransferBehavior(
                        /* [in] */ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferBehavior value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferGroup=_uuidof(IBackgroundTransferGroup);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("02EC50B2-7D18-495B-AA22-32A97D45D3E2"), exclusiveto, contract] */
                MIDL_INTERFACE("02EC50B2-7D18-495B-AA22-32A97D45D3E2")
                IBackgroundTransferGroupStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateGroup(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferGroupStatics=_uuidof(IBackgroundTransferGroupStatics);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("DED06846-90CA-44FB-8FB1-124154C0D539"), contract] */
                MIDL_INTERFACE("DED06846-90CA-44FB-8FB1-124154C0D539")
                IBackgroundTransferOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Guid(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Method(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Group(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CostPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CostPolicy(
                        /* [in] */ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferCostPolicy value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetResultStreamAt(
                        /* [in] */UINT64 position,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetResponseInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IResponseInformation * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferOperation=_uuidof(IBackgroundTransferOperation);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("04854327-5254-4B3A-915E-0AA49275C0F9"), contract] */
                MIDL_INTERFACE("04854327-5254-4B3A-915E-0AA49275C0F9")
                IBackgroundTransferOperationPriority : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Priority(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferPriority * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Priority(
                        /* [in] */ABI::Windows::Networking::BackgroundTransfer::BackgroundTransferPriority value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferOperationPriority=_uuidof(IBackgroundTransferOperationPriority);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("3EBC7453-BF48-4A88-9248-B0C165184F5C"), exclusiveto, contract] */
                MIDL_INTERFACE("3EBC7453-BF48-4A88-9248-B0C165184F5C")
                IBackgroundTransferRangesDownloadedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasDownloadRestarted(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddedRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundTransferRangesDownloadedEventArgs=_uuidof(IBackgroundTransferRangesDownloadedEventArgs);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("C595C9AE-CEAD-465B-8801-C55AC90A01CE"), exclusiveto, contract] */
                MIDL_INTERFACE("C595C9AE-CEAD-465B-8801-C55AC90A01CE")
                IBackgroundUploader : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateUpload(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * sourceFile,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IUploadOperation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateUploadFromStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * sourceStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateUploadWithFormDataAndAutoBoundaryAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateUploadWithSubTypeAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                        /* [in] */__RPC__in HSTRING subType,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateUploadWithSubTypeAndBoundaryAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
                        /* [in] */__RPC__in HSTRING subType,
                        /* [in] */__RPC__in HSTRING boundary,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploader=_uuidof(IBackgroundUploader);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("8E0612CE-0C34-4463-807F-198A1B8BD4AD"), exclusiveto, contract] */
                MIDL_INTERFACE("8E0612CE-0C34-4463-807F-198A1B8BD4AD")
                IBackgroundUploader2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransferGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TransferGroup(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuccessToastNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IToastNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SuccessToastNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::IToastNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FailureToastNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::IToastNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FailureToastNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::IToastNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuccessTileNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::ITileNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SuccessTileNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::ITileNotification * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FailureTileNotification(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Notifications::ITileNotification * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FailureTileNotification(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Notifications::ITileNotification * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploader2=_uuidof(IBackgroundUploader2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("B95E9439-5BF0-4B3A-8C47-2C6199A854B9"), exclusiveto, contract] */
                MIDL_INTERFACE("B95E9439-5BF0-4B3A-8C47-2C6199A854B9")
                IBackgroundUploader3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompletionGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploader3=_uuidof(IBackgroundUploader3);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("736203C7-10E7-48A0-AC3C-1AC71095EC57"), exclusiveto, contract] */
                MIDL_INTERFACE("736203C7-10E7-48A0-AC3C-1AC71095EC57")
                IBackgroundUploaderFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithCompletionGroup(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferCompletionGroup * completionGroup,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundUploader * * backgroundUploader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploaderFactory=_uuidof(IBackgroundUploaderFactory);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("F2875CFB-9B05-4741-9121-740A83E247DF"), exclusiveto, contract] */
                MIDL_INTERFACE("F2875CFB-9B05-4741-9121-740A83E247DF")
                IBackgroundUploaderStaticMethods : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetCurrentUploadsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE GetCurrentUploadsForGroupAsync(
                        /* [in] */__RPC__in HSTRING group,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploaderStaticMethods=_uuidof(IBackgroundUploaderStaticMethods);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("E919AC62-EA08-42F0-A2AC-07E467549080"), exclusiveto, contract] */
                MIDL_INTERFACE("E919AC62-EA08-42F0-A2AC-07E467549080")
                IBackgroundUploaderStaticMethods2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentUploadsForTransferGroupAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * group,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploaderStaticMethods2=_uuidof(IBackgroundUploaderStaticMethods2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("3BB384CB-0760-461D-907F-5138F84D44C1"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("3BB384CB-0760-461D-907F-5138F84D44C1")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                DEPRECATED("IBackgroundUploaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                IBackgroundUploaderUserConsent : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RequestUnconstrainedUploadsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * operations,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundUploaderUserConsent=_uuidof(IBackgroundUploaderUserConsent);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IContentPrefetcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcher";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("A8D6F754-7DC1-4CD9-8810-2A6AA9417E11"), exclusiveto, contract] */
                MIDL_INTERFACE("A8D6F754-7DC1-4CD9-8810-2A6AA9417E11")
                IContentPrefetcher : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentUris(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IndirectContentUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndirectContentUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentPrefetcher=_uuidof(IContentPrefetcher);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IContentPrefetcherTime
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcherTime";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("E361FD08-132A-4FDE-A7CC-FCB0E66523AF"), exclusiveto, contract] */
                MIDL_INTERFACE("E361FD08-132A-4FDE-A7CC-FCB0E66523AF")
                IContentPrefetcherTime : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastSuccessfulPrefetchTime(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentPrefetcherTime=_uuidof(IContentPrefetcherTime);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("BD87EBB0-5714-4E09-BA68-BEF73903B0D7"), exclusiveto, contract] */
                MIDL_INTERFACE("BD87EBB0-5714-4E09-BA68-BEF73903B0D7")
                IDownloadOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResultFile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundDownloadProgress * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AttachAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Pause(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Resume(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDownloadOperation=_uuidof(IDownloadOperation);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation2[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("A3CCED40-8F9C-4353-9CD4-290DEE387C38"), exclusiveto, contract] */
                MIDL_INTERFACE("A3CCED40-8F9C-4353-9CD4-290DEE387C38")
                IDownloadOperation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransferGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDownloadOperation2=_uuidof(IDownloadOperation2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation3[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation3";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("5027351C-7D5E-4ADC-B8D3-DF5C6031B9CC"), exclusiveto, contract] */
                MIDL_INTERFACE("5027351C-7D5E-4ADC-B8D3-DF5C6031B9CC")
                IDownloadOperation3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRandomAccessRequired(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsRandomAccessRequired(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetResultRandomAccessStreamReference(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * stream
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDownloadedRanges(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RangesDownloaded(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RangesDownloaded(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestedUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecoverableWebErrorStatuses(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CWebErrorStatus * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentWebErrorStatus(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CWeb__CWebErrorStatus * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDownloadOperation3=_uuidof(IDownloadOperation3);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IResponseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ResponseInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IResponseInformation[] = L"Windows.Networking.BackgroundTransfer.IResponseInformation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("F8BB9A12-F713-4792-8B68-D9D297F91D2E"), exclusiveto, contract] */
                MIDL_INTERFACE("F8BB9A12-F713-4792-8B68-D9D297F91D2E")
                IResponseInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsResumable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActualUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StatusCode(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Headers(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResponseInformation=_uuidof(IResponseInformation);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("4C24B81F-D944-4112-A98E-6A69522B7EBB"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("4C24B81F-D944-4112-A98E-6A69522B7EBB")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                DEPRECATED("IUnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                IUnconstrainedTransferRequestResult : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATED("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_IsUnconstrained(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUnconstrainedTransferRequestResult=_uuidof(IUnconstrainedTransferRequestResult);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUploadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UploadOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("3E5624E0-7389-434C-8B35-427FD36BBDAE"), exclusiveto, contract] */
                MIDL_INTERFACE("3E5624E0-7389-434C-8B35-427FD36BBDAE")
                IUploadOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceFile(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::BackgroundTransfer::BackgroundUploadProgress * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AttachAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUploadOperation=_uuidof(IUploadOperation);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUploadOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UploadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation2[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation2";
namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace BackgroundTransfer {
                /* [object, uuid("556189F2-2774-4DF6-9FA5-209F2BFB12F7"), exclusiveto, contract] */
                MIDL_INTERFACE("556189F2-2774-4DF6-9FA5-209F2BFB12F7")
                IUploadOperation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransferGroup(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::BackgroundTransfer::IBackgroundTransferGroup * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUploadOperation2=_uuidof(IUploadOperation2);
                
            } /* Windows */
        } /* Networking */
    } /* BackgroundTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader2
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundDownloader_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundDownloader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.BackgroundDownloader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferError_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferError[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader2
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundUploader_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundUploader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.BackgroundUploader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IContentPrefetcherTime interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IContentPrefetcher interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ContentPrefetcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ContentPrefetcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.ContentPrefetcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation2
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_DownloadOperation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_DownloadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_DownloadOperation[] = L"Windows.Networking.BackgroundTransfer.DownloadOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.ResponseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IResponseInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ResponseInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ResponseInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ResponseInformation[] = L"Windows.Networking.BackgroundTransfer.ResponseInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("UnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.UploadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IUploadOperation ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *    Windows.Networking.BackgroundTransfer.IUploadOperation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UploadOperation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UploadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UploadOperation[] = L"Windows.Networking.BackgroundTransfer.UploadOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2;

#endif // ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;

typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl;

interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart;

typedef  struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl;

interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPartVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange;

#if !defined(____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;

interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

typedef  struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;

interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef  struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef  struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [in] */ struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;

interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
            /* [in] */ __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange;

typedef struct __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This, /* [in] */ __RPC__in struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange *value);

    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl;

interface __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation;

typedef struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl;

interface __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;

typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;

interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CUri_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CUri_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;

typedef  struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);

    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;

interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CUri_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;

typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;

interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CFoundation__CUri_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CFoundation__CUri_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CFoundation__CUri __FIVector_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CUri;

typedef struct __FIVector_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, /* [in] */ __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *value);

    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CUriVtbl;

interface __FIVector_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CFoundation__CUri_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CFoundation__CUri_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CFoundation__CUri_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CFoundation__CUri_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CFoundation__CUri_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CFoundation__CUri_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

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


enum __x_ABI_CWindows_CWeb_CWebErrorStatus;
#if !defined(____FIIterator_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CWeb__CWebErrorStatus __FIIterator_1_Windows__CWeb__CWebErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CWebErrorStatus;

typedef struct __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl;

interface __FIIterator_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CWeb__CWebErrorStatus_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CWeb__CWebErrorStatus __FIIterable_1_Windows__CWeb__CWebErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CWebErrorStatus;

typedef  struct __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CWebErrorStatus **first);

    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl;

interface __FIIterable_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CWeb__CWebErrorStatus_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CWeb__CWebErrorStatus __FIVectorView_1_Windows__CWeb__CWebErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CWebErrorStatus;

typedef struct __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
            /* [in] */ enum __x_ABI_CWindows_CWeb_CWebErrorStatus item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CWebErrorStatus * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl;

interface __FIVectorView_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CWeb__CWebErrorStatus_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CWeb__CWebErrorStatus __FIVector_1_Windows__CWeb__CWebErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CWebErrorStatus;

typedef struct __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CWeb_CWebErrorStatus *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CWeb_CWebErrorStatus *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CWebErrorStatus **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CWeb_CWebErrorStatus item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CWeb_CWebErrorStatus *value);

    END_INTERFACE
} __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl;

interface __FIVector_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CWeb__CWebErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CWeb__CWebErrorStatus_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIReference_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CWeb__CWebErrorStatus __FIReference_1_Windows__CWeb__CWebErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CWeb__CWebErrorStatus;

typedef struct __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CWeb__CWebErrorStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CWeb_CWebErrorStatus *value);
    END_INTERFACE
} __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl;

interface __FIReference_1_Windows__CWeb__CWebErrorStatus
{
    CONST_VTBL struct __FIReference_1_Windows__CWeb__CWebErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CWeb__CWebErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CWeb__CWebErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CWeb__CWebErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CWeb__CWebErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CWeb__CWebErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CWeb__CWebErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CWeb__CWebErrorStatus_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CWeb__CWebErrorStatus_INTERFACE_DEFINED__


#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CITileNotification __x_ABI_CWindows_CUI_CNotifications_CITileNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CITileNotification_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CIToastNotification __x_ABI_CWindows_CUI_CNotifications_CIToastNotification;

#endif // ____x_ABI_CWindows_CUI_CNotifications_CIToastNotification_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;




typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior;


typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy;


typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority;


typedef enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus;


typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress;


typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange;


typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress;
























































/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferBehavior
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior
{
    BackgroundTransferBehavior_Parallel = 0,
    BackgroundTransferBehavior_Serialized = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferCostPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy
{
    BackgroundTransferCostPolicy_Default = 0,
    BackgroundTransferCostPolicy_UnrestrictedOnly = 1,
    BackgroundTransferCostPolicy_Always = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority
{
    BackgroundTransferPriority_Default = 0,
    BackgroundTransferPriority_High = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus
{
    BackgroundTransferStatus_Idle = 0,
    BackgroundTransferStatus_Running = 1,
    BackgroundTransferStatus_PausedByApplication = 2,
    BackgroundTransferStatus_PausedCostedNetwork = 3,
    BackgroundTransferStatus_PausedNoNetwork = 4,
    BackgroundTransferStatus_Completed = 5,
    BackgroundTransferStatus_Canceled = 6,
    BackgroundTransferStatus_Error = 7,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    BackgroundTransferStatus_PausedRecoverableWebErrorStatus = 8,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    BackgroundTransferStatus_PausedSystemPolicy = 32,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundDownloadProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress
{
    UINT64 BytesReceived;
    UINT64 TotalBytesToReceive;
    __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus Status;
    boolean HasResponseChanged;
    boolean HasRestarted;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundTransferFileRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferFileRange
{
    UINT64 Offset;
    UINT64 Length;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.Networking.BackgroundTransfer.BackgroundUploadProgress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress
{
    UINT64 BytesReceived;
    UINT64 BytesSent;
    UINT64 TotalBytesToReceive;
    UINT64 TotalBytesToSend;
    __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferStatus Status;
    boolean HasResponseChanged;
    boolean HasRestarted;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader";
/* [object, uuid("C1C79333-6649-4B1D-A826-A4B3DD234D0B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDownload )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateDownloadFromFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * requestBodyFile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDownloadAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * resultFile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * requestBodyStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_CreateDownload(This,uri,resultFile,operation) \
    ( (This)->lpVtbl->CreateDownload(This,uri,resultFile,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_CreateDownloadFromFile(This,uri,resultFile,requestBodyFile,operation) \
    ( (This)->lpVtbl->CreateDownloadFromFile(This,uri,resultFile,requestBodyFile,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_CreateDownloadAsync(This,uri,resultFile,requestBodyStream,operation) \
    ( (This)->lpVtbl->CreateDownloadAsync(This,uri,resultFile,requestBodyStream,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader2";
/* [object, uuid("A94A5847-348D-4A35-890E-8A1EF3798479"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_get_TransferGroup(This,value) \
    ( (This)->lpVtbl->get_TransferGroup(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_put_TransferGroup(This,value) \
    ( (This)->lpVtbl->put_TransferGroup(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_get_SuccessToastNotification(This,value) \
    ( (This)->lpVtbl->get_SuccessToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_put_SuccessToastNotification(This,value) \
    ( (This)->lpVtbl->put_SuccessToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_get_FailureToastNotification(This,value) \
    ( (This)->lpVtbl->get_FailureToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_put_FailureToastNotification(This,value) \
    ( (This)->lpVtbl->put_FailureToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_get_SuccessTileNotification(This,value) \
    ( (This)->lpVtbl->get_SuccessTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_put_SuccessTileNotification(This,value) \
    ( (This)->lpVtbl->put_SuccessTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_get_FailureTileNotification(This,value) \
    ( (This)->lpVtbl->get_FailureTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_put_FailureTileNotification(This,value) \
    ( (This)->lpVtbl->put_FailureTileNotification(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloader3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloader3";
/* [object, uuid("D11A8C48-86E8-48E2-B615-6976AABF861D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_get_CompletionGroup(This,value) \
    ( (This)->lpVtbl->get_CompletionGroup(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory";
/* [object, uuid("26836C24-D89E-46F4-A29A-4F4D4F144155"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * completionGroup,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloader * * backgroundDownloader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_CreateWithCompletionGroup(This,completionGroup,backgroundDownloader) \
    ( (This)->lpVtbl->CreateWithCompletionGroup(This,completionGroup,backgroundDownloader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods";
/* [object, uuid("52A65A35-C64E-426C-9919-540D0D21A650"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsForGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods * This,
        /* [in] */__RPC__in HSTRING group,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethodsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_GetCurrentDownloadsAsync(This,operation) \
    ( (This)->lpVtbl->GetCurrentDownloadsAsync(This,operation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetCurrentDownloadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentDownloadsForTransferGroupAsync.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_GetCurrentDownloadsForGroupAsync(This,group,operation) \
    ( (This)->lpVtbl->GetCurrentDownloadsForGroupAsync(This,group,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2";
/* [object, uuid("2FAA1327-1AD4-4CA5-B2CD-08DBF0746AFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentDownloadsForTransferGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * group,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_GetCurrentDownloadsForTransferGroupAsync(This,group,operation) \
    ( (This)->lpVtbl->GetCurrentDownloadsForTransferGroupAsync(This,group,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderStaticMethods2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundDownloaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent";
/* [object, uuid("5D14E906-9266-4808-BD71-5925F2A3130A"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("IBackgroundDownloaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RequestUnconstrainedDownloadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * operations,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("RequestUnconstrainedDownloadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_RequestUnconstrainedDownloadsAsync(This,operations,operation) \
    ( (This)->lpVtbl->RequestUnconstrainedDownloadsAsync(This,operations,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundDownloaderUserConsent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferBase[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferBase";
/* [object, uuid("2A9DA250-C769-458C-AFE8-FEB8D4D3B2EF"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__RPC__in HSTRING headerName,
        /* [in] */__RPC__in HSTRING headerValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * credential
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * credential
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_SetRequestHeader(This,headerName,headerValue) \
    ( (This)->lpVtbl->SetRequestHeader(This,headerName,headerValue) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_get_ServerCredential(This,credential) \
    ( (This)->lpVtbl->get_ServerCredential(This,credential) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_put_ServerCredential(This,credential) \
    ( (This)->lpVtbl->put_ServerCredential(This,credential) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_get_ProxyCredential(This,credential) \
    ( (This)->lpVtbl->get_ProxyCredential(This,credential) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_put_ProxyCredential(This,credential) \
    ( (This)->lpVtbl->put_ProxyCredential(This,credential) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_get_Method(This,value) \
    ( (This)->lpVtbl->get_Method(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_put_Method(This,value) \
    ( (This)->lpVtbl->put_Method(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_get_Group(This,value) \
    ( (This)->lpVtbl->get_Group(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_put_Group(This,value) \
    ( (This)->lpVtbl->put_Group(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_get_CostPolicy(This,value) \
    ( (This)->lpVtbl->get_CostPolicy(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_put_CostPolicy(This,value) \
    ( (This)->lpVtbl->put_CostPolicy(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup";
/* [object, uuid("2D930225-986B-574D-7950-0ADD47F5D706"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Trigger )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_get_Trigger(This,value) \
    ( (This)->lpVtbl->get_Trigger(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_Enable(This) \
    ( (This)->lpVtbl->Enable(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails";
/* [object, uuid("7B6BE286-6E47-5136-7FCB-FA4389F46F5B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Downloads )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uploads )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_get_Downloads(This,value) \
    ( (This)->lpVtbl->get_Downloads(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_get_Uploads(This,value) \
    ( (This)->lpVtbl->get_Uploads(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroupTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart";
/* [object, uuid("E8E15657-D7D1-4ED8-838E-674AC217ACE6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetHeader )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
        /* [in] */__RPC__in HSTRING headerName,
        /* [in] */__RPC__in HSTRING headerValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_SetHeader(This,headerName,headerValue) \
    ( (This)->lpVtbl->SetHeader(This,headerName,headerValue) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_SetText(This,value) \
    ( (This)->lpVtbl->SetText(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_SetFile(This,value) \
    ( (This)->lpVtbl->SetFile(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferContentPartFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory";
/* [object, uuid("90EF98A9-7A01-4A0B-9F80-A0B0BB370F8D"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithName )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithNameAndFileName )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in HSTRING fileName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPart * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_CreateWithName(This,name,value) \
    ( (This)->lpVtbl->CreateWithName(This,name,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_CreateWithNameAndFileName(This,name,fileName,value) \
    ( (This)->lpVtbl->CreateWithNameAndFileName(This,name,fileName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferContentPartFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferError
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferErrorStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods";
/* [object, uuid("AAD33B04-1192-4BF4-8B68-39C5ADD244E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods * This,
        /* [in] */INT32 hresult,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus * status
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethodsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_GetStatus(This,hresult,status) \
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferErrorStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup";
/* [object, uuid("D8C3E3E4-6459-4540-85EB-AAA1C8903677"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransferBehavior )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransferBehavior )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferBehavior value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_get_TransferBehavior(This,value) \
    ( (This)->lpVtbl->get_TransferBehavior(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_put_TransferBehavior(This,value) \
    ( (This)->lpVtbl->put_TransferBehavior(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferGroupStatics[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics";
/* [object, uuid("02EC50B2-7D18-495B-AA22-32A97D45D3E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_CreateGroup(This,name,value) \
    ( (This)->lpVtbl->CreateGroup(This,name,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperation[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation";
/* [object, uuid("DED06846-90CA-44FB-8FB1-124154C0D539"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Guid )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Method )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Group )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CostPolicy )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferCostPolicy value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResultStreamAt )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [in] */UINT64 position,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResponseInformation )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_get_Guid(This,value) \
    ( (This)->lpVtbl->get_Guid(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_get_RequestedUri(This,value) \
    ( (This)->lpVtbl->get_RequestedUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_get_Method(This,value) \
    ( (This)->lpVtbl->get_Method(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Group may be altered or unavailable for releases after Windows 8.1. Instead, use TransferGroup.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_get_Group(This,value) \
    ( (This)->lpVtbl->get_Group(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_get_CostPolicy(This,value) \
    ( (This)->lpVtbl->get_CostPolicy(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_put_CostPolicy(This,value) \
    ( (This)->lpVtbl->put_CostPolicy(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_GetResultStreamAt(This,position,value) \
    ( (This)->lpVtbl->GetResultStreamAt(This,position,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_GetResponseInformation(This,value) \
    ( (This)->lpVtbl->GetResponseInformation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferOperationPriority[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority";
/* [object, uuid("04854327-5254-4B3A-915E-0AA49275C0F9"), contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Priority )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Priority )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority * This,
        /* [in] */__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundTransferPriority value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriorityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_get_Priority(This,value) \
    ( (This)->lpVtbl->get_Priority(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_put_Priority(This,value) \
    ( (This)->lpVtbl->put_Priority(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferOperationPriority_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs";
/* [object, uuid("3EBC7453-BF48-4A88-9248-B0C165184F5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasDownloadRestarted )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddedRanges )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_get_WasDownloadRestarted(This,value) \
    ( (This)->lpVtbl->get_WasDownloadRestarted(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_get_AddedRanges(This,value) \
    ( (This)->lpVtbl->get_AddedRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferRangesDownloadedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader";
/* [object, uuid("C595C9AE-CEAD-465B-8801-C55AC90A01CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateUpload )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * sourceFile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateUploadFromStreamAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * sourceStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateUploadWithFormDataAndAutoBoundaryAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateUploadWithSubTypeAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
        /* [in] */__RPC__in HSTRING subType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateUploadWithSubTypeAndBoundaryAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferContentPart * parts,
        /* [in] */__RPC__in HSTRING subType,
        /* [in] */__RPC__in HSTRING boundary,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_CreateUpload(This,uri,sourceFile,operation) \
    ( (This)->lpVtbl->CreateUpload(This,uri,sourceFile,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_CreateUploadFromStreamAsync(This,uri,sourceStream,operation) \
    ( (This)->lpVtbl->CreateUploadFromStreamAsync(This,uri,sourceStream,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_CreateUploadWithFormDataAndAutoBoundaryAsync(This,uri,parts,operation) \
    ( (This)->lpVtbl->CreateUploadWithFormDataAndAutoBoundaryAsync(This,uri,parts,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_CreateUploadWithSubTypeAsync(This,uri,parts,subType,operation) \
    ( (This)->lpVtbl->CreateUploadWithSubTypeAsync(This,uri,parts,subType,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_CreateUploadWithSubTypeAndBoundaryAsync(This,uri,parts,subType,boundary,operation) \
    ( (This)->lpVtbl->CreateUploadWithSubTypeAndBoundaryAsync(This,uri,parts,subType,boundary,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader2";
/* [object, uuid("8E0612CE-0C34-4463-807F-198A1B8BD4AD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SuccessToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FailureToastNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CIToastNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SuccessTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FailureTileNotification )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CNotifications_CITileNotification * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_get_TransferGroup(This,value) \
    ( (This)->lpVtbl->get_TransferGroup(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_put_TransferGroup(This,value) \
    ( (This)->lpVtbl->put_TransferGroup(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_get_SuccessToastNotification(This,value) \
    ( (This)->lpVtbl->get_SuccessToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_put_SuccessToastNotification(This,value) \
    ( (This)->lpVtbl->put_SuccessToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_get_FailureToastNotification(This,value) \
    ( (This)->lpVtbl->get_FailureToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_put_FailureToastNotification(This,value) \
    ( (This)->lpVtbl->put_FailureToastNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_get_SuccessTileNotification(This,value) \
    ( (This)->lpVtbl->get_SuccessTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_put_SuccessTileNotification(This,value) \
    ( (This)->lpVtbl->put_SuccessTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_get_FailureTileNotification(This,value) \
    ( (This)->lpVtbl->get_FailureTileNotification(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_put_FailureTileNotification(This,value) \
    ( (This)->lpVtbl->put_FailureTileNotification(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploader3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploader3[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploader3";
/* [object, uuid("B95E9439-5BF0-4B3A-8C47-2C6199A854B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_get_CompletionGroup(This,value) \
    ( (This)->lpVtbl->get_CompletionGroup(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderFactory[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory";
/* [object, uuid("736203C7-10E7-48A0-AC3C-1AC71095EC57"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompletionGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferCompletionGroup * completionGroup,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploader * * backgroundUploader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_CreateWithCompletionGroup(This,completionGroup,backgroundUploader) \
    ( (This)->lpVtbl->CreateWithCompletionGroup(This,completionGroup,backgroundUploader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods";
/* [object, uuid("F2875CFB-9B05-4741-9121-740A83E247DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsForGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods * This,
        /* [in] */__RPC__in HSTRING group,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethodsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_GetCurrentUploadsAsync(This,operation) \
    ( (This)->lpVtbl->GetCurrentUploadsAsync(This,operation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetCurrentUploadsAsync(group) may be altered or unavailable for releases after Windows 8.1. Instead, use GetCurrentUploadsForTransferGroupAsync.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_GetCurrentUploadsForGroupAsync(This,group,operation) \
    ( (This)->lpVtbl->GetCurrentUploadsForGroupAsync(This,group,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderStaticMethods2[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2";
/* [object, uuid("E919AC62-EA08-42F0-A2AC-07E467549080"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentUploadsForTransferGroupAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * group,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_GetCurrentUploadsForTransferGroupAsync(This,group,operation) \
    ( (This)->lpVtbl->GetCurrentUploadsForTransferGroupAsync(This,group,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderStaticMethods2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IBackgroundUploaderUserConsent[] = L"Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent";
/* [object, uuid("3BB384CB-0760-461D-907F-5138F84D44C1"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("IBackgroundUploaderUserConsent is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RequestUnconstrainedUploadsAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * operations,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CBackgroundTransfer__CUnconstrainedTransferRequestResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("RequestUnconstrainedUploadsAsync is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_RequestUnconstrainedUploadsAsync(This,operations,operation) \
    ( (This)->lpVtbl->RequestUnconstrainedUploadsAsync(This,operations,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundUploaderUserConsent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IContentPrefetcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcher";
/* [object, uuid("A8D6F754-7DC1-4CD9-8810-2A6AA9417E11"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentUris )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IndirectContentUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndirectContentUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_get_ContentUris(This,value) \
    ( (This)->lpVtbl->get_ContentUris(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_put_IndirectContentUri(This,value) \
    ( (This)->lpVtbl->put_IndirectContentUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_get_IndirectContentUri(This,value) \
    ( (This)->lpVtbl->get_IndirectContentUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IContentPrefetcherTime
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IContentPrefetcherTime[] = L"Windows.Networking.BackgroundTransfer.IContentPrefetcherTime";
/* [object, uuid("E361FD08-132A-4FDE-A7CC-FCB0E66523AF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastSuccessfulPrefetchTime )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_get_LastSuccessfulPrefetchTime(This,value) \
    ( (This)->lpVtbl->get_LastSuccessfulPrefetchTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIContentPrefetcherTime_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation";
/* [object, uuid("BD87EBB0-5714-4E09-BA68-BEF73903B0D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResultFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundDownloadProgress * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AttachAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_get_ResultFile(This,value) \
    ( (This)->lpVtbl->get_ResultFile(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_StartAsync(This,operation) \
    ( (This)->lpVtbl->StartAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_AttachAsync(This,operation) \
    ( (This)->lpVtbl->AttachAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_Pause(This) \
    ( (This)->lpVtbl->Pause(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_Resume(This) \
    ( (This)->lpVtbl->Resume(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation2[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation2";
/* [object, uuid("A3CCED40-8F9C-4353-9CD4-290DEE387C38"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_get_TransferGroup(This,value) \
    ( (This)->lpVtbl->get_TransferGroup(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IDownloadOperation3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IDownloadOperation3[] = L"Windows.Networking.BackgroundTransfer.IDownloadOperation3";
/* [object, uuid("5027351C-7D5E-4ADC-B8D3-DF5C6031B9CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRandomAccessRequired )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsRandomAccessRequired )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetResultRandomAccessStreamReference )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * stream
        );
    HRESULT ( STDMETHODCALLTYPE *GetDownloadedRanges )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferFileRange * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RangesDownloaded )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CBackgroundTransfer__CDownloadOperation_Windows__CNetworking__CBackgroundTransfer__CBackgroundTransferRangesDownloadedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RangesDownloaded )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestedUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecoverableWebErrorStatuses )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CWeb__CWebErrorStatus * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentWebErrorStatus )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CWeb__CWebErrorStatus * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_get_IsRandomAccessRequired(This,value) \
    ( (This)->lpVtbl->get_IsRandomAccessRequired(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_put_IsRandomAccessRequired(This,value) \
    ( (This)->lpVtbl->put_IsRandomAccessRequired(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_GetResultRandomAccessStreamReference(This,stream) \
    ( (This)->lpVtbl->GetResultRandomAccessStreamReference(This,stream) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_GetDownloadedRanges(This,value) \
    ( (This)->lpVtbl->GetDownloadedRanges(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_add_RangesDownloaded(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_RangesDownloaded(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_remove_RangesDownloaded(This,eventCookie) \
    ( (This)->lpVtbl->remove_RangesDownloaded(This,eventCookie) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_put_RequestedUri(This,value) \
    ( (This)->lpVtbl->put_RequestedUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_get_RecoverableWebErrorStatuses(This,value) \
    ( (This)->lpVtbl->get_RecoverableWebErrorStatuses(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_get_CurrentWebErrorStatus(This,value) \
    ( (This)->lpVtbl->get_CurrentWebErrorStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIDownloadOperation3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IResponseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.ResponseInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IResponseInformation[] = L"Windows.Networking.BackgroundTransfer.IResponseInformation";
/* [object, uuid("F8BB9A12-F713-4792-8B68-D9D297F91D2E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsResumable )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActualUri )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StatusCode )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Headers )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_get_IsResumable(This,value) \
    ( (This)->lpVtbl->get_IsResumable(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_get_ActualUri(This,value) \
    ( (This)->lpVtbl->get_ActualUri(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_get_StatusCode(This,value) \
    ( (This)->lpVtbl->get_StatusCode(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_get_Headers(This,value) \
    ( (This)->lpVtbl->get_Headers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIResponseInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult";
/* [object, uuid("4C24B81F-D944-4112-A98E-6A69522B7EBB"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("IUnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
__x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATED("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_IsUnconstrained )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("IsUnconstrained is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_get_IsUnconstrained(This,value) \
    ( (This)->lpVtbl->get_IsUnconstrained(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUnconstrainedTransferRequestResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUploadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UploadOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation";
/* [object, uuid("3E5624E0-7389-434C-8B35-427FD36BBDAE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceFile )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CBackgroundUploadProgress * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AttachAsync )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CNetworking__CBackgroundTransfer__CUploadOperation_Windows__CNetworking__CBackgroundTransfer__CUploadOperation * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_get_SourceFile(This,value) \
    ( (This)->lpVtbl->get_SourceFile(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_StartAsync(This,operation) \
    ( (This)->lpVtbl->StartAsync(This,operation) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_AttachAsync(This,operation) \
    ( (This)->lpVtbl->AttachAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Networking.BackgroundTransfer.IUploadOperation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Networking.BackgroundTransfer.UploadOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_BackgroundTransfer_IUploadOperation2[] = L"Windows.Networking.BackgroundTransfer.IUploadOperation2";
/* [object, uuid("556189F2-2774-4DF6-9FA5-209F2BFB12F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransferGroup )(
        __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIBackgroundTransferGroup * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl;

interface __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_get_TransferGroup(This,value) \
    ( (This)->lpVtbl->get_TransferGroup(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2;
#endif /* !defined(____x_ABI_CWindows_CNetworking_CBackgroundTransfer_CIUploadOperation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundDownloader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderUserConsent interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundDownloaderStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader2
 *    Windows.Networking.BackgroundTransfer.IBackgroundDownloader3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundDownloader_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundDownloader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundDownloader[] = L"Windows.Networking.BackgroundTransfer.BackgroundDownloader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferCompletionGroupTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferCompletionGroupTriggerDetails[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferCompletionGroupTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPartFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferContentPart ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferContentPart[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferContentPart";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferError
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundTransferErrorStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferError_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferError[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferError";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundTransferGroupStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferGroup[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferRangesDownloadedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundTransferRangesDownloadedEventArgs[] = L"Windows.Networking.BackgroundTransfer.BackgroundTransferRangesDownloadedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.BackgroundUploader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Networking.BackgroundTransfer.IBackgroundUploaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderUserConsent interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IBackgroundUploaderStaticMethods interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferBase
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader2
 *    Windows.Networking.BackgroundTransfer.IBackgroundUploader3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundUploader_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_BackgroundUploader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_BackgroundUploader[] = L"Windows.Networking.BackgroundTransfer.BackgroundUploader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.ContentPrefetcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IContentPrefetcherTime interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Networking.BackgroundTransfer.IContentPrefetcher interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ContentPrefetcher_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ContentPrefetcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ContentPrefetcher[] = L"Windows.Networking.BackgroundTransfer.ContentPrefetcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.DownloadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation2
 *    Windows.Networking.BackgroundTransfer.IDownloadOperation3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_DownloadOperation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_DownloadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_DownloadOperation[] = L"Windows.Networking.BackgroundTransfer.DownloadOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.ResponseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IResponseInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ResponseInformation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_ResponseInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_ResponseInformation[] = L"Windows.Networking.BackgroundTransfer.ResponseInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IUnconstrainedTransferRequestResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
DEPRECATED("UnconstrainedTransferRequestResult is deprecated and may not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UnconstrainedTransferRequestResult[] = L"Windows.Networking.BackgroundTransfer.UnconstrainedTransferRequestResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Networking.BackgroundTransfer.UploadOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Networking.BackgroundTransfer.IUploadOperation ** Default Interface **
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperation
 *    Windows.Networking.BackgroundTransfer.IBackgroundTransferOperationPriority
 *    Windows.Networking.BackgroundTransfer.IUploadOperation2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UploadOperation_DEFINED
#define RUNTIMECLASS_Windows_Networking_BackgroundTransfer_UploadOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_BackgroundTransfer_UploadOperation[] = L"Windows.Networking.BackgroundTransfer.UploadOperation";
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
#endif // __windows2Enetworking2Ebackgroundtransfer_p_h__

#endif // __windows2Enetworking2Ebackgroundtransfer_h__
