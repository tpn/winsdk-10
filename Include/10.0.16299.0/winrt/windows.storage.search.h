/* Header file automatically generated from windows.storage.search.idl */
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
#ifndef __windows2Estorage2Esearch_h__
#define __windows2Estorage2Esearch_h__
#ifndef __windows2Estorage2Esearch_p_h__
#define __windows2Estorage2Esearch_p_h__


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
#include "Windows.Data.Text.h"
#include "Windows.Storage.h"
#include "Windows.Storage.FileProperties.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IContentIndexer;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer ABI::Windows::Storage::Search::IContentIndexer

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IContentIndexerQuery;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery ABI::Windows::Storage::Search::IContentIndexerQuery

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IContentIndexerQueryOperations;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations ABI::Windows::Storage::Search::IContentIndexerQueryOperations

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IContentIndexerStatics;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics ABI::Windows::Storage::Search::IContentIndexerStatics

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IIndexableContent;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent ABI::Windows::Storage::Search::IIndexableContent

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IQueryOptions;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions ABI::Windows::Storage::Search::IQueryOptions

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IQueryOptionsFactory;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory ABI::Windows::Storage::Search::IQueryOptionsFactory

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IQueryOptionsWithProviderFilter;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter ABI::Windows::Storage::Search::IQueryOptionsWithProviderFilter

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageFileQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult ABI::Windows::Storage::Search::IStorageFileQueryResult

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageFileQueryResult2;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 ABI::Windows::Storage::Search::IStorageFileQueryResult2

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageFolderQueryOperations;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations ABI::Windows::Storage::Search::IStorageFolderQueryOperations

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageFolderQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult ABI::Windows::Storage::Search::IStorageFolderQueryResult

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageItemQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult ABI::Windows::Storage::Search::IStorageItemQueryResult

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageLibraryContentChangedTriggerDetails;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails ABI::Windows::Storage::Search::IStorageLibraryContentChangedTriggerDetails

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IStorageQueryResultBase;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase ABI::Windows::Storage::Search::IStorageQueryResultBase

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                interface IValueAndLanguage;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage ABI::Windows::Storage::Search::IValueAndLanguage

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#define DEF___FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6cdb32ba-2361-57a8-a39d-be1df041bdb8"))
IIterator<ABI::Windows::Storage::Search::IIndexableContent*> : IIterator_impl<ABI::Windows::Storage::Search::IIndexableContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Search.IIndexableContent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::Search::IIndexableContent*> __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_t;
#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Search::IIndexableContent*>
//#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Search::IIndexableContent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#define DEF___FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4a6edbfe-0c41-5042-ac58-a885a8fc7928"))
IIterable<ABI::Windows::Storage::Search::IIndexableContent*> : IIterable_impl<ABI::Windows::Storage::Search::IIndexableContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Search.IIndexableContent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::Search::IIndexableContent*> __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_t;
#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Search::IIndexableContent*>
//#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Search::IIndexableContent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                struct SortEntry;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CStorage__CSearch__CSortEntry_USE
#define DEF___FIIterator_1_Windows__CStorage__CSearch__CSortEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("520434a2-acf7-58c9-b47a-2741f2fac2c2"))
IIterator<struct ABI::Windows::Storage::Search::SortEntry> : IIterator_impl<struct ABI::Windows::Storage::Search::SortEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.Search.SortEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Storage::Search::SortEntry> __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_t;
#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CSearch__CSortEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Search::SortEntry>
//#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::Search::SortEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CSearch__CSortEntry_USE */





#ifndef DEF___FIIterable_1_Windows__CStorage__CSearch__CSortEntry_USE
#define DEF___FIIterable_1_Windows__CStorage__CSearch__CSortEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("35aff6f9-ef75-5280-bb84-a2bf8317cf35"))
IIterable<struct ABI::Windows::Storage::Search::SortEntry> : IIterable_impl<struct ABI::Windows::Storage::Search::SortEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.Search.SortEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Storage::Search::SortEntry> __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_t;
#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CSearch__CSortEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Search::SortEntry>
//#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::Search::SortEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CSearch__CSortEntry_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#define DEF___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f4512416-6bb8-5c6f-b83a-bf8a2788ce9f"))
IVectorView<ABI::Windows::Storage::Search::IIndexableContent*> : IVectorView_impl<ABI::Windows::Storage::Search::IIndexableContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Search.IIndexableContent>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::Search::IIndexableContent*> __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t;
#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>
//#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_USE
#define DEF___FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("823c7604-b37b-5465-a169-29497893cdb9"))
IVectorView<struct ABI::Windows::Storage::Search::SortEntry> : IVectorView_impl<struct ABI::Windows::Storage::Search::SortEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Search.SortEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Storage::Search::SortEntry> __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_t;
#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::SortEntry>
//#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::SortEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_USE */





#ifndef DEF___FIVector_1_Windows__CStorage__CSearch__CSortEntry_USE
#define DEF___FIVector_1_Windows__CStorage__CSearch__CSortEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d8ea401b-47b3-5254-84f4-eea10c4cf068"))
IVector<struct ABI::Windows::Storage::Search::SortEntry> : IVector_impl<struct ABI::Windows::Storage::Search::SortEntry> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.Search.SortEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<struct ABI::Windows::Storage::Search::SortEntry> __FIVector_1_Windows__CStorage__CSearch__CSortEntry_t;
#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CSearch__CSortEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Search::SortEntry>
//#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Storage::Search::SortEntry>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CStorage__CSearch__CSortEntry_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6a29f493-efb7-5fdb-a13e-f2c28b4dab58"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Search.IIndexableContent>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("919850e1-084b-5f9b-a0a0-50db0cd5da91"))
IAsyncOperation<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.Search.IIndexableContent>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent*> __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::Search::IIndexableContent*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                enum IndexedState : int;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b67a3cba-f5f7-5e51-968a-385126d1f918"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Storage::Search::IndexedState> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Storage::Search::IndexedState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Search.IndexedState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Storage::Search::IndexedState> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Search::IndexedState>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Search::IndexedState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88694b1f-f380-574d-8a05-4f67bd52cd11"))
IAsyncOperation<enum ABI::Windows::Storage::Search::IndexedState> : IAsyncOperation_impl<enum ABI::Windows::Storage::Search::IndexedState> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Search.IndexedState>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Storage::Search::IndexedState> __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_t;
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Search::IndexedState>
//#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Search::IndexedState>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_USE */





#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4ba22861-00c4-597f-b6bf-3af516f3b870"))
ITypedEventHandler<ABI::Windows::Storage::Search::IStorageQueryResultBase*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Storage::Search::IStorageQueryResultBase*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Storage.Search.IStorageQueryResultBase, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Storage::Search::IStorageQueryResultBase*,IInspectable*> __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Search::IStorageQueryResultBase*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Storage::Search::IStorageQueryResultBase*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_USE */


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





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("89981889-1207-5ae6-9b28-ccc58f3aac6e"))
IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_IInspectable*> : IAsyncOperationCompletedHandler_impl<__FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IMapView`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIMapView_2_HSTRING_IInspectable*> __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5dcbee48-9965-51da-a461-177c885be7e5"))
IAsyncOperation<__FIMapView_2_HSTRING_IInspectable*> : IAsyncOperation_impl<__FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IMapView`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIMapView_2_HSTRING_IInspectable*> __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::__FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
//#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#define DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9343b6e7-e3d2-5e4a-ab2d-2bce4919a6a4"))
IAsyncOperationCompletedHandler<UINT32> : IAsyncOperationCompletedHandler_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<UINT32> __FIAsyncOperationCompletedHandler_1_UINT32_t;
#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_UINT32 ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
//#define __FIAsyncOperationCompletedHandler_1_UINT32_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_UINT32_USE */




