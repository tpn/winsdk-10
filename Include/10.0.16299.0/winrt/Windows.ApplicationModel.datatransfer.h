/* Header file automatically generated from windows.applicationmodel.datatransfer.idl */
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
#ifndef __windows2Eapplicationmodel2Edatatransfer_h__
#define __windows2Eapplicationmodel2Edatatransfer_h__
#ifndef __windows2Eapplicationmodel2Edatatransfer_p_h__
#define __windows2Eapplicationmodel2Edatatransfer_p_h__


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
#include "Windows.Security.EnterpriseData.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataProviderHandler;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler ABI::Windows::ApplicationModel::DataTransfer::IDataProviderHandler

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareProviderHandler;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler ABI::Windows::ApplicationModel::DataTransfer::IShareProviderHandler

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IClipboardStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics ABI::Windows::ApplicationModel::DataTransfer::IClipboardStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackage;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage ABI::Windows::ApplicationModel::DataTransfer::IDataPackage

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackage2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 ABI::Windows::ApplicationModel::DataTransfer::IDataPackage2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackage3;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 ABI::Windows::ApplicationModel::DataTransfer::IDataPackage3

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySet;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySet2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySet3;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet3

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySetView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySetView2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackagePropertySetView3;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView3

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackageView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackageView2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackageView3;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView3

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataPackageView4;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView4

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataProviderDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral ABI::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataProviderRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest ABI::Windows::ApplicationModel::DataTransfer::IDataProviderRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest ABI::Windows::ApplicationModel::DataTransfer::IDataRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataRequestDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral ABI::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataRequestedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs ABI::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataTransferManager;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataTransferManager2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataTransferManagerStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataTransferManagerStatics2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IDataTransferManagerStatics3;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManagerStatics3

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IHtmlFormatHelperStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics ABI::Windows::ApplicationModel::DataTransfer::IHtmlFormatHelperStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IOperationCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs ABI::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IOperationCompletedEventArgs2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 ABI::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs ABI::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareProvider;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider ABI::Windows::ApplicationModel::DataTransfer::IShareProvider

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareProviderFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory ABI::Windows::ApplicationModel::DataTransfer::IShareProviderFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareProviderOperation;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation ABI::Windows::ApplicationModel::DataTransfer::IShareProviderOperation

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareProvidersRequestedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs ABI::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareTargetInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo ABI::Windows::ApplicationModel::DataTransfer::IShareTargetInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IShareUIOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions ABI::Windows::ApplicationModel::DataTransfer::IShareUIOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface ISharedStorageAccessManagerStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics ABI::Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IStandardDataFormatsStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics ABI::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface IStandardDataFormatsStatics2;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 ABI::Windows::ApplicationModel::DataTransfer::IStandardDataFormatsStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                interface ITargetApplicationChosenEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs ABI::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareProvider;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("886f5642-e9f9-573b-9213-5840b5062b40"))
IIterator<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*, ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.DataTransfer.ShareProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t;
#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
//#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0903b218-5cad-53e6-9a21-6f4b31c4a409"))
IIterable<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*, ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.DataTransfer.ShareProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t;
#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
//#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("946537a2-932c-5b77-ab36-b70650f0bcd5"))
IVectorView<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*, ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.DataTransfer.ShareProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t;
#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
//#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a1687865-31e2-5536-97ec-292269a78046"))
IVector<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*, ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.DataTransfer.ShareProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::DataTransfer::ShareProvider*> __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t;
#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
//#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::DataTransfer::IShareProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackage;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a93a3b99-e946-57ce-aad9-c23d138c353e"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*, ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.DataTransfer.DataPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a16f2d07-ead3-53e4-9490-75bdbaeb7a5b"))
IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*, ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.DataTransfer.DataPackage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*> __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                enum DataPackageOperation : unsigned int;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("add21d46-17df-5a43-a685-3262fce84643"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.DataTransfer.DataPackageOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8b98aea9-64f0-5672-b30e-dfd9c2e4f6fe"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.DataTransfer.DataPackageOperation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation> __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_USE */





#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c156b0c3-1cbc-5ca4-901c-62c5a8ca5cb5"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*, ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataPackage, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class OperationCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd48af6c-ef9a-59cb-b326-57d9e2411f21"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,ABI::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*, ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataPackage, Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,ABI::Windows::ApplicationModel::DataTransfer::OperationCompletedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,ABI::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,ABI::Windows::ApplicationModel::DataTransfer::IOperationCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8f7e24a-56fe-58df-bc15-2365aec03966"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,ABI::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*, ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataPackage, Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataPackage*,ABI::Windows::ApplicationModel::DataTransfer::ShareCompletedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,ABI::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataPackage*,ABI::Windows::ApplicationModel::DataTransfer::IShareCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataTransferManager;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataRequestedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ec6f9cc8-46d0-5e0e-b4d2-7d7773ae37a0"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*, ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataTransferManager, Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::DataRequestedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::IDataRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareProvidersRequestedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("147e2860-7397-582f-80db-b8685383a937"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*, ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataTransferManager, Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::ShareProvidersRequestedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::IShareProvidersRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class TargetApplicationChosenEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c4ac1ba2-7851-5a44-bc8d-3d7c713f1f41"))
ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*, ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs*, ABI::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.DataTransfer.DataTransferManager, Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::DataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::TargetApplicationChosenEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager*,ABI::Windows::ApplicationModel::DataTransfer::ITargetApplicationChosenEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_USE */


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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5195792-aeab-56e8-bd30-1372c4340bf6"))
IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9419af53-acb8-5328-8853-70ba87eb6ad5"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c9729ba7-5e20-569d-a3d1-97a4e653e5bb"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0a4ce7a5-dfe0-5796-a438-effdfaa31f1b"))
IMapView<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e5d2ccfc-825a-5a8e-82aa-095ed5dbd5d1"))
IMap<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IMap_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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





#ifndef DEF___FIAsyncOperationCompletedHandler_1_IInspectable_USE
#define DEF___FIAsyncOperationCompletedHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3f08262e-a2e1-5134-9297-e9211f481a2d"))
IAsyncOperationCompletedHandler<IInspectable*> : IAsyncOperationCompletedHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<IInspectable*> __FIAsyncOperationCompletedHandler_1_IInspectable_t;
#define __FIAsyncOperationCompletedHandler_1_IInspectable ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_IInspectable ABI::Windows::Foundation::IAsyncOperationCompletedHandler<IInspectable*>
//#define __FIAsyncOperationCompletedHandler_1_IInspectable_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_IInspectable_USE */





#ifndef DEF___FIAsyncOperation_1_IInspectable_USE
#define DEF___FIAsyncOperation_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("abf53c57-ee50-5342-b52a-26e3b8cc024f"))
IAsyncOperation<IInspectable*> : IAsyncOperation_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<IInspectable*> __FIAsyncOperation_1_IInspectable_t;
#define __FIAsyncOperation_1_IInspectable ABI::Windows::Foundation::__FIAsyncOperation_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_IInspectable ABI::Windows::Foundation::IAsyncOperation<IInspectable*>
//#define __FIAsyncOperation_1_IInspectable_t ABI::Windows::Foundation::IAsyncOperation<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_IInspectable_USE */




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

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ad46f1cc-2bb0-585c-9885-03c2780d4d58"))
IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Uri*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Uri*> __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE
#define DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("641cb9dd-a28d-59e2-b8db-a227eda6cf2e"))
IAsyncOperation<ABI::Windows::Foundation::Uri*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Foundation::Uri*, ABI::Windows::Foundation::IUriRuntimeClass*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Uri>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Foundation::Uri*> __FIAsyncOperation_1_Windows__CFoundation__CUri_t;
#define __FIAsyncOperation_1_Windows__CFoundation__CUri ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CFoundation__CUri_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CFoundation__CUri ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::IUriRuntimeClass*>
//#define __FIAsyncOperation_1_Windows__CFoundation__CUri_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::IUriRuntimeClass*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CFoundation__CUri_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d4cb6b80-821a-5a7b-898d-d58917b31a36"))
IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fc012d44-2dcf-5162-be9a-7668675aa590"))
IAsyncOperation<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> : IAsyncOperation_impl<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<String, Windows.Storage.Streams.RandomAccessStreamReference>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference*> __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3d203732-ded7-5d32-87e6-c179781f791f"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d90442ca-543c-504b-9eb9-294bcad8a283"))
IAsyncOperation<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Streams::RandomAccessStreamReference*, ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.RandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::RandomAccessStreamReference*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("85575a41-06cb-58d0-b98a-7c8f06e6e9d7"))
IVectorView<ABI::Windows::Storage::IStorageItem*> : IVectorView_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::IStorageItem*> __FIVectorView_1_Windows__CStorage__CIStorageItem_t;
#define __FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>
//#define __FIVectorView_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51436e75-ace1-5a68-b260-f843b846f0db"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CIStorageItem*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CStorage__CIStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.IStorageItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CIStorageItem*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4b1c0fd7-7a01-5e7a-a6fe-be4500283f23"))
IAsyncOperation<__FIVectorView_1_Windows__CStorage__CIStorageItem*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CStorage__CIStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.IStorageItem>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CStorage__CIStorageItem*> __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageItem*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CRect_USE
#define DEF___FIReference_1_Windows__CFoundation__CRect_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("80423f11-054f-5eac-afd3-63b6ce15e77b"))
IReference<struct ABI::Windows::Foundation::Rect> : IReference_impl<struct ABI::Windows::Foundation::Rect> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.Rect>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::Rect> __FIReference_1_Windows__CFoundation__CRect_t;
#define __FIReference_1_Windows__CFoundation__CRect ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CRect_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CRect ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Rect>
//#define __FIReference_1_Windows__CFoundation__CRect_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::Rect>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CRect_USE */



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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e"))
IAsyncOperation<ABI::Windows::Storage::StorageFile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::StorageFile*> __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE */


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


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */





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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                
                typedef enum DataPackageOperation : unsigned int DataPackageOperation;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                
                typedef enum ShareUITheme : int ShareUITheme;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */











































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackagePropertySet;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackagePropertySetView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataPackageView;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataProviderDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataProviderRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class DataRequestDeferral;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareProviderOperation;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareTargetInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                class ShareUIOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */













/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.DataPackageOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [v1_enum, flags, contract] */
                enum DataPackageOperation : unsigned int
                {
                    DataPackageOperation_None = 0,
                    DataPackageOperation_Copy = 0x1,
                    DataPackageOperation_Move = 0x2,
                    DataPackageOperation_Link = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(DataPackageOperation)
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.ShareUITheme
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [v1_enum, contract] */
                enum ShareUITheme : int
                {
                    ShareUITheme_Default = 0,
                    ShareUITheme_Light = 1,
                    ShareUITheme_Dark = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Delegate Windows.ApplicationModel.DataTransfer.DataProviderHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("E7ECD720-F2F4-4A2D-920E-170A2F482A27"), contract] */
                MIDL_INTERFACE("E7ECD720-F2F4-4A2D-920E-170A2F482A27")
                IDataProviderHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IDataProviderRequest * request
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataProviderHandler=_uuidof(IDataProviderHandler);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.ApplicationModel.DataTransfer.ShareProviderHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("E7F9D9BA-E1BA-4E4D-BD65-D43845D3212F"), contract] */
                MIDL_INTERFACE("E7F9D9BA-E1BA-4E4D-BD65-D43845D3212F")
                IShareProviderHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IShareProviderOperation * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareProviderHandler=_uuidof(IShareProviderHandler);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IClipboardStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.Clipboard
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IClipboardStatics[] = L"Windows.ApplicationModel.DataTransfer.IClipboardStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("C627E291-34E2-4963-8EED-93CBB0EA3D70"), exclusiveto, contract] */
                MIDL_INTERFACE("C627E291-34E2-4963-8EED-93CBB0EA3D70")
                IClipboardStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView * * content
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetContent(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * content
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Flush(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContentChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * changeHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContentChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IClipboardStatics=_uuidof(IClipboardStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("61EBF5C7-EFEA-4346-9554-981D7E198FFE"), exclusiveto, contract] */
                MIDL_INTERFACE("61EBF5C7-EFEA-4346-9554-981D7E198FFE")
                IDataPackage : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySet * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedOperation(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestedOperation(
                        /* [in] */ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OperationCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OperationCompleted(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Destroyed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Destroyed(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetData(
                        /* [in] */__RPC__in HSTRING formatId,
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDataProvider(
                        /* [in] */__RPC__in HSTRING formatId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IDataProviderHandler  * delayRenderer
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("SetUri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use SetWebLink or SetApplicationLink.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetHtmlFormat(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResourceMap(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetRtf(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetBitmap(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetStorageItemsReadOnly(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetStorageItems(
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * value,
                        /* [in] */boolean readOnly
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackage=_uuidof(IDataPackage);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("041C1FE9-2409-45E1-A538-4C53EEEE04A7"), exclusiveto, contract] */
                MIDL_INTERFACE("041C1FE9-2409-45E1-A538-4C53EEEE04A7")
                IDataPackage2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetApplicationLink(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetWebLink(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackage2=_uuidof(IDataPackage2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("88F31F5D-787B-4D32-965A-A9838105A056"), exclusiveto, contract] */
                MIDL_INTERFACE("88F31F5D-787B-4D32-965A-A9838105A056")
                IDataPackage3 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ShareCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ShareCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackage3=_uuidof(IDataPackage3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMap_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("CD1C93EB-4C4C-443A-A8D3-F5C241E91689"), exclusiveto, contract] */
                MIDL_INTERFACE("CD1C93EB-4C4C-443A-A8D3-F5C241E91689")
                IDataPackagePropertySet : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Thumbnail(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileTypes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ApplicationName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationListingUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ApplicationListingUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySet=_uuidof(IDataPackagePropertySet);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("EB505D4A-9800-46AA-B181-7B6F0F2B919A"), exclusiveto, contract] */
                MIDL_INTERFACE("EB505D4A-9800-46AA-B181-7B6F0F2B919A")
                IDataPackagePropertySet2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentSourceWebLink(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentSourceWebLink(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentSourceApplicationLink(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentSourceApplicationLink(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PackageFamilyName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square30x30Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Square30x30Logo(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogoBackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LogoBackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySet2=_uuidof(IDataPackagePropertySet2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("9E87FD9B-5205-401B-874A-455653BD39E8"), exclusiveto, contract] */
                MIDL_INTERFACE("9E87FD9B-5205-401B-874A-455653BD39E8")
                IDataPackagePropertySet3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnterpriseId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EnterpriseId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySet3=_uuidof(IDataPackagePropertySet3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("B94CEC01-0C1A-4C57-BE55-75D01289735D"), exclusiveto, contract] */
                MIDL_INTERFACE("B94CEC01-0C1A-4C57-BE55-75D01289735D")
                IDataPackagePropertySetView : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileTypes(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationListingUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySetView=_uuidof(IDataPackagePropertySetView);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("6054509B-8EBE-4FEB-9C1E-75E69DE54B84"), exclusiveto, contract] */
                MIDL_INTERFACE("6054509B-8EBE-4FEB-9C1E-75E69DE54B84")
                IDataPackagePropertySetView2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFamilyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentSourceWebLink(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentSourceApplicationLink(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Square30x30Logo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogoBackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySetView2=_uuidof(IDataPackagePropertySetView2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("DB764CE5-D174-495C-84FC-1A51F6AB45D7"), exclusiveto, contract] */
                MIDL_INTERFACE("DB764CE5-D174-495C-84FC-1A51F6AB45D7")
                IDataPackagePropertySetView3 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnterpriseId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackagePropertySetView3=_uuidof(IDataPackagePropertySetView3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("7B840471-5900-4D85-A90B-10CB85FE3552"), exclusiveto, contract] */
                MIDL_INTERFACE("7B840471-5900-4D85-A90B-10CB85FE3552")
                IDataPackageView : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackagePropertySetView * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedOperation(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportOperationCompleted(
                        /* [in] */ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AvailableFormats(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * formatIds
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Contains(
                        /* [in] */__RPC__in HSTRING formatId,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDataAsync(
                        /* [in] */__RPC__in HSTRING formatId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_IInspectable * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetTextAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetCustomTextAsync(
                        /* [in] */__RPC__in HSTRING formatId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetUriAsync may be altered or unavailable for releases after Windows 8.1. Instead, use GetWebLinkAsync or GetApplicationLinkAsync.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetUriAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetHtmlFormatAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetResourceMapAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRtfAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetBitmapAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetStorageItemsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackageView=_uuidof(IDataPackageView);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("40ECBA95-2450-4C1D-B6B4-ED45463DEE9C"), exclusiveto, contract] */
                MIDL_INTERFACE("40ECBA95-2450-4C1D-B6B4-ED45463DEE9C")
                IDataPackageView2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetApplicationLinkAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetWebLinkAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackageView2=_uuidof(IDataPackageView2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("D37771A8-DDAD-4288-8428-D1CAE394128B"), exclusiveto, contract] */
                MIDL_INTERFACE("D37771A8-DDAD-4288-8428-D1CAE394128B")
                IDataPackageView3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestAccessWithEnterpriseIdAsync(
                        /* [in] */__RPC__in HSTRING enterpriseId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UnlockAndAssumeEnterpriseIdentity(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::EnterpriseData::ProtectionPolicyEvaluationResult * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackageView3=_uuidof(IDataPackageView3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView4[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView4";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("DFE96F1F-E042-4433-A09F-26D6FFDA8B85"), exclusiveto, contract] */
                MIDL_INTERFACE("DFE96F1F-E042-4433-A09F-26D6FFDA8B85")
                IDataPackageView4 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetAcceptedFormatId(
                        /* [in] */__RPC__in HSTRING formatId
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataPackageView4=_uuidof(IDataPackageView4);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataProviderDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataProviderDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral[] = L"Windows.ApplicationModel.DataTransfer.IDataProviderDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("C2CF2373-2D26-43D9-B69D-DCB86D03F6DA"), exclusiveto, contract] */
                MIDL_INTERFACE("C2CF2373-2D26-43D9-B69D-DCB86D03F6DA")
                IDataProviderDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataProviderDeferral=_uuidof(IDataProviderDeferral);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataProviderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataProviderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataProviderRequest[] = L"Windows.ApplicationModel.DataTransfer.IDataProviderRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("EBBC7157-D3C8-47DA-ACDE-F82388D5F716"), exclusiveto, contract] */
                MIDL_INTERFACE("EBBC7157-D3C8-47DA-ACDE-F82388D5F716")
                IDataProviderRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormatId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataProviderDeferral * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetData(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataProviderRequest=_uuidof(IDataProviderRequest);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequest[] = L"Windows.ApplicationModel.DataTransfer.IDataRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("4341AE3B-FC12-4E53-8C02-AC714C415A27"), exclusiveto, contract] */
                MIDL_INTERFACE("4341AE3B-FC12-4E53-8C02-AC714C415A27")
                IDataRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Deadline(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FailWithDisplayText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataRequestDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataRequest=_uuidof(IDataRequest);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral[] = L"Windows.ApplicationModel.DataTransfer.IDataRequestDeferral";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("6DC4B89F-0386-4263-87C1-ED7DCE30890E"), exclusiveto, contract] */
                MIDL_INTERFACE("6DC4B89F-0386-4263-87C1-ED7DCE30890E")
                IDataRequestDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataRequestDeferral=_uuidof(IDataRequestDeferral);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("CB8BA807-6AC5-43C9-8AC5-9BA232163182"), exclusiveto, contract] */
                MIDL_INTERFACE("CB8BA807-6AC5-43C9-8AC5-9BA232163182")
                IDataRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataRequest * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataRequestedEventArgs=_uuidof(IDataRequestedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManager[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("A5CAEE9B-8708-49D1-8D36-67D25A8DA00C"), exclusiveto, contract] */
                MIDL_INTERFACE("A5CAEE9B-8708-49D1-8D36-67D25A8DA00C")
                IDataTransferManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DataRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DataRequested(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TargetApplicationChosen(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * eventHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TargetApplicationChosen(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataTransferManager=_uuidof(IDataTransferManager);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManager2[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManager2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("30AE7D71-8BA8-4C02-8E3F-DDB23B388715"), exclusiveto, contract] */
                MIDL_INTERFACE("30AE7D71-8BA8-4C02-8E3F-DDB23B388715")
                IDataTransferManager2 : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ShareProvidersRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ShareProvidersRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataTransferManager2=_uuidof(IDataTransferManager2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("A9DA01AA-E00E-4CFE-AA44-2DD932DCA3D8"), exclusiveto, contract] */
                MIDL_INTERFACE("A9DA01AA-E00E-4CFE-AA44-2DD932DCA3D8")
                IDataTransferManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ShowShareUI(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataTransferManager * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataTransferManagerStatics=_uuidof(IDataTransferManagerStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("C54EC2EC-9F97-4D63-9868-395E271AD8F5"), exclusiveto, contract] */
                MIDL_INTERFACE("C54EC2EC-9F97-4D63-9868-395E271AD8F5")
                IDataTransferManagerStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsSupported(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataTransferManagerStatics2=_uuidof(IDataTransferManagerStatics2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics3[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("05845473-6C82-4F5C-AC23-62E458361FAC"), exclusiveto, contract] */
                MIDL_INTERFACE("05845473-6C82-4F5C-AC23-62E458361FAC")
                IDataTransferManagerStatics3 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowShareUIWithOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IShareUIOptions * options
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDataTransferManagerStatics3=_uuidof(IDataTransferManagerStatics3);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.HtmlFormatHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics[] = L"Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("E22E7749-DD70-446F-AEFC-61CEE59F655E"), exclusiveto, contract] */
                MIDL_INTERFACE("E22E7749-DD70-446F-AEFC-61CEE59F655E")
                IHtmlFormatHelperStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStaticFragment(
                        /* [in] */__RPC__in HSTRING htmlFormat,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * htmlFragment
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateHtmlFormat(
                        /* [in] */__RPC__in HSTRING htmlFragment,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * htmlFormat
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHtmlFormatHelperStatics=_uuidof(IHtmlFormatHelperStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("E7AF329D-051D-4FAB-B1A9-47FD77F70A41"), exclusiveto, contract] */
                MIDL_INTERFACE("E7AF329D-051D-4FAB-B1A9-47FD77F70A41")
                IOperationCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Operation(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::DataPackageOperation * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IOperationCompletedEventArgs=_uuidof(IOperationCompletedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2[] = L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("858FA073-1E19-4105-B2F7-C8478808D562"), exclusiveto, contract] */
                MIDL_INTERFACE("858FA073-1E19-4105-B2F7-C8478808D562")
                IOperationCompletedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceptedFormatId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IOperationCompletedEventArgs2=_uuidof(IOperationCompletedEventArgs2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("4574C442-F913-4F60-9DF7-CC4060AB1916"), exclusiveto, contract] */
                MIDL_INTERFACE("4574C442-F913-4F60-9DF7-CC4060AB1916")
                IShareCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShareTarget(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IShareTargetInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareCompletedEventArgs=_uuidof(IShareCompletedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProvider[] = L"Windows.ApplicationModel.DataTransfer.IShareProvider";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("2FABE026-443E-4CDA-AF25-8D81070EFD80"), exclusiveto, contract] */
                MIDL_INTERFACE("2FABE026-443E-4CDA-AF25-8D81070EFD80")
                IShareProvider : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayIcon(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tag(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Tag(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareProvider=_uuidof(IShareProvider);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProviderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProviderFactory[] = L"Windows.ApplicationModel.DataTransfer.IShareProviderFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("172A174C-E79E-4F6D-B07D-128F469E0296"), exclusiveto, contract] */
                MIDL_INTERFACE("172A174C-E79E-4F6D-B07D-128F469E0296")
                IShareProviderFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * displayIcon,
                        /* [in] */ABI::Windows::UI::Color backgroundColor,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::IShareProviderHandler  * handler,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IShareProvider * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareProviderFactory=_uuidof(IShareProviderFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProviderOperation[] = L"Windows.ApplicationModel.DataTransfer.IShareProviderOperation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("19CEF937-D435-4179-B6AF-14E0492B69F6"), exclusiveto, contract] */
                MIDL_INTERFACE("19CEF937-D435-4179-B6AF-14E0492B69F6")
                IShareProviderOperation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Provider(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IShareProvider * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportCompleted(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareProviderOperation=_uuidof(IShareProviderOperation);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("F888F356-A3F8-4FCE-85E4-8826E63BE799"), exclusiveto, contract] */
                MIDL_INTERFACE("F888F356-A3F8-4FCE-85E4-8826E63BE799")
                IShareProvidersRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Providers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareProvidersRequestedEventArgs=_uuidof(IShareProvidersRequestedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareTargetInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareTargetInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareTargetInfo[] = L"Windows.ApplicationModel.DataTransfer.IShareTargetInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("385BE607-C6E8-4114-B294-28F3BB6F9904"), exclusiveto, contract] */
                MIDL_INTERFACE("385BE607-C6E8-4114-B294-28F3BB6F9904")
                IShareTargetInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppUserModelId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShareProvider(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IShareProvider * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareTargetInfo=_uuidof(IShareTargetInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareUIOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareUIOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareUIOptions[] = L"Windows.ApplicationModel.DataTransfer.IShareUIOptions";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("72FA8A80-342F-4D90-9551-2AE04E37680C"), exclusiveto, contract] */
                MIDL_INTERFACE("72FA8A80-342F-4D90-9551-2AE04E37680C")
                IShareUIOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Theme(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::DataTransfer::ShareUITheme * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Theme(
                        /* [in] */ABI::Windows::ApplicationModel::DataTransfer::ShareUITheme value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectionRect(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SelectionRect(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CRect * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IShareUIOptions=_uuidof(IShareUIOptions);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("C6132ADA-34B1-4849-BD5F-D09FEE3158C5"), exclusiveto, contract] */
                MIDL_INTERFACE("C6132ADA-34B1-4849-BD5F-D09FEE3158C5")
                ISharedStorageAccessManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddFile(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * outToken
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RedeemTokenForFileAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveFile(
                        /* [in] */__RPC__in HSTRING token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISharedStorageAccessManagerStatics=_uuidof(ISharedStorageAccessManagerStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics[] = L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("7ED681A1-A880-40C9-B4ED-0BEE1E15F549"), exclusiveto, contract] */
                MIDL_INTERFACE("7ED681A1-A880-40C9-B4ED-0BEE1E15F549")
                IStandardDataFormatsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Uri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use WebLink or ApplicationLink.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Html(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rtf(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bitmap(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageItems(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStandardDataFormatsStatics=_uuidof(IStandardDataFormatsStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2[] = L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("42A254F4-9D76-42E8-861B-47C25DD0CF71"), exclusiveto, contract] */
                MIDL_INTERFACE("42A254F4-9D76-42E8-861B-47C25DD0CF71")
                IStandardDataFormatsStatics2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WebLink(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationLink(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStandardDataFormatsStatics2=_uuidof(IStandardDataFormatsStatics2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                /* [object, uuid("CA6FB8AC-2987-4EE3-9C54-D8AFBCB86C1D"), exclusiveto, contract] */
                MIDL_INTERFACE("CA6FB8AC-2987-4EE3-9C54-D8AFBCB86C1D")
                ITargetApplicationChosenEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITargetApplicationChosenEventArgs=_uuidof(ITargetApplicationChosenEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* DataTransfer */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.Clipboard
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IClipboardStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_Clipboard_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_Clipboard_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_Clipboard[] = L"Windows.ApplicationModel.DataTransfer.Clipboard";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackage ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataPackage2
 *    Windows.ApplicationModel.DataTransfer.IDataPackage3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackage_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackage[] = L"Windows.ApplicationModel.DataTransfer.DataPackage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet[] = L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView[] = L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView2
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView3
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackageView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackageView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackageView[] = L"Windows.ApplicationModel.DataTransfer.DataPackageView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataProviderDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataProviderDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataProviderDeferral[] = L"Windows.ApplicationModel.DataTransfer.DataProviderDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataProviderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataProviderRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataProviderRequest[] = L"Windows.ApplicationModel.DataTransfer.DataProviderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequest[] = L"Windows.ApplicationModel.DataTransfer.DataRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequestDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequestDeferral[] = L"Windows.ApplicationModel.DataTransfer.DataRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataTransferManager ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataTransferManager2
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataTransferManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataTransferManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataTransferManager[] = L"Windows.ApplicationModel.DataTransfer.DataTransferManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.HtmlFormatHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper[] = L"Windows.ApplicationModel.DataTransfer.HtmlFormatHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.DataTransfer.IShareProviderFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvider_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProvider[] = L"Windows.ApplicationModel.DataTransfer.ShareProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProviderOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProviderOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProviderOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProviderOperation[] = L"Windows.ApplicationModel.DataTransfer.ShareProviderOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareTargetInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareTargetInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTargetInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTargetInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareTargetInfo[] = L"Windows.ApplicationModel.DataTransfer.ShareTargetInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareUIOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareUIOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareUIOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareUIOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareUIOptions[] = L"Windows.ApplicationModel.DataTransfer.ShareUIOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager[] = L"Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_StandardDataFormats_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_StandardDataFormats_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_StandardDataFormats[] = L"Windows.ApplicationModel.DataTransfer.StandardDataFormats";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs[] = L"Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

typedef struct __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CDataTransfer__CShareProvider **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider;

typedef struct __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CDataTransfer__CShareProvider **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl;

interface __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackage **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CDataTransfer__CDataPackageOperation_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs_INTERFACE_DEFINED__

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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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



#if !defined(____FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_IInspectable __FIAsyncOperationCompletedHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_IInspectable;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;

typedef struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_IInspectable *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_IInspectableVtbl;

interface __FIAsyncOperationCompletedHandler_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_IInspectable_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_IInspectable __FIAsyncOperation_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_IInspectable;

typedef struct __FIAsyncOperation_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_IInspectable *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_IInspectable * This, /* [retval][out] */ __RPC__out IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1_IInspectableVtbl;

interface __FIAsyncOperation_1_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_IInspectable_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_IInspectable_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_IInspectable_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_IInspectable_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CFoundation__CUri *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CFoundation__CUri __FIAsyncOperation_1_Windows__CFoundation__CUri;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CFoundation__CUri;

typedef struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CFoundation__CUri **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CFoundation__CUri * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl;

interface __FIAsyncOperation_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CFoundation__CUri_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CFoundation__CUri_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CFoundation__CUri_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CIStorageItem __FIVectorView_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CIStorageItem;

typedef struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CIStorageItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CIStorageItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CStorage__CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


struct __x_ABI_CWindows_CFoundation_CRect;

#if !defined(____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CRect __FIReference_1_Windows__CFoundation__CRect;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CRect;

typedef struct __FIReference_1_Windows__CFoundation__CRectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CRect * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CRect * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CRect *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CRectVtbl;

interface __FIReference_1_Windows__CFoundation__CRect
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CRectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CRect_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CRect_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CRect_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CRect_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CRect_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;






typedef enum __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult;















typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation;


typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareUITheme __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareUITheme;







































































/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.DataPackageOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation
{
    DataPackageOperation_None = 0,
    DataPackageOperation_Copy = 0x1,
    DataPackageOperation_Move = 0x2,
    DataPackageOperation_Link = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.DataTransfer.ShareUITheme
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareUITheme
{
    ShareUITheme_Default = 0,
    ShareUITheme_Light = 1,
    ShareUITheme_Dark = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Delegate Windows.ApplicationModel.DataTransfer.DataProviderHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__
/* [object, uuid("E7ECD720-F2F4-4A2D-920E-170A2F482A27"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * request
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandlerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_Invoke(This,request) \
    ( (This)->lpVtbl->Invoke(This,request) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.ApplicationModel.DataTransfer.ShareProviderHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__
/* [object, uuid("E7F9D9BA-E1BA-4E4D-BD65-D43845D3212F"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandlerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_Invoke(This,operation) \
    ( (This)->lpVtbl->Invoke(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IClipboardStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.Clipboard
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IClipboardStatics[] = L"Windows.ApplicationModel.DataTransfer.IClipboardStatics";
/* [object, uuid("C627E291-34E2-4963-8EED-93CBB0EA3D70"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetContent )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * content
        );
    HRESULT ( STDMETHODCALLTYPE *SetContent )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * content
        );
    HRESULT ( STDMETHODCALLTYPE *Flush )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContentChanged )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * changeHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContentChanged )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_GetContent(This,content) \
    ( (This)->lpVtbl->GetContent(This,content) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_SetContent(This,content) \
    ( (This)->lpVtbl->SetContent(This,content) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_Flush(This) \
    ( (This)->lpVtbl->Flush(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_add_ContentChanged(This,changeHandler,token) \
    ( (This)->lpVtbl->add_ContentChanged(This,changeHandler,token) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_remove_ContentChanged(This,token) \
    ( (This)->lpVtbl->remove_ContentChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIClipboardStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage";
/* [object, uuid("61EBF5C7-EFEA-4346-9554-981D7E198FFE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetView )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedOperation )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestedOperation )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OperationCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__COperationCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OperationCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Destroyed )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Destroyed )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    HRESULT ( STDMETHODCALLTYPE *SetData )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in HSTRING formatId,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDataProvider )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in HSTRING formatId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderHandler  * delayRenderer
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("SetUri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use SetWebLink or SetApplicationLink.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SetUri )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHtmlFormat )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResourceMap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetRtf )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetBitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetStorageItemsReadOnly )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetStorageItems )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CIStorageItem * value,
        /* [in] */boolean readOnly
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_GetView(This,value) \
    ( (This)->lpVtbl->GetView(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_get_RequestedOperation(This,value) \
    ( (This)->lpVtbl->get_RequestedOperation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_put_RequestedOperation(This,value) \
    ( (This)->lpVtbl->put_RequestedOperation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_add_OperationCompleted(This,handler,eventCookie) \
    ( (This)->lpVtbl->add_OperationCompleted(This,handler,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_remove_OperationCompleted(This,eventCookie) \
    ( (This)->lpVtbl->remove_OperationCompleted(This,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_add_Destroyed(This,handler,eventCookie) \
    ( (This)->lpVtbl->add_Destroyed(This,handler,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_remove_Destroyed(This,eventCookie) \
    ( (This)->lpVtbl->remove_Destroyed(This,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetData(This,formatId,value) \
    ( (This)->lpVtbl->SetData(This,formatId,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetDataProvider(This,formatId,delayRenderer) \
    ( (This)->lpVtbl->SetDataProvider(This,formatId,delayRenderer) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetText(This,value) \
    ( (This)->lpVtbl->SetText(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("SetUri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use SetWebLink or SetApplicationLink.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetUri(This,value) \
    ( (This)->lpVtbl->SetUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetHtmlFormat(This,value) \
    ( (This)->lpVtbl->SetHtmlFormat(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_get_ResourceMap(This,value) \
    ( (This)->lpVtbl->get_ResourceMap(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetRtf(This,value) \
    ( (This)->lpVtbl->SetRtf(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetBitmap(This,value) \
    ( (This)->lpVtbl->SetBitmap(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetStorageItemsReadOnly(This,value) \
    ( (This)->lpVtbl->SetStorageItemsReadOnly(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_SetStorageItems(This,value,readOnly) \
    ( (This)->lpVtbl->SetStorageItems(This,value,readOnly) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage2";
/* [object, uuid("041C1FE9-2409-45E1-A538-4C53EEEE04A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetApplicationLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetWebLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_SetApplicationLink(This,value) \
    ( (This)->lpVtbl->SetApplicationLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_SetWebLink(This,value) \
    ( (This)->lpVtbl->SetWebLink(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackage3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackage3";
/* [object, uuid("88F31F5D-787B-4D32-965A-A9838105A056"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ShareCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataPackage_Windows__CApplicationModel__CDataTransfer__CShareCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ShareCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_add_ShareCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_ShareCompleted(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_remove_ShareCompleted(This,token) \
    ( (This)->lpVtbl->remove_ShareCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMap_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet";
/* [object, uuid("CD1C93EB-4C4C-443A-A8D3-F5C241E91689"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileTypes )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ApplicationName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationListingUri )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ApplicationListingUri )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_put_Thumbnail(This,value) \
    ( (This)->lpVtbl->put_Thumbnail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_FileTypes(This,value) \
    ( (This)->lpVtbl->get_FileTypes(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_ApplicationName(This,value) \
    ( (This)->lpVtbl->get_ApplicationName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_put_ApplicationName(This,value) \
    ( (This)->lpVtbl->put_ApplicationName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_get_ApplicationListingUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationListingUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_put_ApplicationListingUri(This,value) \
    ( (This)->lpVtbl->put_ApplicationListingUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2";
/* [object, uuid("EB505D4A-9800-46AA-B181-7B6F0F2B919A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentSourceWebLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentSourceWebLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentSourceApplicationLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentSourceApplicationLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square30x30Logo )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Square30x30Logo )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogoBackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LogoBackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_get_ContentSourceWebLink(This,value) \
    ( (This)->lpVtbl->get_ContentSourceWebLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_put_ContentSourceWebLink(This,value) \
    ( (This)->lpVtbl->put_ContentSourceWebLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_get_ContentSourceApplicationLink(This,value) \
    ( (This)->lpVtbl->get_ContentSourceApplicationLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_put_ContentSourceApplicationLink(This,value) \
    ( (This)->lpVtbl->put_ContentSourceApplicationLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_put_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->put_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_get_Square30x30Logo(This,value) \
    ( (This)->lpVtbl->get_Square30x30Logo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_put_Square30x30Logo(This,value) \
    ( (This)->lpVtbl->put_Square30x30Logo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_get_LogoBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_LogoBackgroundColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_put_LogoBackgroundColor(This,value) \
    ( (This)->lpVtbl->put_LogoBackgroundColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySet3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3";
/* [object, uuid("9E87FD9B-5205-401B-874A-455653BD39E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EnterpriseId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_get_EnterpriseId(This,value) \
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_put_EnterpriseId(This,value) \
    ( (This)->lpVtbl->put_EnterpriseId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySet3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *     Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView";
/* [object, uuid("B94CEC01-0C1A-4C57-BE55-75D01289735D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileTypes )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationListingUri )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetViewVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_FileTypes(This,value) \
    ( (This)->lpVtbl->get_FileTypes(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_ApplicationName(This,value) \
    ( (This)->lpVtbl->get_ApplicationName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_get_ApplicationListingUri(This,value) \
    ( (This)->lpVtbl->get_ApplicationListingUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2";
/* [object, uuid("6054509B-8EBE-4FEB-9C1E-75E69DE54B84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFamilyName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentSourceWebLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentSourceApplicationLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Square30x30Logo )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogoBackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_get_PackageFamilyName(This,value) \
    ( (This)->lpVtbl->get_PackageFamilyName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_get_ContentSourceWebLink(This,value) \
    ( (This)->lpVtbl->get_ContentSourceWebLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_get_ContentSourceApplicationLink(This,value) \
    ( (This)->lpVtbl->get_ContentSourceApplicationLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_get_Square30x30Logo(This,value) \
    ( (This)->lpVtbl->get_Square30x30Logo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_get_LogoBackgroundColor(This,value) \
    ( (This)->lpVtbl->get_LogoBackgroundColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackagePropertySetView3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3";
/* [object, uuid("DB764CE5-D174-495C-84FC-1A51F6AB45D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_get_EnterpriseId(This,value) \
    ( (This)->lpVtbl->get_EnterpriseId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView";
/* [object, uuid("7B840471-5900-4D85-A90B-10CB85FE3552"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackagePropertySetView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedOperation )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportOperationCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AvailableFormats )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * formatIds
        );
    HRESULT ( STDMETHODCALLTYPE *Contains )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [in] */__RPC__in HSTRING formatId,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [in] */__RPC__in HSTRING formatId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_IInspectable * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetTextAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetCustomTextAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [in] */__RPC__in HSTRING formatId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetUriAsync may be altered or unavailable for releases after Windows 8.1. Instead, use GetWebLinkAsync or GetApplicationLinkAsync.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetUriAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetHtmlFormatAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetResourceMapAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CStorage__CStreams__CRandomAccessStreamReference * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetRtfAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetBitmapAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CRandomAccessStreamReference * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStorageItemsAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageViewVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_get_RequestedOperation(This,value) \
    ( (This)->lpVtbl->get_RequestedOperation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_ReportOperationCompleted(This,value) \
    ( (This)->lpVtbl->ReportOperationCompleted(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_get_AvailableFormats(This,formatIds) \
    ( (This)->lpVtbl->get_AvailableFormats(This,formatIds) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_Contains(This,formatId,value) \
    ( (This)->lpVtbl->Contains(This,formatId,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetDataAsync(This,formatId,operation) \
    ( (This)->lpVtbl->GetDataAsync(This,formatId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetTextAsync(This,operation) \
    ( (This)->lpVtbl->GetTextAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetCustomTextAsync(This,formatId,operation) \
    ( (This)->lpVtbl->GetCustomTextAsync(This,formatId,operation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetUriAsync may be altered or unavailable for releases after Windows 8.1. Instead, use GetWebLinkAsync or GetApplicationLinkAsync.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetUriAsync(This,operation) \
    ( (This)->lpVtbl->GetUriAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetHtmlFormatAsync(This,operation) \
    ( (This)->lpVtbl->GetHtmlFormatAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetResourceMapAsync(This,operation) \
    ( (This)->lpVtbl->GetResourceMapAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetRtfAsync(This,operation) \
    ( (This)->lpVtbl->GetRtfAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetBitmapAsync(This,operation) \
    ( (This)->lpVtbl->GetBitmapAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_GetStorageItemsAsync(This,operation) \
    ( (This)->lpVtbl->GetStorageItemsAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView2[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView2";
/* [object, uuid("40ECBA95-2450-4C1D-B6B4-ED45463DEE9C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetApplicationLinkAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetWebLinkAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CFoundation__CUri * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_GetApplicationLinkAsync(This,operation) \
    ( (This)->lpVtbl->GetApplicationLinkAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_GetWebLinkAsync(This,operation) \
    ( (This)->lpVtbl->GetWebLinkAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView3[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView3";
/* [object, uuid("D37771A8-DDAD-4288-8428-D1CAE394128B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestAccessWithEnterpriseIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
        /* [in] */__RPC__in HSTRING enterpriseId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CEnterpriseData__CProtectionPolicyEvaluationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UnlockAndAssumeEnterpriseIdentity )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CEnterpriseData_CProtectionPolicyEvaluationResult * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_RequestAccessAsync(This,operation) \
    ( (This)->lpVtbl->RequestAccessAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_RequestAccessWithEnterpriseIdAsync(This,enterpriseId,operation) \
    ( (This)->lpVtbl->RequestAccessWithEnterpriseIdAsync(This,enterpriseId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_UnlockAndAssumeEnterpriseIdentity(This,result) \
    ( (This)->lpVtbl->UnlockAndAssumeEnterpriseIdentity(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataPackageView4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataPackageView4[] = L"Windows.ApplicationModel.DataTransfer.IDataPackageView4";
/* [object, uuid("DFE96F1F-E042-4433-A09F-26D6FFDA8B85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAcceptedFormatId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4 * This,
        /* [in] */__RPC__in HSTRING formatId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_SetAcceptedFormatId(This,formatId) \
    ( (This)->lpVtbl->SetAcceptedFormatId(This,formatId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataProviderDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataProviderDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataProviderDeferral[] = L"Windows.ApplicationModel.DataTransfer.IDataProviderDeferral";
/* [object, uuid("C2CF2373-2D26-43D9-B69D-DCB86D03F6DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataProviderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataProviderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataProviderRequest[] = L"Windows.ApplicationModel.DataTransfer.IDataProviderRequest";
/* [object, uuid("EBBC7157-D3C8-47DA-ACDE-F82388D5F716"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormatId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderDeferral * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetData )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_get_FormatId(This,value) \
    ( (This)->lpVtbl->get_FormatId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_SetData(This,value) \
    ( (This)->lpVtbl->SetData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataProviderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequest[] = L"Windows.ApplicationModel.DataTransfer.IDataRequest";
/* [object, uuid("4341AE3B-FC12-4E53-8C02-AC714C415A27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Deadline )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *FailWithDisplayText )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_get_Deadline(This,value) \
    ( (This)->lpVtbl->get_Deadline(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_FailWithDisplayText(This,value) \
    ( (This)->lpVtbl->FailWithDisplayText(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequestDeferral[] = L"Windows.ApplicationModel.DataTransfer.IDataRequestDeferral";
/* [object, uuid("6DC4B89F-0386-4263-87C1-ED7DCE30890E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferralVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs";
/* [object, uuid("CB8BA807-6AC5-43C9-8AC5-9BA232163182"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManager[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManager";
/* [object, uuid("A5CAEE9B-8708-49D1-8D36-67D25A8DA00C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DataRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CDataRequestedEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DataRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TargetApplicationChosen )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CTargetApplicationChosenEventArgs * eventHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TargetApplicationChosen )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_add_DataRequested(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_DataRequested(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_remove_DataRequested(This,eventCookie) \
    ( (This)->lpVtbl->remove_DataRequested(This,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_add_TargetApplicationChosen(This,eventHandler,eventCookie) \
    ( (This)->lpVtbl->add_TargetApplicationChosen(This,eventHandler,eventCookie) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_remove_TargetApplicationChosen(This,eventCookie) \
    ( (This)->lpVtbl->remove_TargetApplicationChosen(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManager2[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManager2";
/* [object, uuid("30AE7D71-8BA8-4C02-8E3F-DDB23B388715"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ShareProvidersRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CDataTransfer__CDataTransferManager_Windows__CApplicationModel__CDataTransfer__CShareProvidersRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ShareProvidersRequested )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_add_ShareProvidersRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ShareProvidersRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_remove_ShareProvidersRequested(This,token) \
    ( (This)->lpVtbl->remove_ShareProvidersRequested(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics";
/* [object, uuid("A9DA01AA-E00E-4CFE-AA44-2DD932DCA3D8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowShareUI )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_ShowShareUI(This) \
    ( (This)->lpVtbl->ShowShareUI(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics2[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2";
/* [object, uuid("C54EC2EC-9F97-4D63-9868-395E271AD8F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_IsSupported(This,value) \
    ( (This)->lpVtbl->IsSupported(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IDataTransferManagerStatics3[] = L"Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3";
/* [object, uuid("05845473-6C82-4F5C-AC23-62E458361FAC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowShareUIWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * options
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_ShowShareUIWithOptions(This,options) \
    ( (This)->lpVtbl->ShowShareUIWithOptions(This,options) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataTransferManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.HtmlFormatHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IHtmlFormatHelperStatics[] = L"Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics";
/* [object, uuid("E22E7749-DD70-446F-AEFC-61CEE59F655E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStaticFragment )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
        /* [in] */__RPC__in HSTRING htmlFormat,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * htmlFragment
        );
    HRESULT ( STDMETHODCALLTYPE *CreateHtmlFormat )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics * This,
        /* [in] */__RPC__in HSTRING htmlFragment,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * htmlFormat
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_GetStaticFragment(This,htmlFormat,htmlFragment) \
    ( (This)->lpVtbl->GetStaticFragment(This,htmlFormat,htmlFragment) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_CreateHtmlFormat(This,htmlFragment,htmlFormat) \
    ( (This)->lpVtbl->CreateHtmlFormat(This,htmlFragment,htmlFormat) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIHtmlFormatHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs";
/* [object, uuid("E7AF329D-051D-4FAB-B1A9-47FD77F70A41"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Operation )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDataPackageOperation * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_get_Operation(This,value) \
    ( (This)->lpVtbl->get_Operation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IOperationCompletedEventArgs2[] = L"Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2";
/* [object, uuid("858FA073-1E19-4105-B2F7-C8478808D562"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceptedFormatId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_get_AcceptedFormatId(This,value) \
    ( (This)->lpVtbl->get_AcceptedFormatId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIOperationCompletedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs";
/* [object, uuid("4574C442-F913-4F60-9DF7-CC4060AB1916"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShareTarget )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_get_ShareTarget(This,value) \
    ( (This)->lpVtbl->get_ShareTarget(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProvider[] = L"Windows.ApplicationModel.DataTransfer.IShareProvider";
/* [object, uuid("2FABE026-443E-4CDA-AF25-8D81070EFD80"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayIcon )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_get_DisplayIcon(This,value) \
    ( (This)->lpVtbl->get_DisplayIcon(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_get_Tag(This,value) \
    ( (This)->lpVtbl->get_Tag(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_put_Tag(This,value) \
    ( (This)->lpVtbl->put_Tag(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProviderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProviderFactory[] = L"Windows.ApplicationModel.DataTransfer.IShareProviderFactory";
/* [object, uuid("172A174C-E79E-4F6D-B07D-128F469E0296"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory * This,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * displayIcon,
        /* [in] */__x_ABI_CWindows_CUI_CColor backgroundColor,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_Create(This,title,displayIcon,backgroundColor,handler,result) \
    ( (This)->lpVtbl->Create(This,title,displayIcon,backgroundColor,handler,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProviderOperation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProviderOperation[] = L"Windows.ApplicationModel.DataTransfer.IShareProviderOperation";
/* [object, uuid("19CEF937-D435-4179-B6AF-14E0492B69F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Provider )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompleted )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_get_Provider(This,value) \
    ( (This)->lpVtbl->get_Provider(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_ReportCompleted(This) \
    ( (This)->lpVtbl->ReportCompleted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProviderOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareProvidersRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs";
/* [object, uuid("F888F356-A3F8-4FCE-85E4-8826E63BE799"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Providers )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CDataTransfer__CShareProvider * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_get_Providers(This,value) \
    ( (This)->lpVtbl->get_Providers(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvidersRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareTargetInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareTargetInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareTargetInfo[] = L"Windows.ApplicationModel.DataTransfer.IShareTargetInfo";
/* [object, uuid("385BE607-C6E8-4114-B294-28F3BB6F9904"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShareProvider )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareProvider * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_get_AppUserModelId(This,value) \
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_get_ShareProvider(This,value) \
    ( (This)->lpVtbl->get_ShareProvider(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareTargetInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IShareUIOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.ShareUIOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IShareUIOptions[] = L"Windows.ApplicationModel.DataTransfer.IShareUIOptions";
/* [object, uuid("72FA8A80-342F-4D90-9551-2AE04E37680C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Theme )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareUITheme * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Theme )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareUITheme value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectionRect )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CRect * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SelectionRect )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CRect * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptionsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_get_Theme(This,value) \
    ( (This)->lpVtbl->get_Theme(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_put_Theme(This,value) \
    ( (This)->lpVtbl->put_Theme(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_get_SelectionRect(This,value) \
    ( (This)->lpVtbl->get_SelectionRect(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_put_SelectionRect(This,value) \
    ( (This)->lpVtbl->put_SelectionRect(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIShareUIOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ISharedStorageAccessManagerStatics[] = L"Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics";
/* [object, uuid("C6132ADA-34B1-4849-BD5F-D09FEE3158C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddFile )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * outToken
        );
    HRESULT ( STDMETHODCALLTYPE *RedeemTokenForFileAsync )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFile )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics * This,
        /* [in] */__RPC__in HSTRING token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_AddFile(This,file,outToken) \
    ( (This)->lpVtbl->AddFile(This,file,outToken) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_RedeemTokenForFileAsync(This,token,operation) \
    ( (This)->lpVtbl->RedeemTokenForFileAsync(This,token,operation) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_RemoveFile(This,token) \
    ( (This)->lpVtbl->RemoveFile(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CISharedStorageAccessManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics[] = L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics";
/* [object, uuid("7ED681A1-A880-40C9-B4ED-0BEE1E15F549"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Uri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use WebLink or ApplicationLink.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Html )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rtf )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bitmap )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageItems )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Uri may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use WebLink or ApplicationLink.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_Html(This,value) \
    ( (This)->lpVtbl->get_Html(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_Rtf(This,value) \
    ( (This)->lpVtbl->get_Rtf(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_Bitmap(This,value) \
    ( (This)->lpVtbl->get_Bitmap(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_get_StorageItems(This,value) \
    ( (This)->lpVtbl->get_StorageItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_IStandardDataFormatsStatics2[] = L"Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2";
/* [object, uuid("42A254F4-9D76-42E8-861B-47C25DD0CF71"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WebLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationLink )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_get_WebLink(This,value) \
    ( (This)->lpVtbl->get_WebLink(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_get_ApplicationLink(This,value) \
    ( (This)->lpVtbl->get_ApplicationLink(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIStandardDataFormatsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ITargetApplicationChosenEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs";
/* [object, uuid("CA6FB8AC-2987-4EE3-9C54-D8AFBCB86C1D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )(
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_get_ApplicationName(This,value) \
    ( (This)->lpVtbl->get_ApplicationName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CITargetApplicationChosenEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.Clipboard
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IClipboardStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_Clipboard_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_Clipboard_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_Clipboard[] = L"Windows.ApplicationModel.DataTransfer.Clipboard";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackage ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataPackage2
 *    Windows.ApplicationModel.DataTransfer.IDataPackage3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackage_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackage[] = L"Windows.ApplicationModel.DataTransfer.DataPackage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackagePropertySet
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet ** Default Interface **
 *    Windows.Foundation.Collections.IMap_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet2
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySet3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackagePropertySet[] = L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySet";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView ** Default Interface **
 *    Windows.Foundation.Collections.IMapView_2_HSTRING,IInspectable
 *    Windows.Foundation.Collections.IIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView2
 *    Windows.ApplicationModel.DataTransfer.IDataPackagePropertySetView3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackagePropertySetView[] = L"Windows.ApplicationModel.DataTransfer.DataPackagePropertySetView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataPackageView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView2
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView3
 *    Windows.ApplicationModel.DataTransfer.IDataPackageView4
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackageView_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataPackageView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataPackageView[] = L"Windows.ApplicationModel.DataTransfer.DataPackageView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataProviderDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataProviderDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataProviderDeferral[] = L"Windows.ApplicationModel.DataTransfer.DataProviderDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataProviderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataProviderRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataProviderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataProviderRequest[] = L"Windows.ApplicationModel.DataTransfer.DataProviderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequest[] = L"Windows.ApplicationModel.DataTransfer.DataRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequestDeferral ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequestDeferral[] = L"Windows.ApplicationModel.DataTransfer.DataRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.DataRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.DataTransferManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics3 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IDataTransferManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IDataTransferManager ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IDataTransferManager2
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataTransferManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_DataTransferManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_DataTransferManager[] = L"Windows.ApplicationModel.DataTransfer.DataTransferManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.HtmlFormatHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IHtmlFormatHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_HtmlFormatHelper[] = L"Windows.ApplicationModel.DataTransfer.HtmlFormatHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs ** Default Interface **
 *    Windows.ApplicationModel.DataTransfer.IOperationCompletedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_OperationCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.OperationCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareCompletedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ShareCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.DataTransfer.IShareProviderFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProvider ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvider_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProvider[] = L"Windows.ApplicationModel.DataTransfer.ShareProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProviderOperation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProviderOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProviderOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProviderOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProviderOperation[] = L"Windows.ApplicationModel.DataTransfer.ShareProviderOperation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareProvidersRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareProvidersRequestedEventArgs[] = L"Windows.ApplicationModel.DataTransfer.ShareProvidersRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareTargetInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareTargetInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTargetInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTargetInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareTargetInfo[] = L"Windows.ApplicationModel.DataTransfer.ShareTargetInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.ShareUIOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.IShareUIOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareUIOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareUIOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareUIOptions[] = L"Windows.ApplicationModel.DataTransfer.ShareUIOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.ISharedStorageAccessManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager[] = L"Windows.ApplicationModel.DataTransfer.SharedStorageAccessManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.StandardDataFormats
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.DataTransfer.IStandardDataFormatsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_StandardDataFormats_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_StandardDataFormats_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_StandardDataFormats[] = L"Windows.ApplicationModel.DataTransfer.StandardDataFormats";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.DataTransfer.ITargetApplicationChosenEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_TargetApplicationChosenEventArgs[] = L"Windows.ApplicationModel.DataTransfer.TargetApplicationChosenEventArgs";
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
#endif // __windows2Eapplicationmodel2Edatatransfer_p_h__

#endif // __windows2Eapplicationmodel2Edatatransfer_h__
