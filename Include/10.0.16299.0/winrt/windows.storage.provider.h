/* Header file automatically generated from windows.storage.provider.idl */
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
#ifndef __windows2Estorage2Eprovider_h__
#define __windows2Estorage2Eprovider_h__
#ifndef __windows2Estorage2Eprovider_p_h__
#define __windows2Estorage2Eprovider_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface ICachedFileUpdaterStatics;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics ABI::Windows::Storage::Provider::ICachedFileUpdaterStatics

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface ICachedFileUpdaterUI;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI ABI::Windows::Storage::Provider::ICachedFileUpdaterUI

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface ICachedFileUpdaterUI2;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 ABI::Windows::Storage::Provider::ICachedFileUpdaterUI2

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IFileUpdateRequest;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest ABI::Windows::Storage::Provider::IFileUpdateRequest

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IFileUpdateRequest2;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 ABI::Windows::Storage::Provider::IFileUpdateRequest2

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IFileUpdateRequestDeferral;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral ABI::Windows::Storage::Provider::IFileUpdateRequestDeferral

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IFileUpdateRequestedEventArgs;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs ABI::Windows::Storage::Provider::IFileUpdateRequestedEventArgs

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderItemPropertiesStatics;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics ABI::Windows::Storage::Provider::IStorageProviderItemPropertiesStatics

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderItemProperty;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty ABI::Windows::Storage::Provider::IStorageProviderItemProperty

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderItemPropertyDefinition;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderItemPropertySource;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource ABI::Windows::Storage::Provider::IStorageProviderItemPropertySource

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderPropertyCapabilities;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities ABI::Windows::Storage::Provider::IStorageProviderPropertyCapabilities

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootInfo;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                interface IStorageProviderSyncRootManagerStatics;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics ABI::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderItemProperty;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE
#define DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c6dddde-1aa3-54f5-b139-e4a237dc1c5f"))
IIterator<ABI::Windows::Storage::Provider::StorageProviderItemProperty*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemProperty*, ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Provider.StorageProviderItemProperty>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Provider::StorageProviderItemProperty*> __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t;
#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE
#define DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4584cb69-ee26-59e0-b05d-c9a7851a7317"))
IIterable<ABI::Windows::Storage::Provider::StorageProviderItemProperty*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemProperty*, ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Provider.StorageProviderItemProperty>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Provider::StorageProviderItemProperty*> __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t;
#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderItemProperty*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderItemPropertyDefinition;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#define DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("55e5719d-2bda-521f-8c60-6921d90b0bb1"))
IIterator<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*, ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Provider.StorageProviderItemPropertyDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t;
#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#define DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("41e78b90-1a7f-5dab-a123-7d5f5011dfeb"))
IIterable<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*, ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Provider.StorageProviderItemPropertyDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t;
#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class StorageProviderSyncRootInfo;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#define DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f73f72c9-6bf9-5f24-95af-7264e5516423"))
IIterator<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*, ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Provider.StorageProviderSyncRootInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t;
#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
//#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#define DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("62ba69a0-f65c-502c-9782-b4bc25194d11"))
IIterable<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*, ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Provider.StorageProviderSyncRootInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t;
#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
//#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#define DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("327544ca-45dc-5c83-b054-0a91e5fa0a29"))
IVectorView<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*, ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Provider.StorageProviderItemPropertyDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t;
#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
//#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#define DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("211521e5-217c-5ff3-bf9e-8dc4d675177f"))
IVectorView<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*, ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Provider.StorageProviderSyncRootInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Provider::StorageProviderSyncRootInfo*> __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t;
#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
//#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#define DEF___FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f839fcff-87df-53a7-94d4-b507101e7e63"))
IVector<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*, ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Provider.StorageProviderItemPropertyDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Storage::Provider::StorageProviderItemPropertyDefinition*> __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t;
#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
//#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_USE */


#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                enum FileUpdateStatus : int;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bb185a07-0285-5f37-9c7d-2fc6a3e0e6e5"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Storage::Provider::FileUpdateStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Storage::Provider::FileUpdateStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Provider.FileUpdateStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Storage::Provider::FileUpdateStatus> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Provider::FileUpdateStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Provider::FileUpdateStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8f0f439e-87d0-531f-85b1-54f4528f29c3"))
IAsyncOperation<enum ABI::Windows::Storage::Provider::FileUpdateStatus> : IAsyncOperation_impl<enum ABI::Windows::Storage::Provider::FileUpdateStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Provider.FileUpdateStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Storage::Provider::FileUpdateStatus> __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_t;
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Provider::FileUpdateStatus>
//#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Provider::FileUpdateStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class CachedFileUpdaterUI;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("45fdd443-c0b9-57b0-a84f-7d876edc3149"))
ITypedEventHandler<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*, ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Provider.CachedFileUpdaterUI, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*,IInspectable*> __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class FileUpdateRequestedEventArgs;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ed56ab72-ebd3-52c8-b0ac-987d30090351"))
ITypedEventHandler<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*,ABI::Windows::Storage::Provider::FileUpdateRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*, ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::Provider::FileUpdateRequestedEventArgs*, ABI::Windows::Storage::Provider::IFileUpdateRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Provider.CachedFileUpdaterUI, Windows.Storage.Provider.FileUpdateRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Provider::CachedFileUpdaterUI*,ABI::Windows::Storage::Provider::FileUpdateRequestedEventArgs*> __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*,ABI::Windows::Storage::Provider::IFileUpdateRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Provider::ICachedFileUpdaterUI*,ABI::Windows::Storage::Provider::IFileUpdateRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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






namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum CachedFileOptions : unsigned int CachedFileOptions;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum CachedFileTarget : int CachedFileTarget;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum FileUpdateStatus : int FileUpdateStatus;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum ReadActivationMode : int ReadActivationMode;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHardlinkPolicy : unsigned int StorageProviderHardlinkPolicy;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHydrationPolicy : int StorageProviderHydrationPolicy;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderHydrationPolicyModifier : unsigned int StorageProviderHydrationPolicyModifier;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderInSyncPolicy : unsigned int StorageProviderInSyncPolicy;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderPopulationPolicy : int StorageProviderPopulationPolicy;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum StorageProviderProtectionMode : int StorageProviderProtectionMode;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum UIStatus : int UIStatus;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                
                typedef enum WriteActivationMode : int WriteActivationMode;
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

















namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class FileUpdateRequest;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                class FileUpdateRequestDeferral;
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

















/*
 *
 * Struct Windows.Storage.Provider.CachedFileOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, flags, contract] */
                enum CachedFileOptions : unsigned int
                {
                    CachedFileOptions_None = 0,
                    CachedFileOptions_RequireUpdateOnAccess = 0x1,
                    CachedFileOptions_UseCachedFileWhenOffline = 0x2,
                    CachedFileOptions_DenyAccessWhenOffline = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(CachedFileOptions)
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.CachedFileTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum CachedFileTarget : int
                {
                    CachedFileTarget_Local = 0,
                    CachedFileTarget_Remote = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.FileUpdateStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum FileUpdateStatus : int
                {
                    FileUpdateStatus_Incomplete = 0,
                    FileUpdateStatus_Complete = 1,
                    FileUpdateStatus_UserInputNeeded = 2,
                    FileUpdateStatus_CurrentlyUnavailable = 3,
                    FileUpdateStatus_Failed = 4,
                    FileUpdateStatus_CompleteAndRenamed = 5,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.ReadActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum ReadActivationMode : int
                {
                    ReadActivationMode_NotNeeded = 0,
                    ReadActivationMode_BeforeAccess = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHardlinkPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, flags, contract] */
                enum StorageProviderHardlinkPolicy : unsigned int
                {
                    StorageProviderHardlinkPolicy_None = 0,
                    StorageProviderHardlinkPolicy_Allowed = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(StorageProviderHardlinkPolicy)
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHydrationPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum StorageProviderHydrationPolicy : int
                {
                    StorageProviderHydrationPolicy_Partial = 0,
                    StorageProviderHydrationPolicy_Progressive = 1,
                    StorageProviderHydrationPolicy_Full = 2,
                    StorageProviderHydrationPolicy_AlwaysFull = 3,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHydrationPolicyModifier
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, flags, contract] */
                enum StorageProviderHydrationPolicyModifier : unsigned int
                {
                    StorageProviderHydrationPolicyModifier_None = 0,
                    StorageProviderHydrationPolicyModifier_ValidationRequired = 0x1,
                    StorageProviderHydrationPolicyModifier_StreamingAllowed = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(StorageProviderHydrationPolicyModifier)
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderInSyncPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, flags, contract] */
                enum StorageProviderInSyncPolicy : unsigned int
                {
                    StorageProviderInSyncPolicy_Default = 0,
                    StorageProviderInSyncPolicy_FileCreationTime = 0x1,
                    StorageProviderInSyncPolicy_FileReadOnlyAttribute = 0x2,
                    StorageProviderInSyncPolicy_FileHiddenAttribute = 0x4,
                    StorageProviderInSyncPolicy_FileSystemAttribute = 0x8,
                    StorageProviderInSyncPolicy_DirectoryCreationTime = 0x10,
                    StorageProviderInSyncPolicy_DirectoryReadOnlyAttribute = 0x20,
                    StorageProviderInSyncPolicy_DirectoryHiddenAttribute = 0x40,
                    StorageProviderInSyncPolicy_DirectorySystemAttribute = 0x80,
                    StorageProviderInSyncPolicy_FileLastWriteTime = 0x100,
                    StorageProviderInSyncPolicy_DirectoryLastWriteTime = 0x200,
                    StorageProviderInSyncPolicy_PreserveInsyncForSyncEngine = 0x80000000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(StorageProviderInSyncPolicy)
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderPopulationPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum StorageProviderPopulationPolicy : int
                {
                    StorageProviderPopulationPolicy_Full = 1,
                    StorageProviderPopulationPolicy_AlwaysFull = 2,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderProtectionMode
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum StorageProviderProtectionMode : int
                {
                    StorageProviderProtectionMode_Unknown = 0,
                    StorageProviderProtectionMode_Personal = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.UIStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum UIStatus : int
                {
                    UIStatus_Unavailable = 0,
                    UIStatus_Hidden = 1,
                    UIStatus_Visible = 2,
                    UIStatus_Complete = 3,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.WriteActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [v1_enum, contract] */
                enum WriteActivationMode : int
                {
                    WriteActivationMode_ReadOnly = 0,
                    WriteActivationMode_NotNeeded = 1,
                    WriteActivationMode_AfterWrite = 2,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdater
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterStatics[] = L"Windows.Storage.Provider.ICachedFileUpdaterStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("9FC90920-7BCF-4888-A81E-102D7034D7CE"), exclusiveto, contract] */
                MIDL_INTERFACE("9FC90920-7BCF-4888-A81E-102D7034D7CE")
                ICachedFileUpdaterStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetUpdateInformation(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [in] */__RPC__in HSTRING contentId,
                        /* [in] */ABI::Windows::Storage::Provider::ReadActivationMode readMode,
                        /* [in] */ABI::Windows::Storage::Provider::WriteActivationMode writeMode,
                        /* [in] */ABI::Windows::Storage::Provider::CachedFileOptions options
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICachedFileUpdaterStatics=_uuidof(ICachedFileUpdaterStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdaterUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("9E6F41E6-BAF2-4A97-B600-9333F5DF80FD"), exclusiveto, contract] */
                MIDL_INTERFACE("9E6F41E6-BAF2-4A97-B600-9333F5DF80FD")
                ICachedFileUpdaterUI : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdateTarget(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::CachedFileTarget * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FileUpdateRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FileUpdateRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UIRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UIRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UIStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::UIStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICachedFileUpdaterUI=_uuidof(ICachedFileUpdaterUI);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterUI2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdaterUI
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Provider.ICachedFileUpdaterUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI2[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI2";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("8856A21C-8699-4340-9F49-F7CAD7FE8991"), exclusiveto, contract] */
                MIDL_INTERFACE("8856A21C-8699-4340-9F49-F7CAD7FE8991")
                ICachedFileUpdaterUI2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdateRequest(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IFileUpdateRequest * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IFileUpdateRequestDeferral * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICachedFileUpdaterUI2=_uuidof(ICachedFileUpdaterUI2);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest[] = L"Windows.Storage.Provider.IFileUpdateRequest";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("40C82536-C1FE-4D93-A792-1E736BC70837"), exclusiveto, contract] */
                MIDL_INTERFACE("40C82536-C1FE-4D93-A792-1E736BC70837")
                IFileUpdateRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_File(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::FileUpdateStatus * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Status(
                        /* [in] */ABI::Windows::Storage::Provider::FileUpdateStatus value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IFileUpdateRequestDeferral * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateLocalFile(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUpdateRequest=_uuidof(IFileUpdateRequest);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Provider.IFileUpdateRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest2[] = L"Windows.Storage.Provider.IFileUpdateRequest2";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("82484648-BDBE-447B-A2EE-7AFE6A032A94"), exclusiveto, contract] */
                MIDL_INTERFACE("82484648-BDBE-447B-A2EE-7AFE6A032A94")
                IFileUpdateRequest2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserInputNeededMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UserInputNeededMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUpdateRequest2=_uuidof(IFileUpdateRequest2);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestDeferral[] = L"Windows.Storage.Provider.IFileUpdateRequestDeferral";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("FFCEDB2B-8ADE-44A5-BB00-164C4E72F13A"), exclusiveto, contract] */
                MIDL_INTERFACE("FFCEDB2B-8ADE-44A5-BB00-164C4E72F13A")
                IFileUpdateRequestDeferral : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUpdateRequestDeferral=_uuidof(IFileUpdateRequestDeferral);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("7B0A9342-3905-438D-AAEF-78AE265F8DD2"), exclusiveto, contract] */
                MIDL_INTERFACE("7B0A9342-3905-438D-AAEF-78AE265F8DD2")
                IFileUpdateRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IFileUpdateRequest * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFileUpdateRequestedEventArgs=_uuidof(IFileUpdateRequestedEventArgs);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertiesStatics
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemProperties
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics[] = L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("2D2C1C97-2704-4729-8FA9-7E6B8E158C2F"), exclusiveto, contract] */
                MIDL_INTERFACE("2D2C1C97-2704-4729-8FA9-7E6B8E158C2F")
                IStorageProviderItemPropertiesStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * item,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * itemProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderItemPropertiesStatics=_uuidof(IStorageProviderItemPropertiesStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemProperty
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemProperty
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemProperty[] = L"Windows.Storage.Provider.IStorageProviderItemProperty";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("476CB558-730B-4188-B7B5-63B716ED476D"), exclusiveto, contract] */
                MIDL_INTERFACE("476CB558-730B-4188-B7B5-63B716ED476D")
                IStorageProviderItemProperty : IInspectable
                {
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IconResource(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IconResource(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderItemProperty=_uuidof(IStorageProviderItemProperty);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertyDefinition
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemPropertyDefinition
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("C5B383BB-FF1F-4298-831E-FF1C08089690"), exclusiveto, contract] */
                MIDL_INTERFACE("C5B383BB-FF1F-4298-831E-FF1C08089690")
                IStorageProviderItemPropertyDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayNameResource(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayNameResource(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderItemPropertyDefinition=_uuidof(IStorageProviderItemPropertyDefinition);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertySource
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertySource[] = L"Windows.Storage.Provider.IStorageProviderItemPropertySource";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("8F6F9C3E-F632-4A9B-8D99-D2D7A11DF56A"), contract] */
                MIDL_INTERFACE("8F6F9C3E-F632-4A9B-8D99-D2D7A11DF56A")
                IStorageProviderItemPropertySource : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetItemProperties(
                        /* [in] */__RPC__in HSTRING itemPath,
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * * itemProperties
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderItemPropertySource=_uuidof(IStorageProviderItemPropertySource);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderPropertyCapabilities
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderPropertyCapabilities[] = L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("658D2F0E-63B7-4567-ACF9-51ABE301DDA5"), contract] */
                MIDL_INTERFACE("658D2F0E-63B7-4567-ACF9-51ABE301DDA5")
                IStorageProviderPropertyCapabilities : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsPropertySupported(
                        /* [in] */__RPC__in HSTRING propertyCanonicalName,
                        /* [retval, out] */__RPC__out boolean * isSupported
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderPropertyCapabilities=_uuidof(IStorageProviderPropertyCapabilities);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderSyncRootInfo
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderSyncRootInfo
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.IStorageProviderSyncRootInfo";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("7C1305C4-99F9-41AC-8904-AB055D654926"), exclusiveto, contract] */
                MIDL_INTERFACE("7C1305C4-99F9-41AC-8904-AB055D654926")
                IStorageProviderSyncRootInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Context(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Context(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Path(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * folder
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Path(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * folder
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayNameResource(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayNameResource(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IconResource(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IconResource(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HydrationPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderHydrationPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HydrationPolicy(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderHydrationPolicy value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HydrationPolicyModifier(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderHydrationPolicyModifier * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HydrationPolicyModifier(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderHydrationPolicyModifier value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PopulationPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderPopulationPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PopulationPolicy(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderPopulationPolicy value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InSyncPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderInSyncPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InSyncPolicy(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderInSyncPolicy value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardlinkPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderHardlinkPolicy * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HardlinkPolicy(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderHardlinkPolicy value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowSiblingsAsGroup(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowSiblingsAsGroup(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Version(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Version(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionMode(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Provider::StorageProviderProtectionMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProtectionMode(
                        /* [in] */ABI::Windows::Storage::Provider::StorageProviderProtectionMode value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowPinning(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowPinning(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageProviderItemPropertyDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecycleBinUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RecycleBinUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderSyncRootInfo=_uuidof(IStorageProviderSyncRootInfo);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderSyncRootManager
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics[] = L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Provider {
                /* [object, uuid("3E99FBBF-8FE3-4B40-ABC7-F6FC3D74C98E"), exclusiveto, contract] */
                MIDL_INTERFACE("3E99FBBF-8FE3-4B40-ABC7-F6FC3D74C98E")
                IStorageProviderSyncRootManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Register(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo * syncRootInformation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Unregister(
                        /* [in] */__RPC__in HSTRING id
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSyncRootInformationForFolder(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFolder * folder,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo * * syncRootInformation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSyncRootInformationForId(
                        /* [in] */__RPC__in HSTRING id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Provider::IStorageProviderSyncRootInfo * * syncRootInformation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentSyncRoots(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageProviderSyncRootManagerStatics=_uuidof(IStorageProviderSyncRootManagerStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.CachedFileUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.ICachedFileUpdaterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdater_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdater[] = L"Windows.Storage.Provider.CachedFileUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.CachedFileUpdaterUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.ICachedFileUpdaterUI ** Default Interface **
 *    Windows.Storage.Provider.ICachedFileUpdaterUI2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdaterUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdaterUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdaterUI[] = L"Windows.Storage.Provider.CachedFileUpdaterUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequest ** Default Interface **
 *    Windows.Storage.Provider.IFileUpdateRequest2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequest_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequest[] = L"Windows.Storage.Provider.FileUpdateRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequestDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestDeferral[] = L"Windows.Storage.Provider.FileUpdateRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequestedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.FileUpdateRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemProperties
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.IStorageProviderItemPropertiesStatics interface starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperties_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperties[] = L"Windows.Storage.Provider.StorageProviderItemProperties";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemProperty
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderItemProperty ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperty_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperty[] = L"Windows.Storage.Provider.StorageProviderItemProperty";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemPropertyDefinition
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderItemPropertyDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemPropertyDefinition_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemPropertyDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderSyncRootInfo
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderSyncRootInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootInfo_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.StorageProviderSyncRootInfo";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderSyncRootManager
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics interface starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootManager_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootManager[] = L"Windows.Storage.Provider.StorageProviderSyncRootManager";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;

#endif // ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;

typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl;

interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty;

typedef  struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemProperty **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl;

interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;

interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

typedef  struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;

interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

typedef struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;

interface __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

typedef  struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;

interface __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;

interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo;

typedef struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl;

interface __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition;

typedef struct __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This, /* [in] */ __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl;

interface __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CProvider__CFileUpdateStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CProvider__CFileUpdateStatus_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CUIStatus __x_ABI_CWindows_CStorage_CProvider_CUIStatus;


typedef enum __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode;


































/*
 *
 * Struct Windows.Storage.Provider.CachedFileOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions
{
    CachedFileOptions_None = 0,
    CachedFileOptions_RequireUpdateOnAccess = 0x1,
    CachedFileOptions_UseCachedFileWhenOffline = 0x2,
    CachedFileOptions_DenyAccessWhenOffline = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.CachedFileTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget
{
    CachedFileTarget_Local = 0,
    CachedFileTarget_Remote = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.FileUpdateStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus
{
    FileUpdateStatus_Incomplete = 0,
    FileUpdateStatus_Complete = 1,
    FileUpdateStatus_UserInputNeeded = 2,
    FileUpdateStatus_CurrentlyUnavailable = 3,
    FileUpdateStatus_Failed = 4,
    FileUpdateStatus_CompleteAndRenamed = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.ReadActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CReadActivationMode
{
    ReadActivationMode_NotNeeded = 0,
    ReadActivationMode_BeforeAccess = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHardlinkPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy
{
    StorageProviderHardlinkPolicy_None = 0,
    StorageProviderHardlinkPolicy_Allowed = 0x1,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHydrationPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy
{
    StorageProviderHydrationPolicy_Partial = 0,
    StorageProviderHydrationPolicy_Progressive = 1,
    StorageProviderHydrationPolicy_Full = 2,
    StorageProviderHydrationPolicy_AlwaysFull = 3,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderHydrationPolicyModifier
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier
{
    StorageProviderHydrationPolicyModifier_None = 0,
    StorageProviderHydrationPolicyModifier_ValidationRequired = 0x1,
    StorageProviderHydrationPolicyModifier_StreamingAllowed = 0x2,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderInSyncPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy
{
    StorageProviderInSyncPolicy_Default = 0,
    StorageProviderInSyncPolicy_FileCreationTime = 0x1,
    StorageProviderInSyncPolicy_FileReadOnlyAttribute = 0x2,
    StorageProviderInSyncPolicy_FileHiddenAttribute = 0x4,
    StorageProviderInSyncPolicy_FileSystemAttribute = 0x8,
    StorageProviderInSyncPolicy_DirectoryCreationTime = 0x10,
    StorageProviderInSyncPolicy_DirectoryReadOnlyAttribute = 0x20,
    StorageProviderInSyncPolicy_DirectoryHiddenAttribute = 0x40,
    StorageProviderInSyncPolicy_DirectorySystemAttribute = 0x80,
    StorageProviderInSyncPolicy_FileLastWriteTime = 0x100,
    StorageProviderInSyncPolicy_DirectoryLastWriteTime = 0x200,
    StorageProviderInSyncPolicy_PreserveInsyncForSyncEngine = 0x80000000,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderPopulationPolicy
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy
{
    StorageProviderPopulationPolicy_Full = 1,
    StorageProviderPopulationPolicy_AlwaysFull = 2,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.StorageProviderProtectionMode
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */

#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode
{
    StorageProviderProtectionMode_Unknown = 0,
    StorageProviderProtectionMode_Personal = 1,
};
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.UIStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CUIStatus
{
    UIStatus_Unavailable = 0,
    UIStatus_Hidden = 1,
    UIStatus_Visible = 2,
    UIStatus_Complete = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Provider.WriteActivationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode
{
    WriteActivationMode_ReadOnly = 0,
    WriteActivationMode_NotNeeded = 1,
    WriteActivationMode_AfterWrite = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdater
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterStatics[] = L"Windows.Storage.Provider.ICachedFileUpdaterStatics";
/* [object, uuid("9FC90920-7BCF-4888-A81E-102D7034D7CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetUpdateInformation )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__RPC__in HSTRING contentId,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CReadActivationMode readMode,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CWriteActivationMode writeMode,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CCachedFileOptions options
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_SetUpdateInformation(This,file,contentId,readMode,writeMode,options) \
    ( (This)->lpVtbl->SetUpdateInformation(This,file,contentId,readMode,writeMode,options) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdaterUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI";
/* [object, uuid("9E6F41E6-BAF2-4A97-B600-9333F5DF80FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdateTarget )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CCachedFileTarget * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FileUpdateRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_Windows__CStorage__CProvider__CFileUpdateRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FileUpdateRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UIRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CProvider__CCachedFileUpdaterUI_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UIRequested )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UIStatus )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CUIStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_get_UpdateTarget(This,value) \
    ( (This)->lpVtbl->get_UpdateTarget(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_add_FileUpdateRequested(This,handler,token) \
    ( (This)->lpVtbl->add_FileUpdateRequested(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_remove_FileUpdateRequested(This,token) \
    ( (This)->lpVtbl->remove_FileUpdateRequested(This,token) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_add_UIRequested(This,handler,token) \
    ( (This)->lpVtbl->add_UIRequested(This,handler,token) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_remove_UIRequested(This,token) \
    ( (This)->lpVtbl->remove_UIRequested(This,token) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_get_UIStatus(This,value) \
    ( (This)->lpVtbl->get_UIStatus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.ICachedFileUpdaterUI2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.CachedFileUpdaterUI
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Provider.ICachedFileUpdaterUI
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_ICachedFileUpdaterUI2[] = L"Windows.Storage.Provider.ICachedFileUpdaterUI2";
/* [object, uuid("8856A21C-8699-4340-9F49-F7CAD7FE8991"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdateRequest )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_get_UpdateRequest(This,value) \
    ( (This)->lpVtbl->get_UpdateRequest(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CICachedFileUpdaterUI2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest[] = L"Windows.Storage.Provider.IFileUpdateRequest";
/* [object, uuid("40C82536-C1FE-4D93-A792-1E736BC70837"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentId )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_File )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CFileUpdateStatus value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateLocalFile )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_get_ContentId(This,value) \
    ( (This)->lpVtbl->get_ContentId(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_get_File(This,value) \
    ( (This)->lpVtbl->get_File(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_put_Status(This,value) \
    ( (This)->lpVtbl->put_Status(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_UpdateLocalFile(This,value) \
    ( (This)->lpVtbl->UpdateLocalFile(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequest
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Provider.IFileUpdateRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequest2[] = L"Windows.Storage.Provider.IFileUpdateRequest2";
/* [object, uuid("82484648-BDBE-447B-A2EE-7AFE6A032A94"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserInputNeededMessage )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UserInputNeededMessage )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_get_UserInputNeededMessage(This,value) \
    ( (This)->lpVtbl->get_UserInputNeededMessage(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_put_UserInputNeededMessage(This,value) \
    ( (This)->lpVtbl->put_UserInputNeededMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequestDeferral
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestDeferral[] = L"Windows.Storage.Provider.IFileUpdateRequestDeferral";
/* [object, uuid("FFCEDB2B-8ADE-44A5-BB00-164C4E72F13A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferralVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_Complete(This) \
    ( (This)->lpVtbl->Complete(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestDeferral_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IFileUpdateRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.FileUpdateRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IFileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.IFileUpdateRequestedEventArgs";
/* [object, uuid("7B0A9342-3905-438D-AAEF-78AE265F8DD2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIFileUpdateRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertiesStatics
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemProperties
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics[] = L"Windows.Storage.Provider.IStorageProviderItemPropertiesStatics";
/* [object, uuid("2D2C1C97-2704-4729-8FA9-7E6B8E158C2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAsync )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * item,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * itemProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_SetAsync(This,item,itemProperties,operation) \
    ( (This)->lpVtbl->SetAsync(This,item,itemProperties,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertiesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemProperty
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemProperty
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemProperty[] = L"Windows.Storage.Provider.IStorageProviderItemProperty";
/* [object, uuid("476CB558-730B-4188-B7B5-63B716ED476D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_put_IconResource(This,value) \
    ( (This)->lpVtbl->put_IconResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_get_IconResource(This,value) \
    ( (This)->lpVtbl->get_IconResource(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemProperty_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertyDefinition
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderItemPropertyDefinition
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.IStorageProviderItemPropertyDefinition";
/* [object, uuid("C5B383BB-FF1F-4298-831E-FF1C08089690"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_get_DisplayNameResource(This,value) \
    ( (This)->lpVtbl->get_DisplayNameResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_put_DisplayNameResource(This,value) \
    ( (This)->lpVtbl->put_DisplayNameResource(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertyDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderItemPropertySource
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderItemPropertySource[] = L"Windows.Storage.Provider.IStorageProviderItemPropertySource";
/* [object, uuid("8F6F9C3E-F632-4A9B-8D99-D2D7A11DF56A"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemProperties )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource * This,
        /* [in] */__RPC__in HSTRING itemPath,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_Windows__CStorage__CProvider__CStorageProviderItemProperty * * itemProperties
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_GetItemProperties(This,itemPath,itemProperties) \
    ( (This)->lpVtbl->GetItemProperties(This,itemPath,itemProperties) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderItemPropertySource_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderPropertyCapabilities
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderPropertyCapabilities[] = L"Windows.Storage.Provider.IStorageProviderPropertyCapabilities";
/* [object, uuid("658D2F0E-63B7-4567-ACF9-51ABE301DDA5"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsPropertySupported )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities * This,
        /* [in] */__RPC__in HSTRING propertyCanonicalName,
        /* [retval, out] */__RPC__out boolean * isSupported
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_IsPropertySupported(This,propertyCanonicalName,isSupported) \
    ( (This)->lpVtbl->IsPropertySupported(This,propertyCanonicalName,isSupported) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderPropertyCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderSyncRootInfo
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderSyncRootInfo
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.IStorageProviderSyncRootInfo";
/* [object, uuid("7C1305C4-99F9-41AC-8904-AB055D654926"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Context )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * folder
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Path )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayNameResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IconResource )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HydrationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HydrationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HydrationPolicyModifier )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HydrationPolicyModifier )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderHydrationPolicyModifier value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PopulationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PopulationPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderPopulationPolicy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InSyncPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InSyncPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderInSyncPolicy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardlinkPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HardlinkPolicy )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderHardlinkPolicy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowSiblingsAsGroup )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowSiblingsAsGroup )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionMode )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProtectionMode )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__x_ABI_CWindows_CStorage_CProvider_CStorageProviderProtectionMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowPinning )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowPinning )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageProviderItemPropertyDefinitions )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CStorage__CProvider__CStorageProviderItemPropertyDefinition * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecycleBinUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RecycleBinUri )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_Context(This,value) \
    ( (This)->lpVtbl->get_Context(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_Context(This,value) \
    ( (This)->lpVtbl->put_Context(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_Path(This,folder) \
    ( (This)->lpVtbl->get_Path(This,folder) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_Path(This,folder) \
    ( (This)->lpVtbl->put_Path(This,folder) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_DisplayNameResource(This,value) \
    ( (This)->lpVtbl->get_DisplayNameResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_DisplayNameResource(This,value) \
    ( (This)->lpVtbl->put_DisplayNameResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_IconResource(This,value) \
    ( (This)->lpVtbl->get_IconResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_IconResource(This,value) \
    ( (This)->lpVtbl->put_IconResource(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_HydrationPolicy(This,value) \
    ( (This)->lpVtbl->get_HydrationPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_HydrationPolicy(This,value) \
    ( (This)->lpVtbl->put_HydrationPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_HydrationPolicyModifier(This,value) \
    ( (This)->lpVtbl->get_HydrationPolicyModifier(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_HydrationPolicyModifier(This,value) \
    ( (This)->lpVtbl->put_HydrationPolicyModifier(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_PopulationPolicy(This,value) \
    ( (This)->lpVtbl->get_PopulationPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_PopulationPolicy(This,value) \
    ( (This)->lpVtbl->put_PopulationPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_InSyncPolicy(This,value) \
    ( (This)->lpVtbl->get_InSyncPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_InSyncPolicy(This,value) \
    ( (This)->lpVtbl->put_InSyncPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_HardlinkPolicy(This,value) \
    ( (This)->lpVtbl->get_HardlinkPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_HardlinkPolicy(This,value) \
    ( (This)->lpVtbl->put_HardlinkPolicy(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_ShowSiblingsAsGroup(This,value) \
    ( (This)->lpVtbl->get_ShowSiblingsAsGroup(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_ShowSiblingsAsGroup(This,value) \
    ( (This)->lpVtbl->put_ShowSiblingsAsGroup(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_Version(This,value) \
    ( (This)->lpVtbl->get_Version(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_Version(This,value) \
    ( (This)->lpVtbl->put_Version(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_ProtectionMode(This,value) \
    ( (This)->lpVtbl->get_ProtectionMode(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_ProtectionMode(This,value) \
    ( (This)->lpVtbl->put_ProtectionMode(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_AllowPinning(This,value) \
    ( (This)->lpVtbl->get_AllowPinning(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_AllowPinning(This,value) \
    ( (This)->lpVtbl->put_AllowPinning(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_StorageProviderItemPropertyDefinitions(This,value) \
    ( (This)->lpVtbl->get_StorageProviderItemPropertyDefinitions(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_get_RecycleBinUri(This,value) \
    ( (This)->lpVtbl->get_RecycleBinUri(This,value) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_put_RecycleBinUri(This,value) \
    ( (This)->lpVtbl->put_RecycleBinUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Provider.StorageProviderSyncRootManager
 *
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics[] = L"Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics";
/* [object, uuid("3E99FBBF-8FE3-4B40-ABC7-F6FC3D74C98E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * syncRootInformation
        );
    HRESULT ( STDMETHODCALLTYPE *Unregister )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
        /* [in] */__RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncRootInformationForFolder )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder * folder,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * * syncRootInformation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSyncRootInformationForId )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootInfo * * syncRootInformation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentSyncRoots )(
        __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CProvider__CStorageProviderSyncRootInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_Register(This,syncRootInformation) \
    ( (This)->lpVtbl->Register(This,syncRootInformation) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_Unregister(This,id) \
    ( (This)->lpVtbl->Unregister(This,id) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetSyncRootInformationForFolder(This,folder,syncRootInformation) \
    ( (This)->lpVtbl->GetSyncRootInformationForFolder(This,folder,syncRootInformation) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetSyncRootInformationForId(This,id,syncRootInformation) \
    ( (This)->lpVtbl->GetSyncRootInformationForId(This,id,syncRootInformation) )

#define __x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_GetCurrentSyncRoots(This,value) \
    ( (This)->lpVtbl->GetCurrentSyncRoots(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CProvider_CIStorageProviderSyncRootManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.CachedFileUpdater
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.ICachedFileUpdaterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdater_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdater_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdater[] = L"Windows.Storage.Provider.CachedFileUpdater";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.CachedFileUpdaterUI
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.ICachedFileUpdaterUI ** Default Interface **
 *    Windows.Storage.Provider.ICachedFileUpdaterUI2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdaterUI_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_CachedFileUpdaterUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_CachedFileUpdaterUI[] = L"Windows.Storage.Provider.CachedFileUpdaterUI";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequest ** Default Interface **
 *    Windows.Storage.Provider.IFileUpdateRequest2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequest_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequest[] = L"Windows.Storage.Provider.FileUpdateRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequestDeferral
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequestDeferral ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestDeferral_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestDeferral_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestDeferral[] = L"Windows.Storage.Provider.FileUpdateRequestDeferral";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.FileUpdateRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IFileUpdateRequestedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_FileUpdateRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_FileUpdateRequestedEventArgs[] = L"Windows.Storage.Provider.FileUpdateRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemProperties
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.IStorageProviderItemPropertiesStatics interface starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperties_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperties[] = L"Windows.Storage.Provider.StorageProviderItemProperties";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemProperty
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderItemProperty ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperty_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemProperty_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemProperty[] = L"Windows.Storage.Provider.StorageProviderItemProperty";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderItemPropertyDefinition
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderItemPropertyDefinition ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemPropertyDefinition_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderItemPropertyDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderItemPropertyDefinition[] = L"Windows.Storage.Provider.StorageProviderItemPropertyDefinition";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderSyncRootInfo
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Provider.IStorageProviderSyncRootInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootInfo_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootInfo[] = L"Windows.Storage.Provider.StorageProviderSyncRootInfo";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Provider.StorageProviderSyncRootManager
 *
 * Introduced to Windows.Storage.Provider.CloudFilesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Provider.IStorageProviderSyncRootManagerStatics interface starting with version 1.0 of the Windows.Storage.Provider.CloudFilesContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootManager_DEFINED
#define RUNTIMECLASS_Windows_Storage_Provider_StorageProviderSyncRootManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Provider_StorageProviderSyncRootManager[] = L"Windows.Storage.Provider.StorageProviderSyncRootManager";
#endif
#endif // WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Estorage2Eprovider_p_h__

#endif // __windows2Estorage2Eprovider_h__