#ifndef DEF___FIAsyncOperation_1_UINT32_USE
#define DEF___FIAsyncOperation_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef60385f-be78-584b-aaef-7829ada2b0de"))
IAsyncOperation<UINT32> : IAsyncOperation_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<UINT32> __FIAsyncOperation_1_UINT32_t;
#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::__FIAsyncOperation_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_UINT32 ABI::Windows::Foundation::IAsyncOperation<UINT32>
//#define __FIAsyncOperation_1_UINT32_t ABI::Windows::Foundation::IAsyncOperation<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_UINT32_USE */





#ifndef DEF___FIIterator_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("53a2e825-9bf1-5083-8a7b-9d94f312dade"))
IIterator<__FIMapView_2_HSTRING_IInspectable*> : IIterator_impl<__FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IMapView`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIMapView_2_HSTRING_IInspectable*> __FIIterator_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e1670fae-49cd-5c47-a8c8-f6fa2c650c6c"))
IIterable<__FIMapView_2_HSTRING_IInspectable*> : IIterable_impl<__FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IMapView`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIMapView_2_HSTRING_IInspectable*> __FIIterable_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("172a655b-b3b8-5eae-bc2e-a6a1f1708b4b"))
IVectorView<__FIMapView_2_HSTRING_IInspectable*> : IVectorView_impl<__FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IMapView`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<__FIMapView_2_HSTRING_IInspectable*> __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
//#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a782a13a-16a0-5326-b985-c4ca49e54e77"))
IAsyncOperationCompletedHandler<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IMapView`2<String, Object>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fc227365-219d-5d59-8b5b-58eb0a91ca0a"))
IAsyncOperation<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> : IAsyncOperation_impl<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IMapView`2<String, Object>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1___FIMapView_2_HSTRING_IInspectable*> __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t;
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>*>
//#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_USE */





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

#ifndef DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598"))
IIterator<ABI::Windows::Storage::StorageFile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::StorageFile*> __FIIterator_1_Windows__CStorage__CStorageFile_t;
#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterator_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b"))
IIterable<ABI::Windows::Storage::StorageFile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::StorageFile*> __FIIterable_1_Windows__CStorage__CStorageFile_t;
#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
//#define __FIIterable_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b"))
IVectorView<ABI::Windows::Storage::StorageFile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::StorageFile*> __FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
//#define __FIVectorView_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb4206c5-0988-5104-afa9-253c298f86fd"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFile*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CStorage__CStorageFile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFile*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("03362e33-e413-5f29-97d0-48a4780935f9"))
IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFile*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CStorage__CStorageFile*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFile*> __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFile*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Text {
                struct TextSegment;
                
            } /* Windows */
        } /* Data */
    } /* Text */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIIterator_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("645a39b4-f001-5272-9015-fb4a327179ae"))
IIterator<struct ABI::Windows::Data::Text::TextSegment> : IIterator_impl<struct ABI::Windows::Data::Text::TextSegment> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Data.Text.TextSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Data::Text::TextSegment> __FIIterator_1_Windows__CData__CText__CTextSegment_t;
#define __FIIterator_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Text::TextSegment>
//#define __FIIterator_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Text::TextSegment>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIIterable_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIIterable_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5498f4f3-cee4-5b72-9729-815c4ad7b9dc"))
IIterable<struct ABI::Windows::Data::Text::TextSegment> : IIterable_impl<struct ABI::Windows::Data::Text::TextSegment> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Data.Text.TextSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Data::Text::TextSegment> __FIIterable_1_Windows__CData__CText__CTextSegment_t;
#define __FIIterable_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Text::TextSegment>
//#define __FIIterable_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Text::TextSegment>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f245f9d-eb5f-5641-9dcc-6ab1946cc7e6"))
IVectorView<struct ABI::Windows::Data::Text::TextSegment> : IVectorView_impl<struct ABI::Windows::Data::Text::TextSegment> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Data::Text::TextSegment> __FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>
//#define __FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("77b4daf4-4f4f-5568-90ee-1a32cf0caaea"))
IKeyValuePair<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> : IKeyValuePair_impl<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
//#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("00078aa3-8676-5f06-adf5-ffe5d661d670"))
IIterator<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> : IIterator_impl<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f819a276-b3f5-54d4-b8fd-c9adb7f700e3"))
IIterable<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> : IIterable_impl<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment*> __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("91d443d6-3777-5102-b0bc-3d4183a26ff9"))
IMapView<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> : IMapView_impl<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
//#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */





#ifndef DEF___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#define DEF___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a31b6540-b2b1-536d-818f-8ade7051c3b3"))
IMap<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> : IMap_impl<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Windows.Foundation.Collections.IVectorView`1<Windows.Data.Text.TextSegment>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,__FIVectorView_1_Windows__CData__CText__CTextSegment*> __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t;
#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
//#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_t ABI::Windows::Foundation::Collections::IMap<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Text::TextSegment>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_USE */



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

