/* Header file automatically generated from windows.applicationmodel.store.preview.idl */
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
#ifndef __windows2Eapplicationmodel2Estore2Epreview_h__
#define __windows2Eapplicationmodel2Estore2Epreview_h__
#ifndef __windows2Eapplicationmodel2Estore2Epreview_p_h__
#define __windows2Eapplicationmodel2Estore2Epreview_p_h__


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
#include "Windows.Security.Authentication.Web.Core.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include "Windows.UI.Xaml.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStoreConfigurationStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStoreConfigurationStatics2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStoreConfigurationStatics3;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics3

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStoreConfigurationStatics4;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 ABI::Windows::ApplicationModel::Store::Preview::IStoreConfigurationStatics4

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStoreHardwareManufacturerInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo ABI::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStorePreview;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview ABI::Windows::ApplicationModel::Store::Preview::IStorePreview

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStorePreviewProductInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStorePreviewPurchaseResults;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IStorePreviewSkuInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    interface IWebAuthenticationCoreManagerHelper;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper ABI::Windows::ApplicationModel::Store::Preview::IWebAuthenticationCoreManagerHelper

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    class StorePreviewProductInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3fb16dec-73f1-5cfa-80e6-67fa232d1bef"))
IIterator<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t;
#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a9cb4860-67d1-53c2-a621-3074b0344d49"))
IIterable<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t;
#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    class StorePreviewSkuInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b6f9b421-7f54-5d26-9c37-9f9d7ac893eb"))
IIterator<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t;
#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2c0d85d9-0df7-5de6-962e-bc8f149faf19"))
IIterable<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t;
#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    enum StoreSystemFeature : int;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d0455b2d-d8aa-557e-89a3-63c33e8cee99"))
IIterator<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> : IIterator_impl<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Store.Preview.StoreSystemFeature>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t;
#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE */





#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98a8577a-b128-5400-8d3d-58654eaaf957"))
IIterable<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> : IIterable_impl<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Store.Preview.StoreSystemFeature>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t;
#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fcc6add5-dc28-500f-8e24-b22d1ab56aad"))
IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductInfo*> __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("47418723-a671-5fdc-8647-68f7d8c31416"))
IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewSkuInfo*> __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewSkuInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c8f90757-ebcf-5f2c-b918-6487105b0ca1"))
IVectorView<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> : IVectorView_impl<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StoreSystemFeature>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature> __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    class StorePreviewPurchaseResults;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b1ea16e7-8268-51ff-8129-dcefd493f35f"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9aa2af80-0dcb-5ec1-8435-0b687ed374a5"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*, ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::StorePreviewPurchaseResults*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewPurchaseResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("167564b0-c6f5-5143-b66f-a6f9ca69e7a2"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("49c36a66-3908-51b3-8402-eb8e94c68864"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::IStorePreviewProductInfo*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7e7946ef-f8f0-53fd-9613-7261cb35daf4"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StoreSystemFeature>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE */





#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b1713163-ee1b-5290-8316-f7ebb9d53163"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.Preview.StoreSystemFeature>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::Preview::StoreSystemFeature>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_USE */




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

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("60847289-ea0b-5df6-89df-f2c62cba9693"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("65178d50-e6a2-5d16-b244-65e9725e5a0c"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamReference>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamReference*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebTokenRequestResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequestResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("deb54b22-70f2-55ab-97c0-6cbdc5ddb6f0"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Web.Core.WebTokenRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0a815852-7c44-5674-b3d2-fa2e4c1e46c9"))
IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*, ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Web.Core.WebTokenRequestResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::WebTokenRequestResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        class WebTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Web {
                    namespace Core {
                        interface IWebTokenRequest;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Web */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__








namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class WebAccount;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IWebAccount;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount ABI::Windows::Security::Credentials::IWebAccount

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class UIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IUIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIUIElement ABI::Windows::UI::Xaml::IUIElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    
                    typedef enum StoreLogOptions : unsigned int StoreLogOptions;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    
                    typedef enum StorePreviewProductPurchaseStatus : int StorePreviewProductPurchaseStatus;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    
                    typedef enum StoreSystemFeature : int StoreSystemFeature;
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    class StoreHardwareManufacturerInfo;
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

















/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StoreLogOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [v1_enum, flags, contract] */
                    enum StoreLogOptions : unsigned int
                    {
                        StoreLogOptions_None = 0,
                        StoreLogOptions_TryElevate = 0x1,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(StoreLogOptions)
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StorePreviewProductPurchaseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [v1_enum, contract] */
                    enum StorePreviewProductPurchaseStatus : int
                    {
                        StorePreviewProductPurchaseStatus_Succeeded = 0,
                        StorePreviewProductPurchaseStatus_AlreadyPurchased = 1,
                        StorePreviewProductPurchaseStatus_NotFulfilled = 2,
                        StorePreviewProductPurchaseStatus_NotPurchased = 3,
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StoreSystemFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [v1_enum, contract] */
                    enum StoreSystemFeature : int
                    {
                        StoreSystemFeature_ArchitectureX86 = 0,
                        StoreSystemFeature_ArchitectureX64 = 1,
                        StoreSystemFeature_ArchitectureArm = 2,
                        StoreSystemFeature_DirectX9 = 3,
                        StoreSystemFeature_DirectX10 = 4,
                        StoreSystemFeature_DirectX11 = 5,
                        StoreSystemFeature_D3D12HardwareFL11 = 6,
                        StoreSystemFeature_D3D12HardwareFL12 = 7,
                        StoreSystemFeature_Memory300MB = 8,
                        StoreSystemFeature_Memory750MB = 9,
                        StoreSystemFeature_Memory1GB = 10,
                        StoreSystemFeature_Memory2GB = 11,
                        StoreSystemFeature_CameraFront = 12,
                        StoreSystemFeature_CameraRear = 13,
                        StoreSystemFeature_Gyroscope = 14,
                        StoreSystemFeature_Hover = 15,
                        StoreSystemFeature_Magnetometer = 16,
                        StoreSystemFeature_Nfc = 17,
                        StoreSystemFeature_Resolution720P = 18,
                        StoreSystemFeature_ResolutionWvga = 19,
                        StoreSystemFeature_ResolutionWvgaOr720P = 20,
                        StoreSystemFeature_ResolutionWxga = 21,
                        StoreSystemFeature_ResolutionWvgaOrWxga = 22,
                        StoreSystemFeature_ResolutionWxgaOr720P = 23,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory4GB = 24,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory6GB = 25,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory8GB = 26,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory12GB = 27,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory16GB = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_Memory20GB = 29,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_VideoMemory2GB = 30,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_VideoMemory4GB = 31,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_VideoMemory6GB = 32,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        StoreSystemFeature_VideoMemory1GB = 33,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                    };
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("728F7FC0-8628-42EC-84A2-07780EB44D8B"), exclusiveto, contract] */
                    MIDL_INTERFACE("728F7FC0-8628-42EC-84A2-07780EB44D8B")
                    IStoreConfigurationStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetSystemConfiguration(
                            /* [in] */__RPC__in HSTRING catalogHardwareManufacturerId,
                            /* [in] */__RPC__in HSTRING catalogStoreContentModifierId,
                            /* [in] */ABI::Windows::Foundation::DateTime systemConfigurationExpiration,
                            /* [in] */__RPC__in HSTRING catalogHardwareDescriptor
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetMobileOperatorConfiguration(
                            /* [in] */__RPC__in HSTRING mobileOperatorId,
                            /* [in] */UINT32 appDownloadLimitInMegabytes,
                            /* [in] */UINT32 updateDownloadLimitInMegabytes
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStoreWebAccountId(
                            /* [in] */__RPC__in HSTRING webAccountId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsStoreWebAccountId(
                            /* [in] */__RPC__in HSTRING webAccountId,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareManufacturerInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::Preview::IStoreHardwareManufacturerInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FilterUnsupportedSystemFeaturesAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * systemFeatures,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStoreConfigurationStatics=_uuidof(IStoreConfigurationStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("657C4595-C8B7-4FE9-9F4C-4D71027D347E"), exclusiveto, contract] */
                    MIDL_INTERFACE("657C4595-C8B7-4FE9-9F4C-4D71027D347E")
                    IStoreConfigurationStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PurchasePromptingPolicy(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PurchasePromptingPolicy(
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStoreConfigurationStatics2=_uuidof(IStoreConfigurationStatics2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("6D45F57C-F144-4CB5-9D3F-4EB05E30B6D3"), exclusiveto, contract] */
                    MIDL_INTERFACE("6D45F57C-F144-4CB5-9D3F-4EB05E30B6D3")
                    IStoreConfigurationStatics3 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE HasStoreWebAccount(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HasStoreWebAccountForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStoreLogDataAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Store::Preview::StoreLogOptions options,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStoreWebAccountIdForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in HSTRING webAccountId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsStoreWebAccountIdForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in HSTRING webAccountId,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPurchasePromptingPolicyForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPurchasePromptingPolicyForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStoreConfigurationStatics3=_uuidof(IStoreConfigurationStatics3);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("20FF56D2-4EE3-4CF0-9B12-552C03310F75"), exclusiveto, contract] */
                    MIDL_INTERFACE("20FF56D2-4EE3-4CF0-9B12-552C03310F75")
                    IStoreConfigurationStatics4 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetStoreWebAccountId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStoreWebAccountIdForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEnterpriseStoreWebAccountId(
                            /* [in] */__RPC__in HSTRING webAccountId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEnterpriseStoreWebAccountIdForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [in] */__RPC__in HSTRING webAccountId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEnterpriseStoreWebAccountId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEnterpriseStoreWebAccountIdForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ShouldRestrictToEnterpriseStoreOnly(
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ShouldRestrictToEnterpriseStoreOnlyForUser(
                            /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStoreConfigurationStatics4=_uuidof(IStoreConfigurationStatics4);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("F292DC08-C654-43AC-A21F-34801C9D3388"), exclusiveto, contract] */
                    MIDL_INTERFACE("F292DC08-C654-43AC-A21F-34801C9D3388")
                    IStoreHardwareManufacturerInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareManufacturerId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StoreContentModifierId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModelName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ManufacturerName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStoreHardwareManufacturerInfo=_uuidof(IStoreHardwareManufacturerInfo);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreview[] = L"Windows.ApplicationModel.Store.Preview.IStorePreview";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("8A157241-840E-49A9-BC01-5D5B01FBC8E9"), exclusiveto, contract] */
                    MIDL_INTERFACE("8A157241-840E-49A9-BC01-5D5B01FBC8E9")
                    IStorePreview : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseByProductIdAndSkuIdAsync(
                            /* [in] */__RPC__in HSTRING productId,
                            /* [in] */__RPC__in HSTRING skuId,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * * requestPurchaseBySkuIdOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadAddOnProductInfosAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * * loadAddOnProductInfosOperation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStorePreview=_uuidof(IStorePreview);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("1937DBB3-6C01-4C9D-85CD-5BABAAC2B351"), exclusiveto, contract] */
                    MIDL_INTERFACE("1937DBB3-6C01-4C9D-85CD-5BABAAC2B351")
                    IStorePreviewProductInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductType(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SkuInfoList(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStorePreviewProductInfo=_uuidof(IStorePreviewProductInfo);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("B0DAAED1-D6C5-4E53-A043-FBA0D8E61231"), exclusiveto, contract] */
                    MIDL_INTERFACE("B0DAAED1-D6C5-4E53-A043-FBA0D8E61231")
                    IStorePreviewPurchaseResults : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductPurchaseStatus(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::Preview::StorePreviewProductPurchaseStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStorePreviewPurchaseResults=_uuidof(IStorePreviewPurchaseResults);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("81FD76E2-0B26-48D9-98CE-27461C669D6C"), exclusiveto, contract] */
                    MIDL_INTERFACE("81FD76E2-0B26-48D9-98CE-27461C669D6C")
                    IStorePreviewSkuInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SkuId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SkuType(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CustomDeveloperData(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrencyCode(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedListPrice(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedData(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStorePreviewSkuInfo=_uuidof(IStorePreviewSkuInfo);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                namespace Preview {
                    /* [object, uuid("06A50525-E715-4123-9276-9D6F865BA55F"), exclusiveto, contract] */
                    MIDL_INTERFACE("06A50525-E715-4123-9276-9D6F865BA55F")
                    IWebAuthenticationCoreManagerHelper : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestTokenWithUIElementHostingAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * uiElement,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestTokenWithUIElementHostingAndWebAccountAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Web::Core::IWebTokenRequest * request,
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IWebAccount * webAccount,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * uiElement,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWebAuthenticationCoreManagerHelper=_uuidof(IWebAuthenticationCoreManagerHelper);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Store */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreConfiguration_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreConfiguration[] = L"Windows.ApplicationModel.Store.Preview.StoreConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStorePreview interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreview_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreview[] = L"Windows.ApplicationModel.Store.Preview.StorePreview";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature;
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
            /* [in] */ enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeatureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequestResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature;




























/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StoreLogOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions
{
    StoreLogOptions_None = 0,
    StoreLogOptions_TryElevate = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StorePreviewProductPurchaseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus
{
    StorePreviewProductPurchaseStatus_Succeeded = 0,
    StorePreviewProductPurchaseStatus_AlreadyPurchased = 1,
    StorePreviewProductPurchaseStatus_NotFulfilled = 2,
    StorePreviewProductPurchaseStatus_NotPurchased = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.Preview.StoreSystemFeature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreSystemFeature
{
    StoreSystemFeature_ArchitectureX86 = 0,
    StoreSystemFeature_ArchitectureX64 = 1,
    StoreSystemFeature_ArchitectureArm = 2,
    StoreSystemFeature_DirectX9 = 3,
    StoreSystemFeature_DirectX10 = 4,
    StoreSystemFeature_DirectX11 = 5,
    StoreSystemFeature_D3D12HardwareFL11 = 6,
    StoreSystemFeature_D3D12HardwareFL12 = 7,
    StoreSystemFeature_Memory300MB = 8,
    StoreSystemFeature_Memory750MB = 9,
    StoreSystemFeature_Memory1GB = 10,
    StoreSystemFeature_Memory2GB = 11,
    StoreSystemFeature_CameraFront = 12,
    StoreSystemFeature_CameraRear = 13,
    StoreSystemFeature_Gyroscope = 14,
    StoreSystemFeature_Hover = 15,
    StoreSystemFeature_Magnetometer = 16,
    StoreSystemFeature_Nfc = 17,
    StoreSystemFeature_Resolution720P = 18,
    StoreSystemFeature_ResolutionWvga = 19,
    StoreSystemFeature_ResolutionWvgaOr720P = 20,
    StoreSystemFeature_ResolutionWxga = 21,
    StoreSystemFeature_ResolutionWvgaOrWxga = 22,
    StoreSystemFeature_ResolutionWxgaOr720P = 23,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory4GB = 24,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory6GB = 25,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory8GB = 26,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory12GB = 27,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory16GB = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_Memory20GB = 29,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_VideoMemory2GB = 30,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_VideoMemory4GB = 31,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_VideoMemory6GB = 32,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    StoreSystemFeature_VideoMemory1GB = 33,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics";
/* [object, uuid("728F7FC0-8628-42EC-84A2-07780EB44D8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSystemConfiguration )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [in] */__RPC__in HSTRING catalogHardwareManufacturerId,
        /* [in] */__RPC__in HSTRING catalogStoreContentModifierId,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime systemConfigurationExpiration,
        /* [in] */__RPC__in HSTRING catalogHardwareDescriptor
        );
    HRESULT ( STDMETHODCALLTYPE *SetMobileOperatorConfiguration )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [in] */__RPC__in HSTRING mobileOperatorId,
        /* [in] */UINT32 appDownloadLimitInMegabytes,
        /* [in] */UINT32 updateDownloadLimitInMegabytes
        );
    HRESULT ( STDMETHODCALLTYPE *SetStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [in] */__RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareManufacturerInfo )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FilterUnsupportedSystemFeaturesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * systemFeatures,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStoreSystemFeature * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_SetSystemConfiguration(This,catalogHardwareManufacturerId,catalogStoreContentModifierId,systemConfigurationExpiration,catalogHardwareDescriptor) \
    ( (This)->lpVtbl->SetSystemConfiguration(This,catalogHardwareManufacturerId,catalogStoreContentModifierId,systemConfigurationExpiration,catalogHardwareDescriptor) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_SetMobileOperatorConfiguration(This,mobileOperatorId,appDownloadLimitInMegabytes,updateDownloadLimitInMegabytes) \
    ( (This)->lpVtbl->SetMobileOperatorConfiguration(This,mobileOperatorId,appDownloadLimitInMegabytes,updateDownloadLimitInMegabytes) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_SetStoreWebAccountId(This,webAccountId) \
    ( (This)->lpVtbl->SetStoreWebAccountId(This,webAccountId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_IsStoreWebAccountId(This,webAccountId,value) \
    ( (This)->lpVtbl->IsStoreWebAccountId(This,webAccountId,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_get_HardwareManufacturerInfo(This,value) \
    ( (This)->lpVtbl->get_HardwareManufacturerInfo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_FilterUnsupportedSystemFeaturesAsync(This,systemFeatures,operation) \
    ( (This)->lpVtbl->FilterUnsupportedSystemFeaturesAsync(This,systemFeatures,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics2[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2";
/* [object, uuid("657C4595-C8B7-4FE9-9F4C-4D71027D347E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PurchasePromptingPolicy )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PurchasePromptingPolicy )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2 * This,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_get_PurchasePromptingPolicy(This,value) \
    ( (This)->lpVtbl->get_PurchasePromptingPolicy(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_put_PurchasePromptingPolicy(This,value) \
    ( (This)->lpVtbl->put_PurchasePromptingPolicy(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics3[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3";
/* [object, uuid("6D45F57C-F144-4CB5-9D3F-4EB05E30B6D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasStoreWebAccount )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasStoreWebAccountForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreLogDataAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStoreLogOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamReference * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPurchasePromptingPolicyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPurchasePromptingPolicyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_HasStoreWebAccount(This,value) \
    ( (This)->lpVtbl->HasStoreWebAccount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_HasStoreWebAccountForUser(This,user,value) \
    ( (This)->lpVtbl->HasStoreWebAccountForUser(This,user,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_GetStoreLogDataAsync(This,options,operation) \
    ( (This)->lpVtbl->GetStoreLogDataAsync(This,options,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_SetStoreWebAccountIdForUser(This,user,webAccountId) \
    ( (This)->lpVtbl->SetStoreWebAccountIdForUser(This,user,webAccountId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_IsStoreWebAccountIdForUser(This,user,webAccountId,value) \
    ( (This)->lpVtbl->IsStoreWebAccountIdForUser(This,user,webAccountId,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_GetPurchasePromptingPolicyForUser(This,user,value) \
    ( (This)->lpVtbl->GetPurchasePromptingPolicyForUser(This,user,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_SetPurchasePromptingPolicyForUser(This,user,value) \
    ( (This)->lpVtbl->SetPurchasePromptingPolicyForUser(This,user,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreConfigurationStatics4[] = L"Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4";
/* [object, uuid("20FF56D2-4EE3-4CF0-9B12-552C03310F75"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetEnterpriseStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [in] */__RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *SetEnterpriseStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [in] */__RPC__in HSTRING webAccountId
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnterpriseStoreWebAccountId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnterpriseStoreWebAccountIdForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShouldRestrictToEnterpriseStoreOnly )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShouldRestrictToEnterpriseStoreOnlyForUser )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetStoreWebAccountId(This,result) \
    ( (This)->lpVtbl->GetStoreWebAccountId(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetStoreWebAccountIdForUser(This,user,result) \
    ( (This)->lpVtbl->GetStoreWebAccountIdForUser(This,user,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_SetEnterpriseStoreWebAccountId(This,webAccountId) \
    ( (This)->lpVtbl->SetEnterpriseStoreWebAccountId(This,webAccountId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_SetEnterpriseStoreWebAccountIdForUser(This,user,webAccountId) \
    ( (This)->lpVtbl->SetEnterpriseStoreWebAccountIdForUser(This,user,webAccountId) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetEnterpriseStoreWebAccountId(This,result) \
    ( (This)->lpVtbl->GetEnterpriseStoreWebAccountId(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_GetEnterpriseStoreWebAccountIdForUser(This,user,result) \
    ( (This)->lpVtbl->GetEnterpriseStoreWebAccountIdForUser(This,user,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_ShouldRestrictToEnterpriseStoreOnly(This,result) \
    ( (This)->lpVtbl->ShouldRestrictToEnterpriseStoreOnly(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_ShouldRestrictToEnterpriseStoreOnlyForUser(This,user,result) \
    ( (This)->lpVtbl->ShouldRestrictToEnterpriseStoreOnlyForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreConfigurationStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo";
/* [object, uuid("F292DC08-C654-43AC-A21F-34801C9D3388"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareManufacturerId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StoreContentModifierId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_get_HardwareManufacturerId(This,value) \
    ( (This)->lpVtbl->get_HardwareManufacturerId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_get_StoreContentModifierId(This,value) \
    ( (This)->lpVtbl->get_StoreContentModifierId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_get_ModelName(This,value) \
    ( (This)->lpVtbl->get_ModelName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_get_ManufacturerName(This,value) \
    ( (This)->lpVtbl->get_ManufacturerName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStoreHardwareManufacturerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreview[] = L"Windows.ApplicationModel.Store.Preview.IStorePreview";
/* [object, uuid("8A157241-840E-49A9-BC01-5D5B01FBC8E9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseByProductIdAndSkuIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING skuId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewPurchaseResults * * requestPurchaseBySkuIdOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadAddOnProductInfosAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewProductInfo * * loadAddOnProductInfosOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_RequestProductPurchaseByProductIdAndSkuIdAsync(This,productId,skuId,requestPurchaseBySkuIdOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseByProductIdAndSkuIdAsync(This,productId,skuId,requestPurchaseBySkuIdOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_LoadAddOnProductInfosAsync(This,loadAddOnProductInfosOperation) \
    ( (This)->lpVtbl->LoadAddOnProductInfosAsync(This,loadAddOnProductInfosOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo";
/* [object, uuid("1937DBB3-6C01-4C9D-85CD-5BABAAC2B351"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SkuInfoList )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CStore__CPreview__CStorePreviewSkuInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_get_ProductType(This,value) \
    ( (This)->lpVtbl->get_ProductType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_get_SkuInfoList(This,value) \
    ( (This)->lpVtbl->get_SkuInfoList(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewProductInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults";
/* [object, uuid("B0DAAED1-D6C5-4E53-A043-FBA0D8E61231"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductPurchaseStatus )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CStorePreviewProductPurchaseStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_get_ProductPurchaseStatus(This,value) \
    ( (This)->lpVtbl->get_ProductPurchaseStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewPurchaseResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IStorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo";
/* [object, uuid("81FD76E2-0B26-48D9-98CE-27461C669D6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SkuId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SkuType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CustomDeveloperData )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedListPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedData )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_SkuId(This,value) \
    ( (This)->lpVtbl->get_SkuId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_SkuType(This,value) \
    ( (This)->lpVtbl->get_SkuType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_CustomDeveloperData(This,value) \
    ( (This)->lpVtbl->get_CustomDeveloperData(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_CurrencyCode(This,value) \
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_FormattedListPrice(This,value) \
    ( (This)->lpVtbl->get_FormattedListPrice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_get_ExtendedData(This,value) \
    ( (This)->lpVtbl->get_ExtendedData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIStorePreviewSkuInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_Preview_IWebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper";
/* [object, uuid("06A50525-E715-4123-9276-9D6F865BA55F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestTokenWithUIElementHostingAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * uiElement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestTokenWithUIElementHostingAndWebAccountAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CWeb_CCore_CIWebTokenRequest * request,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIWebAccount * webAccount,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * uiElement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CWeb__CCore__CWebTokenRequestResult * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_RequestTokenWithUIElementHostingAsync(This,request,uiElement,asyncInfo) \
    ( (This)->lpVtbl->RequestTokenWithUIElementHostingAsync(This,request,uiElement,asyncInfo) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_RequestTokenWithUIElementHostingAndWebAccountAsync(This,request,webAccount,uiElement,asyncInfo) \
    ( (This)->lpVtbl->RequestTokenWithUIElementHostingAndWebAccountAsync(This,request,webAccount,uiElement,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CPreview_CIWebAuthenticationCoreManagerHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StoreConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics2 interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStoreConfigurationStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreConfiguration_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreConfiguration[] = L"Windows.ApplicationModel.Store.Preview.StoreConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStoreHardwareManufacturerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StoreHardwareManufacturerInfo[] = L"Windows.ApplicationModel.Store.Preview.StoreHardwareManufacturerInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IStorePreview interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreview_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreview[] = L"Windows.ApplicationModel.Store.Preview.StorePreview";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewProductInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewProductInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewProductInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewPurchaseResults ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewPurchaseResults[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewPurchaseResults";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.Preview.IStorePreviewSkuInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_StorePreviewSkuInfo[] = L"Windows.ApplicationModel.Store.Preview.StorePreviewSkuInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.Preview.IWebAuthenticationCoreManagerHelper interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_Preview_WebAuthenticationCoreManagerHelper[] = L"Windows.ApplicationModel.Store.Preview.WebAuthenticationCoreManagerHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Estore2Epreview_p_h__

#endif // __windows2Eapplicationmodel2Estore2Epreview_h__
