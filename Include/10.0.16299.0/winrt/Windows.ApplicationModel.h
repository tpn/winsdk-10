/* Header file automatically generated from windows.applicationmodel.idl */
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
#ifndef __windows2Eapplicationmodel_h__
#define __windows2Eapplicationmodel_h__
#ifndef __windows2Eapplicationmodel_p_h__
#define __windows2Eapplicationmodel_p_h__


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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IAppDisplayInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo ABI::Windows::ApplicationModel::IAppDisplayInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IAppInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIAppInfo ABI::Windows::ApplicationModel::IAppInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IDesignModeStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics ABI::Windows::ApplicationModel::IDesignModeStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IDesignModeStatics2;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 ABI::Windows::ApplicationModel::IDesignModeStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IEnteredBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IFullTrustProcessLauncherStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics ABI::Windows::ApplicationModel::IFullTrustProcessLauncherStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ILeavingBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage ABI::Windows::ApplicationModel::IPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage2;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage2 ABI::Windows::ApplicationModel::IPackage2

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage3;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage3 ABI::Windows::ApplicationModel::IPackage3

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage4;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage4 ABI::Windows::ApplicationModel::IPackage4

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackage5;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackage5 ABI::Windows::ApplicationModel::IPackage5

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalog;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog ABI::Windows::ApplicationModel::IPackageCatalog

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalog2;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 ABI::Windows::ApplicationModel::IPackageCatalog2

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalog3;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 ABI::Windows::ApplicationModel::IPackageCatalog3

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalogAddOptionalPackageResult;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalogRemoveOptionalPackagesResult;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageCatalogStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics ABI::Windows::ApplicationModel::IPackageCatalogStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageContentGroup;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup ABI::Windows::ApplicationModel::IPackageContentGroup

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageContentGroupStagingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs ABI::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageContentGroupStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics ABI::Windows::ApplicationModel::IPackageContentGroupStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageId;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageId ABI::Windows::ApplicationModel::IPackageId

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageIdWithMetadata;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata ABI::Windows::ApplicationModel::IPackageIdWithMetadata

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageInstallingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs ABI::Windows::ApplicationModel::IPackageInstallingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageStagingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs ABI::Windows::ApplicationModel::IPackageStagingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics ABI::Windows::ApplicationModel::IPackageStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageStatus;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus ABI::Windows::ApplicationModel::IPackageStatus

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageStatus2;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 ABI::Windows::ApplicationModel::IPackageStatus2

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageStatusChangedEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs ABI::Windows::ApplicationModel::IPackageStatusChangedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageUninstallingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs ABI::Windows::ApplicationModel::IPackageUninstallingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageUpdatingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs ABI::Windows::ApplicationModel::IPackageUpdatingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IPackageWithMetadata;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata ABI::Windows::ApplicationModel::IPackageWithMetadata

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IStartupTask;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIStartupTask ABI::Windows::ApplicationModel::IStartupTask

