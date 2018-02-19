/* Header file automatically generated from windows.storage.accesscache.idl */
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
#ifndef __windows2Estorage2Eaccesscache_h__
#define __windows2Estorage2Eaccesscache_h__
#ifndef __windows2Estorage2Eaccesscache_p_h__
#define __windows2Estorage2Eaccesscache_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                interface IItemRemovedEventArgs;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs ABI::Windows::Storage::AccessCache::IItemRemovedEventArgs

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                interface IStorageApplicationPermissionsStatics;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics ABI::Windows::Storage::AccessCache::IStorageApplicationPermissionsStatics

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                interface IStorageItemAccessList;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList ABI::Windows::Storage::AccessCache::IStorageItemAccessList

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                interface IStorageItemMostRecentlyUsedList;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                interface IStorageItemMostRecentlyUsedList2;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList2

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                struct AccessListEntry;
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#define DEF___FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d1a0a6c4-889d-519b-8508-26241b329b7e"))
IIterator<struct ABI::Windows::Storage::AccessCache::AccessListEntry> : IIterator_impl<struct ABI::Windows::Storage::AccessCache::AccessListEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.AccessCache.AccessListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Storage::AccessCache::AccessListEntry> __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_t;
#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::AccessCache::AccessListEntry>
//#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::AccessCache::AccessListEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE */





#ifndef DEF___FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#define DEF___FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4995c2b0-736b-588d-ae42-6f69b025b388"))
IIterable<struct ABI::Windows::Storage::AccessCache::AccessListEntry> : IIterable_impl<struct ABI::Windows::Storage::AccessCache::AccessListEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.AccessCache.AccessListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Storage::AccessCache::AccessListEntry> __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_t;
#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::AccessCache::AccessListEntry>
//#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::AccessCache::AccessListEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE */





#ifndef DEF___FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#define DEF___FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("42b49b8a-3014-5d27-8f2c-1ef5ee89ec00"))
IVectorView<struct ABI::Windows::Storage::AccessCache::AccessListEntry> : IVectorView_impl<struct ABI::Windows::Storage::AccessCache::AccessListEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.AccessCache.AccessListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Storage::AccessCache::AccessListEntry> __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_t;
#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::AccessCache::AccessListEntry>
//#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::AccessCache::AccessListEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_USE */



namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                class StorageItemMostRecentlyUsedList;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                class ItemRemovedEventArgs;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("029dace8-98d1-5bf7-b780-9717e95027ff"))
ITypedEventHandler<ABI::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList*,ABI::Windows::Storage::AccessCache::ItemRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList*, ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::AccessCache::ItemRemovedEventArgs*, ABI::Windows::Storage::AccessCache::IItemRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList, Windows.Storage.AccessCache.ItemRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::AccessCache::StorageItemMostRecentlyUsedList*,ABI::Windows::Storage::AccessCache::ItemRemovedEventArgs*> __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList*,ABI::Windows::Storage::AccessCache::IItemRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList*,ABI::Windows::Storage::AccessCache::IItemRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_USE */


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

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("92c3102f-a327-5318-a6c1-76f6b2a0abfb"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageItem*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageItem*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageItem*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CIStorageItem_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CIStorageItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5fc9c137-ebb7-5e6c-9cba-686f2ec2b0bb"))
IAsyncOperation<ABI::Windows::Storage::IStorageItem*> : IAsyncOperation_impl<ABI::Windows::Storage::IStorageItem*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.IStorageItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::IStorageItem*> __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_t;
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CIStorageItem_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageItem*>
//#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CIStorageItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c211026e-9e63-5452-ba54-3a07d6a96874"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFolder*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::IStorageFolder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6be9e7d7-e83a-5cbc-802c-1768960b52c3"))
IAsyncOperation<ABI::Windows::Storage::StorageFolder*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::StorageFolder*> __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFolder*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::IStorageFolder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000











namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                
                typedef enum AccessCacheOptions : unsigned int AccessCacheOptions;
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                
                typedef enum RecentStorageItemVisibility : int RecentStorageItemVisibility;
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                
                typedef struct AccessListEntry AccessListEntry;
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                class AccessListEntryView;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                class StorageItemAccessList;
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */











/*
 *
 * Struct Windows.Storage.AccessCache.AccessCacheOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [v1_enum, flags, contract] */
                enum AccessCacheOptions : unsigned int
                {
                    AccessCacheOptions_None = 0,
                    AccessCacheOptions_DisallowUserInput = 0x1,
                    AccessCacheOptions_FastLocationsOnly = 0x2,
                    AccessCacheOptions_UseReadOnlyCachedCopy = 0x4,
                    AccessCacheOptions_SuppressAccessTimeUpdate = 0x8,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(AccessCacheOptions)
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.AccessCache.RecentStorageItemVisibility
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [v1_enum, contract] */
                enum RecentStorageItemVisibility : int
                {
                    RecentStorageItemVisibility_AppOnly = 0,
                    RecentStorageItemVisibility_AppAndSystem = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.AccessCache.AccessListEntry
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [contract] */
                struct AccessListEntry
                {
                    HSTRING Token;
                    HSTRING Metadata;
                };
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IItemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.ItemRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.IItemRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [object, uuid("59677E5C-55BE-4C66-BA66-5EAEA79D2631"), exclusiveto, contract] */
                MIDL_INTERFACE("59677E5C-55BE-4C66-BA66-5EAEA79D2631")
                IItemRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemovedEntry(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::AccessCache::AccessListEntry * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IItemRemovedEventArgs=_uuidof(IItemRemovedEventArgs);
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageApplicationPermissions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics[] = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [object, uuid("4391DFAA-D033-48F9-8060-3EC847D2E3F1"), exclusiveto, contract] */
                MIDL_INTERFACE("4391DFAA-D033-48F9-8060-3EC847D2E3F1")
                IStorageApplicationPermissionsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FutureAccessList(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::AccessCache::IStorageItemAccessList * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MostRecentlyUsedList(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::AccessCache::IStorageItemMostRecentlyUsedList * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageApplicationPermissionsStatics=_uuidof(IStorageApplicationPermissionsStatics);
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemAccessList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemAccessList[] = L"Windows.Storage.AccessCache.IStorageItemAccessList";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [object, uuid("2CAFF6AD-DE90-47F5-B2C3-DD36C9FDD453"), contract] */
                MIDL_INTERFACE("2CAFF6AD-DE90-47F5-B2C3-DD36C9FDD453")
                IStorageItemAccessList : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOverloadDefaultMetadata(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Add(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [in] */__RPC__in HSTRING metadata,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOrReplaceOverloadDefaultMetadata(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOrReplace(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [in] */__RPC__in HSTRING metadata
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFileAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFolderAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */ABI::Windows::Storage::AccessCache::AccessCacheOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFileWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */ABI::Windows::Storage::AccessCache::AccessCacheOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFolderWithOptionsAsync(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */ABI::Windows::Storage::AccessCache::AccessCacheOptions options,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Remove(
                        /* [in] */__RPC__in HSTRING token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ContainsItem(
                        /* [in] */__RPC__in HSTRING token,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CheckAccess(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Entries(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * * entries
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaximumItemsAllowed(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageItemAccessList=_uuidof(IStorageItemAccessList);
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.AccessCache.IStorageItemAccessList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [object, uuid("016239D5-510D-411E-8CF1-C3D1EFFA4C33"), exclusiveto, contract] */
                MIDL_INTERFACE("016239D5-510D-411E-8CF1-C3D1EFFA4C33")
                IStorageItemMostRecentlyUsedList : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ItemRemoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ItemRemoved(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageItemMostRecentlyUsedList=_uuidof(IStorageItemMostRecentlyUsedList);
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList
 *     Windows.Storage.AccessCache.IStorageItemAccessList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace AccessCache {
                /* [object, uuid("DA481EA0-ED8D-4731-A1DB-E44EE2204093"), exclusiveto, contract] */
                MIDL_INTERFACE("DA481EA0-ED8D-4731-A1DB-E44EE2204093")
                IStorageItemMostRecentlyUsedList2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddWithMetadataAndVisibility(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [in] */__RPC__in HSTRING metadata,
                        /* [in] */ABI::Windows::Storage::AccessCache::RecentStorageItemVisibility visibility,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE AddOrReplaceWithMetadataAndVisibility(
                        /* [in] */__RPC__in HSTRING token,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageItem * file,
                        /* [in] */__RPC__in HSTRING metadata,
                        /* [in] */ABI::Windows::Storage::AccessCache::RecentStorageItemVisibility visibility
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageItemMostRecentlyUsedList2=_uuidof(IStorageItemMostRecentlyUsedList2);
                
            } /* Windows */
        } /* Storage */
    } /* AccessCache */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.AccessListEntryView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Storage.AccessCache.AccessListEntry ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Storage.AccessCache.AccessListEntry
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_AccessListEntryView_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_AccessListEntryView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_AccessListEntryView[] = L"Windows.Storage.AccessCache.AccessListEntryView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.ItemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IItemRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_ItemRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_ItemRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_ItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.ItemRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageApplicationPermissions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageApplicationPermissions_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageApplicationPermissions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageApplicationPermissions[] = L"Windows.Storage.AccessCache.StorageApplicationPermissions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageItemAccessList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IStorageItemAccessList ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemAccessList_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemAccessList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemAccessList[] = L"Windows.Storage.AccessCache.StorageItemAccessList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList ** Default Interface **
 *    Windows.Storage.AccessCache.IStorageItemAccessList
 *    Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs;

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics;

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList;

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList;

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2;

#endif // ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry;

#if !defined(____FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry;

typedef struct __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;

interface __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry;

typedef  struct __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CAccessCache__CAccessListEntry **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;

interface __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry;

typedef struct __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
            /* [in] */ struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl;

interface __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageItem __x_ABI_CWindows_CStorage_CIStorageItem;

#endif // ____x_ABI_CWindows_CStorage_CIStorageItem_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem __FIAsyncOperation_1_Windows__CStorage__CIStorageItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CIStorageItem;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CIStorageItem **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageItem * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CIStorageItem
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CIStorageItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CIStorageItem_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CIStorageItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStorageFolder;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000











typedef enum __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions;


typedef enum __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility;


typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry;



















/*
 *
 * Struct Windows.Storage.AccessCache.AccessCacheOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions
{
    AccessCacheOptions_None = 0,
    AccessCacheOptions_DisallowUserInput = 0x1,
    AccessCacheOptions_FastLocationsOnly = 0x2,
    AccessCacheOptions_UseReadOnlyCachedCopy = 0x4,
    AccessCacheOptions_SuppressAccessTimeUpdate = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.AccessCache.RecentStorageItemVisibility
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility
{
    RecentStorageItemVisibility_AppOnly = 0,
    RecentStorageItemVisibility_AppAndSystem = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.AccessCache.AccessListEntry
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry
{
    HSTRING Token;
    HSTRING Metadata;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IItemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.ItemRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.IItemRemovedEventArgs";
/* [object, uuid("59677E5C-55BE-4C66-BA66-5EAEA79D2631"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemovedEntry )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CAccessCache_CAccessListEntry * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_get_RemovedEntry(This,value) \
    ( (This)->lpVtbl->get_RemovedEntry(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIItemRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageApplicationPermissions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageApplicationPermissionsStatics[] = L"Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics";
/* [object, uuid("4391DFAA-D033-48F9-8060-3EC847D2E3F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FutureAccessList )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MostRecentlyUsedList )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_get_FutureAccessList(This,value) \
    ( (This)->lpVtbl->get_FutureAccessList(This,value) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_get_MostRecentlyUsedList(This,value) \
    ( (This)->lpVtbl->get_MostRecentlyUsedList(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageApplicationPermissionsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemAccessList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemAccessList[] = L"Windows.Storage.AccessCache.IStorageItemAccessList";
/* [object, uuid("2CAFF6AD-DE90-47F5-B2C3-DD36C9FDD453"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOverloadDefaultMetadata )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [in] */__RPC__in HSTRING metadata,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOrReplaceOverloadDefaultMetadata )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOrReplace )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [in] */__RPC__in HSTRING metadata
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFileAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFolderAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CIStorageItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFileWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFolderWithOptionsAsync )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__x_ABI_CWindows_CStorage_CAccessCache_CAccessCacheOptions options,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token
        );
    HRESULT ( STDMETHODCALLTYPE *ContainsItem )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in HSTRING token,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This
        );
    HRESULT ( STDMETHODCALLTYPE *CheckAccess )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Entries )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CAccessCache__CAccessListEntry * * entries
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaximumItemsAllowed )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl;

interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_AddOverloadDefaultMetadata(This,file,token) \
    ( (This)->lpVtbl->AddOverloadDefaultMetadata(This,file,token) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_Add(This,file,metadata,token) \
    ( (This)->lpVtbl->Add(This,file,metadata,token) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_AddOrReplaceOverloadDefaultMetadata(This,token,file) \
    ( (This)->lpVtbl->AddOrReplaceOverloadDefaultMetadata(This,token,file) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_AddOrReplace(This,token,file,metadata) \
    ( (This)->lpVtbl->AddOrReplace(This,token,file,metadata) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetItemAsync(This,token,operation) \
    ( (This)->lpVtbl->GetItemAsync(This,token,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetFileAsync(This,token,operation) \
    ( (This)->lpVtbl->GetFileAsync(This,token,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetFolderAsync(This,token,operation) \
    ( (This)->lpVtbl->GetFolderAsync(This,token,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetItemWithOptionsAsync(This,token,options,operation) \
    ( (This)->lpVtbl->GetItemWithOptionsAsync(This,token,options,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetFileWithOptionsAsync(This,token,options,operation) \
    ( (This)->lpVtbl->GetFileWithOptionsAsync(This,token,options,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_GetFolderWithOptionsAsync(This,token,options,operation) \
    ( (This)->lpVtbl->GetFolderWithOptionsAsync(This,token,options,operation) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_Remove(This,token) \
    ( (This)->lpVtbl->Remove(This,token) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_ContainsItem(This,token,value) \
    ( (This)->lpVtbl->ContainsItem(This,token,value) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_CheckAccess(This,file,value) \
    ( (This)->lpVtbl->CheckAccess(This,file,value) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_get_Entries(This,entries) \
    ( (This)->lpVtbl->get_Entries(This,entries) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_get_MaximumItemsAllowed(This,value) \
    ( (This)->lpVtbl->get_MaximumItemsAllowed(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemAccessList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.AccessCache.IStorageItemAccessList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList";
/* [object, uuid("016239D5-510D-411E-8CF1-C3D1EFFA4C33"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ItemRemoved )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CAccessCache__CStorageItemMostRecentlyUsedList_Windows__CStorage__CAccessCache__CItemRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ItemRemoved )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl;

interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_add_ItemRemoved(This,handler,eventCookie) \
    ( (This)->lpVtbl->add_ItemRemoved(This,handler,eventCookie) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_remove_ItemRemoved(This,eventCookie) \
    ( (This)->lpVtbl->remove_ItemRemoved(This,eventCookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList
 *     Windows.Storage.AccessCache.IStorageItemAccessList
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_AccessCache_IStorageItemMostRecentlyUsedList2[] = L"Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2";
/* [object, uuid("DA481EA0-ED8D-4731-A1DB-E44EE2204093"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AddWithMetadataAndVisibility )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [in] */__RPC__in HSTRING metadata,
        /* [in] */__x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility visibility,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AddOrReplaceWithMetadataAndVisibility )(
        __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2 * This,
        /* [in] */__RPC__in HSTRING token,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageItem * file,
        /* [in] */__RPC__in HSTRING metadata,
        /* [in] */__x_ABI_CWindows_CStorage_CAccessCache_CRecentStorageItemVisibility visibility
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl;

interface __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_AddWithMetadataAndVisibility(This,file,metadata,visibility,token) \
    ( (This)->lpVtbl->AddWithMetadataAndVisibility(This,file,metadata,visibility,token) )

#define __x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_AddOrReplaceWithMetadataAndVisibility(This,token,file,metadata,visibility) \
    ( (This)->lpVtbl->AddOrReplaceWithMetadataAndVisibility(This,token,file,metadata,visibility) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CAccessCache_CIStorageItemMostRecentlyUsedList2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.AccessListEntryView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Storage.AccessCache.AccessListEntry ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Storage.AccessCache.AccessListEntry
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_AccessListEntryView_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_AccessListEntryView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_AccessListEntryView[] = L"Windows.Storage.AccessCache.AccessListEntryView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.ItemRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IItemRemovedEventArgs ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_ItemRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_ItemRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_ItemRemovedEventArgs[] = L"Windows.Storage.AccessCache.ItemRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageApplicationPermissions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.AccessCache.IStorageApplicationPermissionsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageApplicationPermissions_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageApplicationPermissions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageApplicationPermissions[] = L"Windows.Storage.AccessCache.StorageApplicationPermissions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageItemAccessList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IStorageItemAccessList ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemAccessList_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemAccessList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemAccessList[] = L"Windows.Storage.AccessCache.StorageItemAccessList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList ** Default Interface **
 *    Windows.Storage.AccessCache.IStorageItemAccessList
 *    Windows.Storage.AccessCache.IStorageItemMostRecentlyUsedList2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList_DEFINED
#define RUNTIMECLASS_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_AccessCache_StorageItemMostRecentlyUsedList[] = L"Windows.Storage.AccessCache.StorageItemMostRecentlyUsedList";
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
#endif // __windows2Estorage2Eaccesscache_p_h__

#endif // __windows2Estorage2Eaccesscache_h__
