/* Header file automatically generated from windows.security.enterprisedata.idl */
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
#ifndef __windows2Esecurity2Eenterprisedata_h__
#define __windows2Esecurity2Eenterprisedata_h__
#ifndef __windows2Esecurity2Eenterprisedata_p_h__
#define __windows2Esecurity2Eenterprisedata_p_h__


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
#include "Windows.Networking.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IBufferProtectUnprotectResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IDataProtectionInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo ABI::Windows::Security::EnterpriseData::IDataProtectionInfo

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IDataProtectionManagerStatics;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics ABI::Windows::Security::EnterpriseData::IDataProtectionManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileProtectionInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo ABI::Windows::Security::EnterpriseData::IFileProtectionInfo

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileProtectionInfo2;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 ABI::Windows::Security::EnterpriseData::IFileProtectionInfo2

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileProtectionManagerStatics;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics ABI::Windows::Security::EnterpriseData::IFileProtectionManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileProtectionManagerStatics2;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 ABI::Windows::Security::EnterpriseData::IFileProtectionManagerStatics2

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileProtectionManagerStatics3;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 ABI::Windows::Security::EnterpriseData::IFileProtectionManagerStatics3

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileRevocationManagerStatics;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics ABI::Windows::Security::EnterpriseData::IFileRevocationManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileUnprotectOptions;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions ABI::Windows::Security::EnterpriseData::IFileUnprotectOptions

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IFileUnprotectOptionsFactory;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory ABI::Windows::Security::EnterpriseData::IFileUnprotectOptionsFactory

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedAccessResumedEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs ABI::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedAccessSuspendingEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs ABI::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedContainerExportResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedContainerImportResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedContentRevokedEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs ABI::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectedFileCreateResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyAuditInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyAuditInfoFactory;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfoFactory

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManager;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager ABI::Windows::Security::EnterpriseData::IProtectionPolicyManager

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManager2;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 ABI::Windows::Security::EnterpriseData::IProtectionPolicyManager2

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManagerStatics;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManagerStatics2;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics2

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManagerStatics3;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics3

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IProtectionPolicyManagerStatics4;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 ABI::Windows::Security::EnterpriseData::IProtectionPolicyManagerStatics4

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                interface IThreadNetworkContext;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext ABI::Windows::Security::EnterpriseData::IThreadNetworkContext

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedAccessResumedEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9efe4d36-6549-5222-9bc2-4d5d929d005c"))
IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs*, ABI::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedAccessResumedEventArgs*> __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_t;
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs*>
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedAccessResumedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedAccessSuspendingEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fe8bb4d8-0d3d-5416-b390-9ead5dd9b384"))
IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs*, ABI::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedAccessSuspendingEventArgs*> __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_t;
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs*>
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedAccessSuspendingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedContentRevokedEventArgs;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_USE
#define DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4ff76357-6805-573e-a67d-2c594f5004b7"))
IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs*, ABI::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<ABI::Windows::Security::EnterpriseData::ProtectedContentRevokedEventArgs*> __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_t;
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs ABI::Windows::Foundation::__FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs*>
//#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_t ABI::Windows::Foundation::IEventHandler<ABI::Windows::Security::EnterpriseData::IProtectedContentRevokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class BufferProtectUnprotectResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("73d780cb-ad38-59e6-a236-cc0df69f15a8"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*, ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.BufferProtectUnprotectResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("11f95a2e-2e87-5449-bca3-dcdf2ae6e17a"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*, ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.BufferProtectUnprotectResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::BufferProtectUnprotectResult*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IBufferProtectUnprotectResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class DataProtectionInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e12bb475-3f2b-51c9-83c6-a5661086b6c3"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*, ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.DataProtectionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c8ef3f16-dd70-5e88-9323-85ddddcd2ca5"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*, ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.DataProtectionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::DataProtectionInfo*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IDataProtectionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class FileProtectionInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2918ffea-e091-53e2-bde5-617c9bb3d8fe"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*, ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.FileProtectionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("67e04591-2d11-5018-9ff0-0b85520b888b"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*, ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.FileProtectionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionInfo*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IFileProtectionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                enum FileProtectionStatus : int;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e104f25b-b957-5ed4-b1c5-1993604cfeae"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.FileProtectionStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::FileProtectionStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("033efe7c-709e-53a8-8e64-cdab6bd1ed59"))
IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> : IAsyncOperation_impl<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.FileProtectionStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::FileProtectionStatus> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionStatus>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::FileProtectionStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedContainerExportResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("560c5521-5008-5272-a766-941f70718bc6"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*, ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.ProtectedContainerExportResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c99f0b2e-67ad-518a-866f-e39b4567b110"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*, ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.ProtectedContainerExportResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedContainerExportResult*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedContainerExportResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedContainerImportResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cfea00f8-d2ad-5ad2-a396-e4f71b9a7c3f"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*, ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.ProtectedContainerImportResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("384e9499-d491-5297-beba-b33a3d67f207"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*, ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.ProtectedContainerImportResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedContainerImportResult*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedContainerImportResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectedFileCreateResult;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6c44a868-7c80-5187-a08d-379be41909f6"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*, ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.ProtectedFileCreateResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d7f98a9c-738e-50f6-93e3-2608baf54be9"))
IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*, ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.ProtectedFileCreateResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectedFileCreateResult*> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::IProtectedFileCreateResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_USE */


#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                enum ProtectionPolicyEvaluationResult : int;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2833ba54-a4e1-5c2d-8a7a-136e8510c78b"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e8d81715-c56c-5a6b-b738-5df6c2775b7b"))
IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> : IAsyncOperation_impl<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult> __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
//#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_USE */




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




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */





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



#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageItem;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageItem ABI::Windows::Storage::IStorageItem

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05b487c2-3830-5d3c-98da-25fa11542dbd"))
IIterator<ABI::Windows::Storage::IStorageItem*> : IIterator_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::IStorageItem*> __FIIterator_1_Windows__CStorage__CIStorageItem_t;
#define __FIIterator_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageItem*>
//#define __FIIterator_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb8b8418-65d1-544b-b083-6d172f568c73"))
IIterable<ABI::Windows::Storage::IStorageItem*> : IIterable_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::IStorageItem*> __FIIterable_1_Windows__CStorage__CIStorageItem_t;
#define __FIIterable_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageItem*>
//#define __FIIterable_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
        namespace Networking {
            class HostName;
        } /* Windows */
    } /* Networking */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostName;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostName ABI::Windows::Networking::IHostName

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Storage {
            
            typedef enum CreationCollisionOption : int CreationCollisionOption;
            
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
            
            typedef enum NameCollisionOption : int NameCollisionOption;
            
        } /* Windows */
    } /* Storage */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */




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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream ABI::Windows::Storage::Streams::IOutputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum DataProtectionStatus : int DataProtectionStatus;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum EnforcementLevel : int EnforcementLevel;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum FileProtectionStatus : int FileProtectionStatus;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum ProtectedImportExportStatus : int ProtectedImportExportStatus;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum ProtectionPolicyAuditAction : int ProtectionPolicyAuditAction;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum ProtectionPolicyEvaluationResult : int ProtectionPolicyEvaluationResult;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                
                typedef enum ProtectionPolicyRequestAccessBehavior : int ProtectionPolicyRequestAccessBehavior;
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

































namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class FileUnprotectOptions;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectionPolicyAuditInfo;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ProtectionPolicyManager;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                class ThreadNetworkContext;
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */











/*
 *
 * Struct Windows.Security.EnterpriseData.DataProtectionStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum DataProtectionStatus : int
                {
                    DataProtectionStatus_ProtectedToOtherIdentity = 0,
                    DataProtectionStatus_Protected = 1,
                    DataProtectionStatus_Revoked = 2,
                    DataProtectionStatus_Unprotected = 3,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    DataProtectionStatus_LicenseExpired = 4,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    DataProtectionStatus_AccessSuspended = 5,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.EnforcementLevel
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum EnforcementLevel : int
                {
                    EnforcementLevel_NoProtection = 0,
                    EnforcementLevel_Silent = 1,
                    EnforcementLevel_Override = 2,
                    EnforcementLevel_Block = 3,
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Security.EnterpriseData.FileProtectionStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum FileProtectionStatus : int
                {
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_Undetermined
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("Undetermined might be unavailable after Windows 10. Instead, use Unknown.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                     = 0,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_Unknown = 0,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_Unprotected = 1,
                    FileProtectionStatus_Revoked = 2,
                    FileProtectionStatus_Protected = 3,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_ProtectedByOtherUser
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("ProtectedByOtherUser might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                     = 4,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_ProtectedToOtherEnterprise
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("ProtectedToOtherEnterprise might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                     = 5,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_NotProtectable = 6,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
                    FileProtectionStatus_ProtectedToOtherIdentity = 7,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    FileProtectionStatus_LicenseExpired = 8,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    FileProtectionStatus_AccessSuspended = 9,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
                    
                    FileProtectionStatus_FileInUse = 10,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectedImportExportStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum ProtectedImportExportStatus : int
                {
                    ProtectedImportExportStatus_Ok = 0,
                    ProtectedImportExportStatus_Undetermined = 1,
                    ProtectedImportExportStatus_Unprotected = 2,
                    ProtectedImportExportStatus_Revoked = 3,
                    ProtectedImportExportStatus_NotRoamable = 4,
                    ProtectedImportExportStatus_ProtectedToOtherIdentity = 5,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    ProtectedImportExportStatus_LicenseExpired = 6,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                    ProtectedImportExportStatus_AccessSuspended = 7,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
                    
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyAuditAction
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum ProtectionPolicyAuditAction : int
                {
                    ProtectionPolicyAuditAction_Decrypt = 0,
                    ProtectionPolicyAuditAction_CopyToLocation = 1,
                    ProtectionPolicyAuditAction_SendToRecipient = 2,
                    ProtectionPolicyAuditAction_Other = 3,
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum ProtectionPolicyEvaluationResult : int
                {
                    ProtectionPolicyEvaluationResult_Allowed = 0,
                    ProtectionPolicyEvaluationResult_Blocked = 1,
                    ProtectionPolicyEvaluationResult_ConsentRequired = 2,
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyRequestAccessBehavior
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [v1_enum, contract] */
                enum ProtectionPolicyRequestAccessBehavior : int
                {
                    ProtectionPolicyRequestAccessBehavior_Decrypt = 0,
                    ProtectionPolicyRequestAccessBehavior_TreatOverridePolicyAsBlock = 1,
                };
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IBufferProtectUnprotectResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.BufferProtectUnprotectResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.IBufferProtectUnprotectResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("47995EDC-6CEC-4E3A-B251-9E7485D79E7A"), exclusiveto, contract] */
                MIDL_INTERFACE("47995EDC-6CEC-4E3A-B251-9E7485D79E7A")
                IBufferProtectUnprotectResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Buffer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IDataProtectionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBufferProtectUnprotectResult=_uuidof(IBufferProtectUnprotectResult);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IDataProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.DataProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionInfo[] = L"Windows.Security.EnterpriseData.IDataProtectionInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("8420B0C1-5E31-4405-9540-3F943AF0CB26"), exclusiveto, contract] */
                MIDL_INTERFACE("8420B0C1-5E31-4405-9540-3F943AF0CB26")
                IDataProtectionInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::DataProtectionStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataProtectionInfo=_uuidof(IDataProtectionInfo);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IDataProtectionManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.DataProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IDataProtectionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("B6149B74-9144-4EE4-8A8A-30B5F361430E"), exclusiveto, contract] */
                MIDL_INTERFACE("B6149B74-9144-4EE4-8A8A-30B5F361430E")
                IDataProtectionManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ProtectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UnprotectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ProtectStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * unprotectedStream,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * protectedStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UnprotectStreamAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * protectedStream,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * unprotectedStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProtectionInfoAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * protectedData,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetStreamProtectionInfoAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * protectedStream,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataProtectionManagerStatics=_uuidof(IDataProtectionManagerStatics);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("4EE96486-147E-4DD0-8FAF-5253ED91AD0C"), exclusiveto, contract] */
                MIDL_INTERFACE("4EE96486-147E-4DD0-8FAF-5253ED91AD0C")
                IFileProtectionInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::FileProtectionStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRoamable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileProtectionInfo=_uuidof(IFileProtectionInfo);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionInfo2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo2[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("82123A4C-557A-498D-8E94-944CD5836432"), exclusiveto, contract] */
                MIDL_INTERFACE("82123A4C-557A-498D-8E94-944CD5836432")
                IFileProtectionInfo2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsProtectWhileOpenSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileProtectionInfo2=_uuidof(IFileProtectionInfo2);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("5846FC9B-E613-426B-BB38-88CBA1DC9ADB"), exclusiveto, contract] */
                MIDL_INTERFACE("5846FC9B-E613-426B-BB38-88CBA1DC9ADB")
                IFileProtectionManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ProtectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CopyProtectionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * source,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProtectionInfoAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * source,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SaveFileAsContainerAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * protectedFile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFileFromContainerAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * containerFile,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFileFromContainerWithTargetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * containerFile,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateProtectedAndOpenAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * parentFolder,
                        /* [in] */__RPC__in HSTRING desiredName,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [in] */ABI::Windows::Storage::CreationCollisionOption collisionOption,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileProtectionManagerStatics=_uuidof(IFileProtectionManagerStatics);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("83D2A745-0483-41AB-B2D5-BC7F23D74EBB"), exclusiveto, contract] */
                MIDL_INTERFACE("83D2A745-0483-41AB-B2D5-BC7F23D74EBB")
                IFileProtectionManagerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsContainerAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * containerFile,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [in] */ABI::Windows::Storage::NameCollisionOption collisionOption,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE SaveFileAsContainerWithSharingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * protectedFile,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * sharedWithIdentities,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileProtectionManagerStatics2=_uuidof(IFileProtectionManagerStatics2);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics3
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("6918849A-624F-46D6-B241-E9CD5FDF3E3F"), exclusiveto, contract] */
                MIDL_INTERFACE("6918849A-624F-46D6-B241-E9CD5FDF3E3F")
                IFileProtectionManagerStatics3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE UnprotectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE UnprotectWithOptionsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IFileUnprotectOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileProtectionManagerStatics3=_uuidof(IFileProtectionManagerStatics3);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileRevocationManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileRevocationManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileRevocationManagerStatics[] = L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("256BBC3D-1C5D-4260-8C75-9144CFB78BA9"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("256BBC3D-1C5D-4260-8C75-9144CFB78BA9")
                
                #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                IFileRevocationManagerStatics : IInspectable
                {
                    
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE ProtectAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * storageItem,
                        /* [in] */__RPC__in HSTRING enterpriseIdentity,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
                        ) = 0;
                    
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CopyProtectionAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * sourceStorageItem,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * targetStorageItem,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Revoke(
                        /* [in] */__RPC__in HSTRING enterpriseIdentity
                        ) = 0;
                    
                    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
                    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetStatusAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * storageItem,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileRevocationManagerStatics=_uuidof(IFileRevocationManagerStatics);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileUnprotectOptions
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptions[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptions";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("7D1312F1-3B0D-4DD8-A1F8-1EC53822E2F3"), exclusiveto, contract] */
                MIDL_INTERFACE("7D1312F1-3B0D-4DD8-A1F8-1EC53822E2F3")
                IFileUnprotectOptions : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Audit(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Audit(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUnprotectOptions=_uuidof(IFileUnprotectOptions);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("51AEB39C-DA8C-4C3F-9BFB-CB73A7CCE0DD"), exclusiveto, contract] */
                MIDL_INTERFACE("51AEB39C-DA8C-4C3F-9BFB-CB73A7CCE0DD")
                IFileUnprotectOptionsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */boolean audit,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IFileUnprotectOptions * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUnprotectOptionsFactory=_uuidof(IFileUnprotectOptionsFactory);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("AC4DCA59-5D80-4E95-8C5F-8539450EEBE0"), exclusiveto, contract] */
                MIDL_INTERFACE("AC4DCA59-5D80-4E95-8C5F-8539450EEBE0")
                IProtectedAccessResumedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identities(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedAccessResumedEventArgs=_uuidof(IProtectedAccessResumedEventArgs);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("75A193E0-A344-429F-B975-04FC1F88C185"), exclusiveto, contract] */
                MIDL_INTERFACE("75A193E0-A344-429F-B975-04FC1F88C185")
                IProtectedAccessSuspendingEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identities(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedAccessSuspendingEventArgs=_uuidof(IProtectedAccessSuspendingEventArgs);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContainerExportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContainerExportResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerExportResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("3948EF95-F7FB-4B42-AFB0-DF70B41543C1"), exclusiveto, contract] */
                MIDL_INTERFACE("3948EF95-F7FB-4B42-AFB0-DF70B41543C1")
                IProtectedContainerExportResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectedImportExportStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedContainerExportResult=_uuidof(IProtectedContainerExportResult);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContainerImportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContainerImportResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerImportResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("CDB780D1-E7BB-4D1A-9339-34DC41149F9B"), exclusiveto, contract] */
                MIDL_INTERFACE("CDB780D1-E7BB-4D1A-9339-34DC41149F9B")
                IProtectedContainerImportResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectedImportExportStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedContainerImportResult=_uuidof(IProtectedContainerImportResult);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("63686821-58B9-47EE-93D9-F0F741CF43F0"), exclusiveto, contract] */
                MIDL_INTERFACE("63686821-58B9-47EE-93D9-F0F741CF43F0")
                IProtectedContentRevokedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identities(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedContentRevokedEventArgs=_uuidof(IProtectedContentRevokedEventArgs);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedFileCreateResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedFileCreateResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.IProtectedFileCreateResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("28E3ED6A-E9E7-4A03-9F53-BDB16172699B"), exclusiveto, contract] */
                MIDL_INTERFACE("28E3ED6A-E9E7-4A03-9F53-BDB16172699B")
                IProtectedFileCreateResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IFileProtectionInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectedFileCreateResult=_uuidof(IProtectedFileCreateResult);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("425AB7E4-FEB7-44FC-B3BB-C3C4D7ECBEBB"), exclusiveto, contract] */
                MIDL_INTERFACE("425AB7E4-FEB7-44FC-B3BB-C3C4D7ECBEBB")
                IProtectionPolicyAuditInfo : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Action(
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Action(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataDescription(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SourceDescription(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SourceDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TargetDescription(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyAuditInfo=_uuidof(IProtectionPolicyAuditInfo);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("7ED4180B-92E8-42D5-83D4-25440B423549"), exclusiveto, contract] */
                MIDL_INTERFACE("7ED4180B-92E8-42D5-83D4-25440B423549")
                IProtectionPolicyAuditInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action,
                        /* [in] */__RPC__in HSTRING dataDescription,
                        /* [in] */__RPC__in HSTRING sourceDescription,
                        /* [in] */__RPC__in HSTRING targetDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithActionAndDataDescription(
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyAuditAction action,
                        /* [in] */__RPC__in HSTRING dataDescription,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyAuditInfoFactory=_uuidof(IProtectionPolicyAuditInfoFactory);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("D5703E18-A08D-47E6-A240-9934D7165EB5"), exclusiveto, contract] */
                MIDL_INTERFACE("D5703E18-A08D-47E6-A240-9934D7165EB5")
                IProtectionPolicyManager : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Identity(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Identity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManager=_uuidof(IProtectionPolicyManager);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManager2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("ABF7527A-8435-417F-99B6-51BEAF365888"), exclusiveto, contract] */
                MIDL_INTERFACE("ABF7527A-8435-417F-99B6-51BEAF365888")
                IProtectionPolicyManager2 : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowEnterpriseIndicator(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowEnterpriseIndicator(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManager2=_uuidof(IProtectionPolicyManager2);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("C0BFFC66-8C3D-4D56-8804-C68F0AD32EC5"), exclusiveto, contract] */
                MIDL_INTERFACE("C0BFFC66-8C3D-4D56-8804-C68F0AD32EC5")
                IProtectionPolicyManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsIdentityManaged(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TryApplyProcessUIPolicy(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearProcessUIPolicy(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCurrentThreadNetworkContext(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IThreadNetworkContext * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPrimaryManagedIdentityForNetworkEndpointAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * endpointHost,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RevokeContent(
                        /* [in] */__RPC__in HSTRING identity
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyManager * * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProtectedAccessSuspending(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProtectedAccessSuspending(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProtectedAccessResumed(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProtectedAccessResumed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProtectedContentRevoked(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProtectedContentRevoked(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CheckAccess(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManagerStatics=_uuidof(IProtectionPolicyManagerStatics);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("B68F9A8C-39E0-4649-B2E4-070AB8A579B3"), exclusiveto, contract] */
                MIDL_INTERFACE("B68F9A8C-39E0-4649-B2E4-070AB8A579B3")
                IProtectionPolicyManagerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE HasContentBeenRevokedSince(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [in] */ABI::Windows::Foundation::DateTime since,
                        /* [retval, out] */__RPC__out boolean * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CheckAccessForApp(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessForAppAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetEnforcementLevel(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::EnforcementLevel * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsUserDecryptionAllowed(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsProtectionUnderLockRequired(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PolicyChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PolicyChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsProtectionEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManagerStatics2=_uuidof(IProtectionPolicyManagerStatics2);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("48FF9E8C-6A6F-4D9F-BCED-18AB537AA015"), exclusiveto, contract] */
                MIDL_INTERFACE("48FF9E8C-6A6F-4D9F-BCED-18AB537AA015")
                IProtectionPolicyManagerStatics3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessWithAuditingInfoAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessWithMessageAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessForAppWithAuditingInfoAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessForAppWithMessageAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LogAuditEvent(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManagerStatics3=_uuidof(IProtectionPolicyManagerStatics3);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("20B794DB-CCBD-490F-8C83-49CCB77AEA6C"), exclusiveto, contract] */
                MIDL_INTERFACE("20B794DB-CCBD-490F-8C83-49CCB77AEA6C")
                IProtectionPolicyManagerStatics4 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsRoamableProtectionEnabled(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessWithBehaviorAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING targetIdentity,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior behavior,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessForAppWithBehaviorAsync(
                        /* [in] */__RPC__in HSTRING sourceIdentity,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior behavior,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessToFilesForAppAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessToFilesForAppWithMessageAndBehaviorAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                        /* [in] */__RPC__in HSTRING appPackageFamilyName,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior behavior,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessToFilesForProcessAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                        /* [in] */UINT32 processId,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
                        /* [in] */UINT32 processId,
                        /* [in] */__RPC__in_opt ABI::Windows::Security::EnterpriseData::IProtectionPolicyAuditInfo * auditInfo,
                        /* [in] */__RPC__in HSTRING messageFromApp,
                        /* [in] */ABI::Windows::Security::EnterpriseData::ProtectionPolicyRequestAccessBehavior behavior,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsFileProtectionRequiredAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * target,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsFileProtectionRequiredForNewFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * parentFolder,
                        /* [in] */__RPC__in HSTRING identity,
                        /* [in] */__RPC__in HSTRING desiredName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryManagedIdentity(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPrimaryManagedIdentityForIdentity(
                        /* [in] */__RPC__in HSTRING identity,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionPolicyManagerStatics4=_uuidof(IProtectionPolicyManagerStatics4);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IThreadNetworkContext
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ThreadNetworkContext
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IThreadNetworkContext[] = L"Windows.Security.EnterpriseData.IThreadNetworkContext";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace EnterpriseData {
                /* [object, uuid("FA4EA8E9-EF13-405A-B12C-D7348C6F41FC"), exclusiveto, contract] */
                MIDL_INTERFACE("FA4EA8E9-EF13-405A-B12C-D7348C6F41FC")
                IThreadNetworkContext : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IThreadNetworkContext=_uuidof(IThreadNetworkContext);
                
            } /* Windows */
        } /* Security */
    } /* EnterpriseData */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.BufferProtectUnprotectResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IBufferProtectUnprotectResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_BufferProtectUnprotectResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_BufferProtectUnprotectResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_BufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.DataProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IDataProtectionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionInfo[] = L"Windows.Security.EnterpriseData.DataProtectionInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.DataProtectionManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IDataProtectionManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionManager[] = L"Windows.Security.EnterpriseData.DataProtectionManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IFileProtectionInfo ** Default Interface **
 *    Windows.Security.EnterpriseData.IFileProtectionInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionInfo[] = L"Windows.Security.EnterpriseData.FileProtectionInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileProtectionManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics3 interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics2 interface starting with version 2.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionManager[] = L"Windows.Security.EnterpriseData.FileProtectionManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileRevocationManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileRevocationManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileRevocationManager[] = L"Windows.Security.EnterpriseData.FileRevocationManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IFileUnprotectOptions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileUnprotectOptions_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileUnprotectOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileUnprotectOptions[] = L"Windows.Security.EnterpriseData.FileUnprotectOptions";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContainerExportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContainerExportResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerExportResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerExportResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerExportResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContainerImportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContainerImportResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerImportResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerImportResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerImportResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedFileCreateResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedFileCreateResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedFileCreateResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedFileCreateResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.ProtectedFileCreateResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory interface starting with version 3.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4 interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3 interface starting with version 3.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2 interface starting with version 2.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectionPolicyManager ** Default Interface **
 *    Windows.Security.EnterpriseData.IProtectionPolicyManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.ProtectionPolicyManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ThreadNetworkContext
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IThreadNetworkContext ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ThreadNetworkContext_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ThreadNetworkContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ThreadNetworkContext[] = L"Windows.Security.EnterpriseData.ThreadNetworkContext";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext;

#endif // ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs;

typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs;

typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl;

interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs;

typedef struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl;

interface __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus_INTERFACE_DEFINED__



#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult_INTERFACE_DEFINED__


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


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__



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


#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CIStorageItem __FIIterator_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CIStorageItem;

typedef struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIIterator_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CIStorageItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CIStorageItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CIStorageItem __FIIterable_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CIStorageItem;

typedef  struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CIStorageItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIIterable_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CIStorageItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CStorage_CCreationCollisionOption __x_ABI_CWindows_CStorage_CCreationCollisionOption;

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__




typedef enum __x_ABI_CWindows_CStorage_CNameCollisionOption __x_ABI_CWindows_CStorage_CNameCollisionOption;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;


typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior;




















































/*
 *
 * Struct Windows.Security.EnterpriseData.DataProtectionStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus
{
    DataProtectionStatus_ProtectedToOtherIdentity = 0,
    DataProtectionStatus_Protected = 1,
    DataProtectionStatus_Revoked = 2,
    DataProtectionStatus_Unprotected = 3,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    DataProtectionStatus_LicenseExpired = 4,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    DataProtectionStatus_AccessSuspended = 5,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.EnforcementLevel
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel
{
    EnforcementLevel_NoProtection = 0,
    EnforcementLevel_Silent = 1,
    EnforcementLevel_Override = 2,
    EnforcementLevel_Block = 3,
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Security.EnterpriseData.FileProtectionStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus
{
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_Undetermined
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("Undetermined might be unavailable after Windows 10. Instead, use Unknown.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
     = 0,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_Unknown = 0,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_Unprotected = 1,
    FileProtectionStatus_Revoked = 2,
    FileProtectionStatus_Protected = 3,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_ProtectedByOtherUser
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("ProtectedByOtherUser might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
     = 4,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_ProtectedToOtherEnterprise
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("ProtectedToOtherEnterprise might be unavailable after Windows 10. Instead, use ProtectedToOtherIdentity.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
     = 5,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_NotProtectable = 6,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
    FileProtectionStatus_ProtectedToOtherIdentity = 7,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    FileProtectionStatus_LicenseExpired = 8,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    FileProtectionStatus_AccessSuspended = 9,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
    
    FileProtectionStatus_FileInUse = 10,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectedImportExportStatus
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus
{
    ProtectedImportExportStatus_Ok = 0,
    ProtectedImportExportStatus_Undetermined = 1,
    ProtectedImportExportStatus_Unprotected = 2,
    ProtectedImportExportStatus_Revoked = 3,
    ProtectedImportExportStatus_NotRoamable = 4,
    ProtectedImportExportStatus_ProtectedToOtherIdentity = 5,
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    ProtectedImportExportStatus_LicenseExpired = 6,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
    ProtectedImportExportStatus_AccessSuspended = 7,
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
    
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyAuditAction
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction
{
    ProtectionPolicyAuditAction_Decrypt = 0,
    ProtectionPolicyAuditAction_CopyToLocation = 1,
    ProtectionPolicyAuditAction_SendToRecipient = 2,
    ProtectionPolicyAuditAction_Other = 3,
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyEvaluationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult
{
    ProtectionPolicyEvaluationResult_Allowed = 0,
    ProtectionPolicyEvaluationResult_Blocked = 1,
    ProtectionPolicyEvaluationResult_ConsentRequired = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.EnterpriseData.ProtectionPolicyRequestAccessBehavior
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 */

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior
{
    ProtectionPolicyRequestAccessBehavior_Decrypt = 0,
    ProtectionPolicyRequestAccessBehavior_TreatOverridePolicyAsBlock = 1,
};
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IBufferProtectUnprotectResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.BufferProtectUnprotectResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IBufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.IBufferProtectUnprotectResult";
/* [object, uuid("47995EDC-6CEC-4E3A-B251-9E7485D79E7A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionInfo )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_get_Buffer(This,value) \
    ( (This)->lpVtbl->get_Buffer(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_get_ProtectionInfo(This,value) \
    ( (This)->lpVtbl->get_ProtectionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIBufferProtectUnprotectResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IDataProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.DataProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionInfo[] = L"Windows.Security.EnterpriseData.IDataProtectionInfo";
/* [object, uuid("8420B0C1-5E31-4405-9540-3F943AF0CB26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CDataProtectionStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_get_Identity(This,value) \
    ( (This)->lpVtbl->get_Identity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IDataProtectionManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.DataProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IDataProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IDataProtectionManagerStatics";
/* [object, uuid("B6149B74-9144-4EE4-8A8A-30B5F361430E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprotectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CBufferProtectUnprotectResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ProtectStreamAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * unprotectedStream,
        /* [in] */__RPC__in HSTRING identity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * protectedStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *UnprotectStreamAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * protectedStream,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * unprotectedStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * protectedData,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStreamProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * protectedStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CDataProtectionInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_ProtectAsync(This,data,identity,result) \
    ( (This)->lpVtbl->ProtectAsync(This,data,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_UnprotectAsync(This,data,result) \
    ( (This)->lpVtbl->UnprotectAsync(This,data,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_ProtectStreamAsync(This,unprotectedStream,identity,protectedStream,result) \
    ( (This)->lpVtbl->ProtectStreamAsync(This,unprotectedStream,identity,protectedStream,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_UnprotectStreamAsync(This,protectedStream,unprotectedStream,result) \
    ( (This)->lpVtbl->UnprotectStreamAsync(This,protectedStream,unprotectedStream,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_GetProtectionInfoAsync(This,protectedData,result) \
    ( (This)->lpVtbl->GetProtectionInfoAsync(This,protectedData,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_GetStreamProtectionInfoAsync(This,protectedStream,result) \
    ( (This)->lpVtbl->GetStreamProtectionInfoAsync(This,protectedStream,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIDataProtectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo";
/* [object, uuid("4EE96486-147E-4DD0-8FAF-5253ED91AD0C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CFileProtectionStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRoamable )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_get_IsRoamable(This,value) \
    ( (This)->lpVtbl->get_IsRoamable(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_get_Identity(This,value) \
    ( (This)->lpVtbl->get_Identity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionInfo2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionInfo2[] = L"Windows.Security.EnterpriseData.IFileProtectionInfo2";
/* [object, uuid("82123A4C-557A-498D-8E94-944CD5836432"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsProtectWhileOpenSupported )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_get_IsProtectWhileOpenSupported(This,value) \
    ( (This)->lpVtbl->get_IsProtectWhileOpenSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics";
/* [object, uuid("5846FC9B-E613-426B-BB38-88CBA1DC9ADB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CopyProtectionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * source,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetProtectionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * source,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SaveFileAsContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * protectedFile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerWithTargetAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProtectedAndOpenAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * parentFolder,
        /* [in] */__RPC__in HSTRING desiredName,
        /* [in] */__RPC__in HSTRING identity,
        /* [in] */__x_ABI_CWindows_CStorage_CCreationCollisionOption collisionOption,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedFileCreateResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_ProtectAsync(This,target,identity,result) \
    ( (This)->lpVtbl->ProtectAsync(This,target,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_CopyProtectionAsync(This,source,target,result) \
    ( (This)->lpVtbl->CopyProtectionAsync(This,source,target,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_GetProtectionInfoAsync(This,source,result) \
    ( (This)->lpVtbl->GetProtectionInfoAsync(This,source,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_SaveFileAsContainerAsync(This,protectedFile,result) \
    ( (This)->lpVtbl->SaveFileAsContainerAsync(This,protectedFile,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_LoadFileFromContainerAsync(This,containerFile,result) \
    ( (This)->lpVtbl->LoadFileFromContainerAsync(This,containerFile,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_LoadFileFromContainerWithTargetAsync(This,containerFile,target,result) \
    ( (This)->lpVtbl->LoadFileFromContainerWithTargetAsync(This,containerFile,target,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_CreateProtectedAndOpenAsync(This,parentFolder,desiredName,identity,collisionOption,result) \
    ( (This)->lpVtbl->CreateProtectedAndOpenAsync(This,parentFolder,desiredName,identity,collisionOption,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics2[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics2";
/* [object, uuid("83D2A745-0483-41AB-B2D5-BC7F23D74EBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsContainerAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *LoadFileFromContainerWithTargetAndNameCollisionOptionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * containerFile,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [in] */__x_ABI_CWindows_CStorage_CNameCollisionOption collisionOption,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerImportResult * * result
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *SaveFileAsContainerWithSharingAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * protectedFile,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * sharedWithIdentities,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectedContainerExportResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_IsContainerAsync(This,file,result) \
    ( (This)->lpVtbl->IsContainerAsync(This,file,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(This,containerFile,target,collisionOption,result) \
    ( (This)->lpVtbl->LoadFileFromContainerWithTargetAndNameCollisionOptionAsync(This,containerFile,target,collisionOption,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_SaveFileAsContainerWithSharingAsync(This,protectedFile,sharedWithIdentities,result) \
    ( (This)->lpVtbl->SaveFileAsContainerWithSharingAsync(This,protectedFile,sharedWithIdentities,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileProtectionManagerStatics3
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileProtectionManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileProtectionManagerStatics3[] = L"Windows.Security.EnterpriseData.IFileProtectionManagerStatics3";
/* [object, uuid("6918849A-624F-46D6-B241-E9CD5FDF3E3F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *UnprotectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *UnprotectWithOptionsAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_UnprotectAsync(This,target,result) \
    ( (This)->lpVtbl->UnprotectAsync(This,target,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_UnprotectWithOptionsAsync(This,target,options,result) \
    ( (This)->lpVtbl->UnprotectWithOptionsAsync(This,target,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileRevocationManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileRevocationManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileRevocationManagerStatics[] = L"Windows.Security.EnterpriseData.IFileRevocationManagerStatics";
/* [object, uuid("256BBC3D-1C5D-4260-8C75-9144CFB78BA9"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *ProtectAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
        /* [in] */__RPC__in HSTRING enterpriseIdentity,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
        );
    
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CopyProtectionAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * sourceStorageItem,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * targetStorageItem,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Revoke )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
        /* [in] */__RPC__in HSTRING enterpriseIdentity
        );
    
    #if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
    #endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetStatusAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * storageItem,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CFileProtectionStatus * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_ProtectAsync(This,storageItem,enterpriseIdentity,result) \
    ( (This)->lpVtbl->ProtectAsync(This,storageItem,enterpriseIdentity,result) )


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_CopyProtectionAsync(This,sourceStorageItem,targetStorageItem,result) \
    ( (This)->lpVtbl->CopyProtectionAsync(This,sourceStorageItem,targetStorageItem,result) )


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_Revoke(This,enterpriseIdentity) \
    ( (This)->lpVtbl->Revoke(This,enterpriseIdentity) )


#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_GetStatusAsync(This,storageItem,result) \
    ( (This)->lpVtbl->GetStatusAsync(This,storageItem,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileRevocationManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileUnprotectOptions
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptions[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptions";
/* [object, uuid("7D1312F1-3B0D-4DD8-A1F8-1EC53822E2F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Audit )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Audit )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_put_Audit(This,value) \
    ( (This)->lpVtbl->put_Audit(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_get_Audit(This,value) \
    ( (This)->lpVtbl->get_Audit(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IFileUnprotectOptionsFactory[] = L"Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory";
/* [object, uuid("51AEB39C-DA8C-4C3F-9BFB-CB73A7CCE0DD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory * This,
        /* [in] */boolean audit,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptions * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_Create(This,audit,result) \
    ( (This)->lpVtbl->Create(This,audit,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileUnprotectOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs";
/* [object, uuid("AC4DCA59-5D80-4E95-8C5F-8539450EEBE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_get_Identities(This,value) \
    ( (This)->lpVtbl->get_Identities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessResumedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs";
/* [object, uuid("75A193E0-A344-429F-B975-04FC1F88C185"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_get_Identities(This,value) \
    ( (This)->lpVtbl->get_Identities(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedAccessSuspendingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContainerExportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContainerExportResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerExportResult";
/* [object, uuid("3948EF95-F7FB-4B42-AFB0-DF70B41543C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerExportResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContainerImportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContainerImportResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.IProtectedContainerImportResult";
/* [object, uuid("CDB780D1-E7BB-4D1A-9339-34DC41149F9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectedImportExportStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContainerImportResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs";
/* [object, uuid("63686821-58B9-47EE-93D9-F0F741CF43F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identities )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_get_Identities(This,value) \
    ( (This)->lpVtbl->get_Identities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedContentRevokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectedFileCreateResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectedFileCreateResult
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.IProtectedFileCreateResult";
/* [object, uuid("28E3ED6A-E9E7-4A03-9F53-BDB16172699B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionInfo )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIFileProtectionInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_get_Stream(This,value) \
    ( (This)->lpVtbl->get_Stream(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_get_ProtectionInfo(This,value) \
    ( (This)->lpVtbl->get_ProtectionInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectedFileCreateResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo";
/* [object, uuid("425AB7E4-FEB7-44FC-B3BB-C3C4D7ECBEBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Action )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SourceDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SourceDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TargetDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_put_Action(This,value) \
    ( (This)->lpVtbl->put_Action(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_get_Action(This,value) \
    ( (This)->lpVtbl->get_Action(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_put_DataDescription(This,value) \
    ( (This)->lpVtbl->put_DataDescription(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_get_DataDescription(This,value) \
    ( (This)->lpVtbl->get_DataDescription(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_put_SourceDescription(This,value) \
    ( (This)->lpVtbl->put_SourceDescription(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_get_SourceDescription(This,value) \
    ( (This)->lpVtbl->get_SourceDescription(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_put_TargetDescription(This,value) \
    ( (This)->lpVtbl->put_TargetDescription(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_get_TargetDescription(This,value) \
    ( (This)->lpVtbl->get_TargetDescription(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyAuditInfoFactory[] = L"Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory";
/* [object, uuid("7ED4180B-92E8-42D5-83D4-25440B423549"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction action,
        /* [in] */__RPC__in HSTRING dataDescription,
        /* [in] */__RPC__in HSTRING sourceDescription,
        /* [in] */__RPC__in HSTRING targetDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithActionAndDataDescription )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyAuditAction action,
        /* [in] */__RPC__in HSTRING dataDescription,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_Create(This,action,dataDescription,sourceDescription,targetDescription,result) \
    ( (This)->lpVtbl->Create(This,action,dataDescription,sourceDescription,targetDescription,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_CreateWithActionAndDataDescription(This,action,dataDescription,result) \
    ( (This)->lpVtbl->CreateWithActionAndDataDescription(This,action,dataDescription,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager";
/* [object, uuid("D5703E18-A08D-47E6-A240-9934D7165EB5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_put_Identity(This,value) \
    ( (This)->lpVtbl->put_Identity(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_get_Identity(This,value) \
    ( (This)->lpVtbl->get_Identity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManager2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManager2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManager2";
/* [object, uuid("ABF7527A-8435-417F-99B6-51BEAF365888"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowEnterpriseIndicator )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowEnterpriseIndicator )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_put_ShowEnterpriseIndicator(This,value) \
    ( (This)->lpVtbl->put_ShowEnterpriseIndicator(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_get_ShowEnterpriseIndicator(This,value) \
    ( (This)->lpVtbl->get_ShowEnterpriseIndicator(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics";
/* [object, uuid("C0BFFC66-8C3D-4D56-8804-C68F0AD32EC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsIdentityManaged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryApplyProcessUIPolicy )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ClearProcessUIPolicy )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCurrentThreadNetworkContext )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrimaryManagedIdentityForNetworkEndpointAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * endpointHost,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RevokeContent )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING identity
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManager * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProtectedAccessSuspending )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessSuspendingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProtectedAccessSuspending )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProtectedAccessResumed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedAccessResumedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProtectedAccessResumed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProtectedContentRevoked )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_Windows__CSecurity__CEnterpriseData__CProtectedContentRevokedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProtectedContentRevoked )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_IsIdentityManaged(This,identity,result) \
    ( (This)->lpVtbl->IsIdentityManaged(This,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_TryApplyProcessUIPolicy(This,identity,result) \
    ( (This)->lpVtbl->TryApplyProcessUIPolicy(This,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_ClearProcessUIPolicy(This) \
    ( (This)->lpVtbl->ClearProcessUIPolicy(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_CreateCurrentThreadNetworkContext(This,identity,result) \
    ( (This)->lpVtbl->CreateCurrentThreadNetworkContext(This,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_GetPrimaryManagedIdentityForNetworkEndpointAsync(This,endpointHost,result) \
    ( (This)->lpVtbl->GetPrimaryManagedIdentityForNetworkEndpointAsync(This,endpointHost,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_RevokeContent(This,identity) \
    ( (This)->lpVtbl->RevokeContent(This,identity) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_GetForCurrentView(This,result) \
    ( (This)->lpVtbl->GetForCurrentView(This,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_add_ProtectedAccessSuspending(This,handler,token) \
    ( (This)->lpVtbl->add_ProtectedAccessSuspending(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_remove_ProtectedAccessSuspending(This,token) \
    ( (This)->lpVtbl->remove_ProtectedAccessSuspending(This,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_add_ProtectedAccessResumed(This,handler,token) \
    ( (This)->lpVtbl->add_ProtectedAccessResumed(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_remove_ProtectedAccessResumed(This,token) \
    ( (This)->lpVtbl->remove_ProtectedAccessResumed(This,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_add_ProtectedContentRevoked(This,handler,token) \
    ( (This)->lpVtbl->add_ProtectedContentRevoked(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_remove_ProtectedContentRevoked(This,token) \
    ( (This)->lpVtbl->remove_ProtectedContentRevoked(This,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_CheckAccess(This,sourceIdentity,targetIdentity,result) \
    ( (This)->lpVtbl->CheckAccess(This,sourceIdentity,targetIdentity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_RequestAccessAsync(This,sourceIdentity,targetIdentity,result) \
    ( (This)->lpVtbl->RequestAccessAsync(This,sourceIdentity,targetIdentity,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics2[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2";
/* [object, uuid("B68F9A8C-39E0-4649-B2E4-070AB8A579B3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasContentBeenRevokedSince )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime since,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccessForApp )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnforcementLevel )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CEnforcementLevel * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsUserDecryptionAllowed )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsProtectionUnderLockRequired )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PolicyChanged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PolicyChanged )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsProtectionEnabled )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_HasContentBeenRevokedSince(This,identity,since,result) \
    ( (This)->lpVtbl->HasContentBeenRevokedSince(This,identity,since,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_CheckAccessForApp(This,sourceIdentity,appPackageFamilyName,result) \
    ( (This)->lpVtbl->CheckAccessForApp(This,sourceIdentity,appPackageFamilyName,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_RequestAccessForAppAsync(This,sourceIdentity,appPackageFamilyName,result) \
    ( (This)->lpVtbl->RequestAccessForAppAsync(This,sourceIdentity,appPackageFamilyName,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_GetEnforcementLevel(This,identity,value) \
    ( (This)->lpVtbl->GetEnforcementLevel(This,identity,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_IsUserDecryptionAllowed(This,identity,value) \
    ( (This)->lpVtbl->IsUserDecryptionAllowed(This,identity,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_IsProtectionUnderLockRequired(This,identity,value) \
    ( (This)->lpVtbl->IsProtectionUnderLockRequired(This,identity,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_add_PolicyChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PolicyChanged(This,handler,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_remove_PolicyChanged(This,token) \
    ( (This)->lpVtbl->remove_PolicyChanged(This,token) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_get_IsProtectionEnabled(This,value) \
    ( (This)->lpVtbl->get_IsProtectionEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics3[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3";
/* [object, uuid("48FF9E8C-6A6F-4D9F-BCED-18AB537AA015"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessWithAuditingInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessWithMessageAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithAuditingInfoAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithMessageAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *LogAuditEvent )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_RequestAccessWithAuditingInfoAsync(This,sourceIdentity,targetIdentity,auditInfo,result) \
    ( (This)->lpVtbl->RequestAccessWithAuditingInfoAsync(This,sourceIdentity,targetIdentity,auditInfo,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_RequestAccessWithMessageAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,result) \
    ( (This)->lpVtbl->RequestAccessWithMessageAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_RequestAccessForAppWithAuditingInfoAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,result) \
    ( (This)->lpVtbl->RequestAccessForAppWithAuditingInfoAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_RequestAccessForAppWithMessageAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,result) \
    ( (This)->lpVtbl->RequestAccessForAppWithMessageAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_LogAuditEvent(This,sourceIdentity,targetIdentity,auditInfo) \
    ( (This)->lpVtbl->LogAuditEvent(This,sourceIdentity,targetIdentity,auditInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IProtectionPolicyManagerStatics4[] = L"Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4";
/* [object, uuid("20B794DB-CCBD-490F-8C83-49CCB77AEA6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsRoamableProtectionEnabled )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessWithBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING targetIdentity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in HSTRING sourceIdentity,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppWithMessageAndBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
        /* [in] */__RPC__in HSTRING appPackageFamilyName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
        /* [in] */UINT32 processId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessWithMessageAndBehaviorAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * sourceItemList,
        /* [in] */UINT32 processId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyAuditInfo * auditInfo,
        /* [in] */__RPC__in HSTRING messageFromApp,
        /* [in] */__x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyRequestAccessBehavior behavior,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsFileProtectionRequiredAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * target,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsFileProtectionRequiredForNewFileAsync )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * parentFolder,
        /* [in] */__RPC__in HSTRING identity,
        /* [in] */__RPC__in HSTRING desiredName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryManagedIdentity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPrimaryManagedIdentityForIdentity )(
        __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4 * This,
        /* [in] */__RPC__in HSTRING identity,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_IsRoamableProtectionEnabled(This,identity,value) \
    ( (This)->lpVtbl->IsRoamableProtectionEnabled(This,identity,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessWithBehaviorAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,behavior,result) \
    ( (This)->lpVtbl->RequestAccessWithBehaviorAsync(This,sourceIdentity,targetIdentity,auditInfo,messageFromApp,behavior,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessForAppWithBehaviorAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) \
    ( (This)->lpVtbl->RequestAccessForAppWithBehaviorAsync(This,sourceIdentity,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessToFilesForAppAsync(This,sourceItemList,appPackageFamilyName,auditInfo,result) \
    ( (This)->lpVtbl->RequestAccessToFilesForAppAsync(This,sourceItemList,appPackageFamilyName,auditInfo,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessToFilesForAppWithMessageAndBehaviorAsync(This,sourceItemList,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) \
    ( (This)->lpVtbl->RequestAccessToFilesForAppWithMessageAndBehaviorAsync(This,sourceItemList,appPackageFamilyName,auditInfo,messageFromApp,behavior,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessToFilesForProcessAsync(This,sourceItemList,processId,auditInfo,result) \
    ( (This)->lpVtbl->RequestAccessToFilesForProcessAsync(This,sourceItemList,processId,auditInfo,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(This,sourceItemList,processId,auditInfo,messageFromApp,behavior,result) \
    ( (This)->lpVtbl->RequestAccessToFilesForProcessWithMessageAndBehaviorAsync(This,sourceItemList,processId,auditInfo,messageFromApp,behavior,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_IsFileProtectionRequiredAsync(This,target,identity,result) \
    ( (This)->lpVtbl->IsFileProtectionRequiredAsync(This,target,identity,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_IsFileProtectionRequiredForNewFileAsync(This,parentFolder,identity,desiredName,result) \
    ( (This)->lpVtbl->IsFileProtectionRequiredForNewFileAsync(This,parentFolder,identity,desiredName,result) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_get_PrimaryManagedIdentity(This,value) \
    ( (This)->lpVtbl->get_PrimaryManagedIdentity(This,value) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_GetPrimaryManagedIdentityForIdentity(This,identity,value) \
    ( (This)->lpVtbl->GetPrimaryManagedIdentityForIdentity(This,identity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIProtectionPolicyManagerStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.EnterpriseData.IThreadNetworkContext
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.EnterpriseData.ThreadNetworkContext
 *
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_EnterpriseData_IThreadNetworkContext[] = L"Windows.Security.EnterpriseData.IThreadNetworkContext";
/* [object, uuid("FA4EA8E9-EF13-405A-B12C-D7348C6F41FC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl;

interface __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CEnterpriseData_CIThreadNetworkContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.BufferProtectUnprotectResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IBufferProtectUnprotectResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_BufferProtectUnprotectResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_BufferProtectUnprotectResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_BufferProtectUnprotectResult[] = L"Windows.Security.EnterpriseData.BufferProtectUnprotectResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.DataProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IDataProtectionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionInfo[] = L"Windows.Security.EnterpriseData.DataProtectionInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.DataProtectionManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IDataProtectionManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_DataProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_DataProtectionManager[] = L"Windows.Security.EnterpriseData.DataProtectionManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileProtectionInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IFileProtectionInfo ** Default Interface **
 *    Windows.Security.EnterpriseData.IFileProtectionInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionInfo[] = L"Windows.Security.EnterpriseData.FileProtectionInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileProtectionManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics3 interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics2 interface starting with version 2.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileProtectionManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileProtectionManager[] = L"Windows.Security.EnterpriseData.FileProtectionManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileRevocationManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IFileRevocationManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileRevocationManager_DEFINED

#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
DEPRECATED("FileRevocationManager might be unavailable after Windows 10. Instead, use FileProtectionManager.")
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileRevocationManager[] = L"Windows.Security.EnterpriseData.FileRevocationManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.FileUnprotectOptions
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.EnterpriseData.IFileUnprotectOptionsFactory interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IFileUnprotectOptions ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_FileUnprotectOptions_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_FileUnprotectOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_FileUnprotectOptions[] = L"Windows.Security.EnterpriseData.FileUnprotectOptions";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedAccessResumedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessResumedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessResumedEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedAccessSuspendingEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedAccessSuspendingEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedAccessSuspendingEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContainerExportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContainerExportResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerExportResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerExportResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerExportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerExportResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContainerImportResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContainerImportResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerImportResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContainerImportResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContainerImportResult[] = L"Windows.Security.EnterpriseData.ProtectedContainerImportResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedContentRevokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedContentRevokedEventArgs[] = L"Windows.Security.EnterpriseData.ProtectedContentRevokedEventArgs";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectedFileCreateResult
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectedFileCreateResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedFileCreateResult_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectedFileCreateResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectedFileCreateResult[] = L"Windows.Security.EnterpriseData.ProtectedFileCreateResult";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.EnterpriseData.IProtectionPolicyAuditInfoFactory interface starting with version 3.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectionPolicyAuditInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyAuditInfo[] = L"Windows.Security.EnterpriseData.ProtectionPolicyAuditInfo";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.EnterpriseData.ProtectionPolicyManager
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics4 interface starting with version 4.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics3 interface starting with version 3.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics2 interface starting with version 2.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *   Static Methods exist on the Windows.Security.EnterpriseData.IProtectionPolicyManagerStatics interface starting with version 1.0 of the Windows.Security.EnterpriseData.EnterpriseDataContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IProtectionPolicyManager ** Default Interface **
 *    Windows.Security.EnterpriseData.IProtectionPolicyManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyManager_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ProtectionPolicyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ProtectionPolicyManager[] = L"Windows.Security.EnterpriseData.ProtectionPolicyManager";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.EnterpriseData.ThreadNetworkContext
 *
 * Introduced to Windows.Security.EnterpriseData.EnterpriseDataContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.EnterpriseData.IThreadNetworkContext ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_EnterpriseData_ThreadNetworkContext_DEFINED
#define RUNTIMECLASS_Windows_Security_EnterpriseData_ThreadNetworkContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_EnterpriseData_ThreadNetworkContext[] = L"Windows.Security.EnterpriseData.ThreadNetworkContext";
#endif
#endif // WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esecurity2Eenterprisedata_p_h__

#endif // __windows2Esecurity2Eenterprisedata_h__