#endif // ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IStartupTaskStatics;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics ABI::Windows::ApplicationModel::IStartupTaskStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingDeferral;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral ABI::Windows::ApplicationModel::ISuspendingDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs ABI::Windows::ApplicationModel::ISuspendingEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface ISuspendingOperation;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation ABI::Windows::ApplicationModel::ISuspendingOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class AppInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("69cec62c-41eb-5d69-a475-29ee22323dd8"))
IIterator<ABI::Windows::ApplicationModel::AppInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::AppInfo*> __FIIterator_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("63d0bffe-0e34-55b3-83d5-314caff2b137"))
IIterable<ABI::Windows::ApplicationModel::AppInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::AppInfo*> __FIIterable_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class Package;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0217f069-025c-5ee6-a87f-e782e3b623ae"))
IIterator<ABI::Windows::ApplicationModel::Package*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Package*> __FIIterator_1_Windows__CApplicationModel__CPackage_t;
#define __FIIterator_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIIterator_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("69ad6aa7-0c49-5f27-a5eb-ef4d59467b6d"))
IIterable<ABI::Windows::ApplicationModel::Package*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Package*> __FIIterable_1_Windows__CApplicationModel__CPackage_t;
#define __FIIterable_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIIterable_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageContentGroup;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5f23d323-28f5-560f-a40e-6f3827f82e9f"))
IIterator<ABI::Windows::ApplicationModel::PackageContentGroup*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7dd1456-4805-5768-a25d-99641b096491"))
IIterable<ABI::Windows::ApplicationModel::PackageContentGroup*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class StartupTask;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("14653598-9065-508e-b37b-44eb28d51cb7"))
IIterator<ABI::Windows::ApplicationModel::StartupTask*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::StartupTask*, ABI::Windows::ApplicationModel::IStartupTask*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.StartupTask>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::StartupTask*> __FIIterator_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIIterator_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IStartupTask*>
//#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::IStartupTask*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("61885ead-bf9e-5e9f-af04-6296b336930b"))
IIterable<ABI::Windows::ApplicationModel::StartupTask*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::StartupTask*, ABI::Windows::ApplicationModel::IStartupTask*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.StartupTask>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::StartupTask*> __FIIterable_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIIterable_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IStartupTask*>
//#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::IStartupTask*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8246ed12-33e8-52b3-a5c5-19779de9999e"))
IVectorView<ABI::Windows::ApplicationModel::AppInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::AppInfo*, ABI::Windows::ApplicationModel::IAppInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::AppInfo*> __FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0263c4d4-195c-5dc5-a7ca-6806ceca420b"))
IVectorView<ABI::Windows::ApplicationModel::Package*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Package*> __FIVectorView_1_Windows__CApplicationModel__CPackage_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("deae10f1-0546-5e61-bd3f-e05da30078ac"))
IVectorView<ABI::Windows::ApplicationModel::PackageContentGroup*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ea3b1b7a-5071-5986-88fc-912dbbf845fb"))
IVectorView<ABI::Windows::ApplicationModel::StartupTask*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::StartupTask*, ABI::Windows::ApplicationModel::IStartupTask*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.StartupTask>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::StartupTask*> __FIVectorView_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>
//#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d1bb509e-6989-5c69-b1ff-d1702fe8aca3"))
IVector<ABI::Windows::ApplicationModel::Package*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Package*, ABI::Windows::ApplicationModel::IPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.Package>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::Package*> __FIVector_1_Windows__CApplicationModel__CPackage_t;
#define __FIVector_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CPackage ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackage*>
//#define __FIVector_1_Windows__CApplicationModel__CPackage_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("29adc699-5848-5a98-a516-23feb0fa2c4b"))
IVector<ABI::Windows::ApplicationModel::PackageContentGroup*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class EnteredBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e0739c32-fc14-5361-a8b3-0809699fbcbd"))
IEventHandler<ABI::Windows::ApplicationModel::EnteredBackgroundEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::EnteredBackgroundEventArgs*, ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.EnteredBackgroundEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::EnteredBackgroundEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs*>
//#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::IEnteredBackgroundEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class LeavingBackgroundEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9b6171c2-abb2-5194-afc0-cef167c424eb"))
IEventHandler<ABI::Windows::ApplicationModel::LeavingBackgroundEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::LeavingBackgroundEventArgs*, ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.LeavingBackgroundEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::LeavingBackgroundEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs*>
//#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::ILeavingBackgroundEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class SuspendingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("338579bf-1a35-5cc4-a622-a6f384fd892c"))
IEventHandler<ABI::Windows::ApplicationModel::SuspendingEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SuspendingEventArgs*, ABI::Windows::ApplicationModel::ISuspendingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::ApplicationModel::SuspendingEventArgs*> __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_t;
#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::ISuspendingEventArgs*>
//#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::ApplicationModel::ISuspendingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageCatalogAddOptionalPackageResult;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6c5f9b5d-3c24-5087-ae15-6ab4942c4639"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*, ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("59b2497f-86eb-542f-bea6-1be53e93e13d"))
IAsyncOperation<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*, ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::PackageCatalogAddOptionalPackageResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageCatalogAddOptionalPackageResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageCatalogRemoveOptionalPackagesResult;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f168612c-6882-5c8c-a464-7ea25e269876"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*, ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cfc179aa-fb98-54ef-8ea8-64499347b7f7"))
IAsyncOperation<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*, ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::PackageCatalogRemoveOptionalPackagesResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageCatalogRemoveOptionalPackagesResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2253dc38-9a1a-5364-9a3b-03a7da615499"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageContentGroup*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bbd292e3-db9f-5802-a488-40f156332c04"))
IAsyncOperation<ABI::Windows::ApplicationModel::PackageContentGroup*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroup*, ABI::Windows::ApplicationModel::IPackageContentGroup*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.PackageContentGroup>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::PackageContentGroup*> __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageContentGroup*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IPackageContentGroup*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("741f7697-2452-5c80-83c6-3b6f822b904c"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::StartupTask*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::StartupTask*, ABI::Windows::ApplicationModel::IStartupTask*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.StartupTask>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::StartupTask*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IStartupTask*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::IStartupTask*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cbec7a4e-a046-5330-873d-0fce228792fa"))
IAsyncOperation<ABI::Windows::ApplicationModel::StartupTask*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::StartupTask*, ABI::Windows::ApplicationModel::IStartupTask*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.StartupTask>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::StartupTask*> __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IStartupTask*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::IStartupTask*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            enum StartupTaskState : int;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("70a0bf67-19e8-5a86-a32e-3c9863825a04"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::StartupTaskState> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::StartupTaskState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.StartupTaskState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::StartupTaskState> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::StartupTaskState>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::StartupTaskState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5239a934-80e2-518f-b819-1f316f379a3f"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::StartupTaskState> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::StartupTaskState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.StartupTaskState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::StartupTaskState> __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::StartupTaskState>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::StartupTaskState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07f25b6f-f054-5649-a5ce-b348ddc618b6"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07543d91-8610-5152-b0e4-43d6e4cdd0cb"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.AppInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CAppInfo*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IAppInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("15d40795-41f9-50d7-a39e-5390981af651"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.StartupTask>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("16543165-5b65-5683-8a02-c385659158bd"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.StartupTask>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStartupTask*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::IStartupTask*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_USE */


#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52465bf3-3ca6-5681-a7b4-91847757b5fd"))
IAsyncOperationCompletedHandler<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> : IAsyncOperationCompletedHandler_impl<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.PackageContentGroup>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#define DEF___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("929e3c29-bf29-5594-bc63-67db43a539ea"))
IAsyncOperation<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> : IAsyncOperation_impl<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.PackageContentGroup>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVector_1_Windows__CApplicationModel__CPackageContentGroup*> __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t;
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::__FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>*>
//#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::IPackageContentGroup*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageCatalog;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageContentGroupStagingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("df206861-9d30-5739-88b2-97e0717cc5f0"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageContentGroupStagingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageContentGroupStagingEventArgs*, ABI::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageContentGroupStagingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageContentGroupStagingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageContentGroupStagingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageInstallingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8a900c6-da0b-5bcc-a71a-be0b9265d87a"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageInstallingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageInstallingEventArgs*, ABI::Windows::ApplicationModel::IPackageInstallingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageInstallingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageInstallingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageInstallingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageInstallingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageStagingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1726f52d-2b8c-524a-98c6-f2cf0893c0f2"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageStagingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageStagingEventArgs*, ABI::Windows::ApplicationModel::IPackageStagingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageStagingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageStagingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageStagingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageStagingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageStatusChangedEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b32d7d63-cd0e-5c2e-a251-fb8d290824e4"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageStatusChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageStatusChangedEventArgs*, ABI::Windows::ApplicationModel::IPackageStatusChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageStatusChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageStatusChangedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageStatusChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageStatusChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageUninstallingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bd636cf1-541f-53ea-8efc-e1604a395b1a"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageUninstallingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageUninstallingEventArgs*, ABI::Windows::ApplicationModel::IPackageUninstallingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageUninstallingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageUninstallingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageUninstallingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageUninstallingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageUpdatingEventArgs;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c23e15f6-c618-522a-82ab-4fab36665ce5"))
ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageUpdatingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageCatalog*, ABI::Windows::ApplicationModel::IPackageCatalog*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::PackageUpdatingEventArgs*, ABI::Windows::ApplicationModel::IPackageUpdatingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.PackageCatalog, Windows.ApplicationModel.PackageUpdatingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::PackageCatalog*,ABI::Windows::ApplicationModel::PackageUpdatingEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageUpdatingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::IPackageCatalog*,ABI::Windows::ApplicationModel::IPackageUpdatingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                class AppListEntry;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface IAppListEntry;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry ABI::Windows::ApplicationModel::Core::IAppListEntry

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b93e2028-50bc-599e-b3d9-427b61d26c01"))
IIterator<ABI::Windows::ApplicationModel::Core::AppListEntry*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Core::AppListEntry*, ABI::Windows::ApplicationModel::Core::IAppListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Core.AppListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Core::AppListEntry*> __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_t;
#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
//#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("86f4d4ef-d8fd-5fb5-807c-72da8fc9e544"))
IIterable<ABI::Windows::ApplicationModel::Core::AppListEntry*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Core::AppListEntry*, ABI::Windows::ApplicationModel::Core::IAppListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Core.AppListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Core::AppListEntry*> __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_t;
#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
//#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("920c8b92-d5ef-5899-8776-2ad97aca6e1d"))
IVectorView<ABI::Windows::ApplicationModel::Core::AppListEntry*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Core::AppListEntry*, ABI::Windows::ApplicationModel::Core::IAppListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Core.AppListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Core::AppListEntry*> __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t;
#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
//#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c74372-9452-57ce-9270-762009fbfe4d"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Core.AppListEntry>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d3bcf8a0-3538-5dae-98d7-1f2ab88c3f01"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Core.AppListEntry>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Core::IAppListEntry*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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
            
            typedef struct Size Size;
            
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




namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFolder;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFolder ABI::Windows::Storage::IStorageFolder

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




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
        namespace System {
            
            typedef enum ProcessorArchitecture : int ProcessorArchitecture;
            
        } /* Windows */
    } /* System */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            
            typedef enum PackageContentGroupState : int PackageContentGroupState;
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            
            typedef enum PackageSignatureKind : int PackageSignatureKind;
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            
            typedef enum StartupTaskState : int StartupTaskState;
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            
            typedef struct PackageVersion PackageVersion;
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */






































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class AppDisplayInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */













namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageId;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class PackageStatus;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class SuspendingDeferral;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class SuspendingOperation;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.PackageContentGroupState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [v1_enum, contract] */
            enum PackageContentGroupState : int
            {
                PackageContentGroupState_NotStaged = 0,
                PackageContentGroupState_Queued = 1,
                PackageContentGroupState_Staging = 2,
                PackageContentGroupState_Staged = 3,
            };
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.PackageSignatureKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [v1_enum, contract] */
            enum PackageSignatureKind : int
            {
                PackageSignatureKind_None = 0,
                PackageSignatureKind_Developer = 1,
                PackageSignatureKind_Enterprise = 2,
                PackageSignatureKind_Store = 3,
                PackageSignatureKind_System = 4,
            };
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.StartupTaskState
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [v1_enum, contract] */
            enum StartupTaskState : int
            {
                StartupTaskState_Disabled = 0,
                StartupTaskState_DisabledByUser = 1,
                StartupTaskState_Enabled = 2,
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x20000
                
                StartupTaskState_DisabledByPolicy = 3,
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x20000
                
            };
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.PackageVersion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [contract] */
            struct PackageVersion
            {
                UINT16 Major;
                UINT16 Minor;
                UINT16 Build;
                UINT16 Revision;
            };
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IAppDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppDisplayInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppDisplayInfo[] = L"Windows.ApplicationModel.IAppDisplayInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("1AEB1103-E4D4-41AA-A4F6-C4A276E79EAC"), exclusiveto, contract] */
            MIDL_INTERFACE("1AEB1103-E4D4-41AA-A4F6-C4A276E79EAC")
            IAppDisplayInfo : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetLogo(
                    /* [in] */ABI::Windows::Foundation::Size size,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAppDisplayInfo=_uuidof(IAppDisplayInfo);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IAppInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInfo[] = L"Windows.ApplicationModel.IAppInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("CF7F59B3-6A09-4DE8-A6C0-5792D56880D1"), exclusiveto, contract] */
            MIDL_INTERFACE("CF7F59B3-6A09-4DE8-A6C0-5792D56880D1")
            IAppInfo : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppUserModelId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayInfo(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IAppDisplayInfo * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IAppInfo=_uuidof(IAppInfo);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IDesignModeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DesignMode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics[] = L"Windows.ApplicationModel.IDesignModeStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("2C3893CC-F81A-4E7A-B857-76A80887E185"), exclusiveto, contract] */
            MIDL_INTERFACE("2C3893CC-F81A-4E7A-B857-76A80887E185")
            IDesignModeStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesignModeEnabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IDesignModeStatics=_uuidof(IDesignModeStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IDesignModeStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DesignMode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics2[] = L"Windows.ApplicationModel.IDesignModeStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("80CF8137-B064-4858-BEC8-3EBA22357535"), exclusiveto, contract] */
            MIDL_INTERFACE("80CF8137-B064-4858-BEC8-3EBA22357535")
            IDesignModeStatics2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesignMode2Enabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IDesignModeStatics2=_uuidof(IDesignModeStatics2);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IEnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IEnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.IEnteredBackgroundEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("F722DCC2-9827-403D-AAED-ECCA9AC17398"), contract] */
            MIDL_INTERFACE("F722DCC2-9827-403D-AAED-ECCA9AC17398")
            IEnteredBackgroundEventArgs : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IEnteredBackgroundEventArgs=_uuidof(IEnteredBackgroundEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IFullTrustProcessLauncherStatics
 *
 * Introduced to Windows.ApplicationModel.FullTrustAppContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.FullTrustProcessLauncher
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IFullTrustProcessLauncherStatics[] = L"Windows.ApplicationModel.IFullTrustProcessLauncherStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("D784837F-1100-3C6B-A455-F6262CC331B6"), exclusiveto, contract] */
            MIDL_INTERFACE("D784837F-1100-3C6B-A455-F6262CC331B6")
            IFullTrustProcessLauncherStatics : IInspectable
            {
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE LaunchFullTrustProcessForCurrentAppAsync(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE LaunchFullTrustProcessForCurrentAppWithParametersAsync(
                    /* [in] */__RPC__in HSTRING parameterGroupId,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE LaunchFullTrustProcessForAppAsync(
                    /* [in] */__RPC__in HSTRING fullTrustPackageRelativeAppId,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE LaunchFullTrustProcessForAppWithParametersAsync(
                    /* [in] */__RPC__in HSTRING fullTrustPackageRelativeAppId,
                    /* [in] */__RPC__in HSTRING parameterGroupId,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncAction
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IFullTrustProcessLauncherStatics=_uuidof(IFullTrustProcessLauncherStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ILeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ILeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.ILeavingBackgroundEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("39C6EC9A-AE6E-46F9-A07A-CFC23F88733E"), contract] */
            MIDL_INTERFACE("39C6EC9A-AE6E-46F9-A07A-CFC23F88733E")
            ILeavingBackgroundEventArgs : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ILeavingBackgroundEventArgs=_uuidof(ILeavingBackgroundEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage[] = L"Windows.ApplicationModel.IPackage";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("163C792F-BD75-413C-BF23-B1FE7B95D825"), exclusiveto, contract] */
            MIDL_INTERFACE("163C792F-BD75-413C-BF23-B1FE7B95D825")
            IPackage : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackageId * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstalledLocation(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsFramework(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dependencies(
                    /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackage=_uuidof(IPackage);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage2[] = L"Windows.ApplicationModel.IPackage2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("A6612FB6-7688-4ACE-95FB-359538E7AA01"), exclusiveto, contract] */
            MIDL_INTERFACE("A6612FB6-7688-4ACE-95FB-359538E7AA01")
            IPackage2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublisherDisplayName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Logo(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsResourcePackage(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBundle(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDevelopmentMode(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackage2=_uuidof(IPackage2);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage3[] = L"Windows.ApplicationModel.IPackage3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("5F738B61-F86A-4917-93D1-F1EE9D3B35D9"), exclusiveto, contract] */
            MIDL_INTERFACE("5F738B61-F86A-4917-93D1-F1EE9D3B35D9")
            IPackage3 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackageStatus * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstalledDate(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetAppListEntriesAsync(
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackage3=_uuidof(IPackage3);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage4[] = L"Windows.ApplicationModel.IPackage4";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("65AED1AE-B95B-450C-882B-6255187F397E"), exclusiveto, contract] */
            MIDL_INTERFACE("65AED1AE-B95B-450C-882B-6255187F397E")
            IPackage4 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignatureKind(
                    /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::PackageSignatureKind * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOptional(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE VerifyContentIntegrityAsync(
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackage4=_uuidof(IPackage4);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackage5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage5[] = L"Windows.ApplicationModel.IPackage5";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("0E842DD4-D9AC-45ED-9A1E-74CE056B2635"), exclusiveto, contract] */
            MIDL_INTERFACE("0E842DD4-D9AC-45ED-9A1E-74CE056B2635")
            IPackage5 : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetContentGroupsAsync(
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetContentGroupAsync(
                    /* [in] */__RPC__in HSTRING name,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * * operation
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE StageContentGroupsAsync(
                    /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * names,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE StageContentGroupsWithPriorityAsync(
                    /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * names,
                    /* [in] */boolean moveToHeadOfQueue,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE SetInUseAsync(
                    /* [in] */boolean inUse,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackage5=_uuidof(IPackage5);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage5;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog[] = L"Windows.ApplicationModel.IPackageCatalog";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("230A3751-9DE3-4445-BE74-91FB325ABEFE"), exclusiveto, contract] */
            MIDL_INTERFACE("230A3751-9DE3-4445-BE74-91FB325ABEFE")
            IPackageCatalog : IInspectable
            {
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageStaging(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageStaging(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageInstalling(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageInstalling(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageUpdating(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageUpdating(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageUninstalling(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageUninstalling(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageStatusChanged(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageStatusChanged(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalog=_uuidof(IPackageCatalog);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog2[] = L"Windows.ApplicationModel.IPackageCatalog2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("96A60C36-8FF7-4344-B6BF-EE64C2207ED2"), exclusiveto, contract] */
            MIDL_INTERFACE("96A60C36-8FF7-4344-B6BF-EE64C2207ED2")
            IPackageCatalog2 : IInspectable
            {
                /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PackageContentGroupStaging(
                    /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * handler,
                    /* [retval, out] */__RPC__out EventRegistrationToken * token
                    ) = 0;
                /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PackageContentGroupStaging(
                    /* [in] */EventRegistrationToken token
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE AddOptionalPackageAsync(
                    /* [in] */__RPC__in HSTRING optionalPackageFamilyName,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalog2=_uuidof(IPackageCatalog2);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog3[] = L"Windows.ApplicationModel.IPackageCatalog3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("96DD5C88-8837-43F9-9015-033434BA14F3"), exclusiveto, contract] */
            MIDL_INTERFACE("96DD5C88-8837-43F9-9015-033434BA14F3")
            IPackageCatalog3 : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE RemoveOptionalPackagesAsync(
                    /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalog3=_uuidof(IPackageCatalog3);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("3BF10CD4-B4DF-47B3-A963-E2FA832F7DD3"), exclusiveto, contract] */
            MIDL_INTERFACE("3BF10CD4-B4DF-47B3-A963-E2FA832F7DD3")
            IPackageCatalogAddOptionalPackageResult : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalogAddOptionalPackageResult=_uuidof(IPackageCatalogAddOptionalPackageResult);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("29D2F97B-D974-4E64-9359-22CADFD79828"), exclusiveto, contract] */
            MIDL_INTERFACE("29D2F97B-D974-4E64-9359-22CADFD79828")
            IPackageCatalogRemoveOptionalPackagesResult : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackagesRemoved(
                    /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalogRemoveOptionalPackagesResult=_uuidof(IPackageCatalogRemoveOptionalPackagesResult);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogStatics[] = L"Windows.ApplicationModel.IPackageCatalogStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("A18C9696-E65B-4634-BA21-5E63EB7244A7"), exclusiveto, contract] */
            MIDL_INTERFACE("A18C9696-E65B-4634-BA21-5E63EB7244A7")
            IPackageCatalogStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE OpenForCurrentPackage(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackageCatalog * * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE OpenForCurrentUser(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackageCatalog * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageCatalogStatics=_uuidof(IPackageCatalogStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroup[] = L"Windows.ApplicationModel.IPackageContentGroup";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("8F62695D-120A-4798-B5E1-5800DDA8F2E1"), exclusiveto, contract] */
            MIDL_INTERFACE("8F62695D-120A-4798-B5E1-5800DDA8F2E1")
            IPackageContentGroup : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::PackageContentGroupState * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRequired(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageContentGroup=_uuidof(IPackageContentGroup);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroup;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroupStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroupStagingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.IPackageContentGroupStagingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("3D7BC27E-6F27-446C-986E-D4733D4D9113"), exclusiveto, contract] */
            MIDL_INTERFACE("3D7BC27E-6F27-446C-986E-D4733D4D9113")
            IPackageContentGroupStagingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                    /* [retval, out] */__RPC__out GUID * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComplete(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentGroupName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsContentGroupRequired(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageContentGroupStagingEventArgs=_uuidof(IPackageContentGroupStagingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStatics[] = L"Windows.ApplicationModel.IPackageContentGroupStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("70EE7619-5F12-4B92-B9EA-6CCADA13BC75"), exclusiveto, contract] */
            MIDL_INTERFACE("70EE7619-5F12-4B92-B9EA-6CCADA13BC75")
            IPackageContentGroupStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequiredGroupName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageContentGroupStatics=_uuidof(IPackageContentGroupStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageId[] = L"Windows.ApplicationModel.IPackageId";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("1ADB665E-37C7-4790-9980-DD7AE74E8BB2"), exclusiveto, contract] */
            MIDL_INTERFACE("1ADB665E-37C7-4790-9980-DD7AE74E8BB2")
            IPackageId : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                    /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::PackageVersion * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Architecture(
                    /* [retval, out] */__RPC__out ABI::Windows::System::ProcessorArchitecture * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Publisher(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublisherId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FamilyName(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageId=_uuidof(IPackageId);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageIdWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageIdWithMetadata[] = L"Windows.ApplicationModel.IPackageIdWithMetadata";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("40577A7C-0C9E-443D-9074-855F5CE0A08D"), exclusiveto, contract] */
            MIDL_INTERFACE("40577A7C-0C9E-443D-9074-855F5CE0A08D")
            IPackageIdWithMetadata : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Author(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageIdWithMetadata=_uuidof(IPackageIdWithMetadata);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageInstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageInstallingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageInstallingEventArgs[] = L"Windows.ApplicationModel.IPackageInstallingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("97741EB7-AB7A-401A-8B61-EB0E7FAFF237"), exclusiveto, contract] */
            MIDL_INTERFACE("97741EB7-AB7A-401A-8B61-EB0E7FAFF237")
            IPackageInstallingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                    /* [retval, out] */__RPC__out GUID * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComplete(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageInstallingEventArgs=_uuidof(IPackageInstallingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStagingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStagingEventArgs[] = L"Windows.ApplicationModel.IPackageStagingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("1041682D-54E2-4F51-B828-9EF7046C210F"), exclusiveto, contract] */
            MIDL_INTERFACE("1041682D-54E2-4F51-B828-9EF7046C210F")
            IPackageStagingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                    /* [retval, out] */__RPC__out GUID * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComplete(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageStagingEventArgs=_uuidof(IPackageStagingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatics[] = L"Windows.ApplicationModel.IPackageStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("4E534BDF-2960-4878-97A4-9624DEB72F2D"), exclusiveto, contract] */
            MIDL_INTERFACE("4E534BDF-2960-4878-97A4-9624DEB72F2D")
            IPackageStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageStatics=_uuidof(IPackageStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus[] = L"Windows.ApplicationModel.IPackageStatus";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("5FE74F71-A365-4C09-A02D-046D525EA1DA"), exclusiveto, contract] */
            MIDL_INTERFACE("5FE74F71-A365-4C09-A02D-046D525EA1DA")
            IPackageStatus : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE VerifyIsOK(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotAvailable(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageOffline(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataOffline(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Disabled(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NeedsRemediation(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseIssue(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Modified(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tampered(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DependencyIssue(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Servicing(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeploymentInProgress(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageStatus=_uuidof(IPackageStatus);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatus2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus2[] = L"Windows.ApplicationModel.IPackageStatus2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("F428FA93-7C56-4862-ACFA-ABAEDCC0694D"), exclusiveto, contract] */
            MIDL_INTERFACE("F428FA93-7C56-4862-ACFA-ABAEDCC0694D")
            IPackageStatus2 : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPartiallyStaged(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageStatus2=_uuidof(IPackageStatus2);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.IPackageStatusChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("437D714D-BD80-4A70-BC50-F6E796509575"), exclusiveto, contract] */
            MIDL_INTERFACE("437D714D-BD80-4A70-BC50-F6E796509575")
            IPackageStatusChangedEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageStatusChangedEventArgs=_uuidof(IPackageStatusChangedEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageUninstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageUninstallingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUninstallingEventArgs[] = L"Windows.ApplicationModel.IPackageUninstallingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("4443AA52-AB22-44CD-82BB-4EC9B827367A"), exclusiveto, contract] */
            MIDL_INTERFACE("4443AA52-AB22-44CD-82BB-4EC9B827367A")
            IPackageUninstallingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                    /* [retval, out] */__RPC__out GUID * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Package(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComplete(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageUninstallingEventArgs=_uuidof(IPackageUninstallingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUpdatingEventArgs[] = L"Windows.ApplicationModel.IPackageUpdatingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("CD7B4228-FD74-443E-B114-23E677B0E86F"), exclusiveto, contract] */
            MIDL_INTERFACE("CD7B4228-FD74-443E-B114-23E677B0E86F")
            IPackageUpdatingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ActivityId(
                    /* [retval, out] */__RPC__out GUID * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourcePackage(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetPackage(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IPackage * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                    /* [retval, out] */__RPC__out DOUBLE * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsComplete(
                    /* [retval, out] */__RPC__out boolean * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorCode(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageUpdatingEventArgs=_uuidof(IPackageUpdatingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageWithMetadata[] = L"Windows.ApplicationModel.IPackageWithMetadata";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("95949780-1DE9-40F2-B452-0DE9F1910012"), exclusiveto, contract] */
            MIDL_INTERFACE("95949780-1DE9-40F2-B452-0DE9F1910012")
            IPackageWithMetadata : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallDate(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetThumbnailToken(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("Launch may be altered or unavailable for releases after Windows 8.1. Instead, for SmartCardTrigger scenarios use SmartCardTriggerDetails.TryLaunchSelfAsync")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Launch(
                    /* [in] */__RPC__in HSTRING parameters
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPackageWithMetadata=_uuidof(IPackageWithMetadata);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IStartupTask
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.StartupTask
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTask[] = L"Windows.ApplicationModel.IStartupTask";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("F75C23C8-B5F2-4F6C-88DD-36CB1D599D17"), exclusiveto, contract] */
            MIDL_INTERFACE("F75C23C8-B5F2-4F6C-88DD-36CB1D599D17")
            IStartupTask : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE RequestEnableAsync(
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * * operation
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE Disable(void) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::StartupTaskState * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TaskId(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IStartupTask=_uuidof(IStartupTask);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTask;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IStartupTaskStatics
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.StartupTask
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTaskStatics[] = L"Windows.ApplicationModel.IStartupTaskStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("EE5B60BD-A148-41A7-B26E-E8B88A1E62F8"), exclusiveto, contract] */
            MIDL_INTERFACE("EE5B60BD-A148-41A7-B26E-E8B88A1E62F8")
            IStartupTaskStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetForCurrentPackageAsync(
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * * operation
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetAsync(
                    /* [in] */__RPC__in HSTRING taskId,
                    /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * * operation
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IStartupTaskStatics=_uuidof(IStartupTaskStatics);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingDeferral[] = L"Windows.ApplicationModel.ISuspendingDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("59140509-8BC9-4EB4-B636-DABDC4F46F66"), contract] */
            MIDL_INTERFACE("59140509-8BC9-4EB4-B636-DABDC4F46F66")
            ISuspendingDeferral : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISuspendingDeferral=_uuidof(ISuspendingDeferral);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingEventArgs[] = L"Windows.ApplicationModel.ISuspendingEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("96061C05-2DBA-4D08-B0BD-2B30A131C6AA"), contract] */
            MIDL_INTERFACE("96061C05-2DBA-4D08-B0BD-2B30A131C6AA")
            ISuspendingEventArgs : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuspendingOperation(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::ISuspendingOperation * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISuspendingEventArgs=_uuidof(ISuspendingEventArgs);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingOperation[] = L"Windows.ApplicationModel.ISuspendingOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            /* [object, uuid("9DA4CA41-20E1-4E9B-9F65-A9F435340C3A"), contract] */
            MIDL_INTERFACE("9DA4CA41-20E1-4E9B-9F65-A9F435340C3A")
            ISuspendingOperation : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::ISuspendingDeferral * * deferral
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_ISuspendingOperation=_uuidof(ISuspendingOperation);
            
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IAppDisplayInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppDisplayInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppDisplayInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppDisplayInfo[] = L"Windows.ApplicationModel.AppDisplayInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IAppInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppInfo[] = L"Windows.ApplicationModel.AppInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DesignMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IDesignModeStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.IDesignModeStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DesignMode_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DesignMode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DesignMode[] = L"Windows.ApplicationModel.DesignMode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.EnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IEnteredBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_EnteredBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_EnteredBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_EnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.EnteredBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.FullTrustProcessLauncher
 *
 * Introduced to Windows.ApplicationModel.FullTrustAppContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IFullTrustProcessLauncherStatics interface starting with version 1.0 of the Windows.ApplicationModel.FullTrustAppContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_FullTrustProcessLauncher_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_FullTrustProcessLauncher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_FullTrustProcessLauncher[] = L"Windows.ApplicationModel.FullTrustProcessLauncher";
#endif
#endif // WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ILeavingBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LeavingBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LeavingBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.LeavingBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Package
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackage ** Default Interface **
 *    Windows.ApplicationModel.IPackage2
 *    Windows.ApplicationModel.IPackage3
 *    Windows.ApplicationModel.IPackageWithMetadata
 *    Windows.ApplicationModel.IPackage4
 *    Windows.ApplicationModel.IPackage5
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Package_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Package_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Package[] = L"Windows.ApplicationModel.Package";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageCatalogStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalog ** Default Interface **
 *    Windows.ApplicationModel.IPackageCatalog2
 *    Windows.ApplicationModel.IPackageCatalog3
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalog_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalog[] = L"Windows.ApplicationModel.PackageCatalog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.PackageContentGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageContentGroupStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageContentGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroup_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroup[] = L"Windows.ApplicationModel.PackageContentGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageContentGroupStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageContentGroupStagingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroupStagingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroupStagingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.PackageContentGroupStagingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageId ** Default Interface **
 *    Windows.ApplicationModel.IPackageIdWithMetadata
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageId_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageId[] = L"Windows.ApplicationModel.PackageId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageInstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageInstallingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageInstallingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageInstallingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageInstallingEventArgs[] = L"Windows.ApplicationModel.PackageInstallingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStagingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStagingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStagingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStagingEventArgs[] = L"Windows.ApplicationModel.PackageStagingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStatus ** Default Interface **
 *    Windows.ApplicationModel.IPackageStatus2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStatus_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatus[] = L"Windows.ApplicationModel.PackageStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStatusChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.PackageStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageUninstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageUninstallingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageUninstallingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageUninstallingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUninstallingEventArgs[] = L"Windows.ApplicationModel.PackageUninstallingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageUpdatingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUpdatingEventArgs[] = L"Windows.ApplicationModel.PackageUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.StartupTask
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IStartupTaskStatics interface starting with version 1.0 of the Windows.ApplicationModel.StartupTaskContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IStartupTask ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_StartupTask_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_StartupTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_StartupTask[] = L"Windows.ApplicationModel.StartupTask";
#endif
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingDeferral[] = L"Windows.ApplicationModel.SuspendingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingEventArgs[] = L"Windows.ApplicationModel.SuspendingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingOperation[] = L"Windows.ApplicationModel.SuspendingOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppInfo __x_ABI_CWindows_CApplicationModel_CIAppInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage __x_ABI_CWindows_CApplicationModel_CIPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage2 __x_ABI_CWindows_CApplicationModel_CIPackage2;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage3 __x_ABI_CWindows_CApplicationModel_CIPackage3;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage4 __x_ABI_CWindows_CApplicationModel_CIPackage4;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackage5 __x_ABI_CWindows_CApplicationModel_CIPackage5;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackage5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog __x_ABI_CWindows_CApplicationModel_CIPackageCatalog;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageId __x_ABI_CWindows_CApplicationModel_CIPackageId;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatics __x_ABI_CWindows_CApplicationModel_CIPackageStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus __x_ABI_CWindows_CApplicationModel_CIPackageStatus;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 __x_ABI_CWindows_CApplicationModel_CIPackageStatus2;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata;

#endif // ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIStartupTask __x_ABI_CWindows_CApplicationModel_CIStartupTask;

#endif // ____x_ABI_CWindows_CApplicationModel_CIStartupTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation __x_ABI_CWindows_CApplicationModel_CISuspendingOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppInfo __FIIterator_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppInfo __FIIterable_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppInfo;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPackage __FIIterator_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackage;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPackage __FIIterable_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackage;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPackageContentGroup;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPackageContentGroup **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStartupTask __FIIterator_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIStartupTask * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStartupTask_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStartupTask __FIIterable_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStartupTask;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStartupTask **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStartupTask_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIAppInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIAppInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIAppInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackage __FIVectorView_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackage;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIPackage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIVectorView_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CIStartupTask * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIStartupTask * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CPackage __FIVector_1_Windows__CApplicationModel__CPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackage;

typedef struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackage * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackage * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageVtbl;

interface __FIVector_1_Windows__CApplicationModel__CPackage
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackage_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackageContentGroup **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CPackageContentGroup_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CApplicationModel__CEnteredBackgroundEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CApplicationModel__CLeavingBackgroundEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs;

typedef struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl;

interface __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CApplicationModel__CSuspendingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPackageContentGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTask **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CIStartupTask * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStartupTaskState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CAppInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CAppInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStartupTask * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup;

typedef struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * This, /* [retval][out] */ __RPC__out __FIVector_1_Windows__CApplicationModel__CPackageContentGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl;

interface __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry;

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry;

typedef struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CCore__CAppListEntry **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CCore_CIAppListEntry * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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








typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CSystem_CProcessorArchitecture __x_ABI_CWindows_CSystem_CProcessorArchitecture;






typedef enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState;


typedef enum __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState __x_ABI_CWindows_CApplicationModel_CStartupTaskState;


typedef struct __x_ABI_CWindows_CApplicationModel_CPackageVersion __x_ABI_CWindows_CApplicationModel_CPackageVersion;





































































/*
 *
 * Struct Windows.ApplicationModel.PackageContentGroupState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState
{
    PackageContentGroupState_NotStaged = 0,
    PackageContentGroupState_Queued = 1,
    PackageContentGroupState_Staging = 2,
    PackageContentGroupState_Staged = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.PackageSignatureKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind
{
    PackageSignatureKind_None = 0,
    PackageSignatureKind_Developer = 1,
    PackageSignatureKind_Enterprise = 2,
    PackageSignatureKind_Store = 3,
    PackageSignatureKind_System = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.StartupTaskState
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStartupTaskState
{
    StartupTaskState_Disabled = 0,
    StartupTaskState_DisabledByUser = 1,
    StartupTaskState_Enabled = 2,
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x20000
    
    StartupTaskState_DisabledByPolicy = 3,
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.PackageVersion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CApplicationModel_CPackageVersion
{
    UINT16 Major;
    UINT16 Minor;
    UINT16 Build;
    UINT16 Revision;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IAppDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppDisplayInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppDisplayInfo[] = L"Windows.ApplicationModel.IAppDisplayInfo";
/* [object, uuid("1AEB1103-E4D4-41AA-A4F6-C4A276E79EAC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLogo )(
        __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize size,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_GetLogo(This,size,value) \
    ( (This)->lpVtbl->GetLogo(This,size,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IAppInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.AppInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IAppInfo[] = L"Windows.ApplicationModel.IAppInfo";
/* [object, uuid("CF7F59B3-6A09-4DE8-A6C0-5792D56880D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayInfo )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CIAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIAppInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_get_AppUserModelId(This,value) \
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_get_DisplayInfo(This,value) \
    ( (This)->lpVtbl->get_DisplayInfo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIAppInfo_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIAppInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIAppInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IDesignModeStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DesignMode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics[] = L"Windows.ApplicationModel.IDesignModeStatics";
/* [object, uuid("2C3893CC-F81A-4E7A-B857-76A80887E185"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesignModeEnabled )(
        __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_get_DesignModeEnabled(This,value) \
    ( (This)->lpVtbl->get_DesignModeEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IDesignModeStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DesignMode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IDesignModeStatics2[] = L"Windows.ApplicationModel.IDesignModeStatics2";
/* [object, uuid("80CF8137-B064-4858-BEC8-3EBA22357535"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesignMode2Enabled )(
        __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_get_DesignMode2Enabled(This,value) \
    ( (This)->lpVtbl->get_DesignMode2Enabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIDesignModeStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IEnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IEnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.IEnteredBackgroundEventArgs";
/* [object, uuid("F722DCC2-9827-403D-AAED-ECCA9AC17398"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIEnteredBackgroundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IFullTrustProcessLauncherStatics
 *
 * Introduced to Windows.ApplicationModel.FullTrustAppContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.FullTrustProcessLauncher
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IFullTrustProcessLauncherStatics[] = L"Windows.ApplicationModel.IFullTrustProcessLauncherStatics";
/* [object, uuid("D784837F-1100-3C6B-A455-F6262CC331B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForCurrentAppAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForCurrentAppWithParametersAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
        /* [in] */__RPC__in HSTRING parameterGroupId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForAppAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
        /* [in] */__RPC__in HSTRING fullTrustPackageRelativeAppId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LaunchFullTrustProcessForAppWithParametersAsync )(
        __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics * This,
        /* [in] */__RPC__in HSTRING fullTrustPackageRelativeAppId,
        /* [in] */__RPC__in HSTRING parameterGroupId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_LaunchFullTrustProcessForCurrentAppAsync(This,asyncAction) \
    ( (This)->lpVtbl->LaunchFullTrustProcessForCurrentAppAsync(This,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_LaunchFullTrustProcessForCurrentAppWithParametersAsync(This,parameterGroupId,asyncAction) \
    ( (This)->lpVtbl->LaunchFullTrustProcessForCurrentAppWithParametersAsync(This,parameterGroupId,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_LaunchFullTrustProcessForAppAsync(This,fullTrustPackageRelativeAppId,asyncAction) \
    ( (This)->lpVtbl->LaunchFullTrustProcessForAppAsync(This,fullTrustPackageRelativeAppId,asyncAction) )

#define __x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_LaunchFullTrustProcessForAppWithParametersAsync(This,fullTrustPackageRelativeAppId,parameterGroupId,asyncAction) \
    ( (This)->lpVtbl->LaunchFullTrustProcessForAppWithParametersAsync(This,fullTrustPackageRelativeAppId,parameterGroupId,asyncAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIFullTrustProcessLauncherStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ILeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ILeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.ILeavingBackgroundEventArgs";
/* [object, uuid("39C6EC9A-AE6E-46F9-A07A-CFC23F88733E"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CILeavingBackgroundEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage[] = L"Windows.ApplicationModel.IPackage";
/* [object, uuid("163C792F-BD75-413C-BF23-B1FE7B95D825"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageId * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstalledLocation )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsFramework )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dependencies )(
        __x_ABI_CWindows_CApplicationModel_CIPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_get_InstalledLocation(This,value) \
    ( (This)->lpVtbl->get_InstalledLocation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_get_IsFramework(This,value) \
    ( (This)->lpVtbl->get_IsFramework(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage_get_Dependencies(This,value) \
    ( (This)->lpVtbl->get_Dependencies(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage2[] = L"Windows.ApplicationModel.IPackage2";
/* [object, uuid("A6612FB6-7688-4ACE-95FB-359538E7AA01"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublisherDisplayName )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Logo )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsResourcePackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBundle )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDevelopmentMode )(
        __x_ABI_CWindows_CApplicationModel_CIPackage2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackage2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackage2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_PublisherDisplayName(This,value) \
    ( (This)->lpVtbl->get_PublisherDisplayName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_Logo(This,value) \
    ( (This)->lpVtbl->get_Logo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_IsResourcePackage(This,value) \
    ( (This)->lpVtbl->get_IsResourcePackage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_IsBundle(This,value) \
    ( (This)->lpVtbl->get_IsBundle(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage2_get_IsDevelopmentMode(This,value) \
    ( (This)->lpVtbl->get_IsDevelopmentMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage3[] = L"Windows.ApplicationModel.IPackage3";
/* [object, uuid("5F738B61-F86A-4917-93D1-F1EE9D3B35D9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageStatus * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstalledDate )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppListEntriesAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CCore__CAppListEntry * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackage3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackage3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_get_InstalledDate(This,value) \
    ( (This)->lpVtbl->get_InstalledDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage3_GetAppListEntriesAsync(This,operation) \
    ( (This)->lpVtbl->GetAppListEntriesAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackage4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage4[] = L"Windows.ApplicationModel.IPackage4";
/* [object, uuid("65AED1AE-B95B-450C-882B-6255187F397E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignatureKind )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPackageSignatureKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOptional )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifyContentIntegrityAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage4 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackage4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackage4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_get_SignatureKind(This,value) \
    ( (This)->lpVtbl->get_SignatureKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_get_IsOptional(This,value) \
    ( (This)->lpVtbl->get_IsOptional(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage4_VerifyContentIntegrityAsync(This,operation) \
    ( (This)->lpVtbl->VerifyContentIntegrityAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackage5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackage5[] = L"Windows.ApplicationModel.IPackage5";
/* [object, uuid("0E842DD4-D9AC-45ED-9A1E-74CE056B2635"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetContentGroupsAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetContentGroupAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StageContentGroupsAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * names,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StageContentGroupsWithPriorityAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * names,
        /* [in] */boolean moveToHeadOfQueue,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVector_1_Windows__CApplicationModel__CPackageContentGroup * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetInUseAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackage5 * This,
        /* [in] */boolean inUse,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackage5
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackage5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackage5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_GetContentGroupsAsync(This,operation) \
    ( (This)->lpVtbl->GetContentGroupsAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_GetContentGroupAsync(This,name,operation) \
    ( (This)->lpVtbl->GetContentGroupAsync(This,name,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_StageContentGroupsAsync(This,names,operation) \
    ( (This)->lpVtbl->StageContentGroupsAsync(This,names,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_StageContentGroupsWithPriorityAsync(This,names,moveToHeadOfQueue,operation) \
    ( (This)->lpVtbl->StageContentGroupsWithPriorityAsync(This,names,moveToHeadOfQueue,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIPackage5_SetInUseAsync(This,inUse,operation) \
    ( (This)->lpVtbl->SetInUseAsync(This,inUse,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackage5;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackage5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog[] = L"Windows.ApplicationModel.IPackageCatalog";
/* [object, uuid("230A3751-9DE3-4445-BE74-91FB325ABEFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStagingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageInstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageInstallingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageInstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUpdatingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageUpdating )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageUninstallingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageUninstalling )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageStatusChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageStatusChanged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_add_PackageStaging(This,handler,token) \
    ( (This)->lpVtbl->add_PackageStaging(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_remove_PackageStaging(This,token) \
    ( (This)->lpVtbl->remove_PackageStaging(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_add_PackageInstalling(This,handler,token) \
    ( (This)->lpVtbl->add_PackageInstalling(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_remove_PackageInstalling(This,token) \
    ( (This)->lpVtbl->remove_PackageInstalling(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_add_PackageUpdating(This,handler,token) \
    ( (This)->lpVtbl->add_PackageUpdating(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_remove_PackageUpdating(This,token) \
    ( (This)->lpVtbl->remove_PackageUpdating(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_add_PackageUninstalling(This,handler,token) \
    ( (This)->lpVtbl->add_PackageUninstalling(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_remove_PackageUninstalling(This,token) \
    ( (This)->lpVtbl->remove_PackageUninstalling(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_add_PackageStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PackageStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog_remove_PackageStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_PackageStatusChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog2[] = L"Windows.ApplicationModel.IPackageCatalog2";
/* [object, uuid("96A60C36-8FF7-4344-B6BF-EE64C2207ED2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PackageContentGroupStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPackageCatalog_Windows__CApplicationModel__CPackageContentGroupStagingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PackageContentGroupStaging )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *AddOptionalPackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2 * This,
        /* [in] */__RPC__in HSTRING optionalPackageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogAddOptionalPackageResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_add_PackageContentGroupStaging(This,handler,token) \
    ( (This)->lpVtbl->add_PackageContentGroupStaging(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_remove_PackageContentGroupStaging(This,token) \
    ( (This)->lpVtbl->remove_PackageContentGroupStaging(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_AddOptionalPackageAsync(This,optionalPackageFamilyName,operation) \
    ( (This)->lpVtbl->AddOptionalPackageAsync(This,optionalPackageFamilyName,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalog3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalog3[] = L"Windows.ApplicationModel.IPackageCatalog3";
/* [object, uuid("96DD5C88-8837-43F9-9015-033434BA14F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RemoveOptionalPackagesAsync )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * optionalPackageFamilyNames,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPackageCatalogRemoveOptionalPackagesResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_RemoveOptionalPackagesAsync(This,optionalPackageFamilyNames,operation) \
    ( (This)->lpVtbl->RemoveOptionalPackagesAsync(This,optionalPackageFamilyNames,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalog3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalog3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult";
/* [object, uuid("3BF10CD4-B4DF-47B3-A963-E2FA832F7DD3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogAddOptionalPackageResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult";
/* [object, uuid("29D2F97B-D974-4E64-9359-22CADFD79828"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackagesRemoved )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_get_PackagesRemoved(This,value) \
    ( (This)->lpVtbl->get_PackagesRemoved(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogRemoveOptionalPackagesResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.IPackageCatalogStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageCatalog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageCatalogStatics[] = L"Windows.ApplicationModel.IPackageCatalogStatics";
/* [object, uuid("A18C9696-E65B-4634-BA21-5E63EB7244A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenForCurrentPackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenForCurrentUser )(
        __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackageCatalog * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_OpenForCurrentPackage(This,value) \
    ( (This)->lpVtbl->OpenForCurrentPackage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_OpenForCurrentUser(This,value) \
    ( (This)->lpVtbl->OpenForCurrentUser(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageCatalogStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroup[] = L"Windows.ApplicationModel.IPackageContentGroup";
/* [object, uuid("8F62695D-120A-4798-B5E1-5800DDA8F2E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPackageContentGroupState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRequired )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_get_IsRequired(This,value) \
    ( (This)->lpVtbl->get_IsRequired(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroup;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroupStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroupStagingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.IPackageContentGroupStagingEventArgs";
/* [object, uuid("3D7BC27E-6F27-446C-986E-D4733D4D9113"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentGroupName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsContentGroupRequired )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_IsComplete(This,value) \
    ( (This)->lpVtbl->get_IsComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_ContentGroupName(This,value) \
    ( (This)->lpVtbl->get_ContentGroupName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_get_IsContentGroupRequired(This,value) \
    ( (This)->lpVtbl->get_IsContentGroupRequired(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStagingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageContentGroupStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageContentGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageContentGroupStatics[] = L"Windows.ApplicationModel.IPackageContentGroupStatics";
/* [object, uuid("70EE7619-5F12-4B92-B9EA-6CCADA13BC75"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequiredGroupName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_get_RequiredGroupName(This,value) \
    ( (This)->lpVtbl->get_RequiredGroupName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageContentGroupStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageId[] = L"Windows.ApplicationModel.IPackageId";
/* [object, uuid("1ADB665E-37C7-4790-9980-DD7AE74E8BB2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPackageVersion * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Architecture )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CProcessorArchitecture * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Publisher )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublisherId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FamilyName )(
        __x_ABI_CWindows_CApplicationModel_CIPackageId * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_Architecture(This,value) \
    ( (This)->lpVtbl->get_Architecture(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_ResourceId(This,value) \
    ( (This)->lpVtbl->get_ResourceId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_Publisher(This,value) \
    ( (This)->lpVtbl->get_Publisher(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_PublisherId(This,value) \
    ( (This)->lpVtbl->get_PublisherId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_FullName(This,value) \
    ( (This)->lpVtbl->get_FullName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageId_get_FamilyName(This,value) \
    ( (This)->lpVtbl->get_FamilyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageIdWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageId
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageIdWithMetadata[] = L"Windows.ApplicationModel.IPackageIdWithMetadata";
/* [object, uuid("40577A7C-0C9E-443D-9074-855F5CE0A08D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_get_Author(This,value) \
    ( (This)->lpVtbl->get_Author(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageIdWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageInstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageInstallingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageInstallingEventArgs[] = L"Windows.ApplicationModel.IPackageInstallingEventArgs";
/* [object, uuid("97741EB7-AB7A-401A-8B61-EB0E7FAFF237"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_get_IsComplete(This,value) \
    ( (This)->lpVtbl->get_IsComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageInstallingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStagingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStagingEventArgs[] = L"Windows.ApplicationModel.IPackageStagingEventArgs";
/* [object, uuid("1041682D-54E2-4F51-B828-9EF7046C210F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_get_IsComplete(This,value) \
    ( (This)->lpVtbl->get_IsComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStagingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatics[] = L"Windows.ApplicationModel.IPackageStatics";
/* [object, uuid("4E534BDF-2960-4878-97A4-9624DEB72F2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus[] = L"Windows.ApplicationModel.IPackageStatus";
/* [object, uuid("5FE74F71-A365-4C09-A02D-046D525EA1DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *VerifyIsOK )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotAvailable )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageOffline )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataOffline )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Disabled )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NeedsRemediation )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseIssue )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Modified )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tampered )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DependencyIssue )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Servicing )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeploymentInProgress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_VerifyIsOK(This,value) \
    ( (This)->lpVtbl->VerifyIsOK(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_NotAvailable(This,value) \
    ( (This)->lpVtbl->get_NotAvailable(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_PackageOffline(This,value) \
    ( (This)->lpVtbl->get_PackageOffline(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_DataOffline(This,value) \
    ( (This)->lpVtbl->get_DataOffline(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_Disabled(This,value) \
    ( (This)->lpVtbl->get_Disabled(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_NeedsRemediation(This,value) \
    ( (This)->lpVtbl->get_NeedsRemediation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_LicenseIssue(This,value) \
    ( (This)->lpVtbl->get_LicenseIssue(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_Modified(This,value) \
    ( (This)->lpVtbl->get_Modified(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_Tampered(This,value) \
    ( (This)->lpVtbl->get_Tampered(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_DependencyIssue(This,value) \
    ( (This)->lpVtbl->get_DependencyIssue(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_Servicing(This,value) \
    ( (This)->lpVtbl->get_Servicing(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus_get_DeploymentInProgress(This,value) \
    ( (This)->lpVtbl->get_DeploymentInProgress(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatus2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatus2[] = L"Windows.ApplicationModel.IPackageStatus2";
/* [object, uuid("F428FA93-7C56-4862-ACFA-ABAEDCC0694D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPartiallyStaged )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatus2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageStatus2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatus2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatus2_get_IsPartiallyStaged(This,value) \
    ( (This)->lpVtbl->get_IsPartiallyStaged(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatus2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatus2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.IPackageStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageStatusChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.IPackageStatusChangedEventArgs";
/* [object, uuid("437D714D-BD80-4A70-BC50-F6E796509575"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageStatusChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageUninstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageUninstallingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUninstallingEventArgs[] = L"Windows.ApplicationModel.IPackageUninstallingEventArgs";
/* [object, uuid("4443AA52-AB22-44CD-82BB-4EC9B827367A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Package )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_get_Package(This,value) \
    ( (This)->lpVtbl->get_Package(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_get_IsComplete(This,value) \
    ( (This)->lpVtbl->get_IsComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUninstallingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.PackageUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageUpdatingEventArgs[] = L"Windows.ApplicationModel.IPackageUpdatingEventArgs";
/* [object, uuid("CD7B4228-FD74-443E-B114-23E677B0E86F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ActivityId )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourcePackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetPackage )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIPackage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsComplete )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_ActivityId(This,value) \
    ( (This)->lpVtbl->get_ActivityId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_SourcePackage(This,value) \
    ( (This)->lpVtbl->get_SourcePackage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_TargetPackage(This,value) \
    ( (This)->lpVtbl->get_TargetPackage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_IsComplete(This,value) \
    ( (This)->lpVtbl->get_IsComplete(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_get_ErrorCode(This,value) \
    ( (This)->lpVtbl->get_ErrorCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.IPackageWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Package
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IPackageWithMetadata[] = L"Windows.ApplicationModel.IPackageWithMetadata";
/* [object, uuid("95949780-1DE9-40F2-B452-0DE9F1910012"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallDate )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailToken )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Launch may be altered or unavailable for releases after Windows 8.1. Instead, for SmartCardTrigger scenarios use SmartCardTriggerDetails.TryLaunchSelfAsync")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Launch )(
        __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata * This,
        /* [in] */__RPC__in HSTRING parameters
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_get_InstallDate(This,value) \
    ( (This)->lpVtbl->get_InstallDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_GetThumbnailToken(This,value) \
    ( (This)->lpVtbl->GetThumbnailToken(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Launch may be altered or unavailable for releases after Windows 8.1. Instead, for SmartCardTrigger scenarios use SmartCardTriggerDetails.TryLaunchSelfAsync")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_Launch(This,parameters) \
    ( (This)->lpVtbl->Launch(This,parameters) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIPackageWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IStartupTask
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.StartupTask
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTask[] = L"Windows.ApplicationModel.IStartupTask";
/* [object, uuid("F75C23C8-B5F2-4F6C-88DD-36CB1D599D17"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestEnableAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTaskState * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Disable )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStartupTaskState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTask * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIStartupTask
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_RequestEnableAsync(This,operation) \
    ( (This)->lpVtbl->RequestEnableAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_Disable(This) \
    ( (This)->lpVtbl->Disable(This) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTask_get_TaskId(This,value) \
    ( (This)->lpVtbl->get_TaskId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTask;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.IStartupTaskStatics
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.StartupTask
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_IStartupTaskStatics[] = L"Windows.ApplicationModel.IStartupTaskStatics";
/* [object, uuid("EE5B60BD-A148-41A7-B26E-E8B88A1E62F8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentPackageAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStartupTask * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics * This,
        /* [in] */__RPC__in HSTRING taskId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStartupTask * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CIStartupTaskStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_GetForCurrentPackageAsync(This,operation) \
    ( (This)->lpVtbl->GetForCurrentPackageAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_GetAsync(This,taskId,operation) \
    ( (This)->lpVtbl->GetAsync(This,taskId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CIStartupTaskStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingDeferral[] = L"Windows.ApplicationModel.ISuspendingDeferral";
/* [object, uuid("59140509-8BC9-4EB4-B636-DABDC4F46F66"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingEventArgs[] = L"Windows.ApplicationModel.ISuspendingEventArgs";
/* [object, uuid("96061C05-2DBA-4D08-B0BD-2B30A131C6AA"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuspendingOperation )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_get_SuspendingOperation(This,value) \
    ( (This)->lpVtbl->get_SuspendingOperation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ISuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ISuspendingOperation[] = L"Windows.ApplicationModel.ISuspendingOperation";
/* [object, uuid("9DA4CA41-20E1-4E9B-9F65-A9F435340C3A"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CISuspendingDeferral * * deferral
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CISuspendingOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CISuspendingOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CISuspendingOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_GetDeferral(This,deferral) \
    ( (This)->lpVtbl->GetDeferral(This,deferral) )

#define __x_ABI_CWindows_CApplicationModel_CISuspendingOperation_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CISuspendingOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CISuspendingOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IAppDisplayInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppDisplayInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppDisplayInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppDisplayInfo[] = L"Windows.ApplicationModel.AppDisplayInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.AppInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IAppInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_AppInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_AppInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_AppInfo[] = L"Windows.ApplicationModel.AppInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DesignMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IDesignModeStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.IDesignModeStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DesignMode_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DesignMode_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DesignMode[] = L"Windows.ApplicationModel.DesignMode";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.EnteredBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IEnteredBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_EnteredBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_EnteredBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_EnteredBackgroundEventArgs[] = L"Windows.ApplicationModel.EnteredBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.FullTrustProcessLauncher
 *
 * Introduced to Windows.ApplicationModel.FullTrustAppContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IFullTrustProcessLauncherStatics interface starting with version 1.0 of the Windows.ApplicationModel.FullTrustAppContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_FullTrustProcessLauncher_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_FullTrustProcessLauncher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_FullTrustProcessLauncher[] = L"Windows.ApplicationModel.FullTrustProcessLauncher";
#endif
#endif // WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.LeavingBackgroundEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ILeavingBackgroundEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_LeavingBackgroundEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_LeavingBackgroundEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_LeavingBackgroundEventArgs[] = L"Windows.ApplicationModel.LeavingBackgroundEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Package
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackage ** Default Interface **
 *    Windows.ApplicationModel.IPackage2
 *    Windows.ApplicationModel.IPackage3
 *    Windows.ApplicationModel.IPackageWithMetadata
 *    Windows.ApplicationModel.IPackage4
 *    Windows.ApplicationModel.IPackage5
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Package_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Package_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Package[] = L"Windows.ApplicationModel.Package";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageCatalogStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalog ** Default Interface **
 *    Windows.ApplicationModel.IPackageCatalog2
 *    Windows.ApplicationModel.IPackageCatalog3
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalog_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalog[] = L"Windows.ApplicationModel.PackageCatalog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalogAddOptionalPackageResult ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogAddOptionalPackageResult[] = L"Windows.ApplicationModel.PackageCatalogAddOptionalPackageResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageCatalogRemoveOptionalPackagesResult ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageCatalogRemoveOptionalPackagesResult[] = L"Windows.ApplicationModel.PackageCatalogRemoveOptionalPackagesResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.PackageContentGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IPackageContentGroupStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageContentGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroup_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroup[] = L"Windows.ApplicationModel.PackageContentGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageContentGroupStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageContentGroupStagingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroupStagingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageContentGroupStagingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageContentGroupStagingEventArgs[] = L"Windows.ApplicationModel.PackageContentGroupStagingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.PackageId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageId ** Default Interface **
 *    Windows.ApplicationModel.IPackageIdWithMetadata
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageId_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageId_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageId[] = L"Windows.ApplicationModel.PackageId";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageInstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageInstallingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageInstallingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageInstallingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageInstallingEventArgs[] = L"Windows.ApplicationModel.PackageInstallingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageStagingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStagingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStagingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStagingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStagingEventArgs[] = L"Windows.ApplicationModel.PackageStagingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStatus ** Default Interface **
 *    Windows.ApplicationModel.IPackageStatus2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStatus_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatus[] = L"Windows.ApplicationModel.PackageStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.PackageStatusChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageStatusChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageStatusChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageStatusChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageStatusChangedEventArgs[] = L"Windows.ApplicationModel.PackageStatusChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageUninstallingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageUninstallingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageUninstallingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageUninstallingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUninstallingEventArgs[] = L"Windows.ApplicationModel.PackageUninstallingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.PackageUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IPackageUpdatingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_PackageUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_PackageUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_PackageUpdatingEventArgs[] = L"Windows.ApplicationModel.PackageUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.StartupTask
 *
 * Introduced to Windows.ApplicationModel.StartupTaskContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.IStartupTaskStatics interface starting with version 1.0 of the Windows.ApplicationModel.StartupTaskContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.IStartupTask ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_StartupTask_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_StartupTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_StartupTask[] = L"Windows.ApplicationModel.StartupTask";
#endif
#endif // WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingDeferral[] = L"Windows.ApplicationModel.SuspendingDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingEventArgs[] = L"Windows.ApplicationModel.SuspendingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SuspendingOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ISuspendingOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SuspendingOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SuspendingOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SuspendingOperation[] = L"Windows.ApplicationModel.SuspendingOperation";
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
#endif // __windows2Eapplicationmodel_p_h__

#endif // __windows2Eapplicationmodel_h__