#ifndef DEF___FIIterator_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIIterator_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5aac96fb-b3b9-5a7f-a920-4b5a8df81168"))
IIterator<ABI::Windows::Storage::StorageFolder*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.StorageFolder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Storage::StorageFolder*> __FIIterator_1_Windows__CStorage__CStorageFolder_t;
#define __FIIterator_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFolder*>
//#define __FIIterator_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Storage::IStorageFolder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIIterable_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4669befc-ae5c-52b1-8a97-5466ce61e94e"))
IIterable<ABI::Windows::Storage::StorageFolder*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.StorageFolder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Storage::StorageFolder*> __FIIterable_1_Windows__CStorage__CStorageFolder_t;
#define __FIIterable_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFolder*>
//#define __FIIterable_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Storage::IStorageFolder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e20debc6-dc4e-542e-a2e7-a24d19c8dd62"))
IVectorView<ABI::Windows::Storage::StorageFolder*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFolder>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Storage::StorageFolder*> __FIVectorView_1_Windows__CStorage__CStorageFolder_t;
#define __FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>
//#define __FIVectorView_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ed2d1d9b-26ec-5be7-a8a3-56458933d25f"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFolder*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CStorage__CStorageFolder*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFolder>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFolder*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ca40b21b-aeb1-5a61-9e08-3bd5d9594023"))
IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFolder*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CStorage__CStorageFolder*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFolder>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFolder*> __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Storage::IStorageFolder*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_USE */


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
        namespace Data {
            namespace Text {
                
                typedef struct TextSegment TextSegment;
                
            } /* Windows */
        } /* Data */
    } /* Text */} /* ABI */




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
        namespace Storage {
            namespace FileProperties {
                
                typedef enum PropertyPrefetchOptions : unsigned int PropertyPrefetchOptions;
                
            } /* Windows */
        } /* Storage */
    } /* FileProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace FileProperties {
                
                typedef enum ThumbnailMode : int ThumbnailMode;
                
            } /* Windows */
        } /* Storage */
    } /* FileProperties */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace FileProperties {
                
                typedef enum ThumbnailOptions : unsigned int ThumbnailOptions;
                
            } /* Windows */
        } /* Storage */
    } /* FileProperties */} /* ABI */









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
        namespace Storage {
            namespace Search {
                
                typedef enum CommonFileQuery : int CommonFileQuery;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef enum CommonFolderQuery : int CommonFolderQuery;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef enum DateStackOption : int DateStackOption;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef enum FolderDepth : int FolderDepth;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef enum IndexedState : int IndexedState;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef enum IndexerOption : int IndexerOption;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                
                typedef struct SortEntry SortEntry;
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

















namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class ContentIndexer;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class ContentIndexerQuery;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class IndexableContent;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class QueryOptions;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class SortEntryVector;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class StorageFileQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class StorageFolderQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class StorageItemQueryResult;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class StorageLibraryContentChangedTriggerDetails;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                class ValueAndLanguage;
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */










/*
 *
 * Struct Windows.Storage.Search.CommonFileQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum CommonFileQuery : int
                {
                    CommonFileQuery_DefaultQuery = 0,
                    CommonFileQuery_OrderByName = 1,
                    CommonFileQuery_OrderByTitle = 2,
                    CommonFileQuery_OrderByMusicProperties = 3,
                    CommonFileQuery_OrderBySearchRank = 4,
                    CommonFileQuery_OrderByDate = 5,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.CommonFolderQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum CommonFolderQuery : int
                {
                    CommonFolderQuery_DefaultQuery = 0,
                    CommonFolderQuery_GroupByYear = 100,
                    CommonFolderQuery_GroupByMonth = 101,
                    CommonFolderQuery_GroupByArtist = 102,
                    CommonFolderQuery_GroupByAlbum = 103,
                    CommonFolderQuery_GroupByAlbumArtist = 104,
                    CommonFolderQuery_GroupByComposer = 105,
                    CommonFolderQuery_GroupByGenre = 106,
                    CommonFolderQuery_GroupByPublishedYear = 107,
                    CommonFolderQuery_GroupByRating = 108,
                    CommonFolderQuery_GroupByTag = 109,
                    CommonFolderQuery_GroupByAuthor = 110,
                    CommonFolderQuery_GroupByType = 111,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.DateStackOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum DateStackOption : int
                {
                    DateStackOption_None = 0,
                    DateStackOption_Year = 1,
                    DateStackOption_Month = 2,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.FolderDepth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum FolderDepth : int
                {
                    FolderDepth_Shallow = 0,
                    FolderDepth_Deep = 1,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.IndexedState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum IndexedState : int
                {
                    IndexedState_Unknown = 0,
                    IndexedState_NotIndexed = 1,
                    IndexedState_PartiallyIndexed = 2,
                    IndexedState_FullyIndexed = 3,
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.IndexerOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [v1_enum, contract] */
                enum IndexerOption : int
                {
                    IndexerOption_UseIndexerWhenAvailable = 0,
                    IndexerOption_OnlyUseIndexer = 1,
                    IndexerOption_DoNotUseIndexer = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                    IndexerOption_OnlyUseIndexerAndOptimizeForIndexedProperties = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                    
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.SortEntry
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [contract] */
                struct SortEntry
                {
                    HSTRING PropertyName;
                    boolean AscendingOrder;
                };
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexer[] = L"Windows.Storage.Search.IContentIndexer";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("B1767F8D-F698-4982-B05F-3A6E8CAB01A2"), exclusiveto, contract] */
                MIDL_INTERFACE("B1767F8D-F698-4982-B05F-3A6E8CAB01A2")
                IContentIndexer : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE AddAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IIndexableContent * indexableContent,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE UpdateAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IIndexableContent * indexableContent,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAsync(
                        /* [in] */__RPC__in HSTRING contentId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteMultipleAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * contentIds,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteAllAsync(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RetrievePropertiesAsync(
                        /* [in] */__RPC__in HSTRING contentId,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Revision(
                        /* [retval, out] */__RPC__out UINT64 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentIndexer=_uuidof(IContentIndexer);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexer;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexerQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQuery[] = L"Windows.Storage.Search.IContentIndexerQuery";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("70E3B0F8-4BFC-428A-8889-CC51DA9A7B9D"), exclusiveto, contract] */
                MIDL_INTERFACE("70E3B0F8-4BFC-428A-8889-CC51DA9A7B9D")
                IContentIndexerQuery : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCountAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetPropertiesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetPropertiesRangeAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxItems,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetRangeAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxItems,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_QueryFolder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentIndexerQuery=_uuidof(IContentIndexerQuery);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerQueryOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQueryOperations[] = L"Windows.Storage.Search.IContentIndexerQueryOperations";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("28823E10-4786-42F1-9730-792B3566B150"), exclusiveto, contract] */
                MIDL_INTERFACE("28823E10-4786-42F1-9730-792B3566B150")
                IContentIndexerQueryOperations : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateQueryWithSortOrderAndLanguage(
                        /* [in] */__RPC__in HSTRING searchFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
                        /* [in] */__RPC__in HSTRING searchFilterLanguage,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IContentIndexerQuery * * query
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateQueryWithSortOrder(
                        /* [in] */__RPC__in HSTRING searchFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IContentIndexerQuery * * query
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateQuery(
                        /* [in] */__RPC__in HSTRING searchFilter,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IContentIndexerQuery * * query
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentIndexerQueryOperations=_uuidof(IContentIndexerQueryOperations);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerStatics[] = L"Windows.Storage.Search.IContentIndexerStatics";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("8C488375-B37E-4C60-9BA8-B760FDA3E59D"), exclusiveto, contract] */
                MIDL_INTERFACE("8C488375-B37E-4C60-9BA8-B760FDA3E59D")
                IContentIndexerStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetIndexerWithName(
                        /* [in] */__RPC__in HSTRING indexName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IContentIndexer * * index
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetIndexer(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IContentIndexer * * index
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentIndexerStatics=_uuidof(IContentIndexerStatics);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IIndexableContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IIndexableContent[] = L"Windows.Storage.Search.IIndexableContent";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("CCF1A05F-D4B5-483A-B06E-E0DB1EC420E4"), contract] */
                MIDL_INTERFACE("CCF1A05F-D4B5-483A-B06E-E0DB1EC420E4")
                IIndexableContent : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Stream(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStream * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Stream(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StreamContentType(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StreamContentType(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIndexableContent=_uuidof(IIndexableContent);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIIndexableContent;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptions[] = L"Windows.Storage.Search.IQueryOptions";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("1E5E46EE-0F45-4838-A8E9-D0479D446C30"), exclusiveto, contract] */
                MIDL_INTERFACE("1E5E46EE-0F45-4838-A8E9-D0479D446C30")
                IQueryOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FileTypeFilter(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FolderDepth(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Search::FolderDepth * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FolderDepth(
                        /* [in] */ABI::Windows::Storage::Search::FolderDepth value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationSearchFilter(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ApplicationSearchFilter(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserSearchFilter(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UserSearchFilter(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Language(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndexerOption(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Search::IndexerOption * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IndexerOption(
                        /* [in] */ABI::Windows::Storage::Search::IndexerOption value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SortOrder(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CStorage__CSearch__CSortEntry * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GroupPropertyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateStackOption(
                        /* [retval, out] */__RPC__out ABI::Windows::Storage::Search::DateStackOption * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToString(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadFromString(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetThumbnailPrefetch(
                        /* [in] */ABI::Windows::Storage::FileProperties::ThumbnailMode mode,
                        /* [in] */UINT32 requestedSize,
                        /* [in] */ABI::Windows::Storage::FileProperties::ThumbnailOptions options
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPropertyPrefetch(
                        /* [in] */ABI::Windows::Storage::FileProperties::PropertyPrefetchOptions options,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IQueryOptions=_uuidof(IQueryOptions);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptions;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsFactory[] = L"Windows.Storage.Search.IQueryOptionsFactory";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("032E1F8C-A9C1-4E71-8011-0DEE9D4811A3"), exclusiveto, contract] */
                MIDL_INTERFACE("032E1F8C-A9C1-4E71-8011-0DEE9D4811A3")
                IQueryOptionsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCommonFileQuery(
                        /* [in] */ABI::Windows::Storage::Search::CommonFileQuery query,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * fileTypeFilter,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IQueryOptions * * queryOptions
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCommonFolderQuery(
                        /* [in] */ABI::Windows::Storage::Search::CommonFolderQuery query,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IQueryOptions * * queryOptions
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IQueryOptionsFactory=_uuidof(IQueryOptionsFactory);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptionsWithProviderFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsWithProviderFilter[] = L"Windows.Storage.Search.IQueryOptionsWithProviderFilter";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("5B9D1026-15C4-44DD-B89A-47A59B7D7C4F"), exclusiveto, contract] */
                MIDL_INTERFACE("5B9D1026-15C4-44DD-B89A-47A59B7D7C4F")
                IQueryOptionsWithProviderFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageProviderIdFilter(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IQueryOptionsWithProviderFilter=_uuidof(IQueryOptionsWithProviderFilter);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFileQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFileQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult[] = L"Windows.Storage.Search.IStorageFileQueryResult";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("52FDA447-2BAA-412C-B29F-D4B1778EFA1E"), exclusiveto, contract] */
                MIDL_INTERFACE("52FDA447-2BAA-412C-B29F-D4B1778EFA1E")
                IStorageFileQueryResult : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFilesAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxNumberOfItems,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFilesAsyncDefaultStartAndCount(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageFileQueryResult=_uuidof(IStorageFileQueryResult);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFileQueryResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFileQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult2[] = L"Windows.Storage.Search.IStorageFileQueryResult2";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("4E5DB9DD-7141-46C4-8BE3-E9DC9E27275C"), exclusiveto, contract] */
                MIDL_INTERFACE("4E5DB9DD-7141-46C4-8BE3-E9DC9E27275C")
                IStorageFileQueryResult2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetMatchingPropertiesWithRanges(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageFileQueryResult2=_uuidof(IStorageFileQueryResult2);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFolderQueryOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryOperations[] = L"Windows.Storage.Search.IStorageFolderQueryOperations";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("CB43CCC9-446B-4A4F-BE97-757771BE5203"), contract] */
                MIDL_INTERFACE("CB43CCC9-446B-4A4F-BE97-757771BE5203")
                IStorageFolderQueryOperations : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetIndexedStateAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFileQueryOverloadDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFileQueryResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFileQuery(
                        /* [in] */ABI::Windows::Storage::Search::CommonFileQuery query,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFileQueryResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFileQueryWithOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IQueryOptions * queryOptions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFileQueryResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFolderQueryOverloadDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFolderQueryResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFolderQuery(
                        /* [in] */ABI::Windows::Storage::Search::CommonFolderQuery query,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFolderQueryResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateFolderQueryWithOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IQueryOptions * queryOptions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageFolderQueryResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateItemQuery(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageItemQueryResult * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateItemQueryWithOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IQueryOptions * queryOptions,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageItemQueryResult * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFilesAsync(
                        /* [in] */ABI::Windows::Storage::Search::CommonFileQuery query,
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxItemsToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFilesAsyncOverloadDefaultStartAndCount(
                        /* [in] */ABI::Windows::Storage::Search::CommonFileQuery query,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFoldersAsync(
                        /* [in] */ABI::Windows::Storage::Search::CommonFolderQuery query,
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxItemsToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFoldersAsyncOverloadDefaultStartAndCount(
                        /* [in] */ABI::Windows::Storage::Search::CommonFolderQuery query,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemsAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxItemsToRetrieve,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AreQueryOptionsSupported(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IQueryOptions * queryOptions,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsCommonFolderQuerySupported(
                        /* [in] */ABI::Windows::Storage::Search::CommonFolderQuery query,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsCommonFileQuerySupported(
                        /* [in] */ABI::Windows::Storage::Search::CommonFileQuery query,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageFolderQueryOperations=_uuidof(IStorageFolderQueryOperations);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFolderQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFolderQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryResult[] = L"Windows.Storage.Search.IStorageFolderQueryResult";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("6654C911-7D66-46FA-AECF-E4A4BAA93AB8"), exclusiveto, contract] */
                MIDL_INTERFACE("6654C911-7D66-46FA-AECF-E4A4BAA93AB8")
                IStorageFolderQueryResult : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFoldersAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxNumberOfItems,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFoldersAsyncDefaultStartAndCount(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageFolderQueryResult=_uuidof(IStorageFolderQueryResult);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageItemQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageItemQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageItemQueryResult[] = L"Windows.Storage.Search.IStorageItemQueryResult";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("E8948079-9D58-47B8-B2B2-41B07F4795F9"), exclusiveto, contract] */
                MIDL_INTERFACE("E8948079-9D58-47B8-B2B2-41B07F4795F9")
                IStorageItemQueryResult : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemsAsync(
                        /* [in] */UINT32 startIndex,
                        /* [in] */UINT32 maxNumberOfItems,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetItemsAsyncDefaultStartAndCount(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageItemQueryResult=_uuidof(IStorageItemQueryResult);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("2A371977-ABBF-4E1D-8AA5-6385D8884799"), exclusiveto, contract] */
                MIDL_INTERFACE("2A371977-ABBF-4E1D-8AA5-6385D8884799")
                IStorageLibraryContentChangedTriggerDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Folder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateModifiedSinceQuery(
                        /* [in] */ABI::Windows::Foundation::DateTime lastQueryTime,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IStorageItemQueryResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageLibraryContentChangedTriggerDetails=_uuidof(IStorageLibraryContentChangedTriggerDetails);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageQueryResultBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageQueryResultBase[] = L"Windows.Storage.Search.IStorageQueryResultBase";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("C297D70D-7353-47AB-BA58-8C61425DC54B"), contract] */
                MIDL_INTERFACE("C297D70D-7353-47AB-BA58-8C61425DC54B")
                IStorageQueryResultBase : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetItemCountAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Folder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFolder * * container
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ContentsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ContentsChanged(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OptionsChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * changedHandler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OptionsChanged(
                        /* [in] */EventRegistrationToken eventCookie
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindStartIndexAsync(
                        /* [in] */__RPC__in_opt IInspectable * value,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCurrentQueryOptions(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Search::IQueryOptions * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ApplyNewQueryOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Search::IQueryOptions * newQueryOptions
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IStorageQueryResultBase=_uuidof(IStorageQueryResultBase);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IValueAndLanguage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ValueAndLanguage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IValueAndLanguage[] = L"Windows.Storage.Search.IValueAndLanguage";
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Search {
                /* [object, uuid("B9914881-A1EE-4BC4-92A5-466968E30436"), exclusiveto, contract] */
                MIDL_INTERFACE("B9914881-A1EE-4BC4-92A5-466968E30436")
                IValueAndLanguage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Language(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IValueAndLanguage=_uuidof(IValueAndLanguage);
                
            } /* Windows */
        } /* Storage */
    } /* Search */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ContentIndexer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Search.IContentIndexerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IContentIndexer ** Default Interface **
 *    Windows.Storage.Search.IContentIndexerQueryOperations
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ContentIndexer_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ContentIndexer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexer[] = L"Windows.Storage.Search.ContentIndexer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ContentIndexerQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IContentIndexerQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ContentIndexerQuery_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ContentIndexerQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexerQuery[] = L"Windows.Storage.Search.ContentIndexerQuery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.IndexableContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IIndexableContent ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_IndexableContent_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_IndexableContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_IndexableContent[] = L"Windows.Storage.Search.IndexableContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.QueryOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Search.IQueryOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IQueryOptions ** Default Interface **
 *    Windows.Storage.Search.IQueryOptionsWithProviderFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_QueryOptions_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_QueryOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_QueryOptions[] = L"Windows.Storage.Search.QueryOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.SortEntryVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.Storage.Search.SortEntry ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Storage.Search.SortEntry
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_SortEntryVector_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_SortEntryVector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_SortEntryVector[] = L"Windows.Storage.Search.SortEntryVector";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageFileQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageFileQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *    Windows.Storage.Search.IStorageFileQueryResult2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageFileQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageFileQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFileQueryResult[] = L"Windows.Storage.Search.StorageFileQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageFolderQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageFolderQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageFolderQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageFolderQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFolderQueryResult[] = L"Windows.Storage.Search.StorageFolderQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageItemQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageItemQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageItemQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageItemQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageItemQueryResult[] = L"Windows.Storage.Search.StorageItemQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ValueAndLanguage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IValueAndLanguage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ValueAndLanguage_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ValueAndLanguage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ValueAndLanguage[] = L"Windows.Storage.Search.ValueAndLanguage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage;

#endif // ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent;

typedef struct __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;

interface __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent;

typedef  struct __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CSearch__CIIndexableContent **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;

interface __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry;

#if !defined(____FIIterator_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CSearch__CSortEntry __FIIterator_1_Windows__CStorage__CSearch__CSortEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CSearch__CSortEntry;

typedef struct __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl;

interface __FIIterator_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CSearch__CSortEntry_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CSearch__CSortEntry __FIIterable_1_Windows__CStorage__CSearch__CSortEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CSearch__CSortEntry;

typedef  struct __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CSearch__CSortEntry **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl;

interface __FIIterable_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CSearch__CSortEntry_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

typedef struct __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;

interface __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CSearch__CSortEntry;

typedef struct __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [in] */ struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl;

interface __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CStorage__CSearch__CSortEntry __FIVector_1_Windows__CStorage__CSearch__CSortEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CStorage__CSearch__CSortEntry;

typedef struct __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CStorage__CSearch__CSortEntry **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This, /* [in] */ __RPC__in struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CStorage__CSearch__CSortEntry * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry *value);

    END_INTERFACE
} __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl;

interface __FIVector_1_Windows__CStorage__CSearch__CSortEntry
{
    CONST_VTBL struct __FIVector_1_Windows__CStorage__CSearch__CSortEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CStorage__CSearch__CSortEntry_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CStorage__CSearch__CSortEntry_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CSearch__CIndexedState **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedStateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable_INTERFACE_DEFINED__

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



#if !defined(____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_UINT32 __FIAsyncOperationCompletedHandler_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_UINT32;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_UINT32 * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_UINT32Vtbl;

interface __FIAsyncOperationCompletedHandler_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_UINT32 __FIAsyncOperation_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_UINT32;

typedef struct __FIAsyncOperation_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_UINT32 * This, /* [retval][out] */ __RPC__out int *results);
    END_INTERFACE
} __FIAsyncOperation_1_UINT32Vtbl;

interface __FIAsyncOperation_1_UINT32
{
    CONST_VTBL struct __FIAsyncOperation_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_UINT32_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIMapView_2_HSTRING_IInspectable __FIIterator_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIMapView_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIMapView_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIMapView_2_HSTRING_IInspectable __FIIterable_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIMapView_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIMapView_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIMapView_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __FIMapView_2_HSTRING_IInspectable * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
            /* [in] */ __FIMapView_2_HSTRING_IInspectable * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIMapView_2_HSTRING_IInspectable * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIVectorView_1___FIMapView_2_HSTRING_IInspectable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



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


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStorageFile __FIIterator_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFile;

typedef struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterator_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStorageFile __FIIterable_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFile;

typedef  struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFileVtbl;

interface __FIIterable_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStorageFile __FIVectorView_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFile;

typedef struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageFile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFileVtbl;

interface __FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CData_CText_CTextSegment;

#if !defined(____FIIterator_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CData__CText__CTextSegment __FIIterator_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CText__CTextSegment;

typedef struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIIterator_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CData__CText__CTextSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CText__CTextSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CData__CText__CTextSegment __FIIterable_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CText__CTextSegment;

typedef  struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CData__CText__CTextSegment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIIterable_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CData__CText__CTextSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CData__CText__CTextSegment __FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CData_CText_CTextSegment *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [in] */ struct __x_ABI_CWindows_CData_CText_CTextSegment item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CData_CText_CTextSegment *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CData__CText__CTextSegment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CData__CText__CTextSegment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment;

typedef struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt __FIVectorView_1_Windows__CData__CText__CTextSegment * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * This);
    END_INTERFACE
} __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl;

interface __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment
{
    CONST_VTBL struct __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFolder __x_ABI_CWindows_CStorage_CIStorageFolder;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFolder_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CStorage__CStorageFolder __FIIterator_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CStorage__CStorageFolder;

typedef struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIIterator_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterator_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFolder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CStorage__CStorageFolder_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CStorage__CStorageFolder_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CStorage__CStorageFolder __FIIterable_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CStorage__CStorageFolder;

typedef  struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CStorage__CStorageFolder **first);

    END_INTERFACE
} __FIIterable_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIIterable_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIIterable_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFolder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFolder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CStorage__CStorageFolder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CStorage__CStorageFolder_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CStorage__CStorageFolder __FIVectorView_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CStorage__CStorageFolder;

typedef struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CIStorageFolder * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CIStorageFolder * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CStorage__CStorageFolder * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CIStorageFolder * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFolder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CStorage__CStorageFolder_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CStorage__CStorageFolder_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFolder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CStorage__CStorageFolder * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder_INTERFACE_DEFINED__

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



typedef struct __x_ABI_CWindows_CData_CText_CTextSegment __x_ABI_CWindows_CData_CText_CTextSegment;





typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions __x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions;


typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode;


typedef enum __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions __x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions;









#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery;


typedef enum __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery;


typedef enum __x_ABI_CWindows_CStorage_CSearch_CDateStackOption __x_ABI_CWindows_CStorage_CSearch_CDateStackOption;


typedef enum __x_ABI_CWindows_CStorage_CSearch_CFolderDepth __x_ABI_CWindows_CStorage_CSearch_CFolderDepth;


typedef enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState __x_ABI_CWindows_CStorage_CSearch_CIndexedState;


typedef enum __x_ABI_CWindows_CStorage_CSearch_CIndexerOption __x_ABI_CWindows_CStorage_CSearch_CIndexerOption;


typedef struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry __x_ABI_CWindows_CStorage_CSearch_CSortEntry;



































/*
 *
 * Struct Windows.Storage.Search.CommonFileQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery
{
    CommonFileQuery_DefaultQuery = 0,
    CommonFileQuery_OrderByName = 1,
    CommonFileQuery_OrderByTitle = 2,
    CommonFileQuery_OrderByMusicProperties = 3,
    CommonFileQuery_OrderBySearchRank = 4,
    CommonFileQuery_OrderByDate = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.CommonFolderQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery
{
    CommonFolderQuery_DefaultQuery = 0,
    CommonFolderQuery_GroupByYear = 100,
    CommonFolderQuery_GroupByMonth = 101,
    CommonFolderQuery_GroupByArtist = 102,
    CommonFolderQuery_GroupByAlbum = 103,
    CommonFolderQuery_GroupByAlbumArtist = 104,
    CommonFolderQuery_GroupByComposer = 105,
    CommonFolderQuery_GroupByGenre = 106,
    CommonFolderQuery_GroupByPublishedYear = 107,
    CommonFolderQuery_GroupByRating = 108,
    CommonFolderQuery_GroupByTag = 109,
    CommonFolderQuery_GroupByAuthor = 110,
    CommonFolderQuery_GroupByType = 111,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.DateStackOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CDateStackOption
{
    DateStackOption_None = 0,
    DateStackOption_Year = 1,
    DateStackOption_Month = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.FolderDepth
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CFolderDepth
{
    FolderDepth_Shallow = 0,
    FolderDepth_Deep = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.IndexedState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CIndexedState
{
    IndexedState_Unknown = 0,
    IndexedState_NotIndexed = 1,
    IndexedState_PartiallyIndexed = 2,
    IndexedState_FullyIndexed = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.IndexerOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CStorage_CSearch_CIndexerOption
{
    IndexerOption_UseIndexerWhenAvailable = 0,
    IndexerOption_OnlyUseIndexer = 1,
    IndexerOption_DoNotUseIndexer = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    IndexerOption_OnlyUseIndexerAndOptimizeForIndexedProperties = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Storage.Search.SortEntry
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CStorage_CSearch_CSortEntry
{
    HSTRING PropertyName;
    boolean AscendingOrder;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexer[] = L"Windows.Storage.Search.IContentIndexer";
/* [object, uuid("B1767F8D-F698-4982-B05F-3A6E8CAB01A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * indexableContent,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * indexableContent,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [in] */__RPC__in HSTRING contentId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteMultipleAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * contentIds,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteAllAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RetrievePropertiesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [in] */__RPC__in HSTRING contentId,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Revision )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_AddAsync(This,indexableContent,operation) \
    ( (This)->lpVtbl->AddAsync(This,indexableContent,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_UpdateAsync(This,indexableContent,operation) \
    ( (This)->lpVtbl->UpdateAsync(This,indexableContent,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_DeleteAsync(This,contentId,operation) \
    ( (This)->lpVtbl->DeleteAsync(This,contentId,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_DeleteMultipleAsync(This,contentIds,operation) \
    ( (This)->lpVtbl->DeleteMultipleAsync(This,contentIds,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_DeleteAllAsync(This,operation) \
    ( (This)->lpVtbl->DeleteAllAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_RetrievePropertiesAsync(This,contentId,propertiesToRetrieve,operation) \
    ( (This)->lpVtbl->RetrievePropertiesAsync(This,contentId,propertiesToRetrieve,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_get_Revision(This,value) \
    ( (This)->lpVtbl->get_Revision(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexer;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexerQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQuery[] = L"Windows.Storage.Search.IContentIndexerQuery";
/* [object, uuid("70E3B0F8-4BFC-428A-8889-CC51DA9A7B9D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCountAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetPropertiesRangeAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___FIMapView_2_HSTRING_IInspectable * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetRangeAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CSearch__CIIndexableContent * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_QueryFolder )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetCountAsync(This,operation) \
    ( (This)->lpVtbl->GetCountAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetPropertiesAsync(This,operation) \
    ( (This)->lpVtbl->GetPropertiesAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetPropertiesRangeAsync(This,startIndex,maxItems,operation) \
    ( (This)->lpVtbl->GetPropertiesRangeAsync(This,startIndex,maxItems,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetAsync(This,operation) \
    ( (This)->lpVtbl->GetAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_GetRangeAsync(This,startIndex,maxItems,operation) \
    ( (This)->lpVtbl->GetRangeAsync(This,startIndex,maxItems,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_get_QueryFolder(This,value) \
    ( (This)->lpVtbl->get_QueryFolder(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerQueryOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerQueryOperations[] = L"Windows.Storage.Search.IContentIndexerQueryOperations";
/* [object, uuid("28823E10-4786-42F1-9730-792B3566B150"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateQueryWithSortOrderAndLanguage )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
        /* [in] */__RPC__in HSTRING searchFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
        /* [in] */__RPC__in HSTRING searchFilterLanguage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateQueryWithSortOrder )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
        /* [in] */__RPC__in HSTRING searchFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CStorage__CSearch__CSortEntry * sortOrder,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations * This,
        /* [in] */__RPC__in HSTRING searchFilter,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQuery * * query
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperationsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_CreateQueryWithSortOrderAndLanguage(This,searchFilter,propertiesToRetrieve,sortOrder,searchFilterLanguage,query) \
    ( (This)->lpVtbl->CreateQueryWithSortOrderAndLanguage(This,searchFilter,propertiesToRetrieve,sortOrder,searchFilterLanguage,query) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_CreateQueryWithSortOrder(This,searchFilter,propertiesToRetrieve,sortOrder,query) \
    ( (This)->lpVtbl->CreateQueryWithSortOrder(This,searchFilter,propertiesToRetrieve,sortOrder,query) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_CreateQuery(This,searchFilter,propertiesToRetrieve,query) \
    ( (This)->lpVtbl->CreateQuery(This,searchFilter,propertiesToRetrieve,query) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerQueryOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IContentIndexerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ContentIndexer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IContentIndexerStatics[] = L"Windows.Storage.Search.IContentIndexerStatics";
/* [object, uuid("8C488375-B37E-4C60-9BA8-B760FDA3E59D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetIndexerWithName )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
        /* [in] */__RPC__in HSTRING indexName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * * index
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetIndexer )(
        __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIContentIndexer * * index
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_GetIndexerWithName(This,indexName,index) \
    ( (This)->lpVtbl->GetIndexerWithName(This,indexName,index) )

#define __x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_GetIndexer(This,index) \
    ( (This)->lpVtbl->GetIndexer(This,index) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIContentIndexerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IIndexableContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IIndexableContent[] = L"Windows.Storage.Search.IIndexableContent";
/* [object, uuid("CCF1A05F-D4B5-483A-B06E-E0DB1EC420E4"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Stream )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Stream )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StreamContentType )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StreamContentType )(
        __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIIndexableContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_get_Stream(This,value) \
    ( (This)->lpVtbl->get_Stream(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_put_Stream(This,value) \
    ( (This)->lpVtbl->put_Stream(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_get_StreamContentType(This,value) \
    ( (This)->lpVtbl->get_StreamContentType(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_put_StreamContentType(This,value) \
    ( (This)->lpVtbl->put_StreamContentType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIIndexableContent;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIIndexableContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptions[] = L"Windows.Storage.Search.IQueryOptions";
/* [object, uuid("1E5E46EE-0F45-4838-A8E9-D0479D446C30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FileTypeFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FolderDepth )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CSearch_CFolderDepth * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FolderDepth )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CFolderDepth value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ApplicationSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UserSearchFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndexerOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CSearch_CIndexerOption * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IndexerOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CIndexerOption value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SortOrder )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CStorage__CSearch__CSortEntry * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GroupPropertyName )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateStackOption )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CStorage_CSearch_CDateStackOption * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToString )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromString )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetThumbnailPrefetch )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__x_ABI_CWindows_CStorage_CFileProperties_CThumbnailMode mode,
        /* [in] */UINT32 requestedSize,
        /* [in] */__x_ABI_CWindows_CStorage_CFileProperties_CThumbnailOptions options
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyPrefetch )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * This,
        /* [in] */__x_ABI_CWindows_CStorage_CFileProperties_CPropertyPrefetchOptions options,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_FileTypeFilter(This,value) \
    ( (This)->lpVtbl->get_FileTypeFilter(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_FolderDepth(This,value) \
    ( (This)->lpVtbl->get_FolderDepth(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_put_FolderDepth(This,value) \
    ( (This)->lpVtbl->put_FolderDepth(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_ApplicationSearchFilter(This,value) \
    ( (This)->lpVtbl->get_ApplicationSearchFilter(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_put_ApplicationSearchFilter(This,value) \
    ( (This)->lpVtbl->put_ApplicationSearchFilter(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_UserSearchFilter(This,value) \
    ( (This)->lpVtbl->get_UserSearchFilter(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_put_UserSearchFilter(This,value) \
    ( (This)->lpVtbl->put_UserSearchFilter(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_put_Language(This,value) \
    ( (This)->lpVtbl->put_Language(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_IndexerOption(This,value) \
    ( (This)->lpVtbl->get_IndexerOption(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_put_IndexerOption(This,value) \
    ( (This)->lpVtbl->put_IndexerOption(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_SortOrder(This,value) \
    ( (This)->lpVtbl->get_SortOrder(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_GroupPropertyName(This,value) \
    ( (This)->lpVtbl->get_GroupPropertyName(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_get_DateStackOption(This,value) \
    ( (This)->lpVtbl->get_DateStackOption(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_SaveToString(This,value) \
    ( (This)->lpVtbl->SaveToString(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_LoadFromString(This,value) \
    ( (This)->lpVtbl->LoadFromString(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_SetThumbnailPrefetch(This,mode,requestedSize,options) \
    ( (This)->lpVtbl->SetThumbnailPrefetch(This,mode,requestedSize,options) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_SetPropertyPrefetch(This,options,propertiesToRetrieve) \
    ( (This)->lpVtbl->SetPropertyPrefetch(This,options,propertiesToRetrieve) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptions;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsFactory[] = L"Windows.Storage.Search.IQueryOptionsFactory";
/* [object, uuid("032E1F8C-A9C1-4E71-8011-0DEE9D4811A3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCommonFileQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * fileTypeFilter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * queryOptions
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCommonFolderQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * queryOptions
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_CreateCommonFileQuery(This,query,fileTypeFilter,queryOptions) \
    ( (This)->lpVtbl->CreateCommonFileQuery(This,query,fileTypeFilter,queryOptions) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_CreateCommonFolderQuery(This,query,queryOptions) \
    ( (This)->lpVtbl->CreateCommonFolderQuery(This,query,queryOptions) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IQueryOptionsWithProviderFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.QueryOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IQueryOptionsWithProviderFilter[] = L"Windows.Storage.Search.IQueryOptionsWithProviderFilter";
/* [object, uuid("5B9D1026-15C4-44DD-B89A-47A59B7D7C4F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageProviderIdFilter )(
        __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_get_StorageProviderIdFilter(This,value) \
    ( (This)->lpVtbl->get_StorageProviderIdFilter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIQueryOptionsWithProviderFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFileQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFileQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult[] = L"Windows.Storage.Search.IStorageFileQueryResult";
/* [object, uuid("52FDA447-2BAA-412C-B29F-D4B1778EFA1E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFilesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxNumberOfItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_GetFilesAsync(This,startIndex,maxNumberOfItems,operation) \
    ( (This)->lpVtbl->GetFilesAsync(This,startIndex,maxNumberOfItems,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_GetFilesAsyncDefaultStartAndCount(This,operation) \
    ( (This)->lpVtbl->GetFilesAsyncDefaultStartAndCount(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFileQueryResult2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFileQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFileQueryResult2[] = L"Windows.Storage.Search.IStorageFileQueryResult2";
/* [object, uuid("4E5DB9DD-7141-46C4-8BE3-E9DC9E27275C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMatchingPropertiesWithRanges )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING___FIVectorView_1_Windows__CData__CText__CTextSegment * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_GetMatchingPropertiesWithRanges(This,file,result) \
    ( (This)->lpVtbl->GetMatchingPropertiesWithRanges(This,file,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFolderQueryOperations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryOperations[] = L"Windows.Storage.Search.IStorageFolderQueryOperations";
/* [object, uuid("CB43CCC9-446B-4A4F-BE97-757771BE5203"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIndexedStateAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CSearch__CIndexedState * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFileQueryOverloadDefault )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFileQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFileQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFileQueryResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFolderQueryOverloadDefault )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFolderQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFolderQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateItemQueryWithOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFilesAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxItemsToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFilesAsyncOverloadDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFoldersAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxItemsToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncOverloadDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxItemsToRetrieve,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AreQueryOptionsSupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * queryOptions,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCommonFolderQuerySupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFolderQuery query,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCommonFileQuerySupported )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations * This,
        /* [in] */__x_ABI_CWindows_CStorage_CSearch_CCommonFileQuery query,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperationsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetIndexedStateAsync(This,operation) \
    ( (This)->lpVtbl->GetIndexedStateAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFileQueryOverloadDefault(This,value) \
    ( (This)->lpVtbl->CreateFileQueryOverloadDefault(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFileQuery(This,query,value) \
    ( (This)->lpVtbl->CreateFileQuery(This,query,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFileQueryWithOptions(This,queryOptions,value) \
    ( (This)->lpVtbl->CreateFileQueryWithOptions(This,queryOptions,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFolderQueryOverloadDefault(This,value) \
    ( (This)->lpVtbl->CreateFolderQueryOverloadDefault(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFolderQuery(This,query,value) \
    ( (This)->lpVtbl->CreateFolderQuery(This,query,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateFolderQueryWithOptions(This,queryOptions,value) \
    ( (This)->lpVtbl->CreateFolderQueryWithOptions(This,queryOptions,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateItemQuery(This,value) \
    ( (This)->lpVtbl->CreateItemQuery(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_CreateItemQueryWithOptions(This,queryOptions,value) \
    ( (This)->lpVtbl->CreateItemQueryWithOptions(This,queryOptions,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetFilesAsync(This,query,startIndex,maxItemsToRetrieve,operation) \
    ( (This)->lpVtbl->GetFilesAsync(This,query,startIndex,maxItemsToRetrieve,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetFilesAsyncOverloadDefaultStartAndCount(This,query,operation) \
    ( (This)->lpVtbl->GetFilesAsyncOverloadDefaultStartAndCount(This,query,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetFoldersAsync(This,query,startIndex,maxItemsToRetrieve,operation) \
    ( (This)->lpVtbl->GetFoldersAsync(This,query,startIndex,maxItemsToRetrieve,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetFoldersAsyncOverloadDefaultStartAndCount(This,query,operation) \
    ( (This)->lpVtbl->GetFoldersAsyncOverloadDefaultStartAndCount(This,query,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_GetItemsAsync(This,startIndex,maxItemsToRetrieve,operation) \
    ( (This)->lpVtbl->GetItemsAsync(This,startIndex,maxItemsToRetrieve,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_AreQueryOptionsSupported(This,queryOptions,value) \
    ( (This)->lpVtbl->AreQueryOptionsSupported(This,queryOptions,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_IsCommonFolderQuerySupported(This,query,value) \
    ( (This)->lpVtbl->IsCommonFolderQuerySupported(This,query,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_IsCommonFileQuerySupported(This,query,value) \
    ( (This)->lpVtbl->IsCommonFileQuerySupported(This,query,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryOperations_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageFolderQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageFolderQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageFolderQueryResult[] = L"Windows.Storage.Search.IStorageFolderQueryResult";
/* [object, uuid("6654C911-7D66-46FA-AECF-E4A4BAA93AB8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFoldersAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxNumberOfItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFoldersAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFolder * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_GetFoldersAsync(This,startIndex,maxNumberOfItems,operation) \
    ( (This)->lpVtbl->GetFoldersAsync(This,startIndex,maxNumberOfItems,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_GetFoldersAsyncDefaultStartAndCount(This,operation) \
    ( (This)->lpVtbl->GetFoldersAsyncDefaultStartAndCount(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageFolderQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageItemQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageItemQueryResult
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Storage.Search.IStorageQueryResultBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageItemQueryResult[] = L"Windows.Storage.Search.IStorageItemQueryResult";
/* [object, uuid("E8948079-9D58-47B8-B2B2-41B07F4795F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
        /* [in] */UINT32 startIndex,
        /* [in] */UINT32 maxNumberOfItems,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetItemsAsyncDefaultStartAndCount )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CIStorageItem * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_GetItemsAsync(This,startIndex,maxNumberOfItems,operation) \
    ( (This)->lpVtbl->GetItemsAsync(This,startIndex,maxNumberOfItems,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_GetItemsAsyncDefaultStartAndCount(This,operation) \
    ( (This)->lpVtbl->GetItemsAsyncDefaultStartAndCount(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails";
/* [object, uuid("2A371977-ABBF-4E1D-8AA5-6385D8884799"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateModifiedSinceQuery )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime lastQueryTime,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIStorageItemQueryResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_get_Folder(This,value) \
    ( (This)->lpVtbl->get_Folder(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_CreateModifiedSinceQuery(This,lastQueryTime,result) \
    ( (This)->lpVtbl->CreateModifiedSinceQuery(This,lastQueryTime,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageLibraryContentChangedTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IStorageQueryResultBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IStorageQueryResultBase[] = L"Windows.Storage.Search.IStorageQueryResultBase";
/* [object, uuid("C297D70D-7353-47AB-BA58-8C61425DC54B"), contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemCountAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Folder )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFolder * * container
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ContentsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ContentsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OptionsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CStorage__CSearch__CIStorageQueryResultBase_IInspectable * changedHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * eventCookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OptionsChanged )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */EventRegistrationToken eventCookie
        );
    HRESULT ( STDMETHODCALLTYPE *FindStartIndexAsync )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentQueryOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyNewQueryOptions )(
        __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CSearch_CIQueryOptions * newQueryOptions
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_GetItemCountAsync(This,operation) \
    ( (This)->lpVtbl->GetItemCountAsync(This,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_get_Folder(This,container) \
    ( (This)->lpVtbl->get_Folder(This,container) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_add_ContentsChanged(This,handler,eventCookie) \
    ( (This)->lpVtbl->add_ContentsChanged(This,handler,eventCookie) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_remove_ContentsChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_ContentsChanged(This,eventCookie) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_add_OptionsChanged(This,changedHandler,eventCookie) \
    ( (This)->lpVtbl->add_OptionsChanged(This,changedHandler,eventCookie) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_remove_OptionsChanged(This,eventCookie) \
    ( (This)->lpVtbl->remove_OptionsChanged(This,eventCookie) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_FindStartIndexAsync(This,value,operation) \
    ( (This)->lpVtbl->FindStartIndexAsync(This,value,operation) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_GetCurrentQueryOptions(This,value) \
    ( (This)->lpVtbl->GetCurrentQueryOptions(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_ApplyNewQueryOptions(This,newQueryOptions) \
    ( (This)->lpVtbl->ApplyNewQueryOptions(This,newQueryOptions) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIStorageQueryResultBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Storage.Search.IValueAndLanguage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Storage.Search.ValueAndLanguage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Search_IValueAndLanguage[] = L"Windows.Storage.Search.IValueAndLanguage";
/* [object, uuid("B9914881-A1EE-4BC4-92A5-466968E30436"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl;

interface __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_put_Language(This,value) \
    ( (This)->lpVtbl->put_Language(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage;
#endif /* !defined(____x_ABI_CWindows_CStorage_CSearch_CIValueAndLanguage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ContentIndexer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Storage.Search.IContentIndexerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IContentIndexer ** Default Interface **
 *    Windows.Storage.Search.IContentIndexerQueryOperations
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ContentIndexer_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ContentIndexer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexer[] = L"Windows.Storage.Search.ContentIndexer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ContentIndexerQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IContentIndexerQuery ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ContentIndexerQuery_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ContentIndexerQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ContentIndexerQuery[] = L"Windows.Storage.Search.ContentIndexerQuery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.IndexableContent
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IIndexableContent ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_IndexableContent_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_IndexableContent_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_IndexableContent[] = L"Windows.Storage.Search.IndexableContent";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.QueryOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Storage.Search.IQueryOptionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IQueryOptions ** Default Interface **
 *    Windows.Storage.Search.IQueryOptionsWithProviderFilter
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_QueryOptions_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_QueryOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_QueryOptions[] = L"Windows.Storage.Search.QueryOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.SortEntryVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.Storage.Search.SortEntry ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Storage.Search.SortEntry
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_SortEntryVector_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_SortEntryVector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_SortEntryVector[] = L"Windows.Storage.Search.SortEntryVector";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageFileQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageFileQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *    Windows.Storage.Search.IStorageFileQueryResult2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageFileQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageFileQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFileQueryResult[] = L"Windows.Storage.Search.StorageFileQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageFolderQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageFolderQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageFolderQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageFolderQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageFolderQueryResult[] = L"Windows.Storage.Search.StorageFolderQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageItemQueryResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageItemQueryResult ** Default Interface **
 *    Windows.Storage.Search.IStorageQueryResultBase
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageItemQueryResult_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageItemQueryResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageItemQueryResult[] = L"Windows.Storage.Search.StorageItemQueryResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IStorageLibraryContentChangedTriggerDetails ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_StorageLibraryContentChangedTriggerDetails[] = L"Windows.Storage.Search.StorageLibraryContentChangedTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Storage.Search.ValueAndLanguage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Storage.Search.IValueAndLanguage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Storage_Search_ValueAndLanguage_DEFINED
#define RUNTIMECLASS_Windows_Storage_Search_ValueAndLanguage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Search_ValueAndLanguage[] = L"Windows.Storage.Search.ValueAndLanguage";
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
#endif // __windows2Estorage2Esearch_p_h__

#endif // __windows2Estorage2Esearch_h__
